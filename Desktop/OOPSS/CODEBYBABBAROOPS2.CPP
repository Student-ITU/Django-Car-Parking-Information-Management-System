/*ENSCAPSULATION -> WRAPPING UP DATA MEMBERS AND FUNCTIONS
EXAMPLE:- WOH GOLI NHI HOTE CAPSULE TYPE ADHA CAPSULE SAMJH LO DATA MEMBER US MEIN CHOTE DANE OR ADHA FUNCTION CHOTE DANE TOU SAMJHO ALAG ALAG RAKHE HAIN AB IN KO SATH JOR DEIN GE WRAP KAR DEIN GE AIK CAPSULE BAN JAI GA TOU YEH HO GE ENCAPSULATION, AND SAMJH LO CAPSULE CLASS HAI JIS MEIN HM NE KUCH DATA MEMBERS AND KUCH FUNCTIONS LE LIE OR CLASS KE DUARA ENCAPSULATION ACHIEVE KR LE.
FULLY ENCAPSULATED CLASS: ALL D.M ARE PRIVATE private: int num; int num1;
WHY WE USE IT? ANS:INFO/DATA HIDING JESE PRIVATE BANATE TOU ACCESS NHI KAR PATE NA, ABHI SET/GET HEALTH KE BAAT NA KRO.
CLASS KO SIRF READ ONLY MARK KAR SAKTA.
CODE REUSABILITY.
UNITY TESTING(managibility).*/

//   return this->age;  //The use of this->age is necessary when there is a naming conflict between a local variable and a member variable in a class, and you want to specifically refer to the member variable.JUST YEH SAMJHANE KE LIE 
// #include<iostream>
// using namespace std;

// class Student {
// private:
//     int age;  // Member variable
// public:
//     void setAge(int age) {
//         this -> age = age;  // Differentiate between local and member variable
//     }

//     int getAge() {
//         int age = 100;  // Local variable with the same name
//         return this -> age + age;  // Use 'this->age' to refer to the member variable
//     }
// };

// int main() {
//     Student student;
//     student.setAge(20);
//     cout << "Age: " << student.getAge() << endl;
//     return 0;
// }



//



//THIS IS ACTUALLY ENCAPSULATION WOH HE JO PEHLE PARHA THA BS JO POINTS HAI KE KIS WAJA SE KARTE WOH YAAD RAKHNE KE BAAT
// #include<iostream>
// using namespace std;

// class Student{
// private:
//     string name;
//     int age;
//     int height;
// public:
//     int getAge() {
//         return this->age;  //The use of this->age is necessary when there is a naming conflict between a local variable and a member variable in a class, and you want to specifically refer to the member variable.
//     }

// };

// int main() {
    
//     Student first;
//     cout << "Sab sahi chal raha" << endl;
//     return 0;
// }


//INHERITENCE: AIK BANDE KE PAPA LAMBE HAI TOU WOH BHE LAMBA HAI MATLAB KOI QUALITY INHERIT HO GE. AGAR AIK HUMAN CLASS HAI US KE DATA MEMBERS HEIGHT WEIGHT HAIN TOU AGAR HM NE MALE CLASS BANANE JIS MEIN YEH SAB SAME LIKHNA TOU IS KA MATLAB HM NE MALE CLASS MEIN HUMAN CLASS INHERIT KAR LE. AB IDHR HUMAN PARENT CLASS HAI OR JO INHERIT KR RHY HOTE USE SUB CLASS/ CHILD CLASS YANI IDHR MALE HAI KEHTE

/*BASE = CHILD  -> RESULT
public = public -> public
public = private -> private
public = protected -> protected
protected = public -> protected
protected = protected -> protected
protected = private -> private
private = public -> not accessible
private = protected -> not accessible
private = private -> not accessible*/

// PUBLIC
// #include<iostream>
// using namespace std;

// class human{
// public:
//     int height;
//     int weight;
//     int age;

