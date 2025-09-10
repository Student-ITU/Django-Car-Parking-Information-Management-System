#include <iostream>
 
using namespace std;

struct Student {

public:
    int id;
    string name;

    void input();

};

    void Student::input() {
        cout << "Hi" << endl;
        cout << id << endl;
        cout << name << endl;
    }

int main () {
 
    Student s1;
    s1.id = 123;
    s1.name = "Sameer";
    s1.input();
 
    return 0;
}

// #include <iostream>
 
// using namespace std;

// class Demo { 
//     public: 
//     int a, b; 
//     Demo() 
//     { 
//         cout << "Default Constructor" << endl; 
//     } 
//     Demo(int as, int bs):a(as),b(bs) 
//     { 
//         cout << "parameterized Constructor values " << a << " "<< b << endl; 
//     } 
// } obj, obj1 (10, 2);

// int main () {
 
    

//     return 0;
// }

/*Class with Default and Parameterized Constructor
Define a class called Person with private members name (string) and age (int). Write a default constructor that initializes name to "Unknown" and age to 0, and a parameterized constructor that initializes these members to given values. Write member functions to display the person's details.*/

// #include <iostream>
 
// using namespace std;

// class Person{ 

// public:
//     int age;
//     string name;

// //     Person() {
// //         name = "Unknown";
// //         age = 0;
// //     }
// Person () : name("unknown"), age(0) {}

//     Person( string name, int age ) {
//         cout << "Name is : " << name << endl;
//         cout << "Age is : " << age << endl;
//     }
// };

// int main () {
 
//     Person p1;
//     Person p2( "Sameer", 18 );
//     return 0;
// }

/*Rectangle Class with Constructors

Define a class called Rectangle with private members length and width (both double). Write a default constructor that initializes both members to 1.0, and a parameterized constructor that initializes them to given values. Write member functions to calculate and return the area and perimeter of the rectangle.
*/


// #include <iostream>
 
// using namespace std;

// class Rectangle {

// private:
//     double length;
//     double width;

// public:
//     Rectangle() {
//         length = 1.0;
//         width = 1.0;
//     }

//     Rectangle( double l, double w ) {
//         length = l;
//         width = w;
//     }

//     void Answer() {
//         cout << "Length * Width is : " << length * width << endl;
//         cout << "Parameter is : " << 2 * (length + width) << endl;
//     }
// };

// int main () {
 
//     Rectangle r1;
//     r1.Answer();
//     Rectangle r2( 23.0, 23.0 ); //Constructor mein . nhi a ata
//     r2.Answer();
//     return 0;
// }

/*Define a class called Car with private members make (string), model (string), and year (int). Write a default constructor that initializes make and model to "Unknown" and year to 0, and a parameterized constructor that initializes these members to given values. Write member functions to display the car's details*/

// #include <iostream>
 
// using namespace std;

// class Car {

// private:
//     string model;
//     int year;

// public:
//     Car() {
//         model = "Unknown";  
//         year = 0;
//     }

//     Car( string m, int y ) {
//         model = m;
//         year = y;

//         cout << "Model is : " << m << " and " << "Year is : " << y << endl;
//     }
// };

// int main () {
 
//     Car c1;
//     Car c2( "Honda", 2024 );
 
//     return 0;
// }


/*Define a class called Employee with private members employeeID (int), name (string), and salary (double). Write a default constructor that initializes employeeID to 0, name to "Unknown", and salary to 0.0, and a parameterized constructor that initializes these members to given values. Write member functions to display the employee's details.*/

// #include <iostream>
 
// using namespace std;

// class Employee {
// private:
//     int employeeID;
//     string name;
//     double salary;

// public:
//     Employee () {
//         employeeID = 0;
//         name = "Unknown";
//         salary = 0.0;
//     }

//     Employee ( int ID, string n, double sal ) {
//         employeeID = ID;
//         name = n;
//         salary = sal;
//     }

//     void Display () {
//         cout << "Employee's Id is : " << employeeID << " Name is : " << name << " and Salary is : " << salary << endl;
//     }

// };

// int main () {
 
//     Employee e1;
//     Employee e2( 249, "Sameer", 1000000.0);
//     e2.Display();

//     return 0;
// }


/*BankAccount Class with Constructors

Define a class called BankAccount with private members accountNumber (int), accountHolder (string), and balance (double). Write a default constructor that initializes accountNumber to 0, accountHolder to "Unknown", and balance to 0.0, and a parameterized constructor that initializes these members to given values. Write member functions to deposit, withdraw, and display the account details.
*/

// #include <iostream>
 
// using namespace std;

// class BankAccount {
// private:
//     int accountNumber;
//     string accountHolder;
//     double balance;

// public:
//     BankAccount () {
//         accountNumber = 0;
//         accountHolder = "Unknown";
//         balance = 0.0;
//     }

//     BankAccount ( int a, string n, double b ) {
//         accountNumber = a;
//         accountHolder = n;
//         balance = b;
//     }

//     void Display () {
//         cout << "Employee's account number is : " << accountNumber << " Name is : " << accountHolder << " and balance is : " << balance << endl;
//     }
// };

// int main () {
 
//     BankAccount b1;
//     BankAccount b2 ( 249, "Sameer", 100000000.0 );
//     b2.Display();
//     return 0;
// }


/*
Define a class Person with the following private members:

name (string)
age (integer)
The class should have:

A parameterized constructor that initializes name and age.
A copy constructor that copies the name and age from another Person object.
*/

// #include <iostream>
 
// using namespace std;

// class OK {
// private:
//     string name;
//     int age;

// public:
//     OK () {
//         cout << "Default constructor" << endl;
//         name = "Unknown";
//         age = 0;
//     }

//     OK ( string n, int a ) {
//         this -> name = n;
//         (*this).age = a;
//     }

//     OK ( OK* t ) {
//         name = t->name;
//         age = t->age;
//     }

//     // OK ( OK& t ) {
//     //     name = t.name;
//     //     age = t.age;
//     // }

//     void display ();
// };


// void OK::display () {
//     cout << "Name is : " << name << endl;
//     cout << "Age is : " << age << endl;
// }


// int main () {
// //  hm (*this).name bhe likh sakte instead of this->, basically yeh pointer ke trha he kaam karta hai jab *this krte tou yah this-> krte tou dereference he hota us address ke value print krta
//     OK o; // So if u want to write this you have to write its constructor too, but if you didnt make the object but write its constructor then it will not give you an error but the constructor won't work
//     OK o1 ( "Sameer", 18 );
//     o1.display ();
//     // OK o2 ( &o1 );
//     OK o2 ( o1 );
//     o2.display ();
//     // agar yaha se address bheja and uper pointer se pas kia (pass an object by pointer) tou woh kehta ke t -> name ese likho instead of t.name agar (pass the object by reference) krein tou.
// /*Summary
// Using Reference (&): When you pass the object by reference, you use the dot (.) operator to access its members because you are directly accessing the object itself.

// Using Pointer (*): When you pass the object by pointer, you use the arrow (->) operator to access its members because you are accessing the object through its address.*/

//     return 0;
// }


//  Fast lab 4

// #include <iostream>
 
// using namespace std;

// class Date {
// private:
//     int Day;
//     int Month;
//     int Year;

// public:
//     Date () {
//         Day = 1;
//         Month = 1; 
//         Year = 1926;
//         cout << "Default Constructor called!" << endl;
//     }

//     Date ( int d, int m, int y ) {
//         this -> Day = d;
//         this -> Month = m;
//         this -> Year = y;
//     }

//     // void print ( int d, int m, int y ) {
//     //     this -> Day = d;
//     //     this -> Month = m;
//     //     this -> Year = y;
//     //     cout << "The date is : " << Day << " / " << Month << " / " << Year << endl; 
//     // }

//     void print () {
//         cout << "The date is : " << Day << " / " << Month << " / " << Year << endl; 
//     }

//     void input () {
//         cout << "Enter your date of birth :" << endl;
//         cout << "Enter day :" << endl;
//         cin >> Day;
//         cout << "Enter month :" << endl;
//         cin >> Month;
//         cout << "Enter year :" << endl;
//         cin >> Year;
//     }

//     // Date () {
//     //     cout << "xmasDay!" << endl; //t is giving error -> Constructor can't be redeclared.
//     // }

//     void setDay ( int d ) {
//         this -> Day = d;
//     }

//     void setMonth ( int m ) {
//         this -> Month = m;
//     }

//     void setYear ( int y ) {
//         this -> Year = y;
//     }

//     // int getDay () {
  
//     //     return Day;
//     // }

//     // int getMonth () {
//     //     return Month;
//     // }

//     // int getYear () {
//     //     return Year;
//     // }

//     int Compare ( Date d1 ) {
//        if (this -> Year > d1.Year) {
//         return 1;
//        }

//        else if (this -> Year < d1.Year) {
//         return -1;
//        }

//         else {
//             if (this -> Month > d1.Month) {
//                 return 1;
//             }

//             else if (this -> Month < d1.Month) {
//                 return -1;
//             }

//             else {
//                 if (this -> Day > d1.Day) {
//                 return 1;
//                 }

//                 else if (this -> Day < d1.Day) {
//                 return -1;
//                 }

//                 else {
//                     return 0;
//                 }
//             }

//         }
//     }

//     Date IncrementMonth () {
//        Date temp;
//        temp.Day = this -> Day;

//        if (this ->Month < 12) {
//          temp.Month = ++this -> Month;
//        } 
//        else {
//         this->Month = 1;
//        }
   
//        temp.Month = ++this->Month;
//        temp.Year = this-> Year;
//     }

//     int getDay () {
//         return Day;
//     }

//      int getMonth () {
//         return Month;
//     }

//      int getYear () {
//         return Year;
//     }

//     ~Date () {
//         cout << "Destructor called!" << endl;
//     }

// };

// int main () {
//  // aik object banana hai jis ka naam date1 hai is ke andar mein ne value set krne hi 1 2 2012 lakin mein setter functions and input ka use nhi kar sakta functions
//     Date date1;  

//     Date independenceDay ( 14, 8, 1947 );
//     independenceDay.print ();
 
//     date1.input ();
//     date1.print ();

//     Date xmasDay;
//     xmasDay.setDay ( 25 );
//     xmasDay.setMonth ( 12 );
//     xmasDay.setYear ( 2018 );
//     xmasDay.print ();
//     cout << xmasDay.getDay () << " / ";
//     cout << xmasDay.getMonth () << " / ";
//     cout << xmasDay.getYear () << endl;

//     Date temp;
//     temp = xmasDay;
//     cout << "Temp is :" << endl;
//     temp.print ();
//     Date date3 (2, 234, 4); 

//     date1.setMonth (8);
//     date1.print ();
//     Date date2;
//     date2.setDay (2);
//     date2.setMonth (3);
//     date2.setYear (2012);
//     date2.print ();

