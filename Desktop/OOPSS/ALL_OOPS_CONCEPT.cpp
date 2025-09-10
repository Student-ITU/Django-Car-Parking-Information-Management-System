// ********** Nested structs **********

// #include <iostream>
// using namespace std;

// struct Person {
//     string name;
//     int age;

//     // Nested struct defined inside Person
//     struct Address {
//         string city;
//         int zipCode;
//     } address;  // Declaring an object of nested struct Address
// };

// int main() {
//     Person person1;

//     // Assigning values to the Person and Address (nested struct)
//     person1.name = "John";
//     person1.age = 30;
//     person1.address.city = "New York";
//     person1.address.zipCode = 10001;

//     // Access and print values
//     cout << "Name: " << person1.name << endl;
//     cout << "Age: " << person1.age << endl;
//     cout << "City: " << person1.address.city << endl;
//     cout << "Zip Code: " << person1.address.zipCode << endl;

//     return 0;
// }

/*1.⁠ ⁠Members of a class are private by default.	1. Members of a structure are public by default. 
2.⁠ ⁠An instance of a class is called an ‘object’.	2. An instance of structure is called the ‘structure variable’.
3.⁠ ⁠Member classes/structures of a class are private by default but not all programming languages have this default behavior eg Java etc.	3. Member classes/structures of a structure are public by default.
4.⁠ ⁠It is declared using the class keyword.	4. It is declared using the struct keyword.
5.⁠ ⁠It is normally used for data abstraction and further inheritance.	5. It is normally used for the grouping of data
6.⁠ ⁠NULL values are possible in Class.	6. NULL values are not possible.
*/

// When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

//******* Copy Constructor ********
// #include <iostream>
// #include <string.h>
// using namespace std;

// // Class definition for 'student'
// class student {
//     int rno;
//     string name;
//     double fee;

// public:
//     // Parameterized constructor
//     student(int, string, double);
//     // Copy constructor
//     student(student& t)
//     {
//         rno = t.rno;
//         name = t.name;
//         fee = t.fee;
//         cout << "Copy Constructor Called" << endl;
//     }
//     // Function to display student details
//     void display();
// };

// // Implementation of the parameterized constructor
// student::student(int no, string n, double f)
// {
//     rno = no;
//     name = n;
//     fee = f;
// }

// // Implementation of the display function
// void student::display()
// {
//     cout << rno << "\t" << name << "\t" << fee << endl;
// }

// int main()
// {
//     // Create student object with parameterized constructor
//     student s(1001, "Manjeet", 10000);
//     s.display();

//     // Create another student object using the copy
//     // constructor
//     student manjeet(s);
//     manjeet.display();

//     return 0;
// }
//*****Friend Function*****
//We can declare friend class or function anywhere in the base class body whether its private, protected or public block. It works all the same.
/* A friend function is a special function in C++ that in spite of not being a member function of a class has the privilege to access the private and protected data of a class.
A friend function is a non-member function or ordinary function of a class, which is declared as a friend using the keyword “friend” inside the class. By declaring a function as a friend, all the access permissions are given to the function.
The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition or call.
A friend function is called like an ordinary function. It cannot be called using the object name and dot operator. However, it may accept the object as an argument whose value it wants to access.
A friend function can be declared in any section of the class i.e. public or private or protected.*/
// C++ program to create a member function of another class
// as a friend function
// #include <iostream>
// using namespace std;

// class base; // forward definition needed
// // another class in which function is declared
// class anotherClass {
// public:
//     // void memberFunction(base& obj);

//     void memberFunction(base& obj)
// {
//     cout << "Private Variable: " << obj.private_variable
//          << endl;
//     cout << "Protected Variable: " << obj.protected_variable;
// }

// };

// // base class for which friend is declared
// class base {
// private:
//     int private_variable;

// protected:
//     int protected_variable;

// public:
//     base()
//     {
//         private_variable = 10;
//         protected_variable = 99;
//     }

//     // friend function declaration
//     // friend void anotherClass::memberFunction(base&);
//     friend class anotherClass;
// };

// // friend function definition
// // void anotherClass::memberFunction(base& obj)
// // {
// //     cout << "Private Variable: " << obj.private_variable
// //          << endl;
// //     cout << "Protected Variable: " << obj.protected_variable;
// // }

// // driver code
// int main()
// {
//     base object1;
//     anotherClass object2;
//     object2.memberFunction(object1);

//     return 0;
// }

/*class base; is se sirf yeh pata chalta ke neeche class ha andar members wagera nhi parh satkta ?
Bilkul sahi! Jab aap class base; likhte hain, to compiler ko sirf itna pata chalta hai ke ek class base ka naam exist karta hai, lekin uske andar kya members hain (private, protected, public), ya class ki implementation kya hai, yeh compiler ko is stage par pata nahi hota.

Isko forward declaration kehte hain, aur yeh sirf itna bata rahi hoti hai ke class base ke naam ka ek type maujood hai. Is declaration ka purpose yeh hota hai ke compiler ko aage chal ke batana ho ke koi class ya struct exist karta hai, lekin uske actual details (like members, functions) ko define karna baad mein hota hai.

Limitations of Forward Declaration:
Aap forward declaration ke zariye kisi class ke members ko access nahi kar sakte, kyunki unki definition abhi tak nahi hui hoti.
Aap forward declared class ka object nahi bana sakte until the full definition is provided.
Forward declaration ko sirf pointers or references ke liye use kiya ja sakta hai, jab aapko sirf type ka pata hona chahiye, implementation ka nahi.*/

