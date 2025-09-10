# from django.shortcuts import render

# Create your views here.

# from django.http import JsonResponse
from students.models import Student
from .serializers import StudentSerializer, EmployeeSerializer
from rest_framework.response import Response
from rest_framework import status
from rest_framework.decorators import api_view
from rest_framework.views import APIView
from employees.models import Employee
from django.http import Http404
from rest_framework import mixins, generics, viewsets # import kia for mixins and jo Employee and EmployeeDetailView tha wo comment kr do
from django.shortcuts import get_object_or_404
from blogs.models import Blog, Comment
from blogs.serializers import BlogSerializer, CommentSerializers
from .paginations import CustomPagination
from employees.filters import EmployeeFilter





@api_view(['GET', 'POST'])
def studentsView (request):
    # students = {
    #     'id': 1, 'name': 'Sameer Shahzad', 'age': 20, 'class': 'Computer Science'
    # }

    # students = Student.objects.all()
    # students_list = list(students.values())
    # print(students)
    # return JsonResponse(students_list, safe=False)
    if request.method == 'GET':
        students = Student.objects.all()
        serializer = StudentSerializer(students, many=True)
        return Response (serializer.data, status=status.HTTP_200_OK)
    elif request.method == 'POST':
        serializer = StudentSerializer(data = request.data) # request.data means jo data ham bhej rhy 
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_201_CREATED)
        print(serializer.errors)
        return Response(serializer.errors, status = status.HTTP_400_BAD_REQUEST)


@api_view(['GET', 'PUT', 'DELETE'])
def studentDetailView(request, pk):
    try:
        student = Student.objects.get(pk=pk) # Get is used for taking single object
    except Student.DoesNotExist:
        return Response(status=status.HTTP_404_NOT_FOUND) # Except agar chala to neeche if nhi chale ga 
    if request.method == 'GET':
        serializer = StudentSerializer(student) # Yeh dekho is waqt student me sirf aik object hai jo ke try wale se mila jo id de sirf wo obj ai ga, to jo modelserializer banaya wo 2 tareko se kaam krta. Tumne StudentSerializer banaya using ModelSerializer (1) Agar tum isko pass karte ho ek single object, Toh yeh serializer single object ko serialize karta hai (2) Agar tum isko pass karte ho queryset (list of objects): students = Student.objects.all() serializer = StudentSerializer(students, many=True), Toh tumhe many=True lagana padta hai taake yeh samjhe ke yeh list of objects hai.
        # Toh tumhare case me Student.objects.get(pk=pk) sirf ek hi student la raha hai, isliye many=True lagane ki zarurat nahi.
        
        return Response(serializer.data, status=status.HTTP_200_OK)
    elif request.method == 'PUT':
        serializer = StudentSerializer(student, data=request.data) # PUT means ham kuch update kr rhy so data=request.data agar sirf yeh likhein ge jese POST me likhte matlab ke yah add kr do, lakin agar previous data ko update krna to us ke lie previous data bhejna pare ga student, data=request.data, so in this case student previous data hai and aage us ko update kr de ga, yani method use krne se automatically cheze nhi ho jate ke PUT likha to khud work kre ga NO NO hamein khud krna pare ga.
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_200_OK)
        else:
            return Response(serializer.errors, status = status.HTTP_400_BAD_REQUEST)
    elif request.method == 'DELETE':
        student.delete()
        return Response(status=status.HTTP_204_NO_CONTENT)
        

############################################################


"""

# Class Based view, uper wale functional based the, no need of decorator APIView sab dekh le ga 

class Employees(APIView):
    def get(self, request): # self likha ke ham is function ko member function represent kr rhy is class ka 
    # request object ke andar user ka request data hota hai
        employees = Employee.objects.all()
        serializer = EmployeeSerializer(employees, many = True)
        return Response(serializer.data, status=status.HTTP_200_OK)

    def post(self, request): # Yeh function member function hai of Employees class, self likha ke ham is function ko member function represent kr rhy is class ka 
    # request object ke andar user ka request data hota hai
        serializer = EmployeeSerializer(data = request.data) # request.data means jo data ham bhej rhy 
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_201_CREATED)
        return Response(serializer.errors, status = status.HTTP_400_BAD_REQUEST)
    
   

class EmployeeDetailView(APIView): # APIView likhne ka matlab hai ke aap apni class ko Django REST Framework ke base view class se inherit kar rahe ho — jiska naam hai APIView. Yeh base class aapko HTTP methods (GET, POST, PUT, DELETE, etc.) ko handle karne ke liye ek structure deti hai.
    def get_object(self, pk): #get_object tumhare code mein ek custom helper method hai jo ek specific employee ko database se nikaalti hai primary key (pk) ke zariye.
        try:
            return Employee.objects.get(pk=pk)
        except Employee.DoesNotExist:
            raise Http404

    def get(self, request, pk):
        employee = self.get_object(pk)  # Yahan agar object nahi mila to Http404 hoga aur neeche ka kuch bhi nahi chalega, yeh func call ho rha, agar except ka answer return hua is funciton ko call krne se to neeche wala skip ho jaye ga get ke 2 lines
        serializer = EmployeeSerializer(employee)
        return Response (serializer.data, status = status.HTTP_200_OK)
    
    def put(self, request, pk):
        employee = self.get_object(pk) # Yahan agar object nahi mila to Http404 hoga aur neeche ka kuch bhi nahi chalega, yeh func call ho rha
        serializer = EmployeeSerializer(employee, data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_200_OK)
        return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)
    
    def delete(self, request, pk):
        employee = self.get_object(pk) # Yahan agar object nahi mila to Http404 hoga aur neeche ka kuch bhi nahi chalega, yeh func call ho rha
        employee.delete()
        return Response (status=status.HTTP_204_NO_CONTENT)
    
"""