//     Date today (31, 5, 2024);
//     Date independence (14, 8, 1947);
//     cout << today.Compare(independence) << endl;

//     Date Datee ( 2, 01, 2016 ); // this yani main wale
//     Datee.IncrementMonth ();
//     cout << Datee.getDay() << " / " <<  Datee.getMonth() << " / " <<  Datee.getYear() << endl;
    
//     // date1.input ();
    
//     // date1.print ();
//     // Date date2 ( 2, 3, 2012 );
//     // date2.print ();

//     return 0;
// }
 

// #include <iostream>
// using namespace std;
// class Date{
// private:
//     int Day;
//     int Month;
//     int Year;
// public:
//     Date(){
//         cout<<"Default Constructor called!"<<endl;
//         Day=1;
//         Month=1;
//         Year=1926;
//     }
//     void getdata(int day,int month,int year){
//         cout<<"Overloaded function called!"<<endl;
//         Day=day;
//         Month=month;
//         Year=year;
//     }
//     void printdata(){
//         cout<<Day<<"/"<<Month<<"/"<<Year<<endl;
//     }
//     ~Date(){
//         cout<<"Destructor called!"<<endl;
//     }
//     void Input(){
//         cout<<"Enter your details for your birthday:"<<endl;
//         cout<<"Day:";
//         cin>>Day;
//         cout<<"Month:";
//         cin>>Month;
//         cout<<"Year:";
//         cin>>Year;
//     }
//     void Output(){
//         cout<<Day<<"/"<<Month<<"/"<<Year<<endl;
//     }
//     void setDay(int day){
//         Day=day;
//     }
//     void setMonth(int month){
//         Month=month;
//     }
//     void setYear(int year){
//         Year=year;
//     }
//     int getDay(){
//         return Day;
//     }
//     int getMonth(){
//         return Month;
//     }
//     int getYear(){
//         return Year;
//     }
//     int CompareData(int day1,int day2,int month1,int month2,int year1,int year2){
//         if(year1==year2){
//             if(month1>month2){
//                 return -1;
//             }
//             if(month1==month2){
//                 if(day1>day2){
//                     return -1;
//                 }
//                 if(day1==day2){
//                     cout<<"The dates are same!"<<endl;
//                 }
//                 else{
//                     return 0;
//                 }
//             }
//             else{
//                 return 0;
//             }
//         }
//         if(year1>year2){
//             return -1;
//         }
//         else{
//             return 0;
//         }
//     }
//     void DateIncrement(int day,int month,int year){
//         if(month==12){
//             month=1;
//         }
//         else{
//               month++;
//         }
//         cout<<day<<"/"<<month<<"/"<<year<<endl;
//     }
// };

// int main() {
//     int day,month,year,compare;
//     Date Date1;
//     Date independenceDay;
//     Date Birth;
//     Date Xmasday;
//     Date temp;
//     Date Compare;
//     Date IncrementMonth;
//     Date1.printdata();
//     cout<<"Independence Day:";
//     independenceDay.getdata(14,8,1947);
//     independenceDay.printdata();
//     cout<<endl;
//     Birth.Input();
//     cout<<"BirthDay:";
//     Birth.Output();
//     cout<<endl;
//     Xmasday.setDay(25);
//     Xmasday.setMonth(12);
//     Xmasday.setYear(2018);
//     cout<<"XmasDay:";
//    day= Xmasday.getDay();
//     cout<<day<<"/";
//     month=Xmasday.getMonth();
//     cout<<month<<"/";
//    year= Xmasday.getYear();
//     cout<<year<<endl;
//         temp.setDay(Xmasday.getDay());
//         temp.setMonth(Xmasday.getMonth());
//         temp.setYear(Xmasday.getYear());
//         cout << "Temp (Xmasday): ";
//     temp.Output();
//     compare=Compare.CompareData(16,25,5,12,2005,2018);
//     if(compare==0){
//         cout<<"Date 1 is smaller!"<<endl;
//     }
//     else{
//         cout<<"Date 1 is larger!"<<endl;
//     }
//     IncrementMonth.DateIncrement(2,1,2016);
//     return 0;
// }



/*Question:
Consider the following scenario where you need to create a simple program in C++ that demonstrates multiple inheritance. You are tasked with creating a class structure for a university system.
Define a base class Person with the following attributes and methods:
string name
int age
void display(): A method that displays the name and age.
Define another base class Employee with the following attributes and methods:
int employeeID
double salary
void display(): A method that displays the employeeID and salary.
Define a derived class Professor that inherits from both Person and Employee. This class should have the following attributes and methods:
string subject
void display(): A method that displays the name, age, employeeID, salary, and subject.
Implement the classes in such a way that an object of the Professor class can properly initialize and display all the attributes from both base classes along with its own.
Explanation:
This question requires you to understand and implement multiple inheritance in C++. The Professor class inherits from both Person and Employee, which means it should have all the attributes and methods of both base classes. You need to ensure that when creating a Professor object, you properly initialize and display the data from all parent classes.*/


#include <iostream>
 
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
//     Person ( string n, int a ) {
//         name = n;
//         age = a;
//     }
    Person(string n, int a) : name (n), age (a) {}  //(., ::, :, ->)

    void display () {
        cout << "Name is : " << name << " and Age is : " << age << " ";
    }

    ~Person () {
        cout << "DC in parent" << endl;
    }
};

class Employee {
protected:
    int employeeID;
    double salary;

public:
    Employee ( int e, double s ) : employeeID (e), salary (s) {
        
    }

    void display () {
        cout << "Employee's ID is : " << employeeID << " and Salary is : " << salary << " ";
    }

    ~Employee () {
        cout << "DC in parent" << endl;
    }
};

class Professor : private Person, public Employee {
private:
    string subject;

public:

    Professor(string n, int a, int id, double sal, string subj) : Person(n, a), Employee(id, sal) // Call base constructors
    
// /*Yeh colon : initialization list ka shuruati hissa hai. Iska istemal constructor initialization list ko shuru karne ke liye hota hai. Colon : yeh batata hai ke ab initialization list shuru hoti hai aur constructor ki body ke pehle aati hai.

// Initialization list ke baad, constructor ki body aati hai, jo ki curly brackets {} ke andar hoti hai. Yeh bataata hai ke base class ke subobjects ke sahi taur par initialize hone ke baad, constructor ki baki code execute ho.

/*Upar diye gaye code mein, : Person(n, a), Employee(id, sal) initialization list base class sub objects ko initialize karta hai, aur phir {} mein subject = subj; constructor ki body mein subject member variable ko subj ki value se initialize karta hai.*/
    {
        // Initialize base class members using assignment
        // name = n;
        // age = a;
        // employeeID = id;
        // salary = sal;

        // Initialize own member
        subject = subj;
    }

    void display () {
       Person::display (); //. nhi laga sakte
       Employee::display ();
       cout << "Subject is : " << subject << endl;
    }

    ~Professor () {
        cout << "DC in child" << endl;
    }
};

int main () {
 
    string name, subject;
    int age, employeeID;
    double salary;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Employee ID: ";
    cin >> employeeID;
    cout << "Enter Salary: ";
    cin >> salary;
    cout << "Enter Subject: ";
    cin >> subject;

    Professor p1 ( name, age, employeeID, salary, subject );
    p1.display ();
    return 0;
}


/*School Management System: Create a base class Person with attributes name, age, and address. Then create derived classes Student and Teacher with additional attributes such as rollNumber and subjectTaught, respectively. Implement methods to display details of students and teachers.*/


#include <iostream>
 
using namespace std;

class Person {
protected:
    string name;
    int age;
    int address;

public:
    Person(string n, int a, int ad) : name(n), age(a), address(ad) {}

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Address: " << address << ", ";
    }
};

class Student : public Person {
protected:
    int rollNumber;

public:
    // Student ( int r, string n, int a, int ad ) : rollNumber ( r ), name ( n ), age ( a ), address ( ad ) {};
    Student(int r, string n, int a, int ad) : Person(n, a, ad), rollNumber(r) {}

    void display() {
        name = "n"; // can use bcz of protected name
        Person::display();
        cout << "Roll Number: " << rollNumber << " " << endl;
    }

    // void display () {
    //     cout << "Name is : " << name << " Roll number is : " << rollNumber << " Age is : " << age << " Address is : " << address << " ";
    // }
};

class Teacher : public Person {
protected:
    string subjectTaught;

public:
    // Teacher ( string s, string n, int a, int ad ) : subjectTaught ( s ), name ( n ), age ( a ), address ( ad ) {};

    // void display () {
    //     Person::display();

    //     cout <<  "Name is : " << name << " Age is : " << age << " Address is : " << address << "Subject taught : " << subjectTaught << " ";
    // }

    Teacher(string s, string n, int a, int ad) : Person(n, a, ad), subjectTaught(s) {};

    void display() {
        Person::display();
        cout << "Subject Taught: " << subjectTaught << " ";
    }
};

int main () {
    
    string name;
    int age;
    int address;
    int rollNumber;
    string subjectTaught;

    cout << "Enter the name :" << endl;
    cin >> name;
    cout << "Enter the age :" << endl;
    cin >> age;
    cout << "Enter the address :" << endl;
    cin >> address;
    cout << "Enter the rollNumber" << endl;
    cin >> rollNumber;

    Student s1 ( rollNumber, name, age, address );
    s1.display();

    cout << "Enter the name :" << endl;
    cin >> name;
    cout << "Enter the age :" << endl;
    cin >> age;
    cout << "Enter the address :" << endl;
    cin >> address;
    cout << "Enter the Subject taught : " << endl;
    cin >> subjectTaught;

    Teacher t1 ( subjectTaught, name, age, address );
    t1.display();

    return 0;
}


/*Multiple Inheritance
Question 1:
Define a base class Vehicle with a method start(). Define another base class Engine with a method run(). Create a derived class Car that inherits from both Vehicle and Engine, and implements a method drive() that calls both start() and run() methods.*/

#include <iostream>
 
using namespace std;

class Vehicle {
public: 
    void start () {
        cout << "Start" << endl;
    }
};

class Engine { // agar inherit nhi kia tou us ke cheez istemal nhi kr sakte
public: 
    void run () {
        cout << "Run" << endl;
    }
};

class Car : public Vehicle, public Engine {
public:
    void drive () {
        start ();
        run ();
    }
};

int main () {
 
    Car c1;
    c1.drive ();
    c1.start();// ho ga cz public hai
    //c1.run();//protected hai tou nhi ho ga sirf public he ho sakta
    Vehicle x;
    Engine p;
    p.run (); // protected hai tou nhi ho ga
    x.start();
 
    return 0;
}

/*Define a base class Person with attributes name and age, and a method display(). Create a derived class Employee that adds an attribute employeeID and overrides the display() method. Finally, create a class Manager that derives from Employee, adds an attribute department, and overrides the display() method to show all attributes.*/