/*Advantages of Friend Functions
A friend function is able to access members without the need of inheriting the class.
The friend function acts as a bridge between two classes by accessing their private data.
It can be used to increase the versatility of overloaded operators.
It can be declared either in the public or private or protected part of the class.
Disadvantages of Friend Functions
Friend functions have access to private members of a class from outside the class which violates the law of data hiding.
Friend functions cannot do any run-time polymorphism in their members.
Important Points About Friend Functions and Classes
Friends should be used only for limited purposes. Too many functions or external classes are declared as friends of a class with protected or private data access lessens the value of encapsulation of separate classes in object-oriented programming.
Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
Friendship is not inherited. (See this for more details)
The concept of friends is not in Java.*/

//******* Operator Overloading ********
//Operator functions are the same as normal functions. The only differences are, that the name of an operator function is always the operator keyword followed by the symbol of the operator, and operator functions are called when the corresponding operator is used. 
/*Almost all operators can be overloaded except a few. Following is the list of operators that cannot be overloaded. 
sizeof
typeid
Scope resolution (::)
Class member access operators (.(dot), .* (pointer to member operator))
Ternary or conditional (?:)*/


//********* OPERATOR OVERLOADING THROUGH MEMBER AND NON-MEMBER FUNCTION **********
/*In C++, operator overloading allows you to redefine the behavior of operators (like =, +, -, etc.) for user-defined types (classes or structs). You can implement operator overloading through member functions or non-member (friend) functions.

Let’s go through both approaches with examples:

1. Operator Overloading Using Member Function
Here, we overload the + operator using a member function, meaning the function is part of the class itself.

Example: Overloading + operator using a member function
cpp
Copy code
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overloading the '+' operator using a member function
    Complex operator+(const Complex& other) {
        Complex temp;
        temp.real = this->real + other.real;  // Add real parts
        temp.imag = this->imag + other.imag;  // Add imaginary parts
        return temp;
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;  // Calls overloaded + operator
    c3.display();          // Output: 4 + 6i
    return 0;
}
Key Points:
The operator function is part of the class.
It directly accesses the class’s members (real and imag).
The left-hand operand (c1) is implicitly passed as this, and the right-hand operand (c2) is passed as an argument.
2. Operator Overloading Using Non-Member Function
A non-member function is used when you don't want the operator to be a member of the class. Typically, such functions are declared as friend functions if they need access to the private members of the class.

Example: Overloading + operator using a non-member function
cpp
Copy code
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Friend function to overload the '+' operator
    friend Complex operator+(const Complex& c1, const Complex& c2);

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Non-member function for overloading '+' operator
Complex operator+(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.real = c1.real + c2.real;  // Add real parts
    temp.imag = c1.imag + c2.imag;  // Add imaginary parts
    return temp;
}

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;  // Calls overloaded + operator
    c3.display();          // Output: 4 + 6i
    return 0;
}*/
/*Feature	Member Function	Non-Member (Friend) Function
Function Type	Defined inside the class	 Defined outside the class
Access to Private Members	Can access private members directly  	Needs to be declared as a friend function to access private members
Operands Handling	Left-hand operand is the object (this), right-hand operand is passed	 Both operands are passed explicitly
Best Use Case	Unary or operators where the left-hand operand is of the same class	    Binary operators with different types for the left and right operands*/
/*ostream& as a Return Type:
What It Sends: It returns the stream object itself (e.g., cout).
Purpose: Allows chaining of multiple << operations and ensures that the same stream is used for continuous output.*/

// DIAMOND PROBLEM -> CLASS CYCLE KE ANDAR BUS AND CAR DONO INHERIT HAIN OR UN DONO ME APNE FUNCTION KE SATH SATH VEHICLE KA BHE FUNCTION HA TOU AGAR ME CYCLE SE VEHICLE KA FUNCTION CALL KRU VOID FUNCTION () WALA TOU KYUNKE YEH FUNCTION DONO CLASSES CAR AND BUS ME INHERIT HA OR WOH DONO CLASSES CYCLE ME TOU CYCLE SE JAB CALL KRU GA  TOU USE SAMJH NHI LAGE GE KE KON SA CALL KR RHA YEH HE DIAMOND PROBLEM HA TOU IS KA TAREKA KE VIRTUAL KEYWORD LAGA DO, WOH BASICALLY COMPILER KO BATATA AT RUNTIME KE KE JO FUNCTION INHERIT HO RHY BUS AND CAR ME WOH DONO AIK HE JAGA SE A RHY
/*Increased Complexity: Virtual inheritance can complicate the inheritance hierarchy and make the code harder to understand and maintain.
Performance Overhead: Virtual inheritance introduces overhead in terms of memory and performance due to the additional indirection required to manage the single instance of the virtual base class.
Initialization Issues: Proper initialization of virtual base classes is crucial. If not handled correctly, it can lead to runtime errors and undefined behavior.
*/
// #include <iostream>
// using namespace std;

