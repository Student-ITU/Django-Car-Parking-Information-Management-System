// #include <iostream>
 
// using namespace std;

// struct VenuePassRecords {
//     string passHolderName;
//     int passNumber;
//     string category;
//     bool checkInStatus;

//     void createVenuePass () {
//         cout << "Creating Venue Pass" << endl;
//         cout << "Pass holder's name : ";
//         getline ( cin, passHolderName );
//         cout << "Pass Number : ";
//         cin >> passNumber;
//         cout << "Category : ";
//         cin >> category;
//         cout << "Check in status : ";
//         cin >> checkInStatus;
//         cout << endl;
//     }

//     void printCatergory () {
//         cout << "Category" << endl;
//         cout << "Category of " << passHolderName << " is : " << category << endl;
//         cout << endl;
//     }

//     void printCheckinStatus () {
//         cout << "Check is status" << endl;
//         if ( checkInStatus == 1 ) {
//             cout << passHolderName << " has checked in" << endl;
//         }

//         else {
//             cout << passHolderName << " has not checked in" << endl;
//         }
//         cout << endl;
//     }

//     void printVenuePassDetails () {
//         cout << "Venue Pass details" << endl;
//         cout << "Name of Pass Holder is : " << passHolderName << endl;
//         cout << "Pass number of Holder is : " << passNumber << endl;
//         cout << "Category of is : " << category << endl;

//         if ( checkInStatus == 1 ) {
//             cout << passHolderName << " has checked in" << endl;
//         }

//         else {
//             cout << passHolderName << " has not checked in" << endl;
//         }
//         cout << endl;
//     }
// };


// struct Car {
//     string LicensePlate;
//     string make;
//     string model;
//     int Int;

//     void addCar () {
//         int n;
//         cout << "Enter the length of array : ";
//         cin >> n;

//         int *addcar = new int [n];

//         for ( int i = 0; i < n; i++ ) {
            
//             addcar[i] = ;
//         }
//     }

//     void deleteCar () {

//     }

//     void printCarDetails () {

//     }

//     void checkCarParkingLocation () {

//     }
// };


// struct Product {
//     int productId;
//     string productName;
//     int quantity;
//     float price;

//     void createProduct () {

//     }

//     void deleteProduct () {

//     }

//     void printProdcuctDetails () {

//     }
// };


// int main () {
 
//     VenuePassRecords vpr;
//     vpr.createVenuePass ();
//     vpr.printCatergory ();
//     vpr.printCheckinStatus ();
//     vpr.printVenuePassDetails ();
 
//     return 0;
// }


// ASSIGNMENT 2
// JUST ASSIGNMENT OPERATOR CONCEPT WESE HE LIKHA NOT A PART OF ASSIGNMENT
/*Why the Difference?
Assignment Operator (=):
The compiler can easily provide a default assignment operator because it’s straightforward – it just copies each data member from one object to another.
Other Operators (+, -, etc.):
These operators have no obvious default meaning for complex types like class objects. For example, adding two objects depends entirely on what “addition” means for your specific class. The compiler doesn’t know how you want to handle that, so you must define it yourself using operator overloading.
Summary:
Assignment Operator (=): Automatically provided by the compiler, copying each member by default.
Other Operators (+, -, etc.): Not automatically overloaded by the compiler; you have to define how they should behave for your class objects using operator overloading.
1)is me mujhe yeh batao ke *this jab return kre ga rou woh address tou nhi de ag na? cz *this ho rha jis ka matlab ke dereference ho gya hoa or address nhi ja rha right ?? 
2) dusre baat yeh batao ke     Person& jab yaha & lagate is ka matlab hota ke referene return kre ga right ? tou reference ka matlab chaye woh address bhe ho sakta or value bhe bs woh send kr de ga koi copy nhi banai ga ? mujhe in 2 bato ka jawab jese me ne ke wese he chaye
ChatGPT said:
ChatGPT
Let's break this down, point by point:

1) What happens when we return *this?
When you write *this, it dereferences the current object, so you are returning the object itself (not its address). You’re right that you’re not returning the address.

this is a pointer to the current object.
*this dereferences the pointer, meaning you are returning the actual object (not a pointer or an address).
So, you’re returning the object, not its address.

Example:

cpp
Copy code
return *this;  // Returns the current object itself, not its address
2) What does Person& mean when used as a return type?
When you use Person& as the return type, it means you are returning a reference to the object, not a copy.

Reference means it’s returning the actual object without making a new copy. This allows you to chain assignment operations.
Reference could refer to both address and value, but the key thing is, it doesn't make a copy, it just gives a way to access the original object.
In short:

Person& means you are returning a reference to the object.
A reference means no copy is created, and you are still working with the same object.
To Summarize:
*this returns the actual object, not its address. Since it’s dereferenced, it's the object itself being returned, not a pointer.
Person& returns a reference to the object. This means no new copy is made; you are working with the same object (it could use the address to reference it, but it’s still giving access to the original object, not a copy).*/
// #include <iostream>
 
// using namespace std;

// class Person {
// public:
//     std::string name;
//     int age;

//     // Constructor to initialize the object
//     Person(std::string n, int a) {
//         name = n;
//         age = a;
//     }

//     // Assignment operator
//     Person& operator=(const Person& other) {
//         // Copy the values of 'name' and 'age' from the other object
//         name = other.name;
//         age = other.age;
//         return *this;  // Return the current object to allow chaining, imp baat about this
//     }

//     void print () {
//         cout << name << " " << age << endl;
//     }
// };


// int main () {
 
//     Person p1 ("sameer", 2);
//     Person p2("ali", 3);
//     p2 = p1;
//     p2.print ();

//     return 0;

// };

// ROAD TO DEEP AND SHALLOW COPY -> COPY HOTE KESE COPY JAB HM KRTE TO YAH TOU CALL HOTA COPY CONSTRUCTOR YAH PHIR CALL HOTA DEFAULT YAH IMPLICIT ASSIGNMENT OPERATOR

// SHALLOW COPY HAI YEH -> Creating copy of object by copying data of all member variables of it is known as Shallow Copy.
// #include <iostream>
 
// using namespace std;

// class Dummy {
// private:
//     int a, b;

// public:
//     void setData ( int x, int y ) {
//         a = x; 
//         b = y;
//     }

//     // d2 = d1 ke lie assignment ke lie
//     Dummy & operator = ( Dummy& other ) {
//         // const nhi laga sakte function ke bahir cz -> Since the assignment operator's purpose is to modify the current object, it can't be const
//         // Copy the values of 'name' and 'age' from the other object
//         other.a = 100;
//         a = other.a;
//         b = other.b;

//         return *this;  // Return the current object to allow chaining so when you return *this; returns the entire d2 object, and inside that returned object, you have the values of a and b for d2 (in this case, a = 100 and b = 4).
//     }

//     //Dummy d2 = d1; ke lie
//     Dummy () {
        
//     }

//     Dummy ( Dummy & d ) {
//         a = d.a;
//         b = d.b;
//     }

//     void showData () {
//         cout << "a is : " << a << " and b is : " << b << endl;
//     }
// };


// int main () {
 
//     Dummy d1;
//     d1.setData ( 32, 4 );
//     // Dummy d2 = d1; // ese is waqt kehte copy constructor jab aik class ka koi or obj bana ke forun se he initialize kr dein tou, compiler yaha pe bhe bana deta aik copy construcotr jo nazr nhi ata but agar neeche dekho
//     Dummy d2;
//     d2 = d1; // ab is case me constructor nhi chalta, woh tab chalta jab obj create hota tou yaha copy constructor call nhi hota, yaha assignment operator call hota is ko bhe implicit banata hm wese bhe bana sakte lakin woh kr deta, dono me copy ho rha 
//     d2.showData ();
 
//     return 0;
// }

// Deep copy -> Creating an object by copying data of another object along with the values of memory resources resides outside the object but handled by that object.

// #include <iostream>
 
// using namespace std;

// class Dummy {
// private:
//     int a, b;
//     // Agar is me banain aik pointer   
//     int* p; // Holds address kre is lie banaya, yeh achi practice nhi hai cz yeh aik random value ko point kr rha garbage value ko, ab jo dynamically banaya new int se us ka address p me rakh lia in this step -> p = new int;

// public:
//     Dummy () {
//         p = new int; // Is se ho ga yeh ke aik new int type ka block bane ga kahi side pe heap pe or P use point kre ga 
//     }

//     void setData ( int x, int y, int z ) {
//         a = x; 
//         b = y;
//         *p = z; // *p is lie likha ke p jis ko point kr rha tha waha store ho tou woh * se he ho ga na. Yaha par *p likhne ka matlab jis ko p point kr rha yani new wale, tou is me z ke value copy kr de jo ke hai 5, tou basically p block jo tha woh ab new ko point kr rha tha yani new ka address tha us me or kahi or block bana us ka us me 5 likha jai ga, tou p obj, obj ke andar hai jis ke paas kuch memoery resources ese hain jo obj ke bahir behte hain lakin obj ke duara he woh handle ho rhy. Ab masla ata agar me aik or obj banata or us me data copy krta tou yeh pura obj tou ban jai ga us ka a us ka b us ka p copy ho jai ga us ke p jo memory location yani us dabe ko jis me 5 hain woh bhe jo dusra obj hai use ko point kre ga yani d1 ka memory resource us ka bhe ho gya, tou ab d2 ne koi change kia woh tou d1 ko bhe dikhe ga tou yeh tou share hone laga tou hm different copy chaye yaha tak jo hoa woh shallow copy tha jo deep copy ka step ho ga ke hm us ko bhe copy krein ke us me koi change na ai, tou pointer jab ho member variable tou us ka data copy hona dangerous hai cz us se dono pointers same resource ko point krte, tou ab krein ge kya me jis step me DEEP likhu ga woh deep copy ho ga
//     }

//     //DEEP copy and this is copy constructor
//     Dummy ( Dummy& d ) {
//         a = d.a;
//         b = d.b;
//         p = *(d.p); //-> yeh line nhi likhein ge balke hm, yaha jab * lagata *(d.p) tab kya masla hota 
//         // p = new int; // tou is se entirely new memory block ban gya abhi is me value nhi hai garbage hai
//         // *p = *( d.p ); // d.p d1 ka p hai us pe star laga dein ge tou woh us ko point kre ga jis me 5 hai right ? pehle p me gya phir star laga dia tou point kre ga, ab copy hoa *p me 5 tou yeh deep me jake copy hoa is lie deep copy kehte and shallow copy tab nhi hone chaye agar object me pointer ho or pointer bahir ke kisi memory location ko access kr rha ho, so deep copy krwane ke lie khud banwana pare ga constructor or yeh copy assignment operator se bhe ho sakta lakin abhi copy constructor se kia
//     }

//     // Yeh na bhe banate tou compiler same esa he banata, agar pointer hoa or shallow copy kr ke del kia yani destructor call kia tou malloc error type kuch ai ga cz jab ham free kr dete obj ko tou dusra bhe use ko point kr rha hota jis waja se error ata cz dono obj aik he memory location ko access kr rhy hote jab destructor call hota pehle tou aik obj khatam hota or memory bhe urte delete se lakin dusra obj tou abhi bhe us ko point kr rha jis waja se dangling pointer ban jata or double free error.
//     // Dummy ( Dummy & d ) {
//     //     a = d.a;
//     //     b = d.b;
//     //     p = d.p;
//     // }

//     void showData () {
//         cout << "a is : " << a << " and b is : " << b << endl;
//     }

//     ~Dummy () {// Ab dekho destructor chale ga tou yeh un memory resources ko release kr de jo object ke duara access ho rha tou agar aik obj us me p pointer ha woh tou memory location ko access kr rha tou tou obj destroy hone ke baad kya koi is memoery location ko access kr pai ga ? Nhi -> cz jis ka address us me tha woh tha p or obj destroy hone ka matlab p bhe destory ho jai ga, tou hm chaye ge ke hm us memory ko release kr dein us obj ko del krne se pehle, obj khatam hone ke baad to memory release nhi kr pain ge is lie hm likhe ge delete p
//         delete p;
//         cout << "Destructor" << endl;
//         /*In the code you provided, the main issue is in the copy constructor. Here's what happens when you run the code:

//         Memory Leak/Double Free Issue:
//         The copy constructor (Dummy ( Dummy & d )) copies the pointer p from one object to another. Both d1 and d2 will point to the same dynamically allocated memory for p. When the destructors of both d1 and d2 are called at the end of main(), both will attempt to delete the same memory, causing a double free error.

//         When d2 is destroyed, it deletes the memory pointed to by p.
//         When d1 is destroyed, it tries to delete the same memory again, causing the double free error. -> DANGLING POINTER BAN GYA AIK TRHA SE*/
//     }
// };


// int main () {
 
//     Dummy d1;
//     d1.setData ( 3, 4, 5 );
//     Dummy d2 = d1; 
//     d2.showData ();
 
//     return 0;
// }

// #include <iostream>
 
// using namespace std;

// class Dummy {
// private:
//     int a, b;

//     int* p; 

// public:
//     Dummy () {
//         p = new int; 
//     }

//     void setData ( int x, int y, int z ) {
//         a = x; 
//         b = y;
//         *p = z;
//     }



//     Dummy ( Dummy & d ) {
//         a = d.a;
//         b = d.b;
//         p = d.p;
//     }

//     void showData () {
//         cout << "a is : " << a << " and b is : " << b << endl;
//     }

//     ~Dummy () {
//         delete p;
//         cout << "Destructor" << endl;
//     }
// };


// int main () {
 
//     Dummy d1;
//     d1.setData ( 3, 4, 5 );
//     Dummy d2 = d1; 
//     d2.showData ();
 
//     return 0;
// }
/*ab dekho kya maska is code ka output aya
ChatGPT said:
ChatGPT
In the code you provided, the main issue is in the copy constructor. Here's what happens when you run the code:

Memory Leak/Double Free Issue:
The copy constructor (Dummy ( Dummy & d )) copies the pointer p from one object to another. Both d1 and d2 will point to the same dynamically allocated memory for p. When the destructors of both d1 and d2 are called at the end of main(), both will attempt to delete the same memory, causing a double free error.

When d2 is destroyed, it deletes the memory pointed to by p.
When d1 is destroyed, it tries to delete the same memory again, causing the double free error.*/


// NOW SOLVING ASSIGNMENT 3 WHICH IS ON DEEP AND SHALLOW COPY

// #include <iostream>
 
// using namespace std;

// class BankingApplication {
// public:
//     string name;
//     double initialBalance;
//     string* nameOwner;

// public:

//     //Deep copy constructor
//     BankingApplication () {
//         nameOwner = new string; 
//     }

//     // Shallow copy ke lie constructor
//     // BankingApplication ( const string& name, double initialBalance ) {
//     //     /*When you use string& name in your constructor, the & means you're passing a reference. A reference allows the function to work directly with the original data, not a copy. However, the problem is that when you pass a string literal like "Sameer" to a reference, it doesn't work because string literals are constants, meaning they can't be modified.

//     //     You can't pass something that's constant (like "Sameer") to a function that might modify it (which is what string& means). That's why you get an error.

//     //     How const Fixes It
//     //     When you change string& name to **const** string& name, you're telling the compiler that you won't modify the string inside the function. This allows you to pass both regular strings and string literals (like "Sameer") without any issues.
//     //     So, const string& name means:
//     //     "I will take a reference to this string, but I promise not to modify it".

//     //     string name tou agar string shai me constant ha tou jab me & ke begair send kr rha pass tab bhe kr rha tab kyun mera code sahi chal rha?
//     //     In this case, you are passing the name by value, meaning that a copy of the string is made. Since the original name is not modified, the program works fine, and you don't run into the same problem. String literals (like "Sameer") can be safely passed because the function works with a copy of the string, not the original literal.*/
//     //     this -> name = name;
//     //     this -> initialBalance = initialBalance;
//     // }

//     //Deep copy ke lie set data
//     void setData ( const string& name, const string& namePointer, double initialBalance ) {
//         /*When you use string& name in your constructor, the & means you're passing a reference. A reference allows the function to work directly with the original data, not a copy. However, the problem is that when you pass a string literal like "Sameer" to a reference, it doesn't work because string literals are constants, meaning they can't be modified.

//         You can't pass something that's constant (like "Sameer") to a function that might modify it (which is what string& means). That's why you get an error.

//         How const Fixes It
//         When you change string& name to **const** string& name, you're telling the compiler that you won't modify the string inside the function. This allows you to pass both regular strings and string literals (like "Sameer") without any issues.
//         So, const string& name means:
//         "I will take a reference to this string, but I promise not to modify it".

//         string name tou agar string shai me constant ha tou jab me & ke begair send kr rha pass tab bhe kr rha tab kyun mera code sahi chal rha?
//         In this case, you are passing the name by value, meaning that a copy of the string is made. Since the original name is not modified, the program works fine, and you don't run into the same problem. String literals (like "Sameer") can be safely passed because the function works with a copy of the string, not the original literal.*/
//         this -> name = name;
//         this -> initialBalance = initialBalance;
//         *nameOwner = namePointer;
//     }

//     // Shallow copy constructor
//     // BankingApplication ( BankingApplication& other ) {
//     //     this -> name = other.name;
//     //     this -> initialBalance = other.initialBalance;
//     // }

//     //Deep copy constructor
//     BankingApplication ( BankingApplication& other, bool& deepCopy ) {
//         this -> name = other.name;
//         this -> initialBalance = other.initialBalance;

//         if ( deepCopy ) {
//             nameOwner = new string;  // New memory block ban jai ga 
//             *nameOwner = *( other.nameOwner ); // Yeh ba ka nameOwner ha ba.setData wala tou star lagaya ke us dibe se nikal ke jaha memory store ha waha ke value *nameOwner yani jo us ke jaga waha daal de cz start nameowner bhe tou new memory ko point kr rha na new string se tou is waja se waha put krwane ke lie * lagaya 
//         }

//         else {
//             this -> nameOwner = other.nameOwner;
//         }
//     }

//     void print () {
//         cout << "Name is : " << name << ", Pointer name is : " << *nameOwner << " and Balance is : " << initialBalance << endl;
//     }

//     ~BankingApplication () {
//         cout << "Destructor" << endl;
//         delete nameOwner;
//     }
// };


// int main () {
 
//     // BankingApplication ba ( "Sameer", 10000000.0 ); // Shallow copy
//     // ba.print ();

//     // BankingApplication ba1 = ba;
//     // ba1.print ();

//     BankingApplication ba;
//     ba.setData ( "Sameer", "Ali", 10000000.0 ); // Deep copy
//     ba.print ();

//     bool deepCopy = true;
//     BankingApplication ba1 ( ba, deepCopy );
//     ba1.print ();

//     // bool deepCopy1 = false; // SHALLOW COPY HO GE YAHA PAR CZ FALSE ME JA RHA OR DEKHO WAHA ME NE KYA LIKHA
//     // BankingApplication ba2 ( ba, deepCopy1 );
//     // ba2.print ();

//     //AS YOU CAN SEE KE NHI CHANGE HO RHA BA KA CZ DEEP COPY HA
//     *ba1.nameOwner = "Bob";
//     ba.print ();
//     ba1.print ();
 
//     return 0;
// }


// QUESTION -> 2
// Encapsulation -> combining properties and methods reloated to same obj known as encapsulation, yani aik bhara sa diba ha us me cheze rakhi books ke detail wagera tou variables ho ge woh yeh sab aik dibe me hai ab hamein kuch functions bhe banane hain take dunya se interaction ho sake tou functions banin ge ke obj se interact krein ab hm us obj ko jis me details pare or functions ko mila dein aik he bhare dibe me tou yeh encapsulation ho jai ge, functions ka kaam un ke data ko access krna ho ga, functions ko he oops me kehte methods. Why ENCAPSULATION ?? -> ke obj ko itna self sufficient bana sakein ke woh data store bhe kr sake or us data ko handle bhe kr sake jo handle woh function se krta and variables se data store hota
/*Two Important  property of Encapsulation 

Data Protection: Encapsulation protects the internal state of an object by keeping its data members private. Access to and modification of these data members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.
Information Hiding: Encapsulation hides the internal implementation details of a class from external code. Only the public interface of the class is accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting external code.
Features of Encapsulation
Below are the features of encapsulation:

We can not access any function from the class directly. We need an object to access that function that is using the member variables of that class. 
The function which we are making inside the class must use only member variables, only then it is called encapsulation.
If we don’t make a function inside the class which is using the member variable of the class then we don’t call it encapsulation.
Encapsulation improves readability, maintainability, and security by grouping data and methods together.
It helps to control the modification of our data members.*/
// #include <iostream>
 
// using namespace std;

// class Student {
// private:
//     float gpa;

// public: 
//     string studentName;
//     int studentID;

//     Student () {

//     }

//     void setData ( string name, int id, float gpa ) {
//         this -> studentName = name;
//         this -> studentID = id;
//         this -> gpa = gpa;
//     }

//     void studentInfo () {
//         cout << "Name is : " << studentName << ", ID is : " << studentID << " and GPA is : " << gpa << endl;
//     }
// };


// int main () {
 
//     Student s;
//     s.setData ( "Sameer", 249, 3.5 );
//     s.studentInfo ();

//     return 0;
// }



// Question -> 3 Assignment -> 3

// #include <iostream>
 
// using namespace std;

// class LibraryBook {
// private:
//     string* title;
//     string* author;
//     int pages;

// public:
//     LibraryBook () {

//     }

//     LibraryBook ( string t, string a, int p ) {
//         title = new string;
//         author = new string;
//         *title = t;  // this nhi use krna * walo ke sath
//         *author = a;
//         this -> pages = p;
//     }

//     LibraryBook ( LibraryBook& lb1, bool deepCopy ) {
//         this -> pages = lb1.pages;

//         if ( deepCopy == true ) {
//             title = new string;
//             author = new string;
//             *title = *( lb1. title );
//             *author = *( lb1. author );
//         }

//         else {
//             title = lb1.title;
//             author = lb1.author;
//         }
//     }

//     LibraryBook & operator = ( const LibraryBook& lb2 ) {
//         this -> pages = lb2.pages;
//         title = new string;
//         author = new string;
//         *title = *( lb2.title );
//         *author = *( lb2.author );

//         return *this;
//     }

//     void setData ( string t, string a, int p ) {
//         *title = t; 
//         *author = a;
//         this -> pages = p;
//     }

//     string getData () {
//         return *title;
//     } 

//     string getData1 () {
//         return *author;
//     } 

//     int getData2 () {
//         return pages;
//     } 

//     void print () {
//         cout << "Title is : " << *title << ", Author is : " << *author << " and Pages are : " << pages << endl;
//     }

//     ~LibraryBook () {
//         cout << "Destructor" << endl;
//         delete title;
//         delete author;
//     }
// };


// int main () {
 
//     LibraryBook lb1 ( "Tarot", "Christian Bale", 200 );
//     cout << "Original Information : ";
//     lb1.print ();
//     cout << endl;

//     cout << "Copy Constructor Information or Deep Copy : ";
//     bool deepCopy = true;
//     LibraryBook lb2 ( lb1, deepCopy );
//     lb2.print ();
//     cout << endl;

//     cout << "Implicit Assignment Operator Information or Deep Copy : ";
//     LibraryBook lb3;
//     lb3 = lb2;
//     lb3.print ();
//     cout << endl;

//     lb1.setData ( "IT", "William", 150 );
//     lb2.setData ( "Fast and furious 10", "John", 250 );

//     cout << "Using Encapsulation" << endl;
//     cout << "Title is : " << lb1.getData () << ", Author is : " << lb1.getData1 () << " and Pages are : " << lb1.getData2 () << endl;
//     cout << "Title is : " << lb2.getData () << ", Author is : " << lb2.getData1 () << " and Pages are : " << lb2.getData2 () << endl;
//     cout << endl;

//     cout << "Shallow Copy" << endl;
//     bool deepCopy1 = false;
//     LibraryBook lb4 ( lb1, deepCopy1 );
//     lb4.print ();
 
//     return 0;
// }


// ASSIGNMENT # 4  Q -> 1
//Note: We can declare friend class or function anywhere in the base class body whether its private, protected or public block. It works all the same.

// #include <iostream>
// #include <string>
 
// using namespace std;

// class Card {
// private:
//     string suit;
//     string rank;