#include <iostream>
 
using namespace std;

class Person {
public:
    int age;
    string name;

public:
    Person ( string n, int a ) {
        name = n; 
        age = a;
    }

    void display () {
        cout << "Name is : " << name << ", Age is : " << age << ", ";
    }
};


class Employee : public Person {
private:
    int employeeID;

public: //bohot he secret ho tou private or protected
    Employee ( string n, int a, int id ) : Person ( n, a ) { //Constructor initialization list
        employeeID = id;
    }

    void display () {
        Person::display();
        cout << "Employee Id is : " << employeeID << " ";
    }
};


class Manager : public Employee { //employee me person hai or manager mein dono
private:
    string department;

public:
    Manager ( string n, int a, int id, string d ) : Employee ( n, a, id ) {
        department = d;
    }

    void display () {
        Employee::display();
        cout << "Department is : " << department << endl;
    }
};


int main () {
    
    int age, employeeID;
    string name, department;

    cout << "Enter the name : ";
    cin >> name;
    cout << "Enter the age : ";
    cin >> age;
    cout << "Enter the employee id : ";
    cin >> employeeID;

    Employee e1 ( name, age, employeeID );
    e1.display ();

    cout << endl;
    cout << "Enter the name : ";
    cin >> name;
    cout << "Enter the age : ";
    cin >> age;
    cout << "Enter the department : ";
    cin >> department;

    Manager m1 ( name, age, employeeID, department );
    m1.display ();
 
    return 0;
}


/*Define a base class Animal with a method makeSound(). Create two derived classes Dog and Cat, each overriding the makeSound() method to print "Woof!" and "Meow!" respectively.*/

#include <iostream>
 
using namespace std;

class Animal {
public:
    void makeSound () {
        cout << "I am animal" << endl;
    }
};


class Dog : public Animal {
public:
    void makeSound () {
        Animal::makeSound ();
        cout << "I am dog" << endl;
    }
};


class Cat : public Animal {
public:
    void makeSound () {
        cout << "I am cat" << endl;
    }
};


int main () {
 
    Dog d1;
    d1.makeSound ();

    Cat c1;
    c1.makeSound ();
 
    return 0;
}

/*Hybrid -> Define a base class Person with attributes name and age, and a method display(). Create another base class Employee with an attribute employeeID and a method showID(). Then, create a derived class Teacher that inherits from both Person and Employee, and adds an attribute subject and a method displayAll() that shows all attributes.*/

#include <iostream>
 
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person ( string n, int a ) {
        name = n;
        age = a;
    }

    void display () {
        cout << "Name is : " << name << ", Age is : " << age << ", ";
    }
};


class Employee {
private:
    int employeeID;

public:
    Employee ( int e ) {
        employeeID = e;
    }

    void showID () {
        cout << "Employee id is : " << employeeID << ", ";
    }
};


class Teacher : private Person, private Employee {
private:
    string subject;

public:
    Teacher ( string n, int a, int e, string s ) : Employee ( e ), Person ( n, a ) {
        subject = s;
    }

    void displayAll () {
        Person::display ();
        display(); // ye error kyun nhi de rha ??? Is lie ke public tha or agr private inherit ke waja se lag rha tou is ko hm main mein nhi use kr sakte lakin dusre class me kar sakte 
        Employee::showID ();
        cout << "Subject is : " << subject << endl;
    }
};


int main () {
    
    string name, subject;
    int age, employeeID;

    cout << "Enter the name : " << " ";
    cin >> name;
    cout << "Enter the age : " << " ";
    cin >> age;
    cout << "Enter the employee id : " << " ";
    cin >> employeeID;
    cout << "Enter the subject : " << " ";
    cin >> subject;
    
    Teacher t1 ( name, age, employeeID, subject );
    t1.display ();
    t1.displayAll ();

    return 0;
}


// #include <iostream>
 
// using namespace std;

// class Date {
// private:
//     int Day;
//     int Month;
//     int Year;

// public:
//     Date () {
//         Day = 1;
//         Month = 1;
//         Year = 1966;
//         cout << "Default constructor called" << endl;
//     }

//     void print () {
//         cout << "Date is : " << Day << " / " << Month << " / " << Year << endl;
//     }

//     Date ( int d, int m, int y ) : Day ( d ), Month ( m ), Year ( y ) {
//         cout << "Overloaded constructor called" << endl;
//     }

//     void input () {
//         cout << "Enter the Day" << endl;
//         cin >> Day;
//         cout << "Enter the Month" << endl;
//         cin >> Month;
//         cout << "Enter the Year" << endl;
//         cin >> Year;
//     }

//     void setDay ( int d ) {
//         Day = d;
//     }

//     void setMonth ( int m ) {
//         Month = m;
//     }

//     void setYear ( int y ) {
//         Year = y;
//     }

//     int getDay () {
//         return Day;
//     }

//     int getMonth () {
//         return Month;
//     }

//     int getYear () {
//         return Year;
//     }

//     int compareDate ( int d, int m, int y ) {

//         if ( this -> Year > y ) {
//             cout << "Independence's date is greater" << endl;
//             return 1;
//         }

//         else if ( this -> Year < y ) {
//             cout << "Independence's date is not greater" << endl;
//             return -1;
//         }

//         else {
//             cout << "Year is equal so now checking month" << endl;
//             if ( this -> Month > m ) {
//                 cout << "Independence's date is greater" << endl;
//                 return 1;
//             }

//             else if ( this -> Month < m ) {
//                 cout << "Independence's date is not greater" << endl;
//                 return -1;
//             }

//             else {
//                 cout << "Month is equal so now checking day" << endl;
//                 if ( this -> Day > d ) {
//                     cout << "Independence's date is greater" << endl;
//                     return 1;
//                 }

//                 else if ( this -> Day < d ) {
//                     cout << "Independence's date is not greater" << endl;
//                     return -1;
//                 }

//                 else {
//                     cout << "Day is equal so both dates are equal" << endl;
//                     return 0;
//                 }
//             }
//         }
//     }

//     Date incrementMonth () {
//         int m, d, y;
//         d = this -> Day;
//         y = this -> Year;
//         m = this -> Month;

//         if ( m < 12 ) {
//             m++;
//         }

//         else {
//             m = 1;
//         }

//        return Date ( d, m, y );
//     }

//     ~Date () {
//     cout << "Destructor called" << endl;
// }

// };


// int main () {
 
//     Date date1;
//     Date independenceDay ( 24, 5, 1947 );
//     Date xmasDay;
//     Date temp;
//     Date oldDate ( 12, 12, 2024 );

//     date1.print ();
//     independenceDay.print ();
//     date1.input ();
//     date1.print ();
//     xmasDay.print ();
//     xmasDay.setDay ( 25 );
//     xmasDay.setMonth ( 12 );
//     xmasDay.setYear ( 2024 );
//     cout << xmasDay.getDay () << " / " << xmasDay.getMonth () << " / " << xmasDay.getYear () << endl;
//     cout << "hit";
//     temp.print ();
    
//     temp = xmasDay;
//     temp.print ();

//     independenceDay.compareDate ( 30, 5, 1947 ); // date1 se kyun nhi a raha sahi

//     Date newDate = oldDate.incrementMonth ();
//     cout << "Old date was : " << " ";
//     oldDate.print ();
//     cout << "New date is : " << " ";
//     newDate.print ();

//     return 0;
// }

#include <iostream>
 
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person ( string n, int a ) {
        name = n;
        age = a;
    }

    void display () {
        cout << "Name is : " << name << ", Age is : " << age << ", ";
    }
};


class Employee {
private:
    int employeeID;

public:
    Employee ( int e ) {
        employeeID = e;
    }

    void showID () {
        cout << "Employee id is : " << employeeID << ", ";
    }
};
// //Agar to kisi class ka object banain main me or us obj ke through chezo ko access krein tou private private rhy ge or public public as it is, agar inheritance ke duraan hm logo ne inheritence private tareke se ke hoye hai tou child to public or protected chezo ko access kr le ga lakin agar hm child ke obj ke through main mein parent ke kisi bhe cheez ko either woh private ho either woh public ho either protected ho ham access nhi kar sakte cz inheritence privatize tareke se hoye hai but agar inheritance public tareke se hoye hai tou child ke kahani tou same rhy ge but main mein hm child ke obj ke through parent ke public chezo ko bhe access kr sakte hain.

class Teacher : private Person, public Employee { // yeh private main ke lie hai
private:
    string subject;

public:
    Teacher ( string n, int a, int e, string s ) : Employee ( e ), Person ( n, a ) {
        subject = s;
    }

    void displayAll () {
        Person::display ();
        // display(); //Error a rha
        Employee::showID ();
        cout << "Subject is : " << subject << endl;
    }
};


int main () {
    
    string name, subject;
    int age, employeeID;

    cout << "Enter the name : " << " ";
    cin >> name;
    cout << "Enter the age : " << " ";
    cin >> age;
    cout << "Enter the employee id : " << " ";
    cin >> employeeID;
    cout << "Enter the subject : " << " ";
    cin >> subject;
    
    Teacher t1 ( name, age, employeeID, subject );
    t1.displayAll ();
    // t1.display ();
    // t1.showID (); //tab he chale ga agar public inherit kia employee ko

    return 0;
}


// #include <iostream>
// using namespace std;

// struct MyStruct {
//     char a;     // 1 byte
//     int b;      // 4 bytes
//     char c;     // 1 byte
// };

// int main() {
//     cout << "Size of MyStruct: " << sizeof(MyStruct) << endl;
//     return 0;
// }

// struct MyStruct {
//     int b;      // 4 bytes
//     char a;     // 1 byte
//     char c;     // 1 byte
// };

// int main() {
//     cout << "Size of MyStruct: " << sizeof(MyStruct) << endl;  //8 ai ga cz hm ne us ke setting sahi kr de int sab se pehle then char char is trha nhi kia char pehle then int then char
//     return 0;
// }


#include <iostream>
 
using namespace std;
class hello {
    int i;
public:
    void display () {
    cout << "Hi" << endl;
}
};

void display1 () {
    display ();
    cout << "Hi" << endl;
}

int main () {
 
    hello h;
    h.display();
 
    return 0;
}

#include <iostream>
using namespace std;

class Parent {
private:
    int secret;

public:
    Parent() : secret(42) {}

    // Getter function to access private member
    int getSecret() const {
        return secret;
    }

    // Setter function to modify private member
    void setSecret(int s) {
        secret = s;
    }

    ~Parent () {
        cout << "Destructor calledd!" << endl;
    }
};

// Child class inheriting from Parent
class Child : public Parent {
public:
    void displaySecret() {
        // Accessing private member of Parent through getter
        cout << "Secret Data: " << getSecret() << endl;
    }

    // void changeSecret(int newSecret) {
    //     // Modifying private member of Parent through setter
    //     setSecret(newSecret);
    // }