// // base class
// class Vehicle {
// public:
//     Vehicle() { cout << "This is a Vehicle\n"; }
//     void function () {
//         cout << "Vehicle" << endl;
//     }
// };

// // first sub class
// class Car : virtual public Vehicle {
// public:
//     Car() { cout << "This Vehicle is Car\n"; }
// };

// // second sub class
// class Bus : virtual public Vehicle {
// public:
//     Bus() { cout << "This Vehicle is Bus\n"; }
// };

// class Cycle : public Car, public Bus {
// public:
//     Cycle() { cout << "This Vehicle is Bus\n"; }
    
// };

// // main function
// int main()
// {
//     // Creating object of sub class will
//     // invoke the constructor of base class.
//     Car obj1;
//     Bus obj2;
//     Cycle obj3;
//     obj3.function ();
//     return 0;
// }
// #include <iostream>
// using namespace std;

// // Base class
// class Base {
// public:
//     Base() { cout << "Base constructor\n"; }
//     void fun() { cout << "Base function\n"; }
// };

// // Child class inheriting from Base
// class Child : public Base {
// public:
//     Child() { cout << "Child constructor\n"; }
// };

// int main() {
//     Child* obj = new Child();
//     obj->fun();  // Calling method
//     delete obj;  // Freeing memory
//     return 0;
// }

//COMPLETE CODE KA TAREKE ESPECIALLY this->>>>>>> Child* obj = new Child();
/*Detailed Explanation
Class Definitions:

Base Class:

Constructor: Outputs "Base constructor\n" when an object of Base is created.
Method fun(): Outputs "Base function\n".
Child Class:

Constructor: Outputs "Child constructor\n" when an object of Child is created. Inherits from Base.
Object Creation:

cpp
Copy code
Child* obj = new Child();
new Child(): This statement creates a new Child object on the heap.
Memory Allocation: Allocates memory for the Child object.
Base Class Constructor Call: First, the Base class constructor is called, so "Base constructor\n" is printed.
Child Class Constructor Call: After the Base constructor finishes, the Child class constructor is called, so "Child constructor\n" is printed.
Pointer Assignment: The pointer obj now holds the address of the newly created Child object.
Calling Method:

cpp
Copy code
obj->fun();  // Calling method
Method Lookup: The pointer obj points to a Child object. The fun() method is called on this object.
Method Resolution: Since fun() is not overridden in Child, the method from Base is used.
Output: "Base function\n" is printed.
Deleting the Object:

cpp
Copy code
delete obj;  // Freeing memory
Memory Deallocation: The delete operator frees the memory allocated for the Child object.
Destructor Call: The Child destructor is called (if defined, but not present here, so nothing happens). Then, the Base destructor would be called if it were defined.
Execution Flow
Create Child Object:

Base constructor is called, printing: "Base constructor"
Child constructor is called, printing: "Child constructor"
Call fun() Method:

Calls fun() from the Base class, printing: "Base function"
Delete Child Object:

Frees the memory allocated for the Child object.
Summary
Object Creation: When Child* obj = new Child(); is executed, it constructs a Child object, which involves first constructing the Base part of the object.
Method Call: obj->fun() calls the fun() method inherited from Base because fun() is not overridden in Child.
Memory Deallocation: delete obj; frees the memory allocated for the Child object, cleaning up resources.*/
/*Method Lookup: The pointer obj points to a Child object. The fun() method is called on this object.
Method Resolution: Since fun() is not overridden in Child, the method from Base is used.
Output: "Base function\n" is printed.
overriden nhi hai lakin derives class me para to hai na inherit hoa 
ChatGPT said:
ChatGPT
Yes, you're correct. Here's a detailed explanation:

Method Lookup and Resolution
Method Lookup:

When you call obj->fun(), the compiler looks up the fun() method starting from the class of the object pointed to by obj, which is Child.
Method Resolution:

The compiler first checks if Child has its own implementation of fun(). Since Child does not override fun(), the compiler continues to look up the inheritance chain.
The next class in the inheritance hierarchy is Base, from which Child inherits. Base has the fun() method implemented.
Inheriting Methods:

Since Child does not provide its own implementation of fun(), it uses the one from Base.
Even though fun() is inherited, the Child class does not modify or override this method, so when obj->fun() is called, it uses the fun() method defined in Base.
Output:

The fun() method of Base is executed, printing "Base function\n".
Summary
Inheritance: Inheritance allows the Child class to use the methods defined in Base, but if Child does not override these methods, it simply uses the base class implementation.
Method Call: Even though fun() is defined in the base class, and Child inherits it, it’s not overridden in Child, so the base class version is executed.
To visualize:

cpp
Copy code
// Base class has fun()
class Base {
public:
    void fun() { cout << "Base function\n"; }
};

// Child inherits from Base
class Child : public Base {
    // No fun() method here
};

// When you call obj->fun(), it looks for fun() in Child.
// Since fun() is not overridden in Child, it uses the Base class version.
Thus, in your program, obj->fun() calls the fun() method from the Base class, and you see "Base function\n" as output.*/

//Encapsulation