// public:

//     void setData ( string s, string r ) {
//         suit = s;
//         rank = r;
//     }

//     string getSuit () {
//         return suit;
//     }

//     string getRank () {
//         return rank;
//     }

//     string toString () {

//     }
// };


// class Deck {
// private:
//     string cards;

// public:
//     void shuffle () {

//     }
     
//     void deal () {

//     } 

//     int remainingCards () {

//     }
// };


// class Player {
// private:
//     string name;
//     string hand;

// public:
//     void addCard () {

//     }

//     void removeCard () {

//     }

//     void showHand () {

//     }
// };


// class CardGame {
// private:
//     string deck;

// public:
//     void startGame () {

//     }

//     void displayGameState () {

//     }

//     void takeTurn () {

//     }

// };


// int main () {
 
//     Card c1;
//     Card c2;
//     //Correct! If your Card class has private attributes for suit and rank, you cannot directly access them with cin >> c1.rank1 or cin >> c1.suit1 because they are not accessible outside the class. Hm agar banate bhe hain neche main me un ko c1. kar ke nhi kr sakte woh just public walo ke lie ho ga tou is me hamein ese he input lena ho ga or baad me c1.setData () kar sakte, tou just public walo ko kr sakte cin >> c1.suit like this and function me jab send bhe krna tou bhe c1. kar ke he krna cin >> c1.suit; like this -> cout << "Suit is " << c1.suit; yeh uper wala ha, error bhe nhi ata ke neeche bhe same name se ha uper bhe

//     /* Yes, exactly! Once you convert a number to a string using std::to_string(), it becomes a string, and you can't perform arithmetic operations like addition (14 + 1) directly on it anymore.
//     string rankStr = to_string(14);
//     int result = rankStr + 1; // This will give an error!*/

//     string rank, suit;
//     cout << "Enter Suit for Card 1 : ";
//     cin >> suit;
//     cout << "Enter Rank for Card 1: ";
//     cin >> rank;

//     if ( rank == "Ace" ) {
//         rank = "14";
//     }

//     if ( rank == "Jack" ) {
//         cout << "HI";
//         rank = "11";
//     }

//     if ( rank == "Queen" ) {
//         rank = "12";
//     }

//     if ( rank == "King" ) {
//         rank = "13";
//     }

//     c1.setData ( suit, rank );
//     cout << "Enter Suit for Card 2 : ";
//     cin >> suit;
//     cout << "Enter Rank for Card 2: ";
//     cin >> rank;

//     if ( rank == "Ace" ) {
//         rank = "14";
//     }

//     if ( rank == "Jack" ) {
//         rank = "11";
//     }

//     if ( rank == "Queen" ) {
//         rank = "12";
//     }

//     if ( rank == "King" ) {
//         rank = "13";
//     }

//     c2.setData ( suit, rank );

//     if ( stoi (c1.getRank ()) > stoi (c2.getRank ()) ) {
//         cout << "Card 1 is greater then Card 2 " << endl;
//     }

//     else if ( stoi (c1.getRank ()) < stoi (c2.getRank ()) ) {
//         cout << "Card 2 is greater then Card 1 " << endl;
//     }

//     else {
//         cout << "Rank is same now we are checking Suit of both cards" << endl;

//         if ( c1.getSuit () == c2.getSuit () ) {
//             cout << "Card 1 and Card 2 are same!" << endl;
//         }

//         else if ( c1.getSuit () == "Spades" ) {
//             cout << "Card 1 is greater" << endl;
//         }

//         else if ( c2.getSuit () == "Spades" ) {
//             cout << "Card 2 is greater" << endl;
//         }

//         else if ( c1.getSuit () == "Clubs" ) {
//             cout << "Card 1 is lowest" << endl;
//         }

//         else if ( c2.getSuit () == "Clubs" ) {
//             cout << "Card 2 is lowest" << endl;
//         }

//         else if ( c1.getSuit () == "Hearts" && c2.getSuit () == "Diamonds" ) {
//             cout << "Card 1 is greater" << endl;
//         }

//         else if ( c1.getSuit () == "Diamonds" && c2.getSuit () == "Hearts" ) {
//             cout << "Card 2 is greater" << endl;
//         }

//         else {
//             cout << "Both names are entered wrong" << endl;
//         }
//     }   
 
//     return 0;
// }

// Association, Aggregation, Composition

// Association -> is a relation between 2 classes, un me se aik trha ka relation ho ga jise hm bolein ge aggregation, yani kai trha ke association ho ge 2 classes ke bheech mein lakin un me se aik khaas trha ka association ho ga jise hm bolte aggregation or aik khaas trha ka aggregation hota jise hm bolte composition. So sab se uper association us ke andar aggregation us ke andar composition, association thora kam strict, aggregation thora sa strict and composition bohot strict. Association yani koi bhe 2 classes aik project me for some reason aik dusre se communicate kr rhy ise association kehte, har aggregation and composition Association hota. Tou agar aik class me composition ho rha me use association bol sakta lakin composition he bolu ga kunke us se clarity ai ge *****EXAMPLE***** -> Doctor class and obj d1, d2, d3 and Patient class and obj p1, p2, p3, ab yaha zaruri nhi ke patient p1 doctor d1 ke paas he jai woh kisi ke paas bhe ja sakta ho sakta woh aik se zyada doctor ko visit kre yah kisi ke paas na jai yah doctor bhe same esa he kr sakta kisi bhe patient ke paas ja sakta na bhe jai so ab in ke darmyan communicate to ho rha lakin dependancy nhi aik dusre pe dono ke obj patient ka doctor ke obj pe dependant nhi. Life time of object is ke kisi class ka obj kab bana and kab destroy hoa, ab patient ke and doctor ke obj ka apas me koi dependancy nhi kisi obj ke lifetime pe bhe nhi lakin apas me communicate kr sakte. Next Example teacher and student aik teacher kai student ko parha sakta or teacher se parh sakta tou communicate ho rha teacher assignmnet deta lakin dependancy nhi hai communicate ho rha, lifetime pe frk nhi para obj ke just communicate kr rhy, yeh bi-directional relation hota. Now coding for association  

// Association
// #include <iostream>
 
// using namespace std;

// class Driver {
// public:
//     void drive ( Car& c ) {

//     }
// };


// class Car {
// public:

// };


// int main () {
 
//     Driver d1, d2, d3;
//     Car c1, c2, c3;

//     d1.drive ( c1 ); // d1 driver ne chalai c1 car
//     d1.drive ( c2 ); // d1 driver ne chalai c2 car, ab yaha pe just use kia driver ne cars ko us ke use krne se obj to nhi khatam hoa car ka ? Nhi lifetime pe frk nhi para obj ke just communicate kr rhy
 
//     return 0;
// }


// Aggregation 
//  Aggregation -> Aik trha ka association he hota lakin is me relationship whole or part ka relationship khelata, is me ownership ke baat hote. Example -> Aik department hai or aik teacher class hai aik maths, science, humanity departments ho sakte and t1, t2, t3, t teachers hain so ab dono classes ke obj hain. Tou department and teacher me aggregation ak relation ho rha how? Tou department me hote teachers tou department own kr rha teachers ko tou ownership ke feeling a rhy like maths department me teacher t1 and t2 hai tou aik department form ho rha teachers se tou teacher class ka aik obj department class ke obj ka, yeh uni-directional relation hota association bi directional ho sakta, teacher aik se zyada department ko bhe belong kr sakta. Aik hota own krne wala or dusra hota own hone wala, jo own hone wala hai use bol sakte member yah part or yaha pe own krne wala hai department and teacher hai own hone wala yani part banne wala teacher ka, to agar Department A hai or teacher B tou B ke obj ka lifetime doesn't depend on lifetime of obj of A, tou agar department nhi rhy ga teacher bhe nhi rhy ga esa nhi hai teacher ka apna existence hai, aik se zyada department ko bhe kr sakta teacher cz B ka lifetime A ke obj ke lifetime pe depend nhi kr rha. Coding Example -> Person obj rahul and raina and address add1 dono aik he address ko point kr rhy address B hai and Person A tou jo A and B wale batein ke idhr bhe implement ho sakte. Now coding

// #include <iostream>
// #include <string>
 
// using namespace std;

// class Address {
// private:
//     int no;
//     char colony[20];
//     char city[20];

// public:
//     Address ( int x, char p[], char q[] ) { // or int x, char* p, char* q
//         no = x;
//         strcpy ( colony, p );
//         strcpy ( city, q );
//     }
// };


// class Person { // No inheritience
// private:
//     char name[20];
//     Address* p;//In your code, the line Address* address; in the Person class defines a pointer to an Address object. This setup is an example of aggregation, where the Person class contains an address pointer that "points to" an existing Address object but does not own or create it. Let’s break down what each part does;Understanding Address* address Pointer to an Object: Address* address; means that address is a pointer variable that can store the memory address of an Address object. This allows Person to "point" to an existing Address instance, rather than having its own separate Address data.
// public:
//     void setAddress ( Address* ptr ) {
//         p = ptr;
//     }
// };


// int main () {
 
//     Address add1 ( 61, "Golf Links", "Lahore" ); // Ab is ke existence person pe depend nhi kr rha. Person ka obj na bane frk nhi pare ga woh ghar to hai na yani address rhy ga chaye woh dono ghar yani us address me rhy ke nhi
//     Person rahul, ravi; // Rahul or ravi has address to yaha own kon kr rha ? department tha us me teacher tha tou hm department class me teacher class ka pointer baniain or woh teacher ke obj ko point kre 
//     rahul.setAddress ( &add1 );
//     ravi.setAddress ( &add1 );

//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <memory>
// using namespace std;

// class Address {
// public:
//     string city;
//     string street;
// public:
//     Address(string c, string s) : city(c), street(s) {}

//     void display() const {
//         cout << "City: " << city << ", Street: " << street << endl;
//     }
// };

// class Person {
// private:
//     string name;
//     // Address* address;  // Aggregation - Address is shared
//     unique_ptr<Address> address;  // Aggregation - Address is shared

// public:
//     // Person(string n, Address* addr) : name(n), address(addr) {}
//     Person(string n, unique_ptr<Address> addr) : name(n), address(std::move(addr)) {}

//     void updateAddress(string newCity) {
//         address -> city = newCity;  // Modify the city in shared Address
//         name = "sameer";// yeh agar bahir const ho ga tou nhi kr sakte
//     }

//     void display() const {
//         cout << "Name: " << name << ", ";
//         address->display();
//     }
// };

// int main() {
//     Address addr("New York", "5th Avenue");  // Create shared Address
//     Address addr1("New Yorkkkkk", "5th Avenueeee");  // Create shared Address
//     Person john("John", &addr);
//     Person jane("Jane", &addr);

//     john.display();  // Displays John's address
//     jane.display();  // Displays Jane's address (same as John's)
//     addr.display();
//     addr1.display();

//     john.updateAddress("Los Angeles");  // Update city through John
//     /*The difference in behavior you’re observing in the code is due to how pointers and independent values work in C++. Let’s break it down:

//     Why city changes for both john and jane but name only changes for john:

//     Address Pointer (Address* address): Both john and jane share the same Address object because they both have a pointer to the same addr object. When john.updateAddress("Los Angeles") changes the city, it modifies the city in the single Address object addr. Since jane also points to addr, any changes to addr are visible to jane as well.

//     Name (name): name is stored separately for each Person object (john and jane). When you change name in john, it only affects john because it’s not shared—it’s a direct member variable of each Person instance.

//     Explaining with Memory Layout:

//     Think of addr as a shared house. john and jane both have the address to this house. If john paints the house a different color (changing city), jane will also see the new color since they’re looking at the same house. However, name is more like each person’s own phone number—it’s stored separately for each Person, so if john changes their phone number, it doesn’t affect jane.
//     Code Summary:

//     The line address->city = newCity; directly modifies the shared Address object that both john and jane point to.
//     The line name = "sameer"; modifies only john’s name because name is an independent attribute for each Person instance.
//     To summarize: address->city changes the city for both john and jane because they both share the same Address object. Meanwhile, name only changes for the specific instance (john in this case) because it’s stored independently for each Person object.*/
            
//     // Both John and Jane will now show "Los Angeles" as their city.
//     cout << "\nAfter updating John's address:\n";
//     john.display();
//     jane.display();
//     addr.display();