    ~Child () {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Parent parent;
    Child child;

    // Accessing and modifying private member using child class
    child.displaySecret();  // Output: Secret Data: 42
    // child.changeSecret(84); // is ka functon bana ke bh ekr sakte or seedh etrha set ko call kr ke bhe kr sakt
    child.setSecret(84);
    child.displaySecret();  // Output: Secret Data: 84

    return 0;
}


// Friend class 
 
// #include <iostream>
 
// using namespace std;

// class A {
// private:
//     int pri;

// protected:
//     int pro;

// public:
//     A () {
//         pri = 1;
//         pro = 2;
//     }

//     friend class B;
// };

// class B {
// public:
   
//     void display ( A& a ) {
//         cout << " Pri is : " << a.pri << endl;
//         cout << " Pro is : " << a.pro << endl;
//     }
// };

// int main () {
 
//     A aa;
//     B bb;
//     bb.display ( aa );
 
//     return 0;
// }


//Global friend function


 
// #include <iostream>
 
// using namespace std;

// class A {
// private:
//     int pri;

// protected:
//     int pro;

// public:
//     A () {
//         pri = 1;
//         pro = 2;
//     }
 
//     friend void display ( A& a);
// };

//     void display ( A& a ) {
//         cout << " Pri is : " << a.pri << endl;
//         cout << " Pro is : " << a.pro << endl;
//     }


// int main () {
 
//     A aa;
//     display( aa );
//     return 0;
// }


// Member Function of Another Class as Friend Function

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
//     << endl;
//     obj.protected_variable = 1111;
//     cout << "Protected Variable: " << obj.protected_variable;
// }

// // driver code
// int main()
// {
//     base object1;
//     anotherClass object2;
//     object2.memberFunction(object1); // yeh step gor se dekho kyun kia cz class ka member function hai is lie

//     return 0;
// }



// #include <iostream>
 
// using namespace std;

// class Hi {
// private:
//     int bye;

// protected:
//     int gt;

// public:

//     Hi () {
//         bye = 2;
//         gt = 3;
//     }

//     void display () {
//         cout << bye << " " << gt << endl;
//     }
// };

// class A : protected Hi {
// private:
//     int h;

// protected:
//     int g;

// public:

//     A () {
//         h = 22;
//         g = 33;


//     }

//     void mm () {
//         cout << h << " " << g << endl;
//         display();
//     }
// };

// int main () {
 
//     Hi vv;
//     vv.display();
//     A aa;
//     aa.mm ();
 
//     return 0;
// }



// 2 classes and un dono ke chezo ko global function mein access krna

// #include <iostream>
 
// using namespace std;

// class ABCD;

// class ABC {
// private:
//     int hi;

// protected:
//     int bye;

// public:                     
//     ABC () {
//         hi = 2;
//         bye = 3;
//     }

//     friend void member ( ABC& a, ABCD& b );
// };

// class ABCD {
// private:
//     int hii;

// protected:
//     int byee;

// public:
//     ABCD () {
//         hii = 22;
//         byee = 33;
//     }

//     friend void member ( ABC& a , ABCD& b);
// };

// void member ( ABC& a, ABCD& b ) {
//     cout << a.hi << " " << a.bye << endl;
//     cout << b.hii << " " << b.byee << endl;
// }

// int main () {
 
//     ABCD b;
//     ABC a;
//     member ( a, b );
 
//     return 0;
// }



// Member Function of Another Class as Friend Function


// #include <iostream>
 
// using namespace std;

// class ABC;

// class XYZ {
// public:
//     void member ( ABC& obj );
// };


// class ABC {
// private:
//     int private_variable;

// protected:
//     int protected_variable;

// public:
//     ABC()
//     {
//         private_variable = 10;
//         protected_variable = 99;
//     }

//     friend void XYZ::member ( ABC& obj );
// };


// void XYZ::member ( ABC& obj ) {
//     cout << "Private Variable: " << obj.private_variable << endl;
//     cout << "Protected Variable: " << obj.protected_variable << endl;
// }


// int main () {
 
//     ABC aa;
//     XYZ bb;
//     bb.member ( aa );
 
//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     // Define a 2D array to store strings
//     string arr[2][3];

//     // Taking input for the 2D array
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << "Enter data for row " << i + 1 << ":" << endl;

//             cout << "Enter name: ";
//             cin >> arr[i][j];
//             j++;

//             cout << "Enter initial: ";
//             cin >> arr[i][j];
//             j++;

//             cout << "Enter age: ";
//             cin >> arr[i][j];
            
//         }
//     }

//     // Print the 2D array
//     cout << "\nThe 2D array is:" << endl;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// OPERATOR OVERLOADING / OPERATOR OVERLOADING through member function

// #include <iostream>
 
// using namespace std;

// class Complex {
// private:
//     int real, img;

// public:
//     Complex ( int r = 0, int i = 0 ) { // Default parameterized constructor
//         real = r;
//         img = i;
//     }

//     Complex operator+( Complex& obj ) {
//         Complex rex;
//         rex.real = real + obj.real;
//         rex.img = img + obj.img;

//         return rex;
//     }

//     void print () {
//         cout << "Real is : " << real << " and Img is : " << img << endl;
//     }
// };

// int main () {
 
//     Complex c1 ( 10, 5 ), c2 ( 2, 4 );
//     Complex c3 = c1 + c2;
//     c3.print ();
    
//     return 0;
// }

// Operator overloading through non member function

// #include <iostream>
// using namespace std;
// class Complex {
// private:
// 	int real, imag;

// public:
// 	Complex(int r = 0, int i = 0)
// 	{
// 		real = r;
// 		imag = i;
// 	}
// 	void print() { cout << real << " + i" << imag << endl; }
// 	// The global operator function is made friend of this
// 	// class so that it can access private members
// 	friend Complex operator+(Complex const& c1,
// 							Complex const& c2);
// };
// Complex operator+(Complex const& c1, Complex const& c2)
// {
// 	// return Complex(c1.real + c2.real, c1.imag + c2.imag);
//     Complex cs;
//     cs.real = c1.real + c2.real;
//     cs.imag = c1.imag + c2.imag;
//     return cs;
// }
// int main()
// {
// 	Complex c1(10, 5), c2(2, 4);
// 	Complex c3
// 		= c1
// 		+ c2; // An example call to "operator+"
// 	c3.print();
// 	return 0;
// }


//Ask from sir ke public members global function mein access nhi hote class ke ?

// #include <iostream>

// using namespace std;

// class A {
// public:
//     int a;

// public:
//     A () {
//         a = 2;
//     }

//     void input () {
//     cout << a << endl;
// }
// };

// void input1 () {
//     // A::input ();
//     cout << "ji" << endl;
//     }

// int main () {
 
//     A v;
//     v.input ();
//     input1 ();
 
//     return 0;
// }

// MEANS PUBLIC CHEZO KO BHE ACCESS NHI KR SAKTE AGAR OBJ NA BANAUN OR BS CLASS KE PUBLIC MEMBER FUNCTION KO ACCESS KRU IN GOBAL FUNCTION JO UPER KIA. 
// #include <iostream>

// using namespace std;

// class A {
// private:
//     int a;
// public:
//     A () {
//         a = 2;
//     }

//     void input () {
//         cout << a << endl;
//         cout << "Hi " << endl;
//     }
// };

// // Global function that takes an object of class A
// void input1 (A& obj) {
//     obj.input();
//     // obj.a; //yeh kaam friend function se ho ga 
// }

// int main () {
//     A v;
//     v.input (); //Begair object ke dekho nhi kr sakte call us class ke member function ko
//     input1( v ); // Pass the object to the global function
//     return 0;
// }



// #include <iostream>

// using namespace std;

// class A {
// public:
//     int a;

//     A () {
//         a = 2;
//     }

//     void input () {
//         cout << a << endl;
//     }

//     // Declare the global function as a friend
//     friend void globalInput(A& obj);
// };

// // Global function declared as friend
// void globalInput(A& obj) {
//     obj.input();
//     obj.a = 3 + 1;
//     obj.input();
// }

// int main () {
//     A v;
//     globalInput(v); // Call the friend function
//     return 0;
// }




//Mein aik sawal ko jo friend function se hoa us ko inheritence and getter setter se krne laga is ko krne laga down woh code hai jis ko change krne lga. But hoa ni mujh se

// #include <iostream>
// using namespace std;
// class Complex {
// private:
//     int real, imag;
 
// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         imag = i;
//     }
//     void print() { cout << real << " + i" << imag << endl; }
//     // The global operator function is made friend of this
//     // class so that it can access private members
//     friend Complex operator+(Complex const& c1,Complex const& c2);
// };
// Complex operator+(Complex const& c1, Complex const& c2)
// {
//     // return Complex(c1.real + c2.real, c1.imag + c2.imag);
//     Complex res;
//     res.real = c1.real + c2.real;
//     res.imag = c1.imag + c2.imag;
//     return res;
// }
// int main()
// {
//     Complex c1(10, 5), c2(2, 4);
//     Complex c3 = c1+ c2; // An example call to "operator+"
//     c3.print();
//     return 0;
// }

//


// #include <iostream>
// using namespace std;
 
// class ComplexNumber {
// private:
//     int real;
//     int imaginary;
 
// public:
//     ComplexNumber(int real, int imaginary)
//     {
//         this->real = real;
//         this->imaginary = imaginary;
//     }
//     void print() { cout << real << " + i" << imaginary; }
//     ComplexNumber operator+(ComplexNumber c2)
//     {
//         ComplexNumber c3(0, 0);
//         c3.real = this -> real + c2.real;
//         c3.imaginary = this -> imaginary + c2.imaginary;
//         return c3;
//     }
// };
// int main()
// {
//     ComplexNumber c1(3, 5);
//     ComplexNumber c2(2, 4);
//     ComplexNumber c3 = c1 + c2;
//     c3.print();
//     return 0;
// }


// Float ke sath operator overloading

// C++ program to demonstrate can also be used for implicit
// conversion to the class being constructed
// C++ Program to Demonstrate the working
// of conversion operator
// #include <iostream>
// using namespace std;
// class Fraction {
// private:
// 	int num, den;

// public:
// 	Fraction(int n, int d)
// 	{
// 		num = n;
// 		den = d;
// 	}

// 	// Conversion operator: return float value of fraction
// 	operator float() const
// 	{
// 		return float(num) / float(den);
// 	}
// };

// int main()
// {
// 	Fraction f(2, 5);
// 	float val = f;
// 	cout << val << '\n';
// 	return 0;
// }



//Fast inheritence lab

// #include <iostream>
// #include <string>
 
// using namespace std;

// class Person {
// private:
//     string firstName;
//     string lastName;

// protected:
//     int age;

// public:
//     void setData ( string s ) {
//         firstName = s;
//     }

//     string getData () {
//         return firstName;
//     }

//     void display () {
//         cout << firstName << endl;
//     }

//     ~Person () {
//         cout << "Person Destructor called!" << endl;
//     }

//     void input () {
//         cout << "Hello" << endl;
//     }
// };


// class Student : public Person {
// private:
//     float cgpa;

// public:
//     ~Student () {
//         cout << "Student Destructor called!" << endl;
//     }
// };


// class Undergraduate : public Student {
// private:
//     string fypName;

// public:
//     ~Undergraduate() {
//         cout << "Undergraduate Destructor called!" << endl;
//     }
// };


// class Graduate : public Student {
// private:
//     string thesisTopic;

// public:
//     ~Graduate() {
//         cout << "Graduate Destructor called!" << endl;
//     }
// };


// class Faculty : public Person {
// private:
//     int courseCount;
//     int telephoneNumber;


// public:
//     ~Faculty() {
//         cout << "Faculty Destructor called!" << endl;
//     }
// };


// int main () {
 
//     Person p1;
//     Faculty f;
//     f.input ();
//     p1.setData ( "Sameer" );
//     p1.getData ();
//     p1.display ();
 
//     return 0;
// }

//Strings ke conceptttt

// #include <iostream>
// using namespace std;
// #include <string>

// int main() {
    // std::string str = "Sameer";
    // string str[5] = {"He", "jjjjj", "jdienfe", "OOOIUYTR", "kkkkk"}; // yaha string mein size ka masla koi nhi 5 hai 5 he rhy ga yeh error nhi de ga is ke trha char arr[5] = ke agar 5 likhe cheze tou 6 bhe add kro
    // char arr[5] = "SOOO"; // Yaha par 5 likha cz char wale mein aik extra ata character jo ke null character hai
    // char arr[6] = {'H', 'e', 'l', 'l', '3', '\0'}; // is ko bhe masla nhi hota ke aik zyada lagao woh bs uper wale ko masla hai yeh character array hai agar is ke akhir mein \0 likhtye tou yeh complete character array bante
//     char arr[6];
//     for ( int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }
// // cout << endl;
    // for ( int i = 0; i < 5; i++) {
    //     cout << arr[i] << endl;
    // }