// Friend functions do partially violate encapsulation because they can access private data.
// However, the use of friend functions is explicitly controlled by the class, so it's not a complete breach of encapsulation.
// It's generally used in special cases where external functions need to interact closely with the class, but should be used carefully to avoid breaking the principle of data hiding.
// In conclusion, encapsulation is still there when using a friend function, but it's not as strict. The class has the choice to expose its data to specific functions, keeping encapsulation somewhat intact.

//THIS 
// Since static methods belong to the class and not to any specific object, this is not available in static member functions.



// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     int length;
//     int width;

// public:
//     // Constructor
//     Rectangle(int l, int w) : length(l), width(w) {}

//     // Method to set length
//     Rectangle& setLength(int l) {
//         length = l;
//         return *this; // Returning current object
//     }

//     // Method to set width
//     Rectangle& setWidth(int w) {
//         width = w;
//         return *this; // Returning current object
//     }

//     // Method to calculate and print area
//     Rectangle& printArea() {
//         cout << "Area: " << (length * width) << endl;
//         return *this; // Returning current object
//     }
// };

// int main() {
//     Rectangle rect(10, 5);  // Initial rectangle

//     // Method chaining: setting length, width, and printing area in one line
//     rect.setLength(20).setWidth(10).printArea();  // Output: Area: 200

//     return 0;
// }
//*this
/*Why *this and not this?
this is a pointer to the current object. If you return this, you return a pointer to the object.
*this dereferences the pointer and returns the actual object (not the pointer). This allows method chaining with references, which is why you write Rectangle& setWidth().*/

/*When we say "return the current object, not a pointer," we mean that instead of returning the memory address of the object (which is what a pointer would do), we return the actual object itself or a reference to it.

What is inside the object?
An object in C++ is essentially a collection of data members (variables) and methods (functions) defined by its class. When you return an object (or a reference to it), you are returning access to these data members and methods.

For example, in your Rectangle class, the object contains the data members length and width, and the methods like setWidth() and printArea().

Breaking it down:
Let's say your object is:

cpp
Copy code
Rectangle rect;
This object rect contains:

Data members:

length
width
Methods (which are functions that can operate on this data):

setWidth()
printArea()
So, when you return *this (the object itself):
You are returning all the data members and methods of the object.
For example, rect is an object that holds length, width, and all the methods inside it.
Example:
cpp
Copy code
Rectangle& setWidth(int w) {
    width = w;          // Setting width to w
    return *this;       // Returning the whole 'rect' object
}
*this returns the whole object (rect), which means it contains:
The updated width value.
The methods that can be called on this object like printArea().
This allows method chaining, where after calling setWidth(), you can immediately call another method like printArea() on the same object.

What is not inside the object?
The object doesn't contain pointers or addresses when you're returning *this. You're returning a reference to the object with all its data intact.*/

/*Yes, the Rectangle& return type is directly connected to return *this. Let's break it down in simple steps to help you understand how this works:

1. What does Rectangle& mean?
Rectangle& means reference to an object of type Rectangle.
It tells the compiler that the function will return a reference to an existing object, not a new object or a copy of an object.
2. What does return *this mean?
this is a pointer to the current object. When you do *this, you are dereferencing the pointer and returning the actual object.
So, *this gives you the current object (e.g., rect in rect.setWidth(10)).
3. How Rectangle& and return *this work together
Since *this is the current object, and the function's return type is Rectangle&, you are returning a reference to the current object.
This allows you to return the same object that called the method, without creating a copy of it.
4. Why use Rectangle&?
The reference & is used because you want to return the same object (not a copy) so that you can chain methods together.
By returning a reference, you can continue calling methods on the same object.
Rectangle& indicates the function will return a reference to the current object (not a copy).
*this returns the current object, and since the function return type is Rectangle&, it returns the object as a reference.
*/

/*agar sirf rectangle likh deta baki sara same tab kya hot a?
ChatGPT said:
ChatGPT
If you change the return type from Rectangle& to just Rectangle, here’s how it affects the method and what happens:

Changing Return Type to Rectangle
Code Example:
cpp
Copy code
Rectangle setWidth(int w) {
    width = w;          // Setting width to w
    return *this;       // Returning a copy of the current object
}

Rectangle setLength(int l) {
    length = l;         // Setting length to l
    return *this;       // Returning a copy of the current object
}
Differences and Effects:
Returning by Value vs. Returning by Reference:

Returning by Value (Rectangle):
return *this; will create a copy of the current object and return it.
The returned object is a new instance, not the original one.
Returning by Reference (Rectangle&):
return *this; returns a reference to the original object.
No new object is created; the original object is returned.
Performance:

Returning by Value:
Copying the object involves additional overhead and can be slower, especially if the object is large or complex.
The method call creates a new instance, which can be inefficient.
Returning by Reference:
No copy is made, so it is more efficient.
It directly returns the original object, avoiding unnecessary overhead.
Method Chaining:

Returning by Value:
Method chaining will not work as expected because each method call returns a copy of the object. The new object doesn’t retain the state changes made by previous method calls.
Returning by Reference:
Method chaining works because each method call returns a reference to the same object, allowing subsequent methods to operate on the same object.
Example of Method Chaining with Value Return:
cpp
Copy code
Rectangle rect;
rect.setWidth(10).setLength(20);  // This will not work correctly
With Rectangle, each call to setWidth() and setLength() returns a new copy of the Rectangle object.
As a result, the chaining will not modify the original rect object, leading to unexpected behavior.
Example of Method Chaining with Reference Return:
cpp
Copy code
Rectangle rect;
rect.setWidth(10).setLength(20);  // This works as expected
With Rectangle&, each call returns a reference to the same Rectangle object.
The rect object is modified directly, so the chaining works correctly.
Summary:
Rectangle (by value): Returns a copy of the object. This prevents method chaining and adds performance overhead due to copying.
Rectangle& (by reference): Returns the original object as a reference. This supports method chaining and is more efficient.
In most cases where you want to support method chaining and avoid unnecessary copying, returning by reference (Rectangle&) is preferred.*/