// public:
//     // int getWeight() {
//     //     return this -> weight;
//     // }

//     // void setWeight(int w) {
//     //     this -> weight = w;
//     // }

   
//     void sleep() {
//         cout << "sleeping" << endl;
//     }
 

// };
// //PROTECTED IS KINDA SIMILAR TO PRIVATE KE APNI CLASS MEIN ACCESS KR SAKTE PAR BAHIR NHI ACCESS KR SAKTE BUT 1 CONDITION KE CHILD CLASS ACCESS KR SAKTE
// class male : protected human { //MALE CLASS INHERITING HUMAN CLASS IN PUBLIC MODE, MALE CLASS INHERITING HUMAN CLASS IN PRIVATE MODE
// public:
//     string color;

//     // void sleep() {
//     //     cout << "sleeping" << endl;
//     // }

//     // int getWeight() {
//     //     return this -> weight;
//     // }

//     // void setWeight(int w) {
//     //     this -> weight = w;
//     // }
// //    int this -> age;
    
// };
// int main() {
    
//     male o;
//     // o.setWeight(11);
//     // cout << o.getWeight() << endl;
//     // cout << o.age << endl;
//     // cout << o.color << endl;
//     o.sleep();
//     // cout << o.weight << endl;
//     // cout << o.height << endl;
    
//     return 0;
// }


//PRIVATE

// #include<iostream>
// using namespace std;

// class human{
// private:  //AB YEH PARENT CLASS PRIVATE HAI OR ESE SUB CLASS MEIN PUBLIC WAY MEIN INHERIT KR RHY HAIN TOU NOT ACCESSIBLE HAI
//     int height;
//     int weight;
//     int age;

// public:
//     // int getWeight() {
//     //     return this -> weight;
//     // }

//     // void setWeight(int w) {
//     //     this -> weight = w;
//     // }

//     // void sleep() {
//     //     cout << "sleeping" << endl;
//     // }
//     // int Height;

// };

// class male : public human { //MALE CLASS INHERITING HUMAN CLASS IN PUBLIC MODE
// public:
// //     string color;
// //     void sleep() {
// //         cout << "sleeping" << endl;
// //     }

// //     int getWeight() {
// //         return this -> weight;
// //     }

// //     void setWeight(int w) {
// //         this -> weight = w;
// //     }
// //     int Height;
// };
// int main() {
    
//     male o;
//     // o.setWeight(11);
//     // cout << o.getWeight() << endl;
//     cout << o.age << endl;
//     // cout << o.color << endl;
//     // o.sleep();
//     // cout << o.weight << endl;
//     // cout << o.Height << endl;
//     // o.age
    
//     return 0;
// }

//PROTECTED

// #include<iostream>
// using namespace std;

// class human{
// protected:  //AB YEH PARENT CLASS PRIVATE HAI OR ESE SUB CLASS MEIN PUBLIC WAY MEIN INHERIT KR RHY HAIN TOU NOT ACCESSIBLE HAI
//     int height;
//     int weight;
//     int age;

// public:
//     int getWeight() {
//         return this -> weight;
//     }

//     void setWeight(int w) {
//         this -> weight = w;
//     }

//     void sleep() {
//         cout << "sleeping" << endl;
//     }
//     // int this -> height;

// };

// class male : public human { //MALE CLASS INHERITING HUMAN CLASS IN PUBLIC MODE
// public:
//     string color;
//     // void sleep() {
//     //     cout << "sleeping" << endl;
//     // }

//     // int getWeight() {
//     //     return this -> weight;
//     // }

//     // void setWeight(int w) {
//     //     this -> weight = w;
//     // }
//     // int this -> height;
// };
// int main() {
    
//     male o;
//     // o.setWeight(11);
//     // cout << o.getWeight() << endl;
//     cout << o.age << endl;
//     // cout << o.color << endl;
//     // o.sleep();
//     // cout << o.weight << endl;
//     // cout << o.height << endl;
//     // o.age
    
//     return 0;
// }

