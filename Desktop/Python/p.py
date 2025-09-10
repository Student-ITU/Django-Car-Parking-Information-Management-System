print ("HELLO")

msg = """Hello,
This is a multi-line string
spanning multiple lines."""
print(msg)

msg1 = '''Hello,
This is a multi-line string
spanning multiple lines.'''
print(msg1)

# Frk nhi para same variable se bhe

a = 1 
b = 2
print ( a + b )
print ("The sum is : ", (a+b))

d = 5==5
print (d) #True ai ga

a = "Sameer"
t = type(a)
print (t) # String type hai to string print ho jai ga

stringPlaying = "PubgMobile"

play = stringPlaying[1:5] # is ka matlab hai 1 se shuru kro and us wale index wale ke value ko include kro and 5 pe khatam kro lakin us index ke value ko exclude kro is lie o print nhi hua agar 1 ke jaga kuch na likhte khale rehta to waha 0 hota agar 5 khali hota woh woh len - 1 yani total khudi a jain ge 
print (play)
print (stringPlaying[6]) # 6th index wla le aya

print(len(stringPlaying))


# Escape sequence characters  \n  \t  \"\"

print ("I am a boy \n My name is \"Sameer\" and I am \t 19")
print ("Agla print likhein ge to wo wese he next line me ai ga and aik method hai \n IS KE ILAWA KOI TAREKA NHI")

# f use kro to use line me + ke begair concatenate kr sakte

name = input ("Enter your name : ") # Yeh input lene ke lie input likhna parta 
print (f"Good Afternoon {name}") # lagana pare ga

letter = ''' Dear <NAME>, 
You are selected!
<DATE> '''

print (letter.replace("<NAME>", "Sameer").replace("<DATE>", "14 August 2025"))


name = "Ali Khan"
position = name.find("Khan")
print(position) # 4th index ai ga ke yaha ha


name = "Ali Khan"
position = name.find("Zahid")
print(position) # agar na mila to -1 kre ga return

#Existing strings me change nhi kr sakte immutable hote "Sameer" me yeh nhi ke sakte ke index 0 pe s ke jaga f kr do, lists me kr sakte

#LISTS

list = ["sameer", "BSSE23025", 19, "182cm"]
print(list[3])

list.append(17) # Add ho gaya
list.insert (3, "Hi") # Is se insert kr sakta me bheech me kahin
list.reverse ()
#list.sort () Yeh bhe hota
print(list)


# Tuple -> tuple ek ordered, immutable (change na hone wali) data structure hoti hai — list jaise hi hoti hai, lekin usme data ko badla nahi ja sakta.

# Why use Tuple?
# Jab data change nahi karna ho (like coordinates, config settings)
# Faster than lists

a = (1,) #Is tuple me aik element ha ham ne comma lagaya 1 ke baad na lagate to type int samjhta wo 1 ke waja se lakin agar single value ka tuple banana to comma laga do, agar sirf () kr dete to empty tuple hota lakin ham koshish krte hain ke more then 1 values ka he tuple banai
print (type(a))

a = (1, 45, 65, "sameer") # is me se kisi ko change nhi kr sakte UNLIKE lists ok? is me a[0] = 2 nhi ho skata

a = ("Ali", 1, 21, "Lahore") #Tuple me bhe ham ese kr sakte
print(a[0])  
print(a[1:])  

print (a.count(1)) # Count kr lie kitne hain 1
print (a.index(1)) # Index bata rha



# DICTIONAY AND SETS

#Dictionary -> List of key value pairs, keys unique hote hain, mutable hai
student = {
    "name": "Ayesha",
    "age": 20,
    "grade": "A"
}

print(student["name"])   # Output: Ayesha
print(student.get("grade"))  # Output: A

student["age"] = 21
student["email"] = "ayesha@example.com"
print (student) 

print (student.items()) # pata chal jai ga kya hua
print (student.keys()) # pata chal jai ga kya hua
print (student.values()) # pata chal jai ga kya hua

print (student.get("harry")) # prints none
# print (student("harry")) # prints error  YEH FRK HAI DONO ME 



# SETS in py


numbers = {1, 5, 2, 3, 2, 1}
print(numbers)  # Output: {1, 2, 3} duplicates removed
numbers.add(77) # 77 add kr de ga, agar koi esa add krte jo pehle he list me hota wo add na hota
numbers.remove(2) #Will remove 2 if their
print(numbers) 
# Sets are unordered, so no indexing (a[0]) allowed. Unordered means ke koi bhe order ho sakt har bare run krne pr kahin bhe element ho sakta is lie indexing nh kr sakte


# IF ELSE 

marks = int(input("Enter your marks: "))
# elif -> else if ka kaam karta
if marks >= 80:
    print("Grade: A")
elif marks >= 70:
    print("Grade: B")
elif marks >= 60:
    print("Grade: C")
elif marks >= 50:
    print("Grade: D")
else:
    print("Grade: F")



message = input("Message likho: ")
p1 = "hello"
if (p1 in message): # Is trha bhe round bracket laga ke un ke aage : kr ke kaam kr sakte and yaaha (in) aik cheez hai jis se ham dekh rhy and lists ke sath bhe (in) work krta ke list me hai ke nhi, (in) ko masal hota lower case and upper case me lower hai to lower he kre ga is cheez ko ham aik tareke se khatam kr sakte, neeche wala code dekho
    print("Spam hai.")
else:
    print("Spam nhi hai.")




message = input("Message likho: ")
p1 = "hello"
if (p1.lower() in message.lower()):  # uper chaye Hello bhe likha lakin is time hello ban jai ga, or agar input bhe me ne Hello dia lakin p1 = hello hai to woh input ko bhe hello he parhe ga
    print("Spam haii.")