//     cout << endl;
//     addr.display (); // city change ho gai har jaga 

//     return 0;
// }


// COMPOSITION ->


// #include <iostream>
// #include <string>
// using namespace std;

// class Address {
// public:
//     string city;
//     string street;

//     Address(const string& c, const string& s) : city(c), street(s) {}

//     void display() const {
//         cout << "City: " << city << ", Street: " << street << endl;
//     }
// };

// class Person {
// private:
//     string name;
//     Address address;  // Composition: Person has an Address

// public:
//     Person(const string& n, const string& city, const string& street)
//         : name(n), address(city, street) {}  // Initialize Address as part of Person

//     void display() const {
//         cout << "Name: " << name << endl;
//         address.display();
//     }
// };

// int main() {
//     Person person("Alice", "New York", "5th Avenue");

//     person.display();  // Displays Alice and her address

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






/*********************************************************************************************/
//PRACTICING OOPS QUESTION
/*
this d object ko point kr rha hota or this -> dereferce kr rha hota obj ko or us ke member ko point krta 
ChatGPT said:
ChatGPT
Exactly! Let's break it down clearly:

this pointer:

this is a pointer that automatically exists in every non-static member function of a class.
It points to the current object (the object through which the member function was called).
For example, if you have:

cpp
Copy code
Dummy d;
d.setA(10);  // Here, 'd' is the current object
Inside the setA() function, this is a pointer to d.

Dereferencing this:

*this dereferences the pointer to get the actual object that this is pointing to.
So, *this gives you the object itself, not just a pointer to it.
Example:

cpp
Copy code
Dummy d;
Dummy *ptr = &d;  // 'ptr' points to the object 'd'
*ptr;  // Dereferencing 'ptr' gives you 'd', the actual object
this-> (Arrow Operator):

The -> operator is a shortcut for accessing members when you have a pointer to an object.
When you write this->a, you are dereferencing this (which is a pointer to the object) and then accessing the member a.
Example:

cpp
Copy code
this->a = 10;  // Same as (*this).a = 10;
Step-by-step Process:
this points to the object (e.g., d).
this->a accesses the a member of the object that this points to.
Dereferencing (*this) gives you the actual object.
Example:
cpp
Copy code
class Dummy {
public:
    int a;

    void setA(int x) {
        this->a = x;  // 'this' points to the current object 'd', 'this->a' refers to 'd.a'
    }
};
When you create an object Dummy d; and call d.setA(10);:

this inside setA() points to d.
this->a = 10; sets the member variable a of object d to 10.
Conclusion:
this points to the current object (like d).
this->a dereferences the this pointer to access the a member of the object d.
*this gives you the actual object that this is pointing to.*/

/*
return *this; returns the current object from a function, often used in assignment operators.

Example:
cpp
Copy code
class Dummy {
public:
    int a;
    Dummy& operator=(const Dummy& other) {
        a = other.a;    // Copy value from 'other'
        return *this;   // Return the current object (for chaining)
    }
};
This allows:

cpp
Copy code
Dummy d1, d2;
d2 = d1;  // d2 gets assigned the values from d1, and 'd2' is returned
In simple terms, *this returns the object (d2 in this case) so further operations can be done if needed.







You said:
pura obj bhej deta us obj ke member variables, and attributes methods sab kuch ?
ChatGPT said:
ChatGPT
Yes, exactly! return *this; sends back the entire object, including all its member variables, attributes, and methods.

In other words, it returns a reference to the current object, so the object’s:

Member variables (like a, b, etc.)
Methods (like display(), getA(), etc.) are all available for further use.
Example:
cpp
Copy code
class Dummy {
public:
    int a, b;

    Dummy& operator=(const Dummy& other) {
        a = other.a;  // Copy 'a' and 'b'
        b = other.b;
        return *this; // Return the current object with all its variables
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};
Here, after d2 = d1;, return *this; returns the entire d2 object, which can be used immediately:

cpp
Copy code
d2.display();  // Output: a = 10, b = 20  (values copied from d1)
So yes, it returns the whole object with all its data and functionality.*/
// #include <iostream>
 
// using namespace std;

// class Member; 
// class Book;

// class Person {
// protected:
//     string name;
//     int age;

// public:
//     Person () {
//         name = "Sameer";
//         age = 19;
//     }

//     void display () const {
//         cout << "Name is : " << name << endl;
//         cout << "Age is : " << age << endl;
//     }
// };


// class Librarian : public Person {
// private:
//     int employeeID;

// public: 
//     Librarian () {
//         name = "Sameer";
//         age = 19;
//         employeeID = 249;
//     }

//     void display () const {
//         cout << "Name is : " << name << endl;
//         cout << "Age is : " << age << endl;
//         cout << "Emplyee ID is : " << employeeID << endl;
//     }

//     friend void assignBook ( Librarian& l1, Member& m1, Book& b1 );
// };


// class Member : public Person {
// private:
//     int memberID;
//     Book* borrowedBook; //Yeh jo neeche likha yeh is ke kie likha but me ne ise hata dia cz yaha association lag rhy woh abhi ke ni lakin parh lena neeche jo likha kaam ai ga.

//     /*In Book* borrowedBook;, here's what it means, part by part:

//     Book: This is the class type. It means we are dealing with an object of the class Book. In a Library Management System, the Book class likely contains attributes like title, author, etc.

//     * (asterisk): This indicates that borrowedBook is a pointer. It means it doesn’t directly hold the Book object, but instead it holds the memory address where the Book object is stored.

//     borrowedBook: This is the variable name, which holds the pointer to the Book object. It can point to:

//     A specific book object in memory.
//     It can also be nullptr, meaning it points to nothing (no book is borrowed).
//     So, what’s in Book* borrowedBook;?
//     borrowedBook holds a memory address (or reference) to a Book object.
//     It does not store the actual Book data but just the location of that data in memory.
//     Visualization:
//     Imagine a Book object is a real book in a library.
//     borrowedBook is like a pointer or reference to where that book is stored (like a location on a shelf), not the book itself.*/

// public:

//     Member () {
//         memberID = 123;
//         name = "Ali";
//         age = 20;
//     }

//     void display() const {
//         cout << "Name is : " << name << endl;
//         cout << "Age is : " << age << endl;
//         cout << "Member ID is : " << memberID << endl;
//     }

//     void borrowBook ( Book* b1 ) {
//         borrowedBook = b1;
//     }

//     void returnBook () { // const nhi likhna cz andar modify ho rha 
//         borrowedBook = nullptr; /* It removes the reference to the current Book object that the pointer was pointing to.
//         Now, borrowedBook no longer points to any object. It becomes an "empty" pointer, indicating that the member has returned the book and is not borrowing anything at the moment.*/
//     }

//     int getMemberID () const {
//         return memberID;
//     }

//     ~Member () {
//         cout << "Destructor called!" << endl;

//         /*Aapka sawal hai ki jab object ka scope khatam hota hai, to kya kya delete hota hai. Chaliye isko clear karte hain:

//         Jab Object ka Scope Khatam Hota Hai
//         Primitive Data Types aur Member Variables:

//         Stack-allocated Variables:

//         Agar aapne object ke andar primitive data types (jaise int, float, etc.) ya objects (agar class type hai) declare kiye hain, to ye variables automatically destroy hote hain jab object ka scope khatam hota hai.
//         Example:

//         cpp
//         Copy code
//         class MyClass {
//         public:
//             int a;       // Primitive type
//             float b;     // Primitive type
//         };
//         Destructor Ka Call:

//         Ye variables destructor se pehle delete hote hain, aur aapko inhe manually delete karne ki zarurat nahi hoti.
//         Dynamically Allocated Memory:

//         Heap-allocated Variables:
//         Agar aapne dynamically allocated memory use ki hai (jaise new operator ke through), to ye memory automatically free nahi hoti jab object ka scope khatam hota hai. Isko manually delete karna padta hai, jo destructor ke andar hota hai.
//         Example:
//         cpp
//         Copy code
//         class MyClass {
//         private:
//             int* p;  // Pointer to dynamically allocated memory
//         public:
//             MyClass() {
//                 p = new int;  // Memory allocate karna
//             }
//             ~MyClass() {
//                 delete p;  // Isse memory free hoti hai
//             }
//         };
//         Summary
//         Primitive Data Types aur Member Variables:

//         Ye variables automatically delete hote hain jab object destroy hota hai (scope khatam hota hai).
//         Dynamically Allocated Memory:

//         Ye memory automatically delete nahi hoti. Isko release karne ke liye destructor me delete p; ya delete[] ka istemal karna padta hai.
//         Conclusion
//         Toh, jab aapka object destroy hota hai:

//         Primitive types aur member variables: Automatically destroy hote hain.
//         Dynamically allocated memory: Manually delete karna padta hai via destructor.

//         Bilkul sahi! Jab object ka scope khatam hota hai, to primitive data types ke sath-sath member variables bhi automatically delete ho jate hain.

//         Destructor ka main kaam hota hai ki object destroy hone par resources ko release karna. Agar aapke destructor mein delete p; nahi hai, to ye sirf ek naam ka destructor hoga, aur iska koi practical fayda nahi hoga, kyunki memory free nahi hogi.*/




//         /*tou agar destructor banante he nhi phit to us me delet p nhi likha ho ga na phir to aik he jaga us function me delretep likh ho ag
//         ChatGPT said:
//         ChatGPT
//         Bilkul sahi! Agar aap destructor nahi banate hain, to aapko dynamically allocated memory ko release karne ke liye koi aur method (e.g., freeMemory()) banana padega, jisme aap delete p; likhte hain. Chaliye isko aur detail se samjhte hain:

//         Agar Destructor Nahi Hai
//         Memory Management:

//         Agar aapne destructor nahi banaya, to C++ automatically aapki dynamically allocated memory ko free nahi karega.
//         Is case mein, aapko manually ek function create karna hoga, jahan aap delete p; likhte hain.
//         Example:

//         cpp
//         Copy code
//         #include <iostream>

//         class MyClass {
//         private:
//             int* p; // Pointer to dynamically allocated memory

//         public:
//             MyClass(int value) {
//                 p = new int; // Memory allocate
//                 *p = value;
//             }

//             // Function to manually free memory
//             void freeMemory() {
//                 delete p; // Memory free
//                 p = nullptr; // Set pointer to nullptr to avoid dangling pointer
//             }

//             // Destructor is not defined, so no automatic memory cleanup happens
//         };

//         int main() {
//             MyClass obj(10);
//             obj.freeMemory(); // Manual memory deallocation
//             // Destructor will not be called, so no memory cleanup happens here
//             return 0;
//         }
//         Key Points
//         Manual Cleanup:

//         Is example mein, freeMemory() function manually delete p; ko call karta hai, jo dynamically allocated memory ko free karta hai.
//         Aapko ye ensure karna hoga ki freeMemory() function ko sahi waqt par call kiya jaye, warna memory leak ho sakta hai.
//         Destructor Absence:

//         Agar aap destructor nahi banate, to jab object destroy hota hai (jaise jab function khatam hota hai), to C++ automatically memory ko free nahi karta. Aapko manually cleanup karna padta hai.
//         Conclusion
//         Agar aap destructor nahi banate hain:
//         Aapko manually ek function create karna padega, jahan aap delete p; likhte hain.
//         Ye function object ke lifetime ke dauran sahi waqt par call hona chahiye, taaki memory leaks se bacha ja sake.*/
//     }
// };


// class Book {
// private:
//     string title;
//     string author;
//     int availableCopies;

// public:
//     Book () {
//         title = "Tarot";
//         author = "Keanu Reaves";
//         availableCopies = 3;
//     }

//     void display () { 
//         cout << "Title is : " << title << endl;
//         cout << "Author is : " << author << endl;
//         cout << "Available Copies are : " << availableCopies << endl;
//     }

//     // friend os
// };


// void assignBook ( Librarian& l1, Member& m1, Book& b1 ) {
    
// }

// // this ->, *(this). and this 

// /*Memory updated
// Chalo example ke through samjhata hoon.

// Imagine a simple class Dummy:

// class Dummy {
// public:
//     int a;
//     int b;