// ***************************Static member functions*****************************
/*Non-Static vs. Static Member Functions
Non-Static Member Functions:

They require an object to be called because they operate on specific instances of the class.
They have access to all data members and member functions of the class, both static and non-static.
They can access instance-specific data and modify the state of the object.
Static Member Functions:

They do not require an object to be called; they can be invoked using the class name.
They cannot access non-static data members or non-static member functions directly because they do not operate on a specific instance.
They can access only static data members and other static member functions of the class.
Benefits of Static Member Functions
No Need for an Object:

Static functions belong to the class itself, not to any particular instance. This means you can call a static function without creating an object of the class.
Example: GfG::printMsg();
Utility Functions:

They are useful for utility functions that do not need access to instance-specific data. For example, a function that performs a common task or calculation independent of object state.
Shared State:

Static functions can work with static data members, which are shared across all instances of the class. This can be useful for counting the number of instances or other class-wide operations.*/
// #include <iostream>
// using namespace std;

// class Example {
// private:
//     static int count;  // Static data member
//     int id;            // Non-static data member

// public:
//     Example(int id) : id(id) {
//         count++;  // Increment static count for every new object
//     }

//     // Static member function
//     static void showCount() {
//         cout << "Count: " << count << endl;  // Can access static data members
//     }

//     // Non-static member function
//     void showId() const {
//         cout << "ID: " << id << endl;  // Can access non-static data members
//     }
// };

// // Initialize static member
// int Example::count = 0;

// int main() {
//     Example e1(1);
//     Example e2(2);

//     // Call static member function using class name
//     Example::showCount();  // Output: Count: 2

//     // Call non-static member function using an object
//     e1.showId();  // Output: ID: 1
//     e2.showId();  // Output: ID: 2

//     return 0;
// }
/*Key Points:
Static Functions:

Do not need an object.
Cannot access non-static members directly.
Can be called using the class name.
Non-Static Functions:

Require an object to be called.
Can access both static and non-static members.
Summary
Static member functions are useful for operations that do not depend on instance-specific data and are shared across all instances. They provide a way to perform class-level operations efficiently and can be called without creating an object of the class. Non-static member functions, on the other hand, are tied to individual objects and can manipulate and access instance-specific data.*/
//AGAR STATIC FUNCTION ME NON STATIC MEMBER VARIABLE LIKHA TAB BHE ERROR A JAO GA ANDAR BHE STATIC HE HONA CHAYE ATTRIBUTE 

// *****************TEMPLATES******************
// C++ Program to demonstrate
// Use of template
// #include <iostream>
// using namespace std;

// // One function works for all data types. This would work
// // even for user defined types if operator '>' is overloaded
// template <typename T> T myMax(T x, T y)
// {
//     return (x > y) ? x : y;
// }

// int main()
// {
//     // Call myMax for int
//     cout << myMax<int>(3, 7) << endl;
//     // call myMax for double
//     cout << myMax<double>(3.0, 7.0) << endl;
//     // call myMax for char
//     cout << myMax<char>('g', 'e') << endl;

//     return 0;
// }
// AGAR ME JAHA YEH LIKHA return (x > y) ? x : y; X KE JAGA P BHE LIKH DETA ERROR NA MILTA KYUNKE YEH PART NI HAI JAB TAK HM IS KO CALL NHI KRTE LIKE   cout << myMax<int>(3, 7) << endl; BUT MERA COMPILER ERROR DE RHA CZ KYUCH BOHOT SAMJHDAR HAIN COMPILERS LAKIN ASLI ME AGAR KOI POOCHE USE YEH HE KEHNA KE ERROR TAB TAK NHI AI GA AGAR CALL NA KIA HO SAKTA TAB HE CREATE HOTE JAB CALL KRTE YEH ACTUAL CODE NHI HOTA

//**********TEMPLATES WITH CLASSES**********

// #include <iostream>
 
// using namespace std;

// template <int N>

// class Array {
// private:
//     int array[N];

// public:
//     int getSize () const {
//         return N;
//     }
// };


// int main () {
 
//     Array<5> array;
//     cout << "Array's size : " << array.getSize ();
//     // AB YAHA PAR 5 RETURN 5 BHE HO GYA OR UPER INT ARRAY[5] BHE CHALA GYA
 
//     return 0;
// }

// #include <iostream>
 
// using namespace std;

// template <typename T, int N>

// class Array {
// private:
//     T array[N];

// public:
//     void fillAndPrintArray () {
//         for ( int i = 0; i < N; i++ ) {
//             cin >> array[i];
//         }

