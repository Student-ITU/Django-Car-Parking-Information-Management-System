class Student:
    def __init__(self, name, roll_no, marks):
        self.name = name
        self.roll_no = roll_no
        self.marks = marks

    def display_info(self):
        print("Name:", self.name)
        print("Roll No:", self.roll_no)
        print("Marks:", self.marks)

    def is_passed(self):
        if self.marks >= 40:
            return "Passed"
        else:
            return "Failed"


# Object creation
s1 = Student("Ali", 101, 75)
s2 = Student("Sara", 102, 35)

# Call methods
s1.display_info()
print("Status:", s1.is_passed())  # using return value

print()  # For spacing

s2.display_info()
print("Status:", s2.is_passed())  # using return value


# INHERITENCE 

# Parent class
class Animal:
    def __init__(self, name):
        self.name = name
        print(f"{self.name} ka Animal constructor chala")

    def speak(self):
        print(f"{self.name} kuch bol raha hai...")

# Child class
class Dog(Animal):
    def __init__(self, name, breed):
        # Parent class ka constructor call karte hain
        super().__init__(name)
        self.breed = breed
        print(f"{self.name} ek {self.breed} breed ka dog hai")

    def speak(self):
        super().speak()  # Parent ka speak bhi call karega
        print(f"{self.name} bhon bhon kar raha hai.")

class Cat:
    def __init__(self, name, voice):
        print(f"{self.name} voice {self.voice} hai")

# Object create karte hain
d = Dog("Tommy", "Labrador")
d.speak()
print(isinstance(d, Dog)) # Is se pata chal jai ga ke instance is class ka hai ke nhi true yah false me se kuch ai ga, animal pe is lie true hua cz animal ke inheritance hoye ha
print(isinstance(d, Animal))

#Python me construtor partent ka nhi ilta child ko directly like c++, call child se kro ge to child ka he call ho ga bs parent ka krne ke lie us me super ka kaam krna pare ga phir us ko values mile ge warna agar samjho uper code me na likha hota super wale line to print (d.name) krte error a jata woh kehta hai he nhi koi name naam ka, to yeh baat ha 

#Agar child me init nhi hai yani constructor child ka khud ka nhi hai to masla nhi hota parent apna constructor us ko de de ga phir d.name ho jai ga neeche code dekho

class Parent:
    def __init__(self):
        self.value = 42

class Child(Parent):
    def print_value(self):
        print(self.value)  # Directly accessing parent class variable

c = Child()
c.print_value()
print(c.value)  # Output: 42

# lakin agar us me apna init ha phir super lagana pare ga warna error a jai ga, to neeche dekho us me apna init tha ab na wo andar ke value access kr sakta na print(c.value) ko, but agar andar  print(self.value) yeh na ho bs print("Hi") likha ho phir ho jai ga na bhe lagao super to

class Parent:
    def __init__(self):
        self.value = 42

class Child(Parent):
    def __init__(self):
        print("Child constructor")

    def print_value(self):
        print(self.value)

c = Child()
c.print_value()  # Error: 'Child' object has no attribute 'value'
print(c.value)


# ENCAPSULATION


# Haan, aap bilkul sahi samajh rahe hain! Agar aap Python mein kisi variable ko private bana dete hain (using __), toh wo private variable poore class mein private hi rahega. Matlab aapko har jagah (methods ke andar) usi private variable ko access karte waqt __ prefix lagana padega. 

class BankAccount:
    def __init__(self, balance):
        self.__balance = balance  # private variable

    def deposit(self, amount):
        self.__balance += amount

    def withdraw(self, amount):
        if amount <= self.__balance:
            self.__balance -= amount
        else:
            print("Insufficient balance")

    def get_balance(self):
        return self.__balance

# Creating an object
account = BankAccount(1000)
account.deposit(500)
account.withdraw(200)

# Accessing balance through method (Encapsulation)
print(account.get_balance())  # Output: 1300




#POLYMORPHISM

class Animal:
    def __init__(self, name):
        self.__name = name  # Private variable

    # Getter method
    def get_name(self):
        return self.__name

    # Setter method
    def set_name(self, name):
        self.__name = name

    # Method that will be overridden in child classes
    def sound(self):
        return "Some sound"