//SINGLE LEVEL INHERITENCE(same jo uper kiye woh single inheritence ke he example hai)

//MULTILEVEL INHERITENCE

// #include<iostream>
// using namespace std;

// class human{
// public:  //AB YEH PARENT CLASS PRIVATE HAI OR ESE SUB CLASS MEIN PUBLIC WAY MEIN INHERIT KR RHY HAIN TOU NOT ACCESSIBLE HAI
//     int height;
//     int weight;
//     int age;

// public:
//    void speak() {
//     cout << "Speaking" << endl;
//    }

   
// };

// class male : public human { //MALE CLASS INHERITING HUMAN CLASS IN PUBLIC MODE

// };

// class sameer : public male {
// public:
//     void say() {
//     cout << "Saying" << endl;
//    }
// };
// int main() {
    
//     human o1;
//     // sameer o1;
//     o1.speak();
//     // o1.say();    
// /*In your code, the say() function is a member of the sameer class, and it is not a member of the human class. When you create an object of type human (like o1 in your main function), it doesn't have the say() member function because that function is specific to the sameer class.

// So, when you try to call o1.say(), it's not valid because o1 is of type human, and the say() function is not a member of the human class.

// If you want to call the say() function, you need to create an object of type sameer:

// sameer o2;
// o2.say();
// This way, you are creating an object of the sameer class, and it has access to the say() function.*/
//     return 0;
// }

// MULTIPLE INHERITENCE

// #include<iostream>
// using namespace std;

// class Animal{
// public:  //AB YEH PARENT CLASS PRIVATE HAI OR ESE SUB CLASS MEIN PUBLIC WAY MEIN INHERIT KR RHY HAIN TOU NOT ACCESSIBLE HAI
//     int height;
//     int weight;
//     int age;

// public:
//    void speak() {
//     cout << "Bark" << endl;
//    }

// };

// class Human {
// public:
//     string color;

// public:
//     void speak() {
//         cout << "Speak" << endl;
//     }

// };

// //MULTIPLE INHERITENCE
// class Hybrid : public Animal, public Human {

// };

// int main() {
    
//     Hybrid o;
//     // o.Animal::speak();
//     // o.Human::speak();
//     o.speak();
// //  /*In C++, when you have a class that inherits from multiple base classes and there's a name conflict (like the speak() function in this case), you need to use the scope resolution operator (::) along with the base class name to specify which version of the function you want to call.

// // By writing o.Animal::speak(), you are explicitly telling the compiler to call the speak() function that belongs to the Animal class. Similarly, o.Human::speak() is specifying the speak() function from the Human class.

// // If you don't use the scope resolution operator and just write o.speak(), the compiler won't know which speak() function to call, resulting in an ambiguity error. The explicit use of :: clarifies the ambiguity and allows you to select the specific version of the function you want to invoke.*/  

// // /*KE AGAR C AIK CLASS HAI JO A AND B DONO KO INHERIT KR RAHA A AND B MEIN 2 FUNCTIONS HAIN SAME NAME SE AB WOH DONO C MEIN BHE HAIN TOU JAB CALL KAREIN GE C O; O.FUNC(); TOU PATA KESE CHALE GA KE KON SA CALL HOA IS KE LIE HM USE KRTE SCOPE RESOLUTION OPERATOR (::) JO ABHI UPER KIA UN CLASSES KA NAME LIKH DEN AO.ANIMAL::FUNC(); LIKE THIS.....*/
//     return 0;
// }

//HIERARCHICAL INHERITENCE
// #include<iostream>
// using namespace std;

// class A {
// public:
//     void func1() {
//         cout << "Inside function 1" << endl;
//     }
// };

// class B : public A {
// public:
//     void func2() {
//         cout << "Inside function 2" << endl;
//     }
// };

// class C : public A {
// public:
//     void func3() {
//         cout << "Inside function 3" << endl;
//     }
// };
// int main() {
    