else:
    print("Spam nhi haii.")


# Loops 

# While loop
cnt = 0
while (cnt < 3):
    cnt = cnt + 1
    print("Hello Geek")


cnt = 0
while (cnt < 3):
    cnt = cnt + 1
    print("Hello Geek")
else:
    print("In Else Block")

# Infinite Loop

# count = 0
# while (count == 0):
#     print("Hello Geek")


# For loop in python

for i in range(1, 10, 2):  # step = 2, yeh jo last me 2 lagaya yeh matlab ke increment 2 ka kre 
    print(i)


n = 4
for i in range(0, n): #Print 3 tak he kre ga last wale ko nhi kre ga 
    print(i)


li = ["geeks", "for", "geeks"]
for i in li:
    print(i)
    
tup = ("geeks", "for", "geeks")
for i in tup:
    print(i)
    
s = "Geeks"
for i in s:
    print(i)
    
d = dict({'x':123, 'y':354})
for i in d:
    print("%s  %d" % (i, d[i])) # yeh s d likhne ke zarurat nhi formatting ha just
    
set1 = {1, 2, 3, 4, 5, 6}
for i in set1:
    print(i)


#Using else statement in 4 loop

list = ["geeks", "for", "geeks"]
for index in range(len(list)):
    print(list[index])
else:
    print("Inside Else Block")


# For loop in dictionary aik or tareka bhe ha 

student = {
    "name": "Ayesha",
    "age": 20,
    "grade": "A"
}

for key in student:
    print(key, ":", student[key])

# Jab bhe input me int ka kuch lena to int lagana zaruri ha 

#BREAK

# Example: Stop the loop if number is 3
for i in range(1, 6):
    if i == 3:
        break  # loop yahan ruk jaega
    print(i)

# Output:
# 1
# 2

# CONTINUE
# Example: Skip the number 3
for i in range(1, 6):
    if i == 3:
        continue  # 3 ko skip karega
    print(i)

# Output:
# 1
# 2
# 4
# 5

#Break in python
for letter in 'geeksforgeeks':
    if letter == 'e' or letter == 's':
        break

print('Current Letter :', letter) # e print ho jai ga

#Pass in python

for i in range(5):
    pass  # abhi kuch nahi karna, baad mein likhenge

#Pass in python

for letter in 'geeksforgeeks':
    pass
print('Last Letter :', letter) #Sab letters pass krta jai ga and baad me sirf last likhe ga

# Starts with woh name print ho ge jo S se start ho ge

names = ["Sara", "Ali", "Sana", "Bilal", "Saad"]

for name in names:
    if name.startswith("S"):
        print(name)


# Prime number code in 4 loop

n = int (input("Enter the Number :"))

for i in range (2, n):
    if (i%2== 0):
        print("Number is not prime")
        break
    else:
        print ("Number is prime")




# Agar end = "" laga dia to new line nhi ai ge jese har print ke bad aik new line ate so instead of ->
# Hello
# World 
# It will show us 
# Hello World

print("Hello", end=" ")
print("World")



# Python me rule:
# Jitni lines same indentation pe hoti hain, wo same block me hoti hain.
# Indentation usually 4 spaces hoti hai (ya 1 tab).
# Jab indentation change hoti hai, block change ho jata hai.

"""

  *
 ***
*****


"""

n = int(input("Enter the number :"))

for i in range ( 0 < n ):
    for j in range ( n ):
        if (i == n - 1):
            print ("*")
        elif (i < n - 1):
            print



# FUNCTIONS IN PYTHON

def greet(name):
    print("Hello,", name)


greet("Asif")


# RECURSION


def factorial(n):
    if n == 1:
        return 1
    else:
        return n * factorial(n - 1)

# Function call
print(factorial(5))  # Output: 120


# SNAKE GAME

'''
1 for snake
-1 for water
0 for gun
'''

import random

computer = random.choice([-1, 0, 1]) # import random likhna pare ga is library ko use krne ke lie

youstr = input("Enter your choice : ")
youDict = {"s":1, "w":-1, "g":0}
reverseDict = {1:"Snake", -1:"Water", 0:"Gun"}

you = youDict[youstr] # jai ga number like 1 -1 0 na ke s w g and reverse me woh number dekhe ga and us ka letter de ga kon left pe and right pe yeh dekhna zaruri ha

print (f"You chose {reverseDict[you]}\nComputer chose {reverseDict[computer]}")

if (computer == you):
    print("Game draw")

else:
    if (computer == -1 and you == 1):
        print("You win")

    elif (computer == 1 and you == -1):
        print("Computer wins")

    elif (computer == 0 and you == 1):
        print("You win")

    elif (computer == -1 and you == 1):
        print("You win")

    elif (computer == -1 and you == 1):
        print("You win")

    elif (computer == -1 and you == 1):
        print("You win")

# Yeh game pure nhi bs ese he hai farigh se game ha main cheez woh uper ke steps hain un ko dekh lena


# FILE I/0

# READING

f = open("file.txt") # by default read he krta write krne to w likhte
data = f.read()
print(data)
f.close ()

#WRITING

st = "BYEBYEBYE"
f = open("myfile.txt", "w")
f.write(st)
f.close()


# 2d lists in python

matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]


print(matrix[0][0])  # Output: 1 (row 0, column 0)
print(matrix[1][2])  # Output: 6 (row 1, column 2)

for row in matrix:
    for element in row:
        print(element, end=' ')
    print()


# Outer Loop: 3 times
# Inner Loop: 3 times for each outer → total 9 times
# Total Iterations (element prints): 9