    // Input
    // cout << str[0];
    // cout << str[5];

    // for ( int i = 0; i < 6; i++) {
    //     cin >> str[i];
    // }

    // cout << endl;
    // for ( int i = 0; i < 5; i++) {
    //     cout << str[i] << endl;
    // }

    // for ( int i = 0; i < 5; i++) {
    //     cout << arr[i] << endl;
    // }
    // cout << str[0] << endl;

    // Printing
    // for(int i = 0; i < 5; i++) {
    //     std::cout << "String " << i+1 << ": " << str[i] << std::endl;
    // }


//     string st[5];

//     for ( int i = 0; i < 4; i++ ) {
//         cin >> st[i];
//     }

//     for ( int i = 0; i < 4; i++ ) {
//         cout << st[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     char str[100];  // Large enough to store the input string

//     cout << "Enter a string: ";
//     cin >> str;  // Note: This stops at the first space

//     cout << "You entered: " << str << endl;

//     return 0;
// }


// insertion and extraction operator overloadingg

// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     int real, imag;

// public:
//     // Constructor with default arguments
//     Complex(int r = 0, int i = 0) {
//         real = r;
//         imag = i;
//     }

//     // Friend functions to overload << and >>
//     friend ostream & operator << (ostream &out, const Complex &c);
//     friend istream & operator >> (istream &in, Complex &c);
// };

// // Definition of the overloaded << operator
// ostream & operator << (ostream &out, const Complex &c) {
//     out << c.real;
//     out << "+i" << c.imag << endl;
//     return out;
// }

// // Definition of the overloaded >> operator
// istream & operator >> (istream &in, Complex &c) {
//     cout << "Enter Real Part ";
//     in >> c.real;
//     cout << "Enter Imaginary Part ";
//     in >> c.imag;
//     return in;
// }

// int main() {
//     Complex c1;
//     cin >> c1;  // Calls the overloaded >> operator
//     cout << "The complex object is ";
//     cout << c1;  // Calls the overloaded << operator
//     return 0;
// }


//Yeh me kr rha practive operator overloading

// #include <iostream>
 
// using namespace std;

// class Complex {
// private:
//     int real;
//     int imag;

// public:
//     Complex ( int r = 0, int i = 0 ) {
//         real = r;
//         imag = i;
//     }

//     Complex operator+ ( Complex& obj ) {
//         Complex hi;

//         hi.real = this -> real + obj.real;
//         hi.imag = this -> imag + obj.imag;
//         return hi;
//     }

//     void print () {
//         cout << real << " " << imag << endl;
//     }
// };


// int main () {
 
//     Complex a ( 10, 4 );
//     Complex b ( 20, 3 );
//     Complex c = a + b;
//     c.print ();
 
//     return 0;
// }


// #include <iostream>
 
// using namespace std;

// class A {
// public: // yaha public krein ge tou chale ga agar private yah protected kia tou nhi chale ga in composition.
//     int x;
//     int y;

// public:
//     A ( int x, int y ) {
//         this -> x = x;
//         this -> y = y;
//     }
// };


// class B {
// private:
//     A obj;

// public:
//     B ( int m, int n ) : obj ( m, n ) {
        
//     }

//     void area () {
//         cout << "Area is : " << obj.x * obj.y << endl;
//     }
// };


// int main () {
 
//     B o ( 2, 4 );
//     o.area ();
 
//     return 0;
// }


//cant do this


/*#include <iostream>
 
using namespace std;

class A {
public:
    int x;
    int y;

public:
    A ( int x, int y ) {
        this -> x = x;
        this -> y = y;
    }

    void setX ( int x ) {
        this -> x = x;
    }

    void setY ( int y ) {
        this -> y = y;
    }
};


class B {
private:
    A obj;

public:
    B ( int m, int n ) {
        obj.setX ( m );
        obj.setY ( n );
    }

    void area () {
        cout << "Area is : " << obj.x * obj.y << endl;
    }
};


int main () {
 
    B o ( 2, 4 );
    o.area ();
 
    return 0;
}*/


// #include <iostream> 
// using namespace std; 

// // Simple class 
// class A { 
// public: 
// 	int x; 

// 	// COnstructor initializing 
// 	// the data members 
// 	A() { x = 0; } 

// 	A(int a) 
// 	{ 
// 		cout << "Constructor A(int a) is invoked" << endl; 
// 		x = a; 
// 	} 

//     void setX ( int y ) {
//         x = y;
//     }

//     int getterX () {
//         return x;
//     }

// }; 

// // Complex class 
// class B { 
// 	int data; 
// 	A objA; 

// public: 
// 	// COnstructor initializing the 
// 	// data members 
// 	// B(int a) 
	 
// 	// { 
// 	// 	data = a; 
// 	// } 

// 	// Function to print values 
// 	// of data members in class 
// 	// A and B 

//     void setValue ( int d ) {
//         data = d;
//         objA.setX ( d );
//     }

//     // objA.setValue1 ( d ); // function ke andar nhi

// 	void display() 
// 	{ 
// 		cout << "Data in object of class B = " << data 
// 			<< endl; 
// 		// cout << "Data in member object of "
// 		// 	<< "class A in class B = " << objA.x;
//         cout << "Data in member object of class A in class B = " << objA.getterX(); 
// 	} 
// }; 

// // Driver code 
// int main() 
// { 
// 	// Creating object of class B 
// 	B objb;
//     objb.setValue( 12 );

// 	// Invoking display function 
// 	objb.display(); 
// 	return 0; 
// }



//OOPS QUESTION SIR SENT ME

// #include <iostream>
 
// using namespace std;

// class Printer {
// public:
//     void methodP () {
//         cout << "Printer" << endl;
//     }

//     ~Printer () {
//         cout << "Destructor of printer" << endl;
//     }
// };


// class Scanner {
// public:
//     void methodS () {
//         cout << "Scanner" << endl;
//     }

//     ~Scanner () {
//         cout << "Destructor of scanner" << endl;
//     }
// };


// class Copier {
// public:
//     void methodC () {
//         cout << "Copier" << endl;
//     }

//     ~Copier () {
//         cout << "Destructor of copier" << endl;
//     }
// };


// class AllInOne : public Printer, public Scanner, public Copier {
// public:
//     ~AllInOne () {
//         cout << "Destructor of all in one" << endl;
//     }
// };


// int main () {
 
//     AllInOne a;
//     a.methodP ();
//     a.methodS ();
//     a.methodC ();
 
//     return 0;
// }


//Define a class Battery with a method getChargeLevel(). Create a class Smartphone that contains a Battery object and a method checkBattery(). Demonstrate the composition by creating a Smartphone object and calling checkBattery().

// #include <iostream>
 
// using namespace std;

// class Battery {
// public:
//     void getChargeLevel () {
//         cout << "Hi" << endl; 
//     }

//     ~Battery () {
//         cout << "Destructor of battery" << endl;
//     }
// };


// class SmartPhone {
// private:
//     Battery b;

// public:
//     void checkBattery () {
//         b.getChargeLevel ();
//         cout << "Bye" << endl;
//     }

//     ~SmartPhone () {
//         cout << "Destructor of samrt phone" << endl;
//     }
// };


// int main () {
 
//     SmartPhone s;
//     s.checkBattery ();
 
//     return 0;
// }

//Create a class Address with members street and city. Define a class Employee that contains an Address object and has members name and id. Write methods to set and display the employee's details along with their address. Demonstrate the composition by creating an Employee object and displaying its details.

// #include <iostream>
 
// using namespace std;

// class Address {
// public:
//     int streets;
//     string city;

//     void setAddress ( int s, string c ) {
//         streets = s;
//         city = c;
//     }
// };


// class Employee {
// private:
//     Address a;
//     int id;
//     string name;

// public:

//     Employee ( int i, string n ) {
//         id = i;
//         name = n;
//     }

//     void display () {
//         a.setAddress ( 151, "Lahore" );
//         cout << "Name is : " << name << ", id is : " << id << ", street is : " << a.streets << ", city is : " << a.city << endl;
//     }
// };


// int main () {
 
//     Employee e ( 12, "Sameer" );
    
//     e.display ();
 
//     return 0;
// }


//Define a class Engine with a method start(). Create a class Car that has an Engine object as a member. Write methods in Car to start the engine and demonstrate composition by creating a Car object and starting its engine.

// #include <iostream>
 
// using namespace std;

// class Engine {
// public:
//     void start () {
//         cout << "Start engine" << endl;
//     }

//     ~Engine () {
//         cout << "Destructor of Engine" << endl;
//     }
// };


// class Car {
// private:
//     Engine e;

// public:
//     void start () {
//        e.start ();
//        cout << "Car is started" << endl;
//     }

//     ~Car () {
//         cout << "Destructor of Car" << endl;
//     }
// };


// int main () {
 
//     Car c;
//     c.start ();
 
//     return 0;
// }


//Create a class Person with protected members name and age, and public methods getName() and getAge(). Derive a class Student from Person, add a private member grade, and provide public methods to set and get the grade. Write a program to demonstrate access to the inherited and new members.

// #include <iostream>
 
// using namespace std;

// class Person {
// private:
//     int age;
//     string name;

// public:
//     string getName () {
//         return name;
//     }

//     int getAge () {
//         return age;
//     }

//       void setA ( int a ) {
//         age = a;
//     }

//     void setN ( string n ) {
//         name = n;
//     }
// };


// class Student : public Person {
// private:
//     char grade;

// public:
//     // void setA ( int a ) {
//     //     age = a;
//     // }

//     // void setN ( string n ) {
//     //     name = n;
//     // }

//     void setG ( char g ) {
//         grade = g;
//     }

//     void display () {
//         // cout << "Name is : " << name << ", Age is : " << age << ", Grade is : " << grade << endl;
//         cout << "Name is : " << getName() << ", Age is : " << getAge() << ", Grade is : " << grade << endl;
//     }
    
// };


// int main () {
 
//     Student s;
//     s.setA ( 18 );
//     s.setN ( "Sameer" );
//     s.setG ( 'S' );
//     s.display ();
 
//     return 0;
// }


//Same bs zara change kr rha

// #include <iostream>
 
// using namespace std;

// class Person {
// protected:
//     int age;
//     string name;

// public:
//     string getName () {
//         return name;
//     }

//     int getAge () {
//         return age;
//     }

// };


// class Student : public Person {
// private:
//     char grade;

// public:

//     void setA ( int a ) {
//         age = a;
//     }

//     void setN ( string n ) {
//         name = n;
//     }

//     void setG ( char g ) {
//         grade = g;
//     }

//     void display () {
//         cout << "Name is : " << name << ", Age is : " << age << ", Grade is : " << grade << endl;
//         cout << "Name is : " << getName() << ", Age is : " << getAge() << ", Grade is : " << grade << endl;
//     }
    
// };


// int main () {
 
//     Student s;
//     s.setA ( 18 );
//     s.setN ( "Sameer" );
//     s.setG ( 'S' );
//     s.display ();
 
//     return 0;
// }

// #include <iostream>
 
// using namespace std;

// class Person {
// protected:
//     int age;
//     string name;

// public:

//     void display () {
//         cout << "Base" << endl;
//     }
// };


// class Student : public Person {
// private:
//     char grade;

// public:

//     void display () {
//        cout << "Derived" << endl;
//     }
    
// };


// int main () {
 
//     Student s;
   
//     return 0;
// }



// #include <iostream>
 
// using namespace std;

// class Person {
// protected:
//     int age;
//     string name;

// public:

//     Person () {
//         cout << "Hi" << endl;
//     }
     
//     void display () {
//         cout << "Base 1." << endl;
//     }
// };


// class Student : public Person {
// private:
//     char grade;

// public:

//     // void display () {  //ab is ko mein ne chor dia tou dekho us ne base class ka call kar dia display wala student ke object se
//     //    cout << "Base 2" << endl;
//     // }
    
// };


// int main () {
    
//     Person p;
//     p.display ();
//     Student s; // Constructor ko call kare ga base class ke but function ko nhi, agar derived class mein display na hota tou woh base ka display call kr deta s.display () se.
//     s.display ();

//     return 0;
// }

//*********
//Static variable

// C++ program to demonstrate
// the use of static Static
// variables in a Function
// #include <iostream>
// #include <string>
// using namespace std;

// void demo()
// {
// 	// static variable
// 	static int count = 0; //this 0 sirf pehle bare execute ho ga us ke baad count apne value ko retain krta rhy ga agar 3 ho gya tou 3 rhy ga na ke 0 kr de dubara jese normal int count mein hota
// 	cout << count << " ";

// 	// value is updated and
// 	// will be carried to next
// 	// function calls
// 	count++;
// }

// int main()
// {
// 	for (int i = 0; i < 5; i++) {
// 		demo();
//     }
// 	return 0;
// }


//Goto statement not a good practice
/*Explanation
Initialization: The variable i is initialized to 0.
Label: The label start: is defined. Labels are identifiers followed by a colon.
Print and Increment: The program prints the current value of i, then increments i by 1.
Condition Check: The program checks if i is less than 5. If true, it uses goto start; to jump back to the label start:. This causes the loop to repeat.
End Condition: When i reaches 5, the condition if (i < 5) becomes false, and the goto statement is not executed. The program then proceeds to return 0;, ending the program.
Output
The output of this program will be:

Copy code
0 1 2 3 4
Each time demo is called, the static variable count retains its value across calls, demonstrating how the goto statement causes the program to loop until i is no longer less than 5.

Key Points
The goto statement is useful for jumping to a specific part of the code.
Overuse of goto can make code difficult to follow and maintain.
It's generally better to use loops and functions to control the flow of your program.*/

// #include <iostream>
// using namespace std;

// int main() {
//     int i = 0;

//     start:
//     cout << i << " ";
//     i++;
//     if (i < 5) {
//         goto start;
//     }

//     return 0;
// }


//Inline functions
/*Why Use Inline Functions?
When you call a function in your program, the CPU has to do several things like storing where to return after the function finishes, copying arguments, and jumping to the function's code. This can be overhead, especially for small functions where the time spent making the call is more than the time taken by the function itself. Jalde chale ga code

Advantages of Inline Functions:

No Function Call Overhead: Inline functions are expanded at the place where they are called, eliminating the overhead of function calls.

No Stack Operations: They avoid the push/pop operations on the stack used for function calls, saving some processing time.

Potential for Optimization: Compilers can optimize the inline function's code based on the context where it's used, which isn't possible with regular function calls.

Reduced Code Size: For small functions, inlining can result in less overall code because it avoids duplicating function call overhead.

Disadvantages of Inline Functions:

Increased Code Size: Inlining can lead to larger executable files because each call to an inline function includes a copy of its code.

Reduced Cache Efficiency: Too much inlining can fill up the CPU's cache with code instead of data, reducing the speed advantage of fast cache access.

Compile Time Overhead: If an inline function changes, all places where it's used must be recompiled, which can increase compile time.

Not Ideal for Embedded Systems: Inlining might not be suitable for systems where minimizing code size is more critical than maximizing speed.

Example:
Here’s a simple example in C++ to illustrate an inline function:

cpp
Copy code
#include <iostream>
using namespace std;

// Inline function to calculate the cube of a number
inline int cube(int s) {
    return s * s * s;
}

int main() {
    cout << "The cube of 3 is: " << cube(3) << "\n";
    return 0;
}
In this example, the cube() function is declared as inline. When cube(3) is called in main(), the compiler inserts the code of cube() directly where it's called, avoiding the overhead of a function call.

Inlining is useful for small, frequently-used functions where the benefits outweigh the drawbacks related to code size and cache efficiency.

Jab aap ek inline function ko bar-bar call karte hain, jaise aapne kaha hai ki 10 ya 100 baar, toh inline function ki faayde aur nuksaan ko samajhna zaroori hai:

Jab Inline Function Use Karein:
Chhote Functions: Agar cube() jaise function chhota hai aur baar-baar use hota hai, jaise aapne 10 ya 100 baar likhne ka scenario diya hai, toh inline karna faydemand ho sakta hai. Yeh function call overhead ko kam karta hai aur performance ko improve karta hai.

Optimization Possibility: Compilers inline functions ko context ke according optimize kar sakte hain, jo ki normal function calls mein possible nahi hota.

Jab Inline Function Na Use Karein:
Code Size Badhna: Har inline function call uska code ko copy karta hai, isse aapka executable file ka size badh sakta hai. Agar aap bahut saare inline functions likhte hain jo bade hote hain, toh file size bahut badi ho sakti hai.

Cache Efficiency Kam Hona: Zyaada inlining cache efficiency ko bhi kam kar sakta hai, kyunki CPU ke cache mein code ki jagah data ko store karna mushkil ho jata hai.

Compile Time Overhead: Agar kisi inline function mein changes hote hain, toh sabhi jagah jahan uska use hua hai, unhe dobara compile karna padta hai, jo compile time ko badha sakta hai.

Isliye, agar aap cout << "The cube of 3 is: " << cube(3) << "\n"; ko 10 ya 100 baar likh rahe hain aur cube() function chhota hai, toh inline karna thik ho sakta hai. Lekin agar yeh function bada hai ya frequently change hota hai, toh har baar inline karna thik nahi hai.

Yeh decision aapke specific use case aur performance requirements par depend karta hai.
*/

// #include <iostream>
 
// using namespace std;

// inline int Product ( int a, int b ) {
//     return a * b;
// }


// int main () {
 
//     int a = 3;
//     int b = 4;

//     cout << Product ( a, b );
//     cout << Product ( a, b );
//     cout << Product ( a, b );
//     cout << Product ( a, b );
//     cout << Product ( a, b );
//     cout << Product ( a, b );
//     cout << Product ( a, b );
//     cout << Product ( a, b );

 
//     return 0;
// }

/* Certainly! Let's break down classes, objects, and Object-Oriented Programming (OOP) in a simple and easy-to-understand way:

Classes:
Definition: Think of a class as a blueprint or template that defines the characteristics (attributes) and behaviors (actions) of something.
Example: If you think about a class called Car, it would describe what all cars have in common—attributes like color, make, model, and behaviors like start, accelerate, stop.
Purpose: Classes organize data (attributes) and operations (methods) into a single unit, making it easier to manage and reuse code.
Objects:
Definition: An object is a specific instance or realization of a class. It's like an actual object that you can create based on the blueprint provided by a class.
Example: If Car is a class, then an object of this class could be myCar, which could have specific attributes (e.g., red Toyota Camry) and can perform actions (e.g., start the engine).
Purpose: Objects allow you to work with concrete instances of classes, each with its own set of data and behaviors.
Object-Oriented Programming (OOP):
Definition: OOP is a programming paradigm that revolves around the concept of objects, where everything in the program is treated as an object with its own state (attributes) and behavior (methods).
Key Concepts:
Encapsulation: Bundling data (attributes) and methods (functions) together within a class to hide implementation details and protect data integrity.
Inheritance: Allowing one class (subclass) to inherit properties and behaviors from another class (superclass), promoting code reuse and hierarchy.
Polymorphism: Allowing methods to behave differently based on the object they are acting upon, enhancing flexibility and adaptability.
Simple Analogy:
Library Analogy: Think of classes as different types of books (e.g., Fiction, Non-Fiction), each defining what all books of that type have in common (attributes like title, author, and actions like read). Objects are like specific copies of those books that you can borrow and interact with.
Benefits of OOP:
Modularity: Breaking down complex problems into smaller, manageable units (classes and objects).
Reusability: Code written in OOP can be reused across different parts of the program or in other programs.
Flexibility: OOP allows for easier maintenance and updates, as changes to one part of the program do not necessarily affect other parts.
Understanding: OOP promotes a clearer and more intuitive way of understanding and modeling real-world entities and interactions.
In summary, OOP provides a structured and intuitive way to organize and design programs by focusing on objects and their interactions. Classes define blueprints, objects are instances of these blueprints, and OOP principles like encapsulation, inheritance, and polymorphism enhance code organization, reusability, and flexibility.

//

class ka 2nd name aik template ya blueprint hai

ChatGPT
Ji haan, aap sahi samajh rahe hain! Class ka doosra naam "template" ya "blueprint" hai. Chaliye is concept ko thoda aur samajhte hain:

Class as a Template or Blueprint:
Template (Template): Jaise ki naam se hi pata chalta hai, ek class ek template ki tarah kaam karta hai jisko use karke objects create kiye jaate hain. Ismein hum define karte hain ki ek object kis tarah ka data (attributes) rakhega aur kis tarah ke actions (methods) perform kar sakta hai.

Blueprint (Blueprint): Ek blueprint ke jaise, ek class deta hai ki ek object ka structure kaisa hoga. Jaise ki blueprint mein ghar ke design aur measurements hote hain, usi tarah ek class mein bhi object ke attributes aur behaviors ka design hota hai.

Example:
Maan lijiye hum ek simple example lete hain:

cpp
Copy code
// Example of a class (template) in C++
class Car {
public:
    // Attributes
    string make;
    string model;
    int year;

    // Methods
    void start() {
        cout << "Starting the car..." << endl;
    }

    void accelerate(int speed) {
        cout << "Accelerating to " << speed << " km/h..." << endl;
    }

    void stop() {
        cout << "Stopping the car." << endl;
    }
};
Is example mein, Car ek class hai jo ek car ke blueprint ko define karta hai. Is blueprint mein humne car ke attributes (make, model, year) aur behaviors (start, accelerate, stop) ko define kiya hai. Jab hum is class ka use karte hain, hum ek object (instance) create kar sakte hain jo Car class ke blueprint ke according behave karega.

Importance of Class as a Template:
Structure: Class defines the structure and organization of data (attributes) and actions (methods), providing a clear blueprint for creating objects.

Consistency: Using classes ensures that all objects created from the same class follow the same structure and behavior, promoting consistency and maintainability in code.

Reusability: Classes allow code to be reused across different parts of the program or in different programs, as objects created from the same class share the same blueprint.

Is tarah se, class ek programming concept hai jo hume objects create karne mein help karta hai, aur uske attributes aur behaviors ko define karne ke liye ek structured approach provide karta hai.
*/


//Association

// #include <iostream>
// #include <string>
// using namespace std;

// class Person {
// public:
//     string name;

//     Person(string n) : name(n) {}
// };

// class Car {
// public:
//     string model;

//     Car(string m) : model(m) {}

//     void owner(Person& p) {
//         cout << p.name << " owns a " << model << endl;
//     }
// };

// int main() {
//     Person person("Alice");
//     Car car("Toyota");

//     car.owner(person); // Association: Car is associated with Person
//     return 0;
// }


//Function overloading and overriding
//Same name ke funcion banao but arguments mein frk karo jis se signature diff ho jain tou function overloading, function overloading ke lie zaruri hai ke woh aik he class mein ho yah aik he jaga ho tab bhe hote. Neeche example function over loading ke nhi us se neeche wale hai function overloading ke. Yeh jo example hai yeh function hiding ke hai jab parent class mein function hai use naam ka function child class mein banate ho return type se matlab nhi naam se matlab par arguments mein frk rakhte ho tou yeh funcion hiding hota
// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     void GeeksforGeeks_Print()
//     {
//         cout << "Base Function" << endl;
//     }
// };

// class Child : public Parent {
// public:
//     void GeeksforGeeks_Print()
//     {
//         cout << "Derived Function" << endl;
//     }
// };

// int main()
// {
//     Child Child_Derived;
//     Child_Derived.GeeksforGeeks_Print();// Calls Child's GeeksforGeeks_Print, hiding Parent's version thats why it is function hiding
//     return 0;
// }



//FUNCTION OVERLOADING
// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     // void GeeksforGeeks_Print( int y )
//     // {
//     //     cout << "Base Function" << endl;
//     // }
// };

// class Child : public Parent { //yaha pe int wla chala cz value int wale pass ke agar float wale ko bhe int kr dia tou error ai ga
// public:

//     void GeeksforGeeks_Print( int y )
//     {
//         cout << "Base Function" << endl;
//     }

//     void GeeksforGeeks_Print( float x )
//     {
//         cout << "Derived Function" << endl;
//     }
// };

// int main()
// {
//     Child Child_Derived;
//     int m = 5;
//     Child_Derived.GeeksforGeeks_Print( m );
//     return 0;
// }

//FUNCTION OVERRIDING -> same prototypes ke function in base and derived class toy function overriding, why we do overriding ke jab hm child class bana rhy tou parent class mein already aik f1 function bana hai B class baana rhy tou A mein already aik f1 function bana hai, A class ke users f1 function ko call krte hain kuch kaam krne ke lie mein ne inherit kia A class ke chezo ko B class banai hai tou mere class ka obj bhe agar f1 ko call krega tou A wala chale ga par mein chata ke jo parent wle f1 class mein jo likhe hai woh na chale thora different chale yani mre classs ke obj ke lie f1 tou chaye but thora different chaye implementation tou ap is mein parent class ke f1 mein changing kr do par agar aap esa kro ge tou parent class ke objs ke lie bhe tou f1 change ho jai ga jo ke mein nhi chate tou hm log kya krein ge parent class mein f1 mein koi changing krne ke bajai child class mei is ke overriding kr de ge tou child class ka obj call kre ga f1 ko tou parent wala nhi child wala chale ga or agar parent wala kre tou parent wala f1 chale ga.Yeh compile time overriding hai
// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     void GeeksforGeeks_Print( int y )
//     {
//         cout << "Base Function" << endl;
//     }
// };

// class Child : public Parent { //yaha pe int wla chala.
// public:

//     void GeeksforGeeks_Print( int y )
//     {
//         cout << "Derived Function" << endl;
//     }

   
// };

// int main()
// {
    
//     Child Child_Derived;
//     int m = 5;
//     Child_Derived.GeeksforGeeks_Print( m );
//     return 0;
// }



//Yh run time overriding

// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     virtual void GeeksforGeeks_Print( int y )
//     {
//         cout << "Base Function" << endl;
//     }
// };

// class Child : public Parent { //yaha pe int wla chala.
// public:

//     void GeeksforGeeks_Print( int y ) override
//     {
//         cout << "Derived Function" << endl;
//     }

   
// };

// int main()
// {
//     Parent* obj; //obj pointer hai
//     Child Child_Derived;
//     obj = &Child_Derived;
//     int m = 5;
//     obj -> GeeksforGeeks_Print ( m ); // Arrow se call krte function ko pointer me agar virtual nhi lagain ke parent ke function pe tou base wala he call ho ga but agar virtual lagain ge tou derived wala
//     Child_Derived.GeeksforGeeks_Print( m );
//     return 0;
// }


/*tou parent class ka obj bana ke bhe tou kr sakte the na is trha kyun kia

ChatGPT
You are correct that you can achieve a similar result by creating a Parent class object and calling its method. However, using the scope resolution operator (::) with a Child class object to call a Parent class method has specific advantages:

Convenience and Context
Single Object: You can use a single Child object to call both Parent and Child methods, making the code more concise and readable.
Context: The method call remains within the context of the derived class object, which can be useful if you want to maintain a reference to the same object.
Example without Scope Resolution Operator:
Here’s how you would do it by creating a Parent object:

cpp
Copy code
// C++ program to access overridden function
// in main() using the scope resolution operator ::

#include <iostream>
using namespace std;

class Parent {
public:
    void GeeksforGeeks()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void GeeksforGeeks()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
     Child Child_Derived;
     Child_Derived.GeeksforGeeks();

    // access GeeksforGeeks() function of the Base class
     Child_Derived.Parent::GeeksforGeeks();
    return 0;
}

Comparison:
Using Scope Resolution: One Child object is used to call both the base and derived methods.
Without Scope Resolution: Separate objects for Parent and Child are created, which might be less convenient and more verbose.
Using Child_Derived.Parent::GeeksforGeeks(); is a way to keep the code clean and maintain the relationship between the derived and base class methods within the same object context.

*/

// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     void GeeksforGeekssss()
//     {
//         cout << "Base Function" << endl;
//     }
// };

// class Child : public Parent {
// public:
//     void GeeksforGeeks()
//     {
//         cout << "Derived Function" << endl;
//     }
// };

// int main()
// {
//      Child Child_Derived;
//      Child_Derived.GeeksforGeeks();

//     // access GeeksforGeeks() function of the Base class
//      Child_Derived.Parent::GeeksforGeekssss();
//     return 0;
// }


//

// C++ program to demonstrate static
// variables inside a class

// #include <iostream>
// using namespace std;

// class GfG {
// public:
// 	// int i;
// 	static int i; // static lagain ge tou 3 3 ai ga cs static me jo value ate woh change ho jate

// 	GfG(){
// 		// Do nothing
// 	};
// };

// int GfG::i = 0; //agar static lagaya tou yeh likhna zaruri hai

// int main()
// {
// 	GfG obj1;
// 	GfG obj2;
// 	obj1.i = 2;
// 	obj2.i = 3;

// 	// prints value of i
// 	cout << obj1.i << " " << obj2.i; // 3 3 
// }


// Scenario with Non-Static Object
// Here's the code snippet for the non-static object:

// cpp
// Copy code
// #include <iostream>
// using namespace std;

// class GfG {
//     int i;
// public:
//     GfG() {
//         i = 0;
//         cout << "Inside Constructor\n";
//     }
//     ~GfG() {
//         cout << "Inside Destructor\n";
//     }
// };

// int main() {
//     int x = 0;
//     if (x == 0) {
//         GfG obj;
//     }
//     cout << "End of main\n";
// }
// Explanation:

// GfG obj; creates an object obj inside the if block.
// When the if block is entered, the constructor GfG() is called, printing "Inside Constructor".
// As soon as the if block ends, obj goes out of scope, and the destructor ~GfG() is called, printing "Inside Destructor".
// Finally, "End of main" is printed.
// Output:

// scss
// Copy code
// Inside Constructor
// Inside Destructor
// End of main
// Scenario with Static Object
// Here's the code snippet for the static object:

// cpp
// Copy code
// #include <iostream>
// using namespace std;

// class GfG {
//     int i = 0;
// public:
//     GfG() {
//         i = 0;
//         cout << "Inside Constructor\n";
//     }
//     ~GfG() {
//         cout << "Inside Destructor\n";
//     }
// };

// int main() {
//     int x = 0;
//     if (x == 0) {
//         static GfG obj;
//     }
//     cout << "End of main\n";
// }
// Explanation:

// static GfG obj; creates a static object obj inside the if block.
// When the if block is entered, the constructor GfG() is called, printing "Inside Constructor".
// This time, because obj is static, it remains in scope for the entire lifetime of the program.
// The destructor ~GfG() is called only when the program ends, not when the if block ends.
// Finally, "End of main" is printed, and then "Inside Destructor" is printed when the program exits.
// Output:

// scss
// Copy code
// Inside Constructor
// End of main
// Inside Destructor
// Key Points
// Non-Static Object:

// The object is created and destroyed within the if block.
// Constructor and destructor are called within the if block's scope.
// Static Object:

// The object is created within the if block but persists for the program's entire lifetime.
// The destructor is called only when the program ends, not when the if block ends.
// This demonstrates the difference in scope and lifetime between static and non-static objects in C++.



// Static Member Functions
// Key Points:

// Independence from Objects:

// Static member functions do not depend on any object of the class. They can be called without creating an instance of the class.
// Access:

// Static member functions can only access other static members (variables or functions) of the class. They cannot access non-static members directly.
// Invocation:

// Although static member functions can be called using an object and the dot operator, it is recommended to use the class name and the scope resolution operator ::.
// Example Explained
// Here's the example you provided:

// #include <iostream>
// using namespace std;

// class GfG {
// public:
//     // static member function
//     static void printMsg() { cout << "Welcome to GfG!"; }
// };

// // main function
// int main()
// {
//     // invoking a static member function
//     GfG::printMsg();
// }
// Explanation:

// Static Function Declaration:

// cpp
// Copy code
// static void printMsg() { cout << "Welcome to GfG!"; }
// printMsg is a static member function of the class GfG.
// The static keyword indicates that this function can be called without an instance of the class.
// Function Call:

// cpp
// Copy code
// GfG::printMsg();
// This line calls the static function printMsg using the class name GfG and the scope resolution operator ::.
// As a result, "Welcome to GfG!" is printed to the console.
// Why Use Static Functions?
// Utility Functions:

// Static functions are often used for utility or helper functions that do not require any data from the instance of the class.
// Global Access:

// Since static functions can be called without creating an object, they provide a way to access certain functionality globally within the scope of the class.
// Class-Level Operations:

// They are useful for operations that are related to the class itself rather than any particular object instance, such as counting the number of instances created, or other class-wide properties.
// By declaring a function as static, you ensure that it can be called independently of any object, and it can only operate on static data members or other static member functions of the class.
// #include <iostream>
// using namespace std;

// class Example {
// public:
//     // Static member variable
//     static int staticVar;
    
//     // Non-static member variable
//     int nonStaticVar;

//     // Static member function
//     static void staticFunction() {
//         cout << "Static Variable: " << staticVar << endl;

//         // Trying to access non-static member variable directly
//         // This will cause an error
//         // cout << "Non-Static Variable: " << nonStaticVar << endl;
//     }

//     // Non-static member function
//     void nonStaticFunction() {
//         cout << "Static Variable: " << staticVar << endl;
//         cout << "Non-Static Variable: " << nonStaticVar << endl;
//     }
// };

// // Initialize the static member variable
// int Example::staticVar = 10;

// int main() {
//     // Call static function using class name
//     Example::staticFunction();

//     // Create an object of the class
//     Example obj;
//     obj.nonStaticVar = 20;
//     obj.staticVar = 100;

//     // Call non-static function using object
//     obj.nonStaticFunction();

//     return 0;
// }


// C++ Program to demonstrate inline functions and classes
// #include <iostream>

// using namespace std;

// class operation {
// 	int a, b, add, sub, mul;
// 	float div;

// public:
// 	void get();
// 	void sum();
// 	void difference();
// 	void product();
// 	void division();
// };
// inline void operation ::get()
// {
// 	cout << "Enter first value:";
// 	cin >> a;
// 	cout << "Enter second value:";
// 	cin >> b;
// }

// inline void operation ::sum()
// {
// 	add = a + b;
// 	cout << "Addition of two numbers: " << a + b << "\n";
// }

// inline void operation ::difference()
// {
// 	sub = a - b;
// 	cout << "Difference of two numbers: " << a - b << "\n";
// }

// inline void operation ::product()
// {
// 	mul = a * b;
// 	cout << "Product of two numbers: " << a * b << "\n";
// }

// inline void operation ::division()
// {
// 	div = a / b;
// 	cout << "Division of two numbers: " << a / b << "\n";
// }

// int main()
// {
// 	cout << "Program using inline function\n";
// 	operation s;
// 	s.get();
// 	s.sum();
// 	s.difference();
// 	s.product();
// 	s.division();
// 	return 0;
// }


// //sara he class me kar sakte but ache practice nhi

// #include <iostream>

// using namespace std;

// class operation {
// 	int a, b, add, sub, mul;
// 	float div;

// public:
// 	void get() {
//     cout << "Enter first value:";
// 	cin >> a;
// 	cout << "Enter second value:";
// 	cin >> b;
//     }
// 	void sum() {
//         add = a + b;
// 	    cout << "Addition of two numbers: " << a + b << "\n";
//     }
// 	void difference() {
//         sub = a - b;
// 	    cout << "Difference of two numbers: " << a - b << "\n";
//     }
// 	void product() {
//         mul = a * b;
// 	    cout << "Product of two numbers: " << a * b << "\n";
//     }
// 	void division() {
//         div = a / b;
// 	    cout << "Division of two numbers: " << a / b << "\n";
//     }
// };  

// int main()
// {
// 	cout << "Program using inline function\n";
// 	operation s;
// 	s.get();
// 	s.sum();
// 	s.difference();
// 	s.product();
// 	s.division();
// 	return 0;
// }


// #include <iostream>
 
// class Singleton {
// public:
//     // Static method to access the singleton instance
//     static Singleton& getInstance()
//     {
//         // If the instance doesn't exist, create it
//         if (!instance) {
//             instance = new Singleton();
//         }
//         return *instance;
//     }
 
//     // Public method to perform some operation
//     void someOperation()
//     {
//         std::cout
//             << "Singleton is performing some operation."
//             << std::endl;
//     }
 
//     // Delete the copy constructor and assignment operator
//     Singleton(const Singleton&) = delete;
//     Singleton& operator=(const Singleton&) = delete;
 
// private:
//     // Private constructor to prevent external instantiation
//     Singleton()
//     {
//         std::cout << "Singleton instance created."
//                   << std::endl;
//     }
 
//     // Private destructor to prevent external deletion
//     ~Singleton()
//     {
//         std::cout << "Singleton instance destroyed."
//                   << std::endl;
//     }
 
//     // Private static instance variable
//     static Singleton* instance;
// };
 
// // Initialize the static instance variable to nullptr
// Singleton* Singleton::instance = nullptr;
 
// int main()
// {
//     // Access the Singleton instance
//     Singleton& singleton = Singleton::getInstance();
 
//     // Use the Singleton instance
//     singleton.someOperation();
 
//     // Attempting to create another instance will not work
//     // Singleton anotherInstance; // This line would not
//     // compile
 
//     return 0;
// }



// Q1 khud se 1st inheritance ka

// #include <iostream>

// using namespace std;
 
// class Person {
// private:
//     int age;
//     string name;

// public:
//     Person ( int a, string n ) {
//         age = a;
//         name = n;
//     }

//     void display() {
//         cout << "Name: " << name << ", Age: " << age << " ";
//     }
// };


// class Student : public Person {
// private:
//     char grade;

// public:
//     Student ( int a, string n, char g ) : Person ( a, n ) {
//         grade = g;
//     }

//     void display () {
//         Person::display ();
//         cout << "Grade: " << grade << endl;
//     }
// };


// int main () {
 
//     Student s( 18, "Sameer", 'A' );
//     s.display ();
 
//     return 0;
// }



#include <iostream>
 
using namespace std;

class Date {
private:
    int Day;
    int Month;
    int Year;

public:
    Date () {
        Day = 1;
        Month = 1;
        Year = 2926;
        cout << "Default constructor called!" << endl;
    }