//         for ( int i = 0; i < N; i++ ) {
//             cout << array[i] << endl;
//         }

//         // return N;
//     }

   
// };


// int main () {
    
//     int n;
//     cout << "Enter the number :";
//     cin >>n;
//     Array<string, n> array;
//     array.fillAndPrintArray ();
//     // AB YAHA PAR 5 RETURN 5 BHE HO GYA OR UPER INT ARRAY[5] BHE CHALA GYA
 
//     return 0;
// }
//*********META PROGRAMMING********
/*Metaprogramming is a programming technique where programs have the ability to treat other programs as their data. In simpler terms, it involves writing code that writes or manipulates other code, or even itself, during compile time or runtime. This can make programs more flexible, reusable, and powerful.

Types of Metaprogramming
Compile-Time Metaprogramming:

Templates in C++: Templates allow for generic programming, where code is written without specifying exact types. The specific types are substituted during compilation.
Macros in C: Preprocessor macros can generate code before the actual compilation starts. They are less type-safe compared to templates but can be used to define constants, inline functions, and more.
Runtime Metaprogramming:

Reflection: Some languages support reflection, which allows a program to inspect and modify its own structure and behavior at runtime.
Dynamic Typing: Languages like Python and JavaScript support dynamic typing, where types are resolved during runtime, allowing for flexible and adaptable code.
Examples of Metaprogramming
1. Compile-Time Metaprogramming in C++ with Templates
Templates in C++ allow writing code that can operate on any data type. Here’s an example using templates:

cpp
Copy code
#include <iostream>
using namespace std;

// Template function to get the maximum of two values
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << max(10, 20) << endl;       // Outputs: 20 (int)
    cout << max(10.5, 20.5) << endl;   // Outputs: 20.5 (double)
    return 0;
}
*/


// #include <iostream>
 
// using namespace std;

// class Hello {
// private:
//     int n;
//     int m;

// public:
//     Hello ( int n1, int m1 ) {
//         n = n1;
//         m = m1;
//     }

//     void largest () {
//         if ( n > m ) {
//             cout << "N : " << n << " is largest" << endl;
//         }

//         else {
//             cout << "M : " << m << " is largest" << endl;
//         }
//     }
// };


// int main () {
 
//     Hello h ( 4.6, 4.5 );
//     h.largest ();
 
//     return 0;
// }

// AB UPER WALE ME WOH SAHI SE NHI DEKH RHA 4.5 WALE KO BHARA KEH RHA CZ WOH SIRF 4 TAK HE PARH SAKTA . WALE NI SO NOW BY USING TEMPLATES


// #include <iostream>
 
// using namespace std;

// template <typename T>

// class Hello {
// private:
//     T n;
//     T m;

// public:
//     Hello ( T n1, T m1 ) {
//         n = n1;
//         m = m1;
//     }

//     void largest () {
//         if ( n > m ) {
//             cout << "N : " << n << " is largest" << endl;
//         }

//         else {
//             cout << "M : " << m << " is largest" << endl;
//         }
//     }
// };


// int main () {
 
//     Hello <float> h ( 4.6, 4.5 ); // <float> yeh likhna zruri hai
//     h.largest ();
 
//     return 0;
// }

//****************** MAPS in c++ ******************

// #include <iostream>
// #include <map>
// #include <string>
 
// using namespace std;
 
// int main () {
// // MAPS STORE KRNE KE LIE ATA KEY VALUE PAYERS KO JESE KISI BACHE KE MARKS STORE KRNE TOU AP STORE KRO GE ROHAN KE ITNE MARKS ALI KE ITNE
//     map <string, int> marksMap;

//     marksMap["Sameer"] = 100;
//     marksMap["Ahmad"] = 80;
//     marksMap["Ali"] = 20;

//     map <string, int> :: iterator itr;

//     //Agar insert krna chaye kuch tou ese ->
//     // marksMap.insert ({ { "Kozo", 20 }, { "Momo", 95 } });
//      marksMap.insert(make_pair("Kozo", 20));
//     marksMap.insert(make_pair("Momo", 95));


//     for ( itr = marksMap.begin (); itr != marksMap.end (); itr++ ) {
//         cout << ( *itr ).first << " " << ( *itr ).second << endl;
//         // ( *itr ).first is se Name mil jai ga and ( *itr ).second is se marks
//     }
 
//     return 0;
// }

// EXCEPTION HANDLING -> Jese koi tem jhete ge tou world cup le jai ge agar tie ho gya tou super over agar woh bhe barabar tou jis ke boundaries zyada woh jheet gya right tou unexpected problems ate rehte ke agar yeh hoa tou yeh krna tou handle kese krna compile time bhe ho sakte run time bhe compile time me tou itne zarurat nhi line ka pata hota lakin run time me seg fault a gya yah abort(terminate) kr dia compiler ne tou kese pata chale ga ke error kaha ha itne line of code me tou run time me jo error ate us ko kis trha handle krna ?

// #include <iostream>
 
// using namespace std;

// class Customer {
// private:
//     string name;
//     int balance, accountNumber;

// public:
//     Customer ( string name, int balance, int accountNumber ) {
//         this -> name = name;
//         this -> balance = balance;
//         this -> accountNumber = accountNumber;
//     }