//     void setValues(int x, int y) {
//         // This function sets the values of 'a' and 'b'
//         this->a = x;    // Using 'this->' to set 'a' (current object's 'a')
//         this->b = y;    // Using 'this->' to set 'b' (current object's 'b')
//     }

//     void print() {
//         cout << "a = " << a << ", b = " << b << endl;
//     }
// };

// 1.⁠ ⁠Creating an Object:

// Dummy d;
// Here, d is an object of class Dummy.
// d has two members: a and b.
// 2.⁠ ⁠Calling a Member Function:
// cpp
// Copy code
// d.setValues(10, 20);
// When you call d.setValues(10, 20);, the setValues function is executed.
// Inside setValues, this is a pointer to the object d. So:
// this->a means "access the member a of the current object (d) and set its value to 10."
// this->b means "access the member b of the current object (d) and set its value to 20."
// Now, after this function:

// d.a = 10
// d.b = 20
// 3.⁠ ⁠What is this Doing?
// this is pointing to d, the object.
// When you write this->a, you are dereferencing this (getting the object) and accessing a (like d.a).
// 4.⁠ ⁠Comparison with (*this):
// You can write the same function like this:


// void setValues(int x, int y) {
//     (*this).a = x;   // This is exactly the same as 'this->a = x;'
//     (*this).b = y;   // This is exactly the same as 'this->b = y;'
// }
// (*this) dereferences the this pointer to give you the actual object (d).
// After that, you access a and b like you normally would with an object, using the dot (.) operator.
// Conclusion:
// this->a = x means "set the a of the current object (d) to x."
// (*this).a = x means exactly the same thing: "dereference this, access a, and set it to x."
// Final Practical Output:

// Dummy d;
// d.setValues(10, 20);
// d.print();  // This will print: a = 10, b = 20
// Both this->a and (*this).a are different ways to say "access the a of the current object and set it to some value."*/


// /*but agar hm this -> a = x; me this -> na bhe lagain tab bhe woh same work karta yani value chale jate us me tou phirr yeh kyun sahi work karta agar this -> aik zarurai cheez hai 

// This is because, in most cases, C++ automatically assumes that you are referring to the current object's members when there's no ambiguity.*/

// int main () {
 
//     Person p1;
//     p1.display ();
//     cout << endl;

//     Librarian l1;
//     l1.display ();
//     cout << endl;

//     Member m1;
//     m1.display ();
//     cout << endl;

//     Book b1;
//     b1.display ();
//     cout << endl;

//     m1.borrowBook ( &b1 );

//     return 0;
// }

//
//////////////////// INHERITANCE FOR UNDERSTANDING /////////////////////////
// C++ program to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object.
// #include <iostream>
 
// using namespace std;
 
// class A {
// public:
//     int x;

//     A () {
//         cout << "Constructor of A" << endl;
//         z = 22;
//     }

//     void Bye () {
//         cout << z << endl;
//         cout << "Bye of A" << endl;
//     }

// protected:
//     int y;

// private:
//     int z;
// };

// class B : public A {
// public:


//     B () {
//         cout << "Constructor of B" << endl;
//         y = 3;
//     }

//     void hi () {
//         cout << x << endl;
//         cout << y << endl;
//     }

//     void Bye () {
//         cout << "Bye of BB" << endl;
//     }

//     void bye () {
//         cout << "Bye of B" << endl;
//         A::Bye ();
//     }
//     // x is public
//     // y is protected
//     // z is not accessible from B
// };

// class C : protected A {
// public:
//     C () {
//         cout << "Constructor of C" << endl;
//     }
//     // x is protected
//     // y is protected
//     // z is not accessible from C
// };

// class D : private A // 'private' is default for classes
// {
//     // x is private
//     // y is private
//     // z is not accessible from D
// };

// int main () {

//     B b;
//     b.x = 2;
//     b.hi ();
//     cout << endl;
//     b.bye ();

//     C c;
    
//     return 0;
// }


// // C++ program to illustrate how to access the private
// // members of the base class by declaring the derived class
// // as friend class in the base class
// #include <iostream>
// using namespace std;

// // Forward declaration of the Derived class
// class Derived;

// // Base class
// class Base {
// private:
//     int privateVar;

// public:
//     // Constructor to initialize privateVar
//     Base(int val)
//         : privateVar(val)
//     {
//     }

//     // Declare Derived class as a friend
//     friend class Derived;
// };

// // Derived class
// class Derived {
// private:
//      int privateVar;
// public:
//     // Function to display the private member of the base
//     // class

//     Derived () {
//         privateVar = 3;
//     }
//     void displayPrivateVar()
//     {
//         // Accessing privateVar directly since Derived is a
//         // friend of Base
//         cout << "Value of privateVar in Base class: "
//              << privateVar << endl;
//     }

//     void displayPrivateVar1(Base& obj)
//     {
//         // Accessing privateVar directly since Derived is a
//         // friend of Base
//         cout << "Value of privateVar in Base class: "
//              << obj.privateVar << endl;
//     }

//     // Function to modify the private member of the base
//     // class
//     void modifyPrivateVar(Base& obj, int val)
//     {
//         // Modifying privateVar directly since Derived is a
//         // friend of Base
//         obj.privateVar = val;
//     }
// };

// int main()
// {
//     // Create an object of Base class
//     Base baseObj(10);

//     // Create an object of Derived class
//     Derived derivedObj;

//     // Display the initial value of privateVar
//     derivedObj.displayPrivateVar();

//     // Modify the value of privateVar
//     derivedObj.modifyPrivateVar(baseObj, 20);