############################################################

# Mixins se hamein aik proper form milta input ke lie, na ke pechle ke trha jis me json dene parte the copy kr ke. Yeh kaam mixians ka hai

# MIXINS
"""

class Employees(mixins.ListModelMixin, mixins.CreateModelMixin, generics.GenericAPIView):
    queryset = Employee.objects.all()
    serializer_class = EmployeeSerializer
    def get(self, request):
        return self.list(request)
    
    def post(self, request):
        return self.create(request)
    
    #self.list(request) → khud queryset uthata hai, serializer_class use karta hai, data return karta hai.
    #self.create(request) → khud request data ko validate karta hai, save karta hai aur response return karta hai..
    
    # Mixins sirf tools hain, unko trigger karne ke liye get() aur post() methods zaroori hain.

# MIXINS


class EmployeeDetailView(mixins.RetrieveModelMixin, mixins.UpdateModelMixin, mixins.DestroyModelMixin, generics.GenericAPIView):
    queryset = Employee.objects.all() # Is view ke andar jab bhi data chahiye ho (GET ke liye ya POST ke baad response ke liye), To kaha se data lena hai? Yahaan Employee model ka poora data uthaya jaa raha hai.


    serializer_class = EmployeeSerializer # Jab bhi koi data serialize (JSON banane) ya deserialize (JSON ko model banane) karna ho, To kaunsa serializer use hoga? Same like this line serializer = EmployeeSerializer(...) 

    # Ye built-in properties hain, lekin aap unhe manually define karte ho apni class-based views me.
    # Kaunsa data load karna hai? (queryset)
    # Kaunsa serializer use karna hai? (serializer_class)

    # Yes, mixins automatically proper HTTP response codes handle kar lete hain.

    # serializer_class aur queryset aap define karte ho, lekin mixins unhe use karte hain — aur mixins automatically proper response codes aur full process handle kar lete hain.


    def get(self, request, pk):
        return self.retireve(request, pk)
    
    def put (self, request, pk):
        return self.update(request, pk)
    
    def delete (self, request, pk):
        return self.destroy(request, pk)
    
"""
"""
# GENERICS 

class Employees (generics.ListAPIView, generics.CreateAPIView):
    queryset = Employee.objects.all() 
    serializer_class = EmployeeSerializer

class EmployeeDetailView (generics.RetrieveAPIView, generics.UpdateAPIView, generics.DestroyAPIView):
    queryset = Employee.objects.all() 
    serializer_class = EmployeeSerializer
    lookup_field = 'pk'

# (generics.RetrieveAPIView, generics.UpdateAPIView, generics.DestroyAPIView): ise 3 time likhne se acha ham ese bhe likh sakte generics.RetrieveUpdateDestroyAPIView all in one

"""




# VIEWSETS 
"""

class EmployeeViewSet (viewsets.ViewSet):
    def list (self, request):
        queryset = Employee.objects.all()
        serializer =  EmployeeSerializer(queryset, many=True)
        return Response(serializer.data)
    
    def create (self, request):
        serializer = EmployeeSerializer(data=request.data)
        if (serializer.is_valid()):
            serializer.save()
            return Response (serializer.data, status=status.HTTP_201_CREATED)
        return Response(serializer.errors)

    def retrieve(self, request, pk=None):
        employee = get_object_or_404(Employee, pk=pk)
        serializer = EmployeeSerializer(employee)
        return Response(serializer.data, status=status.HTTP_200_OK)

    def update(self, request, pk=None):
        employee = get_object_or_404(Employee, pk=pk)
        serializer = EmployeeSerializer(employee, data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data)
        return Response(serializer.errors)

    def delete(self, request, pk=None):
        employee = get_object_or_404(Employee, pk=pk)
        employee.delete()
        return Response(status=status.HTTP_204_NO_CONTENT)
    
"""


class EmployeeViewSet(viewsets.ModelViewSet):
    queryset = Employee.objects.all()
    serializer_class = EmployeeSerializer
    pagination_class = CustomPagination
    # filterset_fields = ['designation']
    filterset_class = EmployeeFilter


# Yeh blog and comments wale example ham generics se kr rhy, mixins, api view and viewsets kuch bhe use kr sakte lakin is me generics krne lage


class BlogsView (generics.ListCreateAPIView):
    queryset = Blog.objects.all()
    serializer_class = BlogSerializer
 

class CommentsView (generics.ListCreateAPIView):
    queryset = Comment.objects.all()
    serializer_class = CommentSerializers


class BlogDetailView(generics.RetrieveUpdateDestroyAPIView):
    queryset = Blog.objects.all()
    serializer_class = BlogSerializer
    lookup_field = 'pk'
    # blogs/1/ kru ga blog plus us ke comments nazar ayein ge 

class CommentDetailView(generics.RetrieveUpdateDestroyAPIView):
    queryset = Comment.objects.all()
    serializer_class = CommentSerializers
    lookup_field = 'pk'
    # comments/1/ kru ga comment show ho jaye ga