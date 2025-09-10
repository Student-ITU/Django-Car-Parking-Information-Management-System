from rest_framework import serializers
from .models import Blog, Comment


class CommentSerializers(serializers.ModelSerializer):
    class Meta:
        model = Comment
        fields = '__all__'

class BlogSerializer(serializers.ModelSerializer):
    comments = CommentSerializers(many=True, read_only = True) # Yeh comments related_name hona cha jo model me likha cz jo us comment me ho ga wo idhr is me ai ga, yeh line likhne se ho ga kya ke jo comments the wo us blog ke andar a jayen ge, is se pehle esa nhi ho rha tha jab blogs krte the to us me just 2 blogs nazar ate the un ke comments nhi.
    class Meta:
        model = Blog
        fields = '__all__'