from django.db import models

# Create your models here.


# Going to first create model okok


class Feature:
    id: int
    name: str
    details: str 
    is_ture: bool # yeh naya add kia is se dekhein ge kya sahi me fast hai ke nhi value match krne chaye


# Ab sahi me models banane lage is basic class ko


class Feature1 (models.Model):
    #id: int # By default jab model banate us me id ka attribute hota hai is ko hata do koi frk nhi pare ga
    # name: str Is ke jaga bhe kuch or likhna dekho ab
    name = models.CharField(max_length = 100)

    # details: str  Same for it
    details = models.CharField(max_length = 500)
    # is_ture: bool Is ko choro

