# Yeh urls ke file me ne create ke

from django.urls import path # path = function URL banane ke liye.
from . import views # yeh usi folder (app) se views.py file ko import karta hai.

# User enters: localhost:8000/about/
# Django dekhta hai urls.py me koi 'about/' URL match ho raha?
# Mil gaya → usse map kar diya views.about function se
# views.about() HTML/text bhejta hai: "This is the About Page"

# uper wal incomplete hai neeche wala complete hai 

# User enters URL: /about/
# Project-level urls.py dekha → include('appOne.urls')
# App-level urls.py dekha → URL about/ match kiya
# URL mapped to view: views.about
# Django calls function: about(request)
# views.py returns: HTML/Text response
# Django shows page to user

# More heavy

# User apne browser me URL type karta hai, example: http://localhost:8000/about/
# Django server request receive karta hai.
# Project-level urls.py file dekhta hai ki kaunse URL pattern match hota hai:
# Yahan '' (empty string) ke liye include('appOne.urls') diya hai, iska matlab agar /about/ aaye to appOne app ki urls.py file dekhega.
# App-level urls.py file (appOne/urls.py) dekhta hai ki koi URL /about/ ke liye defined hai ya nahi.
# Jab /about/ match hota hai to ye URL usse map karta hai kisi view function (e.g., views.about) se.
# Django views.py me jaake us function ko call karta hai:
# about(request)
# View function apne logic ke mutabiq HTTP response banata hai (jaise HTML page, JSON, ya simple text).
# Django woh response user ke browser ko bhej deta hai.
# User ke browser me woh page ya content show hota hai.



urlpatterns = [
    path('', views.index, name='index'), # '' khali chor dia cz yeh first page ho ga hamara jo home page hota
    # URL mapping hoti hai app-level urls.py file me, jahan URL path ko specific view function ke saath connect kiya jata hai. To idhr ho rhy mapping,  # yahan 'index/' URL ko views.about function se map kiya

    #Jab user / (empty path) pe aaye (like localhost:8000/), to views.index(index function ha) function run hoga name='index' → optional hai, templates me use hota hai reverse URL lookup ke liye.
 

    # Assignment ka part hai neeche wala

    path('counter', views.counter, name='counter'),
    # Counter: Yeh URL path hai.
    # views.counter: Yeh function hai jo call hoga jab user /counter URL pe jaye. Kaunsa function chalega (response dega).

    #Counter jo tum urls.py mein likh rahe ho, wo HTML file ka naam nahi hota. Woh ek URL path hota hai, jo kisi function (like views.counter) se map hota hai — aur wo function jo response dega, woh HTML page ho sakta hai (like counter.html), ya simple text bhi.

    #Jab user localhost:8000/counter par jaye
    # Django views.counter function ko call karega


    # For registration
    path('register', views.register, name='register'),

    # User login and logout
    path('login', views.login, name='login'),
    path('logout', views.logout, name='logout'),

    #Dynamic url routing

    path('post/<str:pk>', views.post, name='post')
    #agar str ke jaga int krte to string value pass nhi ho ge sameer likhu ga to error ai ga, sirf int he ho ge
] 