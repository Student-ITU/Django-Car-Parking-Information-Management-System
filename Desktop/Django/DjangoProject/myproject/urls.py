"""
URL configuration for myproject project.

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/5.2/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""

from django.contrib import admin #Django ka built-in admin module import kar rahe hain. Admin se hum apne site ka admin panel manage karte hain.
from django.urls import path, include # URLs ko define karne ke liye path aur dusre app ke URLs ko include karne ke liye include function import kiye.


urlpatterns = [ # Yeh ek list hai jisme URLs ke rules likhte hain.
    path('admin/', admin.site.urls), #Jab URL me admin/ aaye, toh Django admin panel khol do.Matlab agar browser me likho localhost:8000/admin/, admin site open ho jayegi. Haan bilkul!Admin site matlab Django ka built-in default admin panel jo automatically aata hai jab tum Django project banate ho.
    
    path('', include('appOne.urls')),
    # Agar URL blank hai (jaise localhost:8000/), toh ye baat karo appOne app ki urls.py file se.include('appOne.urls') ka matlab hai “appOne ke URLs ko yahan jod do”.

]