//     void deposit ( int amount ) {
//         if ( amount > 0 ) {
//             balance += amount;
//             cout << amount << " is credited successfully" << endl;
//             cout << "Current balance is : " << balance << endl;
//         }
//     }

//     void withdraw ( int amount ) {
//         if ( amount > 0 && amount <= balance ) {
//             balance -= amount;
//             cout << amount << " is debited successfully" << endl;
//             cout << "Current balance is : " << balance << endl;
//         }

//         else {
//             cout << "You balance is low" << endl;
//         }
//     }
// };


// int main () {
 
//     Customer c1 ( "Ali", 5000, 10 );
//     c1.deposit ( 100 );
//     c1.withdraw ( 20000 ); // Tou agar me ne yaha 20000 likh dia tou amount withdraw nhi ho sakta ab us ne if else nhi chalaya, ab yeh aik exception ha ke withdraw krna chata tha but amount zyada ho gya tou ab yaha if else likhu ga, ab You balance is low a rha tou ab user ko pata chal gya is tareke se exception ko handle kar lia 

//     return 0;
// }

// NOW AB KRTE KESE EXCEPTION PRO WAY ME 
// #include <iostream>
 
// using namespace std;

// class Customer {
// private:
//     string name;
//     int balance, accountNumber;

// public:
//     Customer ( string name, int balance, int accountNumber ) {
//         this -> name = name;
//         this -> balance = balance;
//         this -> accountNumber = accountNumber;
//     }

//     void deposit ( int amount ) {
//         if ( amount > 0 ) {
//             balance += amount;
//             cout << amount << " is credited successfully" << endl;
//             cout << "Current balance is : " << balance << endl;
//         }
//     }

//     void withdraw ( int amount ) {
//         if ( amount > 0 && amount <= balance ) {
//             balance -= amount;
//             cout << amount << " is debited successfully" << endl;
//             cout << "Current balance is : " << balance << endl;
//         }

//         else if ( amount < 0 ) {
//             throw "Amount should be greater then 0";
//         }

//         else {
//             throw "You balance is low"; // Jab throw mile ga tou woh use time neeche likha chor ke seedha catch pe jai neeche kuch bhe likha ho execute nhi ho ga
//             cout << "Hi" << endl; // Nhi chale ga, and koi value bhe send kr sakte like throw 10; but neeche catch ( int e ) {} kr dena
//         }
//     }
// };


// int main () {
 
//     Customer c1 ( "Ali", 5000, 10 );

//     try {
//         c1.deposit ( 100 );
//         c1.withdraw ( -20000 );
//         c1.withdraw ( 100 ); // Ab yeh tou theek hai lakin nhi chale ga cz is ke andar likha agar hm chate ke neeche wale cheze na chale agar exception aya tou andar likh sakte lakin agar bahir likh dia tou chal jai ga
//     } 
    
//     catch ( const char *e ) { // Your balance is low seedha yaha "e" me a ke print ho jai ga catch kr le ga us msg ko throw or throw wale line me koi endl nhi lagana
//     /*Why char* and not string?
//     In older C++ code, or C-style error handling, exceptions often used C-style strings, which are represented by char* (or const char* for constant strings).
//     C++ strings (i.e., std::string) are more modern and easier to work with, but char* is used for simplicity and compatibility in many older or low-level programs. A char* points to a sequence of characters (C-string), which is how strings were handled in the C language.
//     You can also throw a std::string, but in older-style C++, char* is more common.

//     2. Does char* e store an address?
//     Yes, exactly! char* e stores the memory address of the first character in a string. In this case:

//     throw "some message"; throws the address of the string "some message".
//     catch (const char* e) catches the address of that string, and e will point to the first character of the string "some message". You can then use e to access and print the string.
//     Key point:
//     char* e doesn't store the actual string itself. It holds a pointer (address) to the string in memory.*/
//         cout << "Exception occured : " << e << endl;
//     }

//     return 0;
// }

// Another Example

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     // int a, b;
//     // cin >> a >> b;
//     // if ( b == 0 ) {cout <<"b should not be 0"; return 0;}
//     // int c = a / b;
//     // cout << c << endl; // 4/0 0 de rha jab ke woh undefined hota tou is ko handle krte ab 1 method if ( b == 0 ) {cout <<"b should not be 0"; return 0;} ab is ko try throw and catch se bhe kr sakte

//     // Try, Throw and Catch

//     int a, b;
//     cin >> a >> b;
    
//     try {
//         if ( b == 0 ) {
//             throw "B can't be 0";
//         }
//         int c = a / b;
//         cout << c << endl; 
//     }

//     catch ( const char* e ) {
//         cout << "Exception occured : " << e << endl;
//     }

//     // AB AGAR SAA KAAM HO RHA JUST IF ELSE SE TOU IS KA KYA FAIDA NEXT CODE US PE
 
//     return 0;
// }

// RUN TIME EXAMPLE

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     int* p = new int[100000000000000000000]; // AB YEH AGAR 1K LINE KA CODE HO TOU KESE PATA CHALE GA KE KAHA SE ABORT HOA
//     cout << "Memory allocation is successfull" << endl;
//     delete[] p;
 
//     return 0;
// }
// #include <iostream>
 
// using namespace std;
 