class Dog(Animal):
    def __init__(self, name, breed):
        super().__init__(name)  # Calling the constructor of the parent class
        self.__breed = breed  # Private variable for breed

    # Getter for breed
    def get_breed(self):
        return self.__breed

    # Setter for breed
    def set_breed(self, breed):
        self.__breed = breed

    # Method overriding (polymorphism)
    def sound(self):
        return "Woof! Woof!"


class Cat(Animal):
    def __init__(self, name, color):
        super().__init__(name)  # Calling the constructor of the parent class
        self.__color = color  # Private variable for color

    # Getter for color
    def get_color(self):
        return self.__color

    # Setter for color
    def set_color(self, color):
        self.__color = color

    # Method overriding (polymorphism)
    def sound(self):
        return "Meow! Meow!"


# Creating objects
dog = Dog("Buddy", "Golden Retriever")
cat = Cat("Whiskers", "White")

# Using getters and setters
print(dog.get_name())  # Output: Buddy
print(dog.get_breed())  # Output: Golden Retriever
dog.set_name("Max")  # Changing the name
print(dog.get_name())  # Output: Max

# Polymorphism: different sound based on object type
print(dog.sound())  # Output: Woof! Woof!
print(cat.sound())  # Output: Meow! Meow!


# Class variables

# Important Notes:
# If you change species using the class name, all instances reflect the change.
# If you change species using an object, it creates an instance variable with the same name, which overrides the class variable for that object only.

class Dog:
    # Class variable
    species = "Canis familiaris"

    def __init__(self, name, age):
        self.name = name      # instance variable
        self.age = age        # instance variable

# Creating objects
dog1 = Dog("Buddy", 3)
dog2 = Dog("Max", 5)

# Accessing class variable
print(dog1.species)  # Output: Canis familiaris
print(dog2.species)  # Output: Canis familiaris

# Changing the class variable (affects all instances)
Dog.species = "Domestic Dog"

print(dog1.species)  # Output: Domestic Dog
print(dog2.species)  # Output: Domestic Dog


# init me jo likhte jo self se hota woh instance variable hota woh sirf us obj ke lie he hota jis ke value hote, class wala sab objs ke lie hota jo banaya hota, aik or example dekh lo


class Employee:
    # Class variable (shared by all)
    company = "OpenAI"

    def __init__(self, name, salary):
        # Instance variables (unique for each object)
        self.name = name
        self.salary = salary

# Creating two employees (objects)
emp1 = Employee("Ali", 50000)
emp2 = Employee("Sara", 60000)

# Instance variables
print(emp1.name)     # Output: Ali
print(emp2.name)     # Output: Sara

# Class variable (same for both)
print(emp1.company)  # Output: OpenAI
print(emp2.company)  # Output: OpenAI

# Changing instance variable
emp1.salary = 55000
print(emp1.salary)   # Output: 55000
print(emp2.salary)   # Output: 60000 (no change)

# Changing class variable
Employee.company = "DeepMind"
print(emp1.company)  # Output: DeepMind
print(emp2.company)  # Output: DeepMind







# Static method -> Belongs to the class but obj na kar pain access, class ke name se access ho payein bs

#SELF VS @staticmethod likha notes me 

class Test:
    def __init__(self):
        self.x = 10

    @staticmethod
    def show():
        print(self.x)  # ❌ Error: 'self' is not defined

Test().show()


# Self lagane ke zarurat nhi
# EXAMPLE OF @staticmethod -> Static method aik decorator ha

class Test:
    @staticmethod
    def greet():
        print("Hello! I don't need any object.")

Test.greet()  # ✅ Works fine




class Fan:
    def __init__(self, speed):
        self.speed = speed

    def show_speed(self):  # Needs self
        print("Speed is", self.speed)

    @staticmethod
    def electricity_info():  # No self needed
        print("Runs on 220V")

f = Fan(5)
f.show_speed()          # Output: Speed is 5
Fan.electricity_info()  # Output: Runs on 220V



# @property -> Python mein @property ek special tool hai jo function ko variable ki tarah banane ka kaam karta hai.

class Circle:
    def __init__(self, radius):
        self.radius = radius

    @property
    def area(self):
        return 3.14 * self.radius ** 2


c = Circle(5)
print(c.area)  # Output: 78.5, to yaha c.area () ese nhi kia ham ne 