//     // Display the modified value of privateVar
//     derivedObj.displayPrivateVar();
//     cout << endl;
//     derivedObj.displayPrivateVar1( baseObj );

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Base {
// public:
//     int publicVar;
// protected:
//     int protectedVar;
// public:
//     Base () {
//         publicVar = 10;
//          protectedVar = 20;
//     }
// };

// class DerivedPrivate : public Base { // Private Inheritance
// public:
//     void show() {
//         cout << "publicVar (as private in DerivedPrivate): " << publicVar << endl;
//         cout << "protectedVar (as private in DerivedPrivate): " << protectedVar << endl;
//     }
// };

// // Further inheritance
// class FurtherDerived : public DerivedPrivate {
// public:
// // void Show() {
// //     show ();
// // }
//     void display() {
//         cout << publicVar << endl; // Error: `publicVar` is now private in DerivedPrivate
//         cout << protectedVar; // Error: `protectedVar` is also private in DerivedPrivate
//     }
// };

// int main() {
//     DerivedPrivate o;
//     o.show ();
//     FurtherDerived obj;
//     obj.display();
//     return 0;
// }

/////////////////////////////////////////////////////////////////////

// Question -> GPT 
// #include <iostream>
 
// using namespace std;

// class Person {
// protected:
//     string name;
//     int age;

// public:
//     Person ( string n, int a ) {
//         name = n;
//         age = a;
//     }

//     void display () const {
//         cout << "Name is : " << name << endl;
//         cout << "Age is : " << age << endl;
//     }
// };


// class Customer : public Person {
// private:
//     int customerID;

// public:
//     Customer ( string n, int a, int ID ) : Person ( n, a ) {
//         // name = n; yeh name and age agar na bhe karein ese tou yeh jo uper ja rha n and a yeh basiacally customer ka ali and 18 uper dete or woh kyunke public hai or neeche me ne is ko display kia tou woh woh he value le leta or customerID dekho; jab use comment kia woh 0 a rha cz us ke value de nhi is ka matlab ke woh uper wale name and age a rhy neeche wale chaye comment bhe kr lo ab me uncomment karne laga customerID ko
//         // age = a;
//         customerID = ID;
//     }
//     //why we do Customer(string n, int a, int ID) : Person(n, a) {  the initialization list ?

//     /*Imagine Customer is like a house built on top of a foundation, and Person is that foundation. To make the house (Customer), you need the foundation (Person) first. So, every time you create a Customer, it has to set up Person first — this is why we use the Person(n, a) call in the Customer constructor.

//     Here's the step-by-step reason for it:

//     Inheritance: Since Customer inherits from Person, every Customer has a Person part (this part is name and age).

//     Initialization Order: Because of this inheritance, when you make a Customer, the Person part has to be created first before you add any new parts specific to Customer, like customerID.

//     Constructor Call: The Person(n, a) call in the Customer constructor tells the compiler, "Hey, create the Person part with this name and age first." Without this, the compiler doesn’t know how to set up the Person part.
//     Summary
//     : Person(n, a) tells the compiler to set up the Person part of Customer first.
//     After the Person part is set up, then customerID is added to complete the Customer.
//     */

//     void display () const {
//         cout << "Name is : " << name << endl;
//         cout << "Age is : " << age << endl;
//         cout << "Customer ID is : " << customerID << endl;
//     }

//     int getCustomerID () const {
//         return customerID;
//     }
// };


// class Car {
// private:
//     string model;
//     bool availability;

// public: 
//     Car () {

//     }

//     Car ( string m, bool a ) {
//         model = m;
//         availability = a;
//     }

//     // Car operator == ( Car& c1, Car& c2 ) { // Jab 2 a jain parameters to ham ise andar nhi likh sakte phir friend bana ke bahir likhna pare ga operator overloading ko
//     //     if ( c1.model == c2.model ) {
//     //         cout << "oK";
//     //     }
//     // }

//     void display () const {
//         cout << "Model is : " << model << endl;
//         cout << "Availability is : " << availability << endl;
//     }

//     string getModel () const {
//         return model;
//     }

//     bool isAvailable () const {
//         return availability;
//     }

//     friend bool operator == ( Car& c1, Car& c2 );
//     friend bool operator != ( Car& c1, Car& c2 );
//     friend istream & operator >> ( istream& in, Car& c );
//     friend ostream & operator << ( ostream& out, Car& c );
// };

// bool operator == ( Car& c1, Car& c2 ) {
//     if ( c1.model == c2.model ) {
//         return c1.model == c2.model;
//     }
// }

// bool operator != ( Car& c1, Car& c2 ) {
//     if ( c1.model != c2.model ) {
//         return c1.model != c2.model;
//     }
// }

// istream & operator >> ( istream& in, Car& c ) {
//     in >> c.model;
//     return in;
// }

// ostream & operator << ( ostream& out, Car& c ) {
//     out << c.model;
//     return out;
// }

// class Rent {
// private:
//     string carModel;
//     int rentalDays;

// public:
//     Rent () {
//         carModel = "1992";
//         rentalDays = 30;
//     }

//     Rent ( string c, int r ) {
//         carModel = c;
//         rentalDays = r;
//     }

//     void display () const {
//         cout << "Model is : " << carModel << endl;
//         cout << "Rent is : " << rentalDays << endl;
//     }

//     void setRentalDays ( int r ) {
//         rentalDays = r;
//     }

//     int getRentalDays () const {
//         return rentalDays;
//     }

//     int AdditionSubtraction () {
//         return rentalDays;
//     }

//     friend Rent operator + ( Rent& r2, Rent& r3 );
//     friend Rent operator - ( Rent& r2, Rent& r3 );
// };

// Rent operator + ( Rent& r2, Rent& r3 ) {
//     Rent r;
//     r.rentalDays = r2.rentalDays + r3.rentalDays;
//     return r;
// }

// Rent operator - ( Rent& r2, Rent& r3 ) {
//     Rent r;
//     r.rentalDays = r2.rentalDays - r3.rentalDays;
//     return r;
// }

// int main () {

//     Person p1 ( "Sameer", 19 );
//     p1.display ();
//     cout << endl;

//     Customer c ( "Ali", 18, 249 );
//     c.display ();
//     cout << endl;
    
//     p1.display ();
//     cout << endl;
 
//     Car c1 ( "2000", true );
//     Car c2 ( "2000", true );
//     Car c3, c4;

//     if ( c1 == c2 ) {
//         cout << "Car1 and Car2 are the same model" << endl;
//         cout << endl;
//     }

//     if ( c1 != c2 ) {
//         cout << "Car1 and Car2 are not the same model" << endl;
//         cout << endl;
//     }

//     c1.display ();
//     cout << endl;

//     c2.display ();
//     cout << endl;

//     cout << "Model of Car 1 is : " << c1.getModel () << " and availability of Car 1 is : " << c1.isAvailable () << endl;
//     cout << endl;

//     cout << "Model of Car 2 is : " << c2.getModel () << " and availability of Car 2 is : " << c2.isAvailable () << endl;

//     cout << "Enter the Model of Car 1 : ";
//     cin >> c3;
//     cout << "Enter the Model of Car 2 : ";
//     cin >> c4;
//     cout << endl;

//     cout << "Model of Car 1 is : ";
//     cout << c3;
//     cout << endl;
//     cout << "Model of Car 2 is : ";
//     cout << c4;
//     cout << endl;

//     Rent r1;

//     string carModel; // Same name likh sakte agar class me ese public bhe likha koi frk nhi parta but abhi woh private hai
//     int rentalDays;
//     cout << "Enter the Model for rental car 1 : ";
//     cin >> carModel;  
//     cout << "Enter the days for rental car 1 : ";
//     cin >> rentalDays;   

//     Rent r2 ( carModel, rentalDays );
//     r2.setRentalDays ( rentalDays );
//     cout << endl;

//     cout << "Enter the Model for rental car 2 : ";
//     cin >> carModel;  
//     cout << "Enter the days for rental car 2 : ";
//     cin >> rentalDays;    
//     //r2.rentalDays = 3; // Mein yaha par bhe galti kr rha tha r2. tou class ke member ko access kr sakta hai na mein samjh rha yaha bhe rentalDays likha lakin yeh tou access kr he nhi sakta woh class ke ko acess kr sakta cz woh obj hai or attribute private hai is lie yeh kaam nhi ho sakta, yeh waja the jo mein if else me bhe kr rha tha or error a rha tha mein r2.rentalDays kr rha tha jab ke woh tou class ke attribute ko dekh rha jo private hai is lie mujhe phir function bana ke krna para

//     Rent r3 ( carModel, rentalDays );
//     r3.setRentalDays ( rentalDays ); 
//     cout << endl;

//     cout << "Info of Rental car 1" << endl;
//     r2.display ();       

//     cout << "Info of Rental car 2" << endl;
//     r3.display ();
//     cout << endl;

//     cout << "By Adding rental days of both cars : ";
//     Rent r4 = r2 + r3;
//     cout << r4.AdditionSubtraction () << endl;

//     cout << "By Subtracting rental days of both cars : ";
//     if ( r2.getRentalDays () > r3.getRentalDays () ) {
//         Rent r5 = r2 - r3;
//         cout << r5.AdditionSubtraction ();
//     }

//     else {
//         Rent r5 = r3 - r2;
//         cout << r5.AdditionSubtraction ();
//     }

//     // cout << r5.AdditionSubtraction (); // Bhair is lie nhi likh  sakte r5 ka scope sirf yaha tak hai yani block tak

    
//     return 0;
// }



//


// #include <iostream>
 
// using namespace std;

// class Person {
// protected:
//     string name;
//     string contactNumber; // Is example mein, 0321 ko string ke roop mein store kiya gaya hai, isliye leading zero preserve raha hai. Agar aap int type ka use karte, toh leading zero automatically hata diya jaata, aur sirf 321 dikhai deta.

// public:
//     Person ( const string& n, const string& c ) {
//         name = n;
//         contactNumber = c;
//     }

//     void display () const {
//         cout << "Name is : " << name << endl;
//         cout << "Contact Number is : " << contactNumber << endl;
//     }
// };


// class Supplier : public Person {
// private:
//     int supplierID;

// public:
//     Supplier ( const string& n, const string& c, int ID ) : Person ( n, c ) {
//         supplierID = ID;
//     }

//     void display () const {
//         cout << "Name is : " << name << endl;
//         cout << "Contact Number is : " << contactNumber << endl;
//         cout << "Supplier ID is : " << supplierID << endl;
//     }

//     int getSupplierID () const {
//         return supplierID;
//     }
// };


// class Customer : public Person {
// private:
//     int customerID;

// public:
//     Customer ( const string& n, const string& c, int ID ) : Person ( n, c ) {
//         /*
//         #include <iostream>
//         #include <string>
//         void printString(const std::string& str) {
//             // str = "sameer";
//             std::cout << str << std::endl; // Can read but not modify
//         }

//         int main() {
//             printString("Hello"); // This is fine
//             std::string myString = "World";
//             printString(myString); // Also fine
//             return 0;
//         } 
//         */
//         customerID = ID;
//     }

//     void display () const {
//         cout << "Name is : " << name << endl;
//         cout << "Contact Number is : " << contactNumber << endl;
//         cout << "Customer ID is : " << customerID << endl;
//     }

//     int getCustomerID () const {
//         return customerID;
//     }
// };


// class Product {
// private:
//     string productName;
//     int quantity;
//     double price;

// public:
//     Product () {
//         productName = "Milk";
//         quantity = 3;
//         price = 50.5;
//     }

//     Product ( const string& pn, int q, double p ) {
//         productName = pn;
//         quantity = q;
//         price = p;
//     }

//     void display () const {
//         cout << "Product Name is : " << productName << endl;
//         cout << "Quantity is : " << quantity<< endl;
//         cout << "Price is : " << price << endl;
//     }

//     string getProductName () const {
//         return productName;
//     }

//     int getQuantity () const {
//         return quantity;
//     }

//     double getPrice () const {
//         return price;
//     }

//     friend bool operator == ( Product& p2, Product &p3 );
//     friend bool operator != ( Product& p2, Product &p3 );
//     friend Product operator + ( Product& p2, Product &p3 );
//     friend Product operator - ( Product& p2, Product &p3 );
//     friend ostream & operator << ( ostream& in, Product& p4_p5 );
// };

// bool operator == ( Product& p2, Product &p3 ) {
//     if ( p2.productName == p3.productName && p2.price == p3.price && p2.quantity == p3.quantity ) {
//         return true;
//     }
// }

// bool operator != ( Product& p2, Product &p3 ) {
//     if ( p2.productName != p3.productName || p2.price != p3.price || p2.quantity != p3.quantity ) {
//         return true;
//     }
// }

// Product operator + ( Product& p2, Product &p3 ) {
//     Product p4;
//     p4.quantity = p2.quantity + p3.quantity;
//     return p4;
// }

// Product operator - ( Product& p2, Product &p3 ) {
//     Product p4;
//     p4.quantity = p2.quantity - p3.quantity;
//     return p4;
// }

// ostream & operator << ( ostream& out, Product& p4_p5 ) {
//     out << p4_p5.quantity;
//     return out;
// }

// int main () {
 
//     Person p ( "Sameer", "03004611835" );
//     p.display ();
//     cout << endl;

//     Supplier s1 ( "Ali", "03214880582", 249 );
//     s1.display ();
//     cout << "The Supplier ID is : " << s1.getSupplierID () << endl;
//     cout << endl;

//     Customer c1 ( "Ahmad", "03009488835", 16 );
//     c1.display ();
//     cout << "The Customer ID is : " << c1.getCustomerID () << endl;
//     cout << endl;

//     Product p1;
//     p1.display ();
//     Product p2 ( "Honey", 2, 199.9 ); 
//     Product p3 ( "Honey", 2, 199.9 ); 

//     if ( p2 == p3 ) {
//         cout << "All products are equal" << endl;
//         cout << endl;
//     }

//     if ( p2 != p3 ) {
//         cout << "Products are not equal" << endl;
//         cout << endl;
//     }

//     cout << "Adding quanities of product : ";
//     Product p4 = p2 + p3;
//     cout << p4 << endl;

//     cout << "Subtracting quanities of product : ";
//     if ( p2.getQuantity () > p3.getQuantity () ) {
//         Product p5 = p2 - p3;
//         cout << p5 << endl;
//     }

//     else {
//         Product p5 = p3 - p2;
//         cout << p5 << endl;
//     }

//     return 0;
// }


// C++ program to illustrate the use of copy constructor
// #include <iostream>
// #include <string.h>
// using namespace std;

// // Class definition for 'student'
// class student {
// public:
//     int rno;
//     string name;
//     double fee;

// public:
//     // Parameterized constructor
//     student () {}
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

// class HI {
// private:

//     int rno;
//     string name;
//     double fee;
// public:
//  HI(student& t)
//     {
//         rno = t.rno;
//         name = t.name;
//         fee = t.fee;
//         cout << "Copy Constructor Called" << endl;
//     }
//     void hi () {
//         cout << "Hi";
//     }

//     void display()
// { 

//     cout << rno << "\t" << name << "\t" << fee << endl;
// }

// };

// int main()
// {
//     // Create student object with parameterized constructor
//     student s(1001, "Manjeet", 10000);
//     s.display();


//     // Dusre class me copy krwa rha and is ke lie HI wale class ko uncomment karna pare ga, jis class ka obj bhej rhy us ke members ko public rakhna, Copy Constructor *** 
//     HI manjeet(s);
//     manjeet.display();

//     //Copy constructor***
//     student manjeet1(s);
//     manjeet1.display();

//     //Assignment operator***
//     student manjeet2;
//     manjeet2 = s;
//     manjeet2.display();

//     /*No, you don’t need to explicitly call the copy constructor when you do something like:

//     Hi a("sameer");  // Calls the constructor to create object 'a'
//     Hi b(a);          // Calls the copy constructor to create a copy of 'a' in 'b'
//     Here, Hi b(a); automatically triggers the copy constructor to make b a copy of a. This process is automatic in C++ whenever you create a new object using another existing object, so you don’t have to explicitly call the copy constructor yourself.

//     The copy constructor (Hi(const Hi &other)) is implicitly called by the compiler in this case. You only need to define the copy constructor in your class if you want a specific way to copy data from one object to another (like handling deep copies for dynamic memory).
    
    
    
//     The ***assignment operator*** is automatically called to copy the data from s to manjeet. You do not need to explicitly call it, as the compiler automatically applies the assignment operation when you use = between objects of the same class.*/
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// public:
//     int id;
//     string name;

//     // Constructor
//     Student(int i, string n) : id(i), name(n) {}

//     // Assignment operator
//     Student& operator=(const Student& other) {
//         cout << "Assignment operator called.\n";
        
//         // Check for self-assignment
//         if (this != &other) { // Are we assigning the object to itself?
//             /*Exactly right! In the line if (this != &other), what’s happening is a comparison between two memory addresses:

//             this points to the memory address of the current object, which is s2 in this example.
//             &other is the memory address of the other object, which is s1.
//             So, when s2 = s1; is called, this != &other will look like a comparison between two addresses, like:

//             Copy code
//             if (0x12332 != 0x23423) { copy values }
//             This checks if the addresses of s2 and s1 are different, ensuring that s2 is not being assigned to itself. If they are different, the id and name values from s1 will be copied into s2.*/

//             cout << "Not self-assignment. Copying data.\n";
//             id = other.id;    // Copying the id from 'other' (s1)
//             name = other.name; // Copying the name from 'other' (s1)
//         } 
//         else {
//             cout << "Self-assignment detected. No copying done.\n";
//         }
        
//         return *this; // Returning a reference to the current object (s2)
//     }

//     void display () const {
//         cout << "ID: " << id << ", Name: " << name << endl;
//     }
// };

// int main() {
//     Student s1(101, "Alice"); // Creating first Student object s1
//     Student s2(102, "Bob");   // Creating second Student object s2
//     s2 = s2; // Calls the assignment operator
//     s2.display(); // Displaying values of s2

//     // Assigning s1 to s2
//     cout << "Assigning s2 = s1:\n";
//     s2 = s1; // Calls the assignment operator
//     s2.display(); // Displaying values of s2
   
//     return 0;
// }


// //Static in class
// /*static in classes Person::name jo kia woh ab change ho ga warna Person::name me emplyee ka he lage ga jo employee send kr rha tou is lie static se sab instances me change ho jai ga jo bhe change ho ga, Person::name  yeh kaam hm ne kia attributes ko dikhane ke lie ke yeh kis class ka attribute hai*/

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // class Person {
// // public:
// //     static string name; // Attribute in base class
// //     int age;
// //     // Person () {
// //     //     name ="sameer";
// //     // }

// //     Person(string n, int a) {
// //         name = n;
// //         age = a;
// //     }
// //     void display() {
// //         cout << "Base class (Person) name: " << name << endl;
// //         cout << "Derived class (Employee) name: " << name << endl;
// //         cout << "Derived class (Employee) name: " << age << endl;
// //     }
// // };

// // string Person::name = "s";

// // class Employee : public Person {
// // public:
// //     string name; // Attribute in derived class with the same name
// //     int employeeID;

// //     Employee(string n, int a, string empName, int empID) 
// //         : Person(n, a), name(empName), employeeID(empID) {}

// //     void display() {
// //         cout << "Base class (Person) name: " << Person::name << endl;
// //         cout << "Derived class (Employee) name: " << name << endl;
// //         cout << "Age: " << age << ", Employee ID: " << employeeID << endl;
// //     }
// // };

// // int main() {
// //     // Person p;
// //     // Person p1 ("sameer", 20);
// //     // Employee emp("Alice", 30, "Bob", 101);

// //     Employee emp("Alice", 30, "Bob", 101);
// //     Person p1 ("sameer", 22220);
// //     Employee emp1("Aliceeeeee", 30, "Bobbbbbb", 101);
// //     p1.display ();
// //     cout << endl;
// //     emp.display();
// //     cout << endl;
// //     emp.display();

// //     return 0;
// // }


// /*In programming, chaining means combining multiple operations in a single line by linking (or "chaining") calls together. In the context of the assignment operator (operator=), chaining allows you to perform multiple assignments in one line. For example:

// cpp
// Copy code
// s3 = s2 = s1;
// In this case, both s3 and s2 are assigned the values of s1 in one line.

// Here’s how chaining works with return *this;:

// s2 = s1; is evaluated first. The assignment operator for s2 copies the values from s1 to s2.
// Because the assignment operator returns *this (which is s2), the result of s2 = s1 is s2 itself.
// This allows s3 = s2 to happen next, completing s3 = s2 = s1.
// In short, return *this; enables chaining by returning a reference to the assigned object, which can then be used in additional operations, making the code cleaner and allowing for more compact expressions.

// In C++ when you use return *this; in the assignment operator, you’re returning a reference to the current object itself (the object on which the assignment is called). Let’s break down exactly how it works with your example:

// 1. return *this; Meaning
// this is a pointer to the current object.
// *this dereferences that pointer, giving the object itself (not a pointer).
// When you return *this in the assignment operator, it’s like saying “return this object (the one being assigned to).”

// 2. Role in s2 = s1;
// In s2 = s1;, the assignment operator of s2 is called to copy the values from s1 to s2. Here’s what happens:

// The operator copies all of s1's data into s2.
// At the end, return *this; returns a reference to s2 (the left side of s2 = s1), enabling you to do things like chain assignments (e.g., s3 = s2 = s1;).
// So, *this refers to the modified s2, and returning it allows the result of s2 = s1; to be used in further operations if needed.*/






// Assignment -> 6

#include <iostream>
 
using namespace std;

class Number {
protected:
    int x;
    int y;

public:
    Number ( int x1, int y1 ) {
        x = x1;
        y = y1;
    }

    Number ( int x2 ) {
        x = x2;
    }

    Number operator + ( Number& obj ) {
        Number n3 ( 0, 0 );
        n3.x = x + obj.x;
        n3.y = y + obj.y;
        return n3;
        /*In C++, this is a special pointer available within non-static member functions of a class. It points to the object that is calling the function, giving access to that object's members and methods.

        // What Happens When You Return *this
        // When you return *this from a member function, you’re returning the object itself (by value), not just a pointer. Here's what it does:

        // Returning the Current Object: By using *this, you are returning a copy of the current object. This can be useful in methods where you want to chain function calls, like in operator overloading or setter functions.*/
    }

    Number operator - ( Number& obj ) {
        Number n3 ( 0, 0 );
        n3.x = x - obj.x;
        n3.y = y - obj.y;
        return n3;
        /*In C++, this is a special pointer available within non-static member functions of a class. It points to the object that is calling the function, giving access to that object's members and methods.

        // What Happens When You Return *this
        // When you return *this from a member function, you’re returning the object itself (by value), not just a pointer. Here's what it does:

        // Returning the Current Object: By using *this, you are returning a copy of the current object. This can be useful in methods where you want to chain function calls, like in operator overloading or setter functions.*/
    }

    Number operator * ( Number& obj ) {
        Number n3 ( 0, 0 );
        n3.x = x * obj.x;
        n3.y = y * obj.y;
        return n3;
        /*In C++, this is a special pointer available within non-static member functions of a class. It points to the object that is calling the function, giving access to that object's members and methods.

        // What Happens When You Return *this
        // When you return *this from a member function, you’re returning the object itself (by value), not just a pointer. Here's what it does:

        // Returning the Current Object: By using *this, you are returning a copy of the current object. This can be useful in methods where you want to chain function calls, like in operator overloading or setter functions.*/
    }

    Number operator / ( const Number& other ) const {
        // return (x * 1.0 / other.x) + (y * 1.0 / other.y);

        Number n3 ( 0, 0 );
        n3.x = (x * 1.0 / other.x);
        n3.y = (y * 1.0 / other.y);
        return n3;
        /*In C++, this is a special pointer available within non-static member functions of a class. It points to the object that is calling the function, giving access to that object's members and methods.

        // What Happens When You Return *this
        // When you return *this from a member function, you’re returning the object itself (by value), not just a pointer. Here's what it does:

        // Returning the Current Object: By using *this, you are returning a copy of the current object. This can be useful in methods where you want to chain function calls, like in operator overloading or setter functions.*/
    }

    void print () {
        cout << "X is : " << x << endl;
        cout << "Y is : " << y << endl;
    }

    void print1 () {
        cout << "Number is : " << x << endl;
    }

    void increment_decrement () {
        cout << "X is : " << x << endl;
    }

    Number getValue () {
        return *this;
    }

    friend Number operator % ( Number& obj, Number& obj1 );

    Number operator ++ ( int ) {
        cout << "Before : " << x << endl;
        // ++x;
        // Number temp = *this;
        // return temp;
        x++;
        return *this;
        /*In C++, the operator--(int) function is used for post-decrement. The int parameter in this operator is a special convention to distinguish between pre-decrement (operator--()) and post-decrement (operator--(int)).

        Why int is used:
        The int parameter does not serve a practical purpose in the function. It simply exists to differentiate between the pre-decrement (operator--()) and post-decrement (operator--(int)) operators.
        This is a dummy parameter that is used to signal that the function is intended for post-decrement, which is a standard convention in C++.
        Key Points:
        Post-decrement: When you use operator--(int), the value of the object is first returned (before decrementing), and then the decrement occurs.

        Pre-decrement: When you use operator--(), the decrement occurs first, and then the updated value is returned.*/
    }

    Number operator -- ( int ) {
        cout << "Before : " << x << endl;
        --x;
        return *this;
    }

};

Number operator % ( Number& obj, Number& obj1 ) {
    Number n7 ( 0, 0 );
    n7.x = obj.x % obj1.x;
    n7.y = obj.y % obj1.y;
    return n7;
}

class Complex : public Number {
private:
    int real;
    int img;
    int paramterized;

public:

    Complex ( int para ) : Number ( para ) {
        paramterized = para;
    }

    Complex ( int r, int i ) : Number ( r, i ) {
        /*You're adding : Number(r, i) in the Complex class's constructor because when a derived class (like Complex) is instantiated, its base class (like Number) must also be constructed first. If the base class doesn't have a default constructor (i.e., one that takes no arguments), you must explicitly call one of its parameterized constructors to provide the required arguments.

        Why is this necessary?
        Base Class Construction:

        Before the derived class (Complex) can initialize its own members (real and img), the base class (Number) must be fully initialized.
        If Number does not have a default constructor, the compiler doesn't know how to initialize its x and y members without explicit instructions.
        No Default Constructor:

        Your Number class only has parameterized constructors (Number(int x1, int y1) and Number(int x2)), so the compiler cannot automatically initialize it.
        You must explicitly call one of these constructors from the initializer list in the Complex class.
        Order of Initialization:

        The base class (Number) is always initialized before the derived class (Complex). By specifying : Number(r, i), you ensure that Number is properly constructed with the values r and i.
        What happens if you don’t do this?
        If you don’t explicitly call the base class constructor in the initializer list and no default constructor exists, the compiler throws an error because it cannot initialize the base class on its own.

        Example Analogy:
        Imagine you're building a house (Complex), and its foundation (Number) requires specific materials (parameters for the Number constructor). If you don't supply these materials explicitly, the foundation can't be laid, and the house cannot be built. Similarly, the derived class can't exist without properly initializing the base class.

        By adding : Number(r, i), you're ensuring that the base class Number is properly constructed with the values needed for its member variables.*/
        real = r;
        img = i;
    }

    Complex operator + ( Complex const& obj ) {
        Complex c3 ( 0, 0 );
        c3.real = real + obj.real;
        c3.img = img + obj.img;
        return c3;
    }

    void print () {
        cout << "The Complex part is : " << real << endl;
        cout << "The Imaginary part is : " << img << "i" << endl;
    }

    void print1 () {
        cout << "The Complex part is : " << paramterized << endl;
        cout << "The Imaginary part is : " << paramterized << "i" << endl;
    }
};

class Logs {
public:
    Number* numbers[10];
    Complex* complexNumbers[10];
    /*Summary
    Number numbers[10]; stores actual Number objects.
    Number* numbers[10]; stores pointers (addresses) to Number objects.
    You cannot store an address in a Number array directly, because the array expects objects, not pointers. Use an array of pointers if you want to store addresses.*/
    int numbers1;
    int complexNumbers1;
    /*Number n; Complex c; in Logs class:

    Yes, n is an object of the Number class, and c is an object of the Complex class. This means n and c will contain all the attributes and member functions of their respective classes.
    However, since Number and Complex are independent classes, the Logs class does not automatically inherit all members from both. Instead, the Logs class contains these objects as member variables (n and c).
    Attributes and Members of Number and Complex in Logs:

    The Logs class does not directly "own" the methods and attributes of Number or Complex. Instead, it can only access their public or protected members through the objects n and c.*/

    /*4. Summary:
    Agar aapko Number ke features multiple places par use karne hain, toh Number ko alag rakhna zaroori hai. Lekin agar aapka pura kaam Complex ke saath hi ho raha hai aur Number ka independent use nahi hai, toh alag Number class banane ki zarurat nahi.

    Simplified:

    Reuse chahiye? -> Number alag rakhte hain.
    Sirf Complex me kaam chal raha hai? -> Number ki zarurat nahi.*/

public:
    Logs () {
        numbers1 = 0;
        complexNumbers1 = 0;
    }

    void storeNumbers ( Number* num1 ) {        
        if ( numbers1 < 10 ) {
            numbers[numbers1++] = num1;
        }
    }

    void storeComplexNumbers ( Complex* c ) {        
        if ( complexNumbers1 < 10 ) {
            complexNumbers[complexNumbers1++] = c;
        }
    }

    void printNumbers () {
        for ( int i = 0; i < numbers1; i++ ) {
            numbers[i] -> print1 ();
            /*The -> operator is used when dealing with pointers to objects, whereas the . operator is used when working with objects directly. Since numbers[i] is a pointer, you must use -> to call its functions.*/
            /*Jawaab Pehle Sawaal Ka:
            Jee, number[i]->print1(); sirf print1() function ko call karta hai.
            Iska kaam yeh hota hai ke number[i] ke pointer ke through us object ka function print1() call kare jisme yeh pointer point kar raha ho.

            Example Explanation: Agar number[i] kisi Number ya Complex object ka address store karta hai:

            -> ka matlab hai pointer dereference karna aur uska function access karna.
            Agar print1() virtual function hai, toh actual object ka function call hoga (runtime polymorphism ki wajah se).*/
        }
    }

    void printComplexNumbers () {
        // for ( int i = 0; i < complexNumbers1; i++ ) {
        //     complexNumbers[i] -> print1 ();
        // }
        for ( int i = 0; i < complexNumbers1; i++ ) {
            // complexNumbers[i] -> print1 ();
            cout << *(complexNumbers + i) << endl;
        }
    }
};


int main () {
 
    Number n1 ( 2, 3 );
    Number n2 ( 4, 5 );
    Number n3 = n1 + n2;
    n3.print ();
    Number n4 = n1 - n2;
    n4.print ();
    Number n5 = n1 * n2;
    n5.print ();
    Number n6 = n1 / n2;
    n6.print ();
    Number result = n1.getValue ();
    result.print ();
    Number n7 = n1 % n2;
    n7.print ();
    Number nn ( 3 );
    Number n8 = nn--;
    n8.increment_decrement ();
    Number nnn ( 9 );
    Number n9 = nnn++;
    n9.increment_decrement ();
    // Number forLogNum ( 10 );
    // Number forLogNum1 ( 20 );
    // Complex forlogComplex ( 30 );
    // Complex forLogComplex1 ( 40 );

    // Jo tareka geetsfor geeks ke lie hai woh just 1 (2,3) bs itne ke lie work kare ga agar 2 a gai like (2,3) and (4,5) to nhi kre ga
    cout << endl;

    Complex c1 ( 12, 4 );
    Complex c2 ( 13, 5 );
    Complex c3 = c1 + c2;
    c3.print ();

    cout << endl;
    cout << endl;

    Logs l1;
    Number forLogNum ( 10 );
    Number forLogNum1 ( 20 );
    Complex forlogComplex ( 30 );
    Complex forLogComplex1 ( 40 );
    /*The error is happening because you're trying to pass a Logs object to a function that expects a Number or Complex pointer. In simple terms:

    storeNumbers expects a Number* (pointer to Number), but you are passing a Logs*.
    storeComplexNumbers expects a Complex* (pointer to Complex), but you are passing a Logs*.
    You need to pass the correct object types:

    For storeNumbers, pass a Number pointer.
    For storeComplexNumbers, pass a Complex pointer.
    So, instead of doing:

    l1.storeNumbers(&l2);
    l1.storeComplexNumbers(&l4);
    You should pass the Number or Complex objects like this:

    l1.storeNumbers(&n2);  // Correct: passing Number pointer
    l1.storeComplexNumbers(&c4);  // Correct: passing Complex pointer
    Basically, storeNumbers and storeComplexNumbers are expecting pointers to Number and Complex objects, not Logs objects.*/
    l1.storeNumbers ( &forLogNum );
    l1.storeNumbers ( &forLogNum1 );
    l1.storeComplexNumbers ( &forlogComplex );
    l1.storeComplexNumbers ( &forLogComplex1 );
    l1.printNumbers ();
    l1.printComplexNumbers ();

    return 0;
}




// #include <iostream>
// using namespace std;

// // Number class to store simple numbers
// class Number {
// public:
//     int value;  // A simple integer to store a number

//     Number(int v) : value(v) {}  // Constructor to initialize the number

//     void print() const {  // Method to print the number
//         cout << "Number: " << value << endl;
//     }
// };

// // Complex class to store complex numbers
// class Complex {
// public:
//     int real, imag;  // Real and imaginary parts of a complex number

//     Complex(int r, int i) : real(r), imag(i) {}  // Constructor

//     void print() const {  // Method to print the complex number
//         cout << "Complex: " << real << " + " << imag << "i" << endl;
//     }
// };

// // Logs class which stores both Number and Complex objects
// class Logs {
// private:
//     Number* numbers[10];  // Array to store Number objects
//     Complex* complexNumbers[10];  // Array to store Complex objects
//     int numCount, complexCount;
//     /*Complex* complexNumbers[10];  yani yeh sstack pe hai lakin in keandar jo num1 ka address hai woh heap pe hain bs itna batao
//     ChatGPT said:
//     ChatGPT
//     Yes, exactly! Here's the breakdown:

//     Complex* complexNumbers[10];: The array complexNumbers is an array of pointers, and this array is stored on the stack.
//     Inside the array: Each element of the array is a pointer. So, when you assign an address (for example, the address of a new Complex object), the pointer in the array holds the address of the dynamically allocated object in the heap.
//     In summary:

//     Array itself: On the stack.
//     Object (like num1): Created with new, so it's on the heap.
//     Array elements (pointers): Store the heap addresses, but the pointers themselves are stored on the stack.
//     So, complexNumbers is an array on the stack, but each element in that array points to an object stored on the heap.

//     You said:
//     matlab woh heap ko point kr rhy Complex* complexNumbers[10]; is me jo address hain num1 wagera woh heap kopoint kr ry but yh pure line type complex and obj ke array yeh stack pe hai
//     ChatGPT said:
//     ChatGPT
//     Yes, you're correct!

//     Complex* complexNumbers[10];: This line defines an array of pointers (complexNumbers) which is stored on the stack.

//     Each element of this array is a pointer that can hold an address, and the addresses stored in these pointers point to objects that are dynamically allocated on the heap (using new).

//     So, when you do something like:

//     cpp
//     Copy code
//     Complex* c1 = new Complex(3, 4);
//     complexNumbers[0] = c1;
//     The pointer c1 holds the address of the object (new Complex(3, 4)) which is on the heap.
//     complexNumbers[0] stores the address of the object in the heap, but the array itself is stored on the stack.
//     In short:

//     Array (complexNumbers) = stack.
//     Object (new Complex(3, 4)) = heap.
//     The array stores addresses (pointers) to objects in the heap.
// */
// public:
//     Logs() : numCount(0), complexCount(0) {}  // Constructor to initialize counts

    // // Method to add a number to the logs
    // void addNumber(Number num[]) {
    //     numbers[numCount++] = num;
    // }
    // // Key Takeaway
    // // In function parameters, Number* num and Number num[] behave similarly because arrays decay into pointers.
    // // But outside functions, Number* is a single pointer, while Number[] is a full array.

    // // Method to add a complex number to the logs
    // void addComplex(Complex* c) {
    //     complexNumbers[complexCount++] = c;
    // }

//     // Method to print all numbers
//     void printNumbers() const {
//         for (int i = 0; i < numCount; ++i) {
//             numbers[i]->print();
//         }
//     }

//     // Method to print all complex numbers
//     void printComplex() const {
//         for (int i = 0; i < complexCount; ++i) {
//             complexNumbers[i]->print();
//         }
//     }

//     // ~Logs () {
//     //     for ( int i = 0; i < numCount; i++ ) {
//     //         delete numbers[i];
//     //     }

//     //     for ( int i = 0; i < complexCount; i++ ) {
//     //         delete complexNumbers[i];
//     //     }
//     // }
//     /*he issue in your program is a double free error, which occurs when the same memory location is freed more than once. This error arises because you're deleting the dynamically allocated objects both in the Logs destructor and manually in the main() function.

//     Explanation of the Problem:
//     In your destructor (~Logs), you delete each object in the numbers and complexNumbers arrays.
//     However, in the main() function, you also explicitly call delete on the same objects (num1, num2, c1, c2).
//     As a result, the memory is freed twice:
//     Once in the destructor.
//     Once explicitly in main().
//     This is what causes the "double free" error.

//     Solution:
//     You should avoid deleting the objects in main() because the Logs destructor already takes care of freeing the memory for all stored objects. Simply remove the delete calls in main():*/
// };

// int main() {
//     // Logs log;  // Create a Logs object

//     // Create Number and Complex objects
//     // Number* num1 = new Number(10);
//     // Number* num2 = new Number(20);
//     // Complex* c1 = new Complex(3, 4);
//     // Complex* c2 = new Complex(5, 6);
//     /*Heap pe dynamically allocate karne ka fayda us waqt hota hai jab objects ka lifetime ya memory control aapke haath me ho. Lekin agar stack pe karna possible hai aur koi special zarurat nahi hai, toh stack allocation hamesha better aur simple hoti hai. Aapka sawaal yeh hai ke heap pe kyun kiya jab stack se bhi kaam ho raha tha? Yahaan kuch reasons hain jo samajhne mein madad karenge:

//     1. Heap Allocation ka Control
//     Heap pe allocate kiye gaye objects tab tak rehte hain jab tak aap manually delete nahi karte. Yeh useful hai agar objects ka scope se bahar bhi kaam karna ho.
//     Example: Agar aap objects ko ek function me banate aur dusre functions ko pass karte.
//     2. Complex Data Structures
//     Agar dynamically size badalne wale ya complicated data structures banane ho (e.g., linked lists, trees), toh heap ki zarurat hoti hai.
//     Lekin aapke example me yeh zarurat nahi thi.
//     3. Stack ki Limitations
//     Stack ka size limited hota hai. Agar bohot bade ya zyada objects allocate karne hote, toh stack overflow ho sakta hai.
//     Aapke case me objects chhote the, toh stack safe choice thi.*/

//     // Add numbers and complex numbers to the log
//     // log.addNumber(num1);
//     // log.addNumber(num2);
//     // log.addComplex(c1);
//     // log.addComplex(c2);
//      Number num1(10);  // Stack allocation
//     Number num2(20);
//     Complex c1(3, 4);
//     Complex c2(5, 6);

//     Logs log;
//     log.addNumber(&num1);  // Pass address of stack object
//     log.addNumber(&num2);
//     log.addComplex(&c1);
//     log.addComplex(&c2);


//     // Print all stored numbers and complex numbers
//     log.printNumbers();
//     log.printComplex();

//     // Free up memory after use -> IS KE BAAT HO RHY IS KE WAJA SE DOUBLE MEMORY RELESE HO RHY
//     // delete num1;
//     // delete num2;
//     // delete c1;
//     // delete c2;

//     /*Let me explain this step-by-step:

//     1. delete vs delete[]:
//     delete: Used to delete a single object that was allocated with new.

   
//     Number* num1 = new Number(10);  // single object
//     delete num1;  // correct, because you allocated it with 'new'
//     delete[]: Used to delete an array of objects that was allocated with new[].

    
//     Number* nums = new Number[10];  // array of objects
//     delete[] nums;  // correct, because you allocated it with 'new[]'
//     2. Why a For-Loop in Destructor?
//     In your Logs class, you're storing pointers to individual objects in the arrays numbers[10] and complexNumbers[10]. The key point is:

//     The arrays (numbers and complexNumbers) are stored on the stack.
//     The objects (like num1, num2, c1, c2) are dynamically allocated on the heap using new.
//     When you're deleting these objects in the destructor:

//     ~Logs() {
//         for (int i = 0; i < numCount; ++i) {
//             delete numbers[i];  // Delete individual objects
//         }
//         for (int i = 0; i < complexCount; ++i) {
//             delete complexNumbers[i];  // Delete individual objects
//         }
//     }
//     Explanation:

//     delete numbers[i]: Each element in the numbers array is a pointer to a Number object allocated with new. So, you need to delete each object individually using delete.
//     Similarly for complexNumbers[i], each element holds a pointer to a Complex object created with new. These objects must be deleted one by one using a for-loop.
//     3. Why Not Use delete[] Here?
//     delete[] is used to delete arrays of objects that were created with new[], i.e., when you allocate a block of memory for multiple objects at once.
//     Example of incorrect usage of delete[]:


//     Number* numbers = new Number[10];  // Array of 10 Number objects
//     delete[] numbers;  // Correct for deleting array of Number objects
//     But in your case, you're not allocating an array of Number or Complex objects. Instead, you're allocating individual objects using new. So using delete[] would cause undefined behavior, as delete[] is meant for arrays, not individual objects.

//     4. The delete in Main (delete num1; delete num2; delete c1; delete c2;)
//     Here, delete num1; (and similarly for other delete statements) is deleting individual objects created using new. This is correct because:
//     num1, num2, c1, and c2 are pointers to single objects on the heap.
//     Each of these objects was created with new (e.g., new Number(10)), so they should be deleted with delete.
//     Conclusion:
//     delete[] is used for arrays of objects created with new[] (i.e., a contiguous block of memory).
//     delete is used for individual objects created with new.
//     In your case, you're using delete because you're deleting individual objects, not arrays. The for-loop in the destructor ensures that each object is deleted one by one, as you can't use delete[] on individual objects.
//     So, in the destructor, the for-loop ensures that every object pointed to by the array elements is deleted properly using delete, rather than using delete[] which would be incorrect.*/

//     /*Stack vs Heap (Briefly):
//     Stack:

//     Fast, automatic memory allocation/deallocation.
//     Use for short-lived objects or known sizes.
//     No delete needed, but limited size.
//     Heap:

//     Flexible, supports large and long-lived objects.
//     Use when objects outlive their scope or size is unknown.
//     Manual delete needed to prevent memory leaks.
//     Choose Stack: For simplicity and short-term use.
//     Choose Heap: For dynamic and persistent needs.*/

//     return 0;
// }