    Date ( int d, int m, int y ) {
        this -> Day = d;
        this -> Month = m;
        this -> Year = y;
        cout << "Overloaded function called!" << endl;
    }

    void print () {
        cout << "Date is : " << Day << " / " << Month << " / " << Year << endl;
    }

    void Input () {
        cout << "Enter the Day : ";
        cin >> Day;
        cout << "Enter the Month : ";
        cin >> Month;
        cout << "Enter the Year : ";
        cin >> Year;
    }

    void setDay ( int d ) {
        this -> Day = d;
    }

    void setMonth ( int m ) {
        this -> Month = m;
    }

    void setYear ( int y ) {
        this -> Year = y;
    }

    int getDay () {
        return Day;
    }

    int getMonth () {
        return Month;
    }

    int getYear () {
        return Year;
    }

    int Compare ( Date& i ) {
        if ( this -> Year > i.Year ) {
            return 1;
        }

        else {
            if ( this -> Year < i.Year ) {
                return -1;
            }

            else {
                if ( this -> Month > i.Month ) {
                    return 1;
                }

                else {
                    if ( this -> Month < i.Month ) {
                        return -1;
                    }   

                    else {
                        if ( this -> Day > i.Day ) {
                            return 1;
                        }

                        else {
                            if ( this -> Day < i.Day ) {
                                return -1;
                            }

                            else {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    Date IncrementMonth () {
        int d, m, y;
        d = this -> Day;
        m = this -> Month;
        y = this -> Year;

        m++;

        if ( m >= 13 ) {
            m = 1;
            y++;
        }

        return Date (d, m, y);
    }

    ~Date () {
        cout << "Destructor called!" << endl;
    }
};

int main () {
 
    Date date1;
    Date xmasDay;
    Date temp;
    Date independenceDay ( 14, 12, 1947 );
    date1.print ();
    date1.Input ();
    date1.print ();
    independenceDay.print ();
    xmasDay.print ();
    xmasDay.setDay ( 25 );
    xmasDay.setMonth ( 18 );
    xmasDay.setYear ( 2018 );
    xmasDay.print ();
    cout << "Date is : " << xmasDay.getDay () << " / " << xmasDay.getMonth () << " / " << xmasDay.getYear () << endl;
    temp = xmasDay;
    temp.print ();
    int ans = date1.Compare ( independenceDay );
    cout << "Ans is : " << ans << endl;
    Date date2 = independenceDay.IncrementMonth ();
    cout << "***** Old Date *****" << endl;
    independenceDay.print (); 
    cout << "***** New Date *****" << endl;
    date2.print ();

    return 0;
}

