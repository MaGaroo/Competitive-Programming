from django.contrib import admin
from forum.models import Post, Topic

admin.site.register(Topic)
admin.site.register(Post)