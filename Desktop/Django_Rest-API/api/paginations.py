
# CUSTOM PAGINATION -> Mixins and API view, kab use krne custom?? Jab ham kiis aik class ko chate ho ke bs wo use kre na ke sare

"""
IS WALE KE LIE AB CUSTOM BANA RHY JUST  
class EmployeeViewSet(viewsets.ModelViewSet):
queryset = Employee.objects.all()
serializer_class = EmployeeSerializer
    
"""


from rest_framework.pagination import PageNumberPagination

from rest_framework.response import Response # Ye DRF ka Response object hai, jo API ke response banane ke kaam aata hai (JSON return karta hai).

class CustomPagination(PageNumberPagination): # Tu ek CustomPagination class bana raha hai jo DRF ki PageNumberPagination ko extend kar rahi hai. Iska matlab: Teri class ke paas PageNumberPagination ke sab methods & attributes available hain, aur tu unhe customize kar sakta hai.
    page_size_query_param = 'page_size'
    page_query_param = 'page-num'
    max_page_size = 3

    def get_paginated_response(self, data):
        return Response({
            'next': self.get_next_link(), # yeh feature is ke waja se use kr pa rhy from rest_framework.pagination import PageNumberPagination
            'previous': self.get_previous_link(), # yeh feature is ke waja se use kr pa rhy from rest_framework.pagination import PageNumberPagination
            'count': self.page.paginator.count,
            'page_size': self.page_size,
            'results': data
        })
        
        
        # http://127.0.0.1:8000/api/v1/employees/?page-num=1&page_size=2 yeh url hai for this -> page num 1 hai or size 2 ab size agar me yeh 33 likhu ga to 2 he show ho ge cz max limit 2 lage hoye agar max limit 1 kr du   max_page_size = 2 yeh wala to 1 ho ga ez ha