//     A o1;
//     o1.func1();
//     cout << endl;

//     B o2;
//     o2.func1();
//     o2.func2();
//     cout << endl;

//     C o3;
//     o3.func1();
//     // o3.func2(); koi connection he nhi C ka B ke sath
//     o3.func3();
//     return 0;
// }

// HYBRID INHERITENCE(combination of hierarchical and multiple inheritence)
//                 B <- A -> C <- D  matlab C A and D don ke sath Inherit ho raha ho
// #include<iostream>
// using namespace std;

// // Base class 1
// class Animal {
// public:
//     void speak() {
//         cout << "Animal speaking" << endl;
//     }
// };

// // Base class 2
// class Human {
// public:
//     void talk() {
//         cout << "Human talking" << endl;
//     }
// };

// // Derived class inheriting from both Animal and Human
// class Hybrid : public Animal, public Human {
// public:
//     void hybridFunction() {
//         cout << "Hybrid function" << endl;
//     }
// };

// int main() {
//     // Create an object of Hybrid class
//     Hybrid hybridObj;

//     // Access functions from both base classes
//     hybridObj.speak();  // Accessing speak() from Animal
//     hybridObj.talk();   // Accessing talk() from Human

//     // Access function from the derived class
//     hybridObj.hybridFunction();

//     return 0;
// }

//INHERITENCE AMBIGUITY
//UPER LIKHA IS KE BARE MEIN ::

//POLYMORPHISM = MANY FORMS LIKE MERE FATHER MERE LIE PAPA HAIN MAMA KE LIE HUSBAND DADO KE LIE BETE TOU MERE PAPA KE MANY FORMS 
//TWO TYPES OF POLYMORPHISM
//1. COMPILE TIME POLYMORPHISM, 2. RUM TIME POLYMORPHISM(DONE BY VIRTUAL FUNCTION) run time polymorphism mein baad mein pata chalta ke kon sa function run hone wala hai
//COMPILE TIME POLYMORPHISM(STATIC POLYMORPHISM)
// TYPE 1 HAS FURTHER TWO TYPES 1. FUNCTION OVERLOADING, 2. OPERATOR OVERLOADING
// FUNCTION OVERLOADING
// #include<iostream>
// using namespace std;
// //YAAD RAKHNE WALE CHEEZ BS YEH HAI KE OVERLOADING SE SIRF PARAMETERS KE ANDAR WALE DATA TYPE SE HE KAAM BANE GA BAHIR RETURN TYPE SE NHI BAKI TOU PATA HE HAI KE AGAR OBJ CALL KREIN GE TOU KON SA PRINT HO GA FUNCTION UN KO BS DISCRIMINATE KIS TRHA KARNA YEH DEKH LIA 
// class A {
// public:
//     void Hello() {
//         cout << "Hello, Sameer here" << endl;
//     }

//     int Hello(char name) {
//         cout << "Hello, Sameer" << endl;
//     }

//     void Hello(string name) {
//         cout << "Hello" << endl;
//     }
    
// };

// int main() {
    
//     A o;
//     o.Hello();
//     o.Hello('s');
//     o.Hello("Sameer");
//     return 0;
// }

//ASSIGNMENT OPERATOR(for instance + operator add tou kr leta lakin us se subtract kr lein matlab is trha ka stuff)

// #include<iostream>
// using namespace std;


// int main() {
    

//     return 0;
// }

