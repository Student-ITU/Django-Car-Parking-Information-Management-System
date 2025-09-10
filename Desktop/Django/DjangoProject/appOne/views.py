from django.shortcuts import render, redirect # render -> templates (HTML files) load karne ke liye hota hai.
from django.http import HttpResponse # HttpResponse -> plain text/html return karne ke liye hota hai.
from django.contrib.auth.models import User, auth

from django.contrib import messages
from . models import Feature1 # 
# Create your views here.


# def index (request): # jo bh eis function me karein ge wo us url pe assign ho jai ga ( '' ) yeh wala
# # index ek function hai jo jab user '/' (home) URL pe jaye to yeh response return kare: <h1>Hey, how are you? </h1>
#     return HttpResponse ('<h1>Hey, how are you? </h1>')

# #Ab hm response maang nhi rhy ab, jabke ham render kr rhy apni html file ko ab index.html file ko render krein ge uper wale ko comment kr do

def index (request): # jo bh eis function me karein ge wo us url pe assign ho jai ga ( '' ) yeh wala
    name = 'John' 
    age = 22 # Agar database se krna hota ke sab ka name different jai to name = user.name kr dete sab ko different jata

    # Ab aik or tareka ab agar hamein age bhe chaye to   return render(request, 'index.html', {'name': name}) is trha aik he line me comma laga ke to acha nhi lagta ham aik doctionary bana lete, to name = john age = 18 ese likhne se acha ham dictionary bana lein, or na he return statement itne lambe likhne pare ge instead ham just, neeche dekho kya kia

    context = {
        'name': 'John',
        'age': 18,
        'nationality': 'British',
    }

    return render(request, 'index.html', context) 

    # return render(request, 'index.html', {'name': name, 'age': age}) # to nhi to ese likhna tha abhi is ko comment kr rha

    # return render(request, 'index.html') # To ab dubara runserver kia to chal para

    # return render(request, 'index.html', {'name': name})  # yeh ham dynamic data send kr rhy template file ko wo static tha jo sab ko aik he mile ga hi how r u agar me chata har login krne wale ko ai hi how r u sameer hi how r u ali is ke lie dynamic kaam krna pare ga name to database se a jai ga but abhi dekho me kya kia


   
# Assignment ka part hai neeche wala

def counter (request):
    # text = request.POST['text']
    # amountOfWords = len(text.split())
    posts = [1, 2, 3, 4, 5, 'tim', 'sameer', 'john']
    return render (request, 'counter.html', {'posts': posts})
    # return render (request, 'counter.html', {'amount': amountOfWords})

# def counter(request):
# # Django ka function hai jo request lega (jab user form submit karega ya URL open karega).
# text = request.GET['text']
# request.GET ka matlab hai:
# URL ke query parameters ya form ke input (jo GET method se bheja gaya)
# Jaise agar user ne form mein likha: "hello world"
# Aur form action tha /counter?text=hello world
# To request.GET['text'] se "hello world" mil jayega
# text.split() → string ko words mein tod deta hai (space ke base pe)
# Ye line counter.html file render karegi
# Aur HTML file ko ek variable amount bhejegi, jisme total word count hoga






def index (request):
    # feature1 = Feature ()
    # feature1.id = 0
    # feature1.name = 'Django'
    # feature1.is_true = True
    # feature1.details =  'Our service is very quick'

    # feature2 = Feature ()
    # feature2.id = 1
    # feature2.name = 'Flash'
    # feature2.is_true = False
    # feature2.details = 'Our service is very 
    # lightweight'  
    # features = [feature1, feature2]
    # IS KO HAM NE HATA DAI AB OBJS HAM DATABASE SE LA RHY

    features = Feature1.objects.all()

    # return render (request, 'index.html', {'feature1': feature1, 'feature2': feature2}) # Is ke jaga neeche kaam kr dia, wo behtr tareka 
    
    return render (request, 'index.html', {'features': features} ) # to sara data features naami list me store ho gaya ab 
   



# For registration

def register (request):
    if request.method == 'POST':
        username = request.POST['username']
        email = request.POST['email']
        password = request.POST['password']
        password2 = request.POST['password2']

        if password == password2:
            if User.objects.filter(email=email).exists():
                messages.info(request, "Email already exists")
                return redirect('register')
            elif User.objects.filter (username=username).exists():
                messages.info(request,"Username already used")
                return redirect('register')
            
            else:
                user = User.objects.create_user (username=username, email=email, password=password)
                user.save ()
                return redirect ('login')

        else:
            messages.info(request, 'Password not the same')  
            return redirect('register') 
        
    else:
        return render (request, 'register.html')
    




# User login and logout

def login (request):
    if request.method == 'POST':
        username = request.POST.get('username')  
        password = request.POST.get('password')

        user = auth.authenticate(username=username, password=password)

        if user is not None:
            auth.login (request, user)
            return redirect ('/')
        else:
            messages.info(request, 'Credentials Invalid')
            return redirect ('login')
        
    else:
        return render (request, 'login.html') 




# from django.contrib.auth import authenticate, login as auth_login
# from django.contrib import messages

# def login(request):
#     if request.method == 'POST':
#         username = request.POST.get('username')
#         password = request.POST.get('password')

#         print("DEBUG username:", username)
#         print("DEBUG password:", password)

#         user = authenticate(request, username=username, password=password)
#         print("DEBUG authenticated user:", user)

#         if user is not None:
#             auth_login(request, user)
#             return redirect('/')
#         else:
#             messages.info(request, 'Invalid credentials')
#             return redirect('login')
#     else:
#         return render(request, 'login.html')



def logout (request):
    auth.logout (request)
    return redirect('/')


# Dynamic url routing

def post (request, pk):
    return render (request, 'post.html', {'pk': pk})