// int main () {
//     try {
//         int* p = new int[100000000000000000]; // AB YEH AGAR 1K LINE KA CODE HO TOU KESE PATA CHALE GA KE KAHA SE ABORT HOA, SO AB YAHA PAR COMPILER AIK OBJ PHENKE KA JESE CATCH KR LE GA
//         cout << "Memory allocation is successfull" << endl;
//         delete[] p;
//     }

//     catch ( const exception &e ) {
//         cout << "Exception occured due to line 1121 : " << e.what () << endl; // e.what () se batata ke kya hoa hai

//         // Ans : Exception occured : std::bad_alloc
//     }
 
//     return 0;
// }

// Exception class -> derived us ke std::bad_alloc, std:run_time error, std::bad_cast, stdtype_id.

// #include <iostream>
 
// using namespace std;
 
// class Exception {
// protected:
//     string msg;

// public:
//     Exception ( string msg ) {
//         this -> msg = msg;
//     }

//     void what () {
//         cout << msg << endl;
//     }
// };


// int main () {
 
//     try {
//         int* p = new int[100000000000000000]; 
//         cout << "Memory allocation is successfull" << endl;
//         delete[] p;
//     }

//     catch ( const exception &e ) {
//         cout << "Exception occured due to line 1121 : " << e.what () << endl;// Ab what ke lie aik function
//     }

//     return 0;
// }


// FILE HANDLING -> AGAR FILE HANDLING NA HO TOU KESAY HO GA DOST NE FILE BHEJE US ME DATA KO SORT KRNA THA AAP NE WHATSAPP JA KE WOH FILE KHOLI OR VS CODE ME CODE LIKHA OR US FILE ME JO LIKHA US KO AS A INPUT DIA INPUT ME DATA SORT HO JAI GA AP US DATA KO COPY KR KE US FILE ME DALO GE DOST WALE TOU TOU MANUAL KAAM HO GYA YEH, LAKIN FILE HANDLING SE USE TIME DATA READ HO JATA WRITE HO JATA

// #include <iostream>
// #include <fstream>
 
// using namespace std;
 
// int main () {
 
//     ofstream fout; // ofstream class hai or woh us ka obj
//     fout.open ("zoom.txt"); // Create kr de ga or wirte kre ga agar pehle he create hoye to just open

//     fout << "Hello World";

//     fout.close ();

//     ifstream fin;
//     fin.open ("zoom.txt");

//     char c;
//     // fin >> c;
//     // c = fin.get ();

//     while ( !fin.eof () ) { // Jab end na ai likhe jao or sab = end ho gya tou false ho jai ge statement and stop 
//         cout << c;
//         // fin >> c; // Space nhi dia is ko cz woh space ko character nhi parhta, so is ke lie c = fin.get (); yeh likhna pare ga 
//         // c = fin.get ();
//     }

//     fin.close ();
 
//     return 0;
// }
// #include <iostream>
// #include <cstring> // Needed to use strcpy

// int main() {
//     const char* source = "Hello";  // The string we want to copy
//     char destination[20];           // Create an array to hold the copied string
//     source = "Hi";

//     strcpy(destination, source);    // Copy the string from source to destination

//     std::cout << destination;        // Print the copied string
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class GfG {
// public:
//   static int i;
//     // Static member function
//     static void printMsg() { 
//         i = 3;
//       cout << i << endl;
//       cout << "Welcome to GfG!"; }
// };
// int GfG::i = 2;
// int main() {
  
//     // Invoking a static member function
//     GfG::printMsg();
// }

// C++ program to create a member function of another class
// as a friend function
// #include <iostream>
// using namespace std;

// class base; // forward definition needed
// // another class in which function is declared
// class anotherClass {
// public:
//     void memberFunction(base& obj);
// };

// // base class for which friend is declared
// class base {
// private:
//     int private_variable;

// protected:
//     int protected_variable;

// public:
//     base()
//     {
//         private_variable = 10;
//         protected_variable = 99;
//     }

//     // friend function declaration
//     friend void anotherClass::memberFunction(base&);
// };

// // friend function definition
// void anotherClass::memberFunction(base& obj)
// {
//     cout << "Private Variable: " << obj.private_variable
//          << endl;
//     cout << "Protected Variable: " << obj.protected_variable;
// }

// // driver code
// int main()
// {
//     base object1;
//     anotherClass object2;
//     object2.memberFunction(object1);

//     return 0;
// }



// C++ program to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object.
#include <iostream>
 
using namespace std;
 
class A {
    private:
    int z;
public:
    int x;
    A () {
        cout << "A" << endl;
    }

protected:
    int y;

// private:
//     int z;
};


class B : public A {
    public:
    // x is public
    B () {
        cout << "B" << endl;
    }
    // y is protected
    // z is not accessible from B
};

class C : public A {
    // x is protected
    C () {
        cout << "C" << endl;
    }
    // y is protected
    // z is not accessible from C
};

class D : public A // 'private' is default for classes
{
    public:
    // x is private
    // void hi () {
    //     cout << "HI OF D" << endl;
    // }
    // void display () {
    //     hi ();
    // }
    // y is private
    // z is not accessible from D
};

int main () {
 
   A a;
//    D d;
//    d.display ();
 
 return 0;   
}