// RUN TIME POLYMORPHISM(DYNAMIC POLYMORPHISM). RUN TIME POLYMORPHISM it depends on inheritence, won't work until we use inheritence.
/*No, the provided code is not an example of runtime polymorphism. It is an example of function overriding, but it doesn't involve the use of virtual functions and pointers, which are necessary for achieving runtime polymorphism in C++.

In runtime polymorphism, you typically use virtual functions in a base class and override them in derived classes. Then, you use pointers or references of the base class type to refer to objects of derived classes, and during runtime, the appropriate overridden function is called based on the actual type of the object.

Here's a modified example that demonstrates runtime polymorphism:

cpp
Copy code
#include<iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal {
public:  
    void speak() override {
        cout << "Barking" << endl;
    }
};

int main() {
    Animal* animalPtr;

    Dog dog;
    animalPtr = &dog;

    // At runtime, the overridden speak() of Dog will be called
    animalPtr->speak();

    return 0;
}
In this example, the Animal class has a virtual function speak(), and the Dog class overrides it. In main(), we use a pointer of type Animal* to point to a Dog object. At runtime, when we call speak() through the pointer, it will call the overridden function in Dog (if it is declared as virtual in the base class). This is an example of runtime polymorphism.*/
// #include<iostream>
// using namespace std;

// class Animal {
// public:
//     void speak() {
//         cout << "Speaking" << endl;
//     }
// };

// class Dog : public Animal {
// public:  
//     void speak() {
//         cout << "Barking" << endl;
//     }
// };

// int main() {

//     Dog o;
//     o.speak(); //Function overriding matlab hm ne khud likha barking wala tou ese kehte function overriding bs woh dekho andar wala chala rha hai agar likha ho tou agar na likha ho tou speaking likhe g
//     return 0;
// }

//ABSTRACTION(IMPLEMENTATION HIDING KE JO ESSENTIAL CHEZE WOH DIKHA DO FAZOOL KE CHEZE DEKHANE KE ZARURAT NHI, jese email karte tou bs button ka kam hota ke dabao or kaam khatam email sent)

// #include<iostream>
// using namespace std;
 
// int main() {
    
//     return 0;
// }

//READ ON ABSTRACTION ------->>> see below
/*Abstraction is a concept in programming that involves simplifying complex systems by modeling classes based on real-world entities and representing their essential features while hiding unnecessary details. It is one of the core principles of object-oriented programming (OOP). Let's break down the concept with a simpler explanation:

Real-World Analogy:
Think of abstraction as using a TV remote. When you use a remote to control your TV, you don't need to know how the internal electronics work. You press a button to change the channel or adjust the volume without understanding the intricate details of how these actions are carried out.

Programming Analogy:
In programming, abstraction allows you to create classes that model real-world entities or concepts. These classes encapsulate the essential properties (attributes) and behaviors (methods) of the entity while hiding the underlying implementation details.

Essential vs. Non-Essential Details:
Abstraction focuses on exposing only the essential features of an object and hiding non-essential or complex details. This helps in simplifying the usage of objects and enhances the clarity of code.

Example:
Consider a Car class. The essential details might include attributes like brand, model, and year, and methods like startEngine and drive. The internal workings of the engine or transmission are abstracted away, allowing users of the Car class to interact with it at a higher level without worrying about the low-level details.

class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}

    void startEngine() {
        // Implementation details abstracted away
        cout << "Engine started" << endl;
    }

    void drive() {
        // Implementation details abstracted away
        cout << "Car is in motion" << endl;
    }
};
In the example, users of the Car class don't need to know how the engine starts or how the car drives; they can simply use the startEngine and drive methods. Abstraction allows us to focus on what the object does rather than how it does i*/

//Run time polymorphism
//Pointer to derived class
#include<iostream>
using namespace std;

class Base {
public: 
    int var1;

    void display() {
        cout << "Hello " << var1 << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Hello" << var1 << endl;
        cout << "Adios" << var1 << endl;
        cout << "Bye" << var1 << endl;
    }
};
int main() {
    
    Base * base_class_pointer; //Yeh pointer base class ke obj ko point kr raha hai
    Base o1;
    Derived o2;
    base_class_pointer = &o2;
    base_class_pointer -> display();
    base_class_pointer -> var1 = 34;
    //Base class ka pointer derived class ke object ko point kr raha, and esa ho sakta, agar base class ke pointer ko derived class se bhe point kra dia tou agar us pointer se diplay function call kro ge tou base class ka run ho ga.
    return 0;
}