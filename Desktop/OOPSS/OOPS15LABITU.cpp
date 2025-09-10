// #include <iostream>

// int main() {
//     std::cout << "C++ Standard version: " << __cplusplus << std::endl;
//     return 0;
// }


// Lab -> 1 Task - 1

// #include <iostream>
// #include <string>
 
// using namespace std;

// struct Item {
//     string name;
//     int quantity;
//     float price;

//     Item () {
//         name = " ";
//         quantity = 0;
//         price = 0.0;
//     }
// };


// struct ShoppingCart {
//     // string array[3][3];
//     Item arr[100];
//     int k, a;
//     float total;

//     ShoppingCart () {
//         k = 0;
//         a = 0;
//         total = 0;
//     }

//     void addItem ( string n, int q, float p ) {
//         // for ( int i = 0; i < 1; i++ ) {
//         //     for ( int j = 0; j < 1; j++ ) {
//         //         array[k][a] = n;
//         //         a = a + 1;
//         //         array[k][a] = to_string(q);
//         //         a = a + 1;
//         //         array[k][a] = to_string(p);
//         //         a = 0;
//         //         k = k + 1;
//         //     }
//         // }

//         for ( int i = 0; i < 1; i++ ) {
//             arr[a].name = n;
//             arr[a].quantity = q;
//             arr[a].price = p;
//             a = a + 1;
//         }
//     }
    
//     void CalculateTotalPrice () {
//         // k = 0;

//         // for ( int i = 0; i < 3; i++ ) {
//         //     for ( int j = 0; j < 3; j++ ) {
//         //         cout << array[i][j] << " ";
//         //     }
//         //     cout << endl;
//         // }

//         a = 0;
//         for ( int i = 0; i < 3; i++ ) {
//             cout << arr[a].name << " ";
//             cout << arr[a].quantity << " ";
//             cout << arr[a].price << " ";
//             cout << endl;
//             a = a + 1;
//         }
//         cout << endl;

//         for ( int i = 0; i < 3; i++ ) {
//             total = total + (arr[i].price);
//             k = k + 1;
//         }

//         // for ( int i = 0; i < 3; i++ ) {
//         //     for ( int j = 0; j < 1; j++ ) {
//         //         total = total + stof(array[k][2]);
//         //         k = k + 1;
//         //     }
//         // }

//         cout << "The total is : " << total << endl;
//     }
// };


// int main () {

//     ShoppingCart cart;
 
//     cart.addItem ( "Laptop", 2, 800.0 );
//     cart.addItem ( "Headphones", 1, 50.0 );
//     cart.addItem ( "Mouse", 3, 20.0 ); 
//     cart.CalculateTotalPrice ();
 
//     return 0;
// }


//Lab -> 2 Task - 1

// #include <iostream>
 
// using namespace std;
 
// struct Shape {
//     struct Dimensions {
//         float length;
//         float width;
//     };

//     string shape;
//     Dimensions d;

//     Shape () {
//         shape = "unknown";
//         float length = 0.0;
//         float  width = 0.0;
//     }

//     void area ( float length, float width ) {
//         cout << "The Area is : " << length * width << endl;
//     }
// };


// int main () {
 
//     Shape s;
    // float length;
    // cout << "Enter the length : ";
    // cin >> length;
    // float width;
    // cout << "Enter the width : ";
    // cin >> width;

//     s.area ( length, width );

 
//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// struct Shape {
//     struct Dimensions {
//         float length;
//         float width;
//     };

//     string shape;
//     Dimensions d;

//     // Constructor to initialize the shape's name, length, and width
//     Shape(string name, float length, float width) {
//         shape = name;
//         d.length = length;
//         d.width = width;
//     }

//     // Member function to calculate the area of the rectangle
//     float area() const {
//         return d.length * d.width;
//     }
// };

// int main() {
//     string shapeName;
//     float length, width;

//     cout << "Enter the name of the shape: ";
//     cin >> shapeName;

//     cout << "Enter the length: ";
//     cin >> length;

//     cout << "Enter the width: ";
//     cin >> width;

//     // Create an instance of Shape with user input
//     Shape s(shapeName, length, width);

//     // Calculate and output the area
//     cout << "The area of " << s.shape << " is: " << s.area() << endl;

//     return 0;
// }

// Yeh woh he hai lab 2 ka me ne kuch galtiyan ke dubara kar rha aik mera code hai or aik gpt ka ab me samjha ke kese krna is trha seekhu ga is sawal me logic nhi tha sirf implementation the

// #include <iostream>
 
// using namespace std;

// struct Shape {
//     struct Dimensions {
//         float length;
//         float width;
//     };

//     string shape;
//     Dimensions d;

//     Shape ( string s, float l, float w ) {
//         d.length = l;
//         d.width = w;
//     }

//     float area () {
//         return d.length * d.width;
//     }
// };


// int main () {
 
//     // Shape s;

//     string shape;
//     cout << "Enter the shape's name : ";
//     cin >> shape;
//     float length;
//     cout << "Enter the length : ";
//     cin >> length;
//     float width;
//     cout << "Enter the width : ";
//     cin >> width;

//     Shape s ( shape, length, width ); // Idhr Shape s pura likh ke he krna Shape s jo uper likha or yaha bs s likhu tou ni chale ga 

//     cout << "The length of " << s.shape << " is : " << s.area () << endl;
 
//     return 0;
// }

// Lab 2 -> Task 2

// #include <iostream>
 
// using namespace std;

// struct Book {
//     struct Author {
//         string author;
//     };

//     struct AdditionalInfo {
//         string title ="unknown";
//         string genre;
//         int publishYear;
//         float price;
//         int pageCount;
//     };

//     Author author1;
//     AdditionalInfo additionalInfo1;
//     // Author author2;
//     // AdditionalInfo additionalInfo2;

//     Book ( string a, string t, string g, int p, int pc, float pr ) {
//         this -> author1.author = a;
//         this -> additionalInfo1.title = t;
//         this -> additionalInfo1.genre = g;
//         this -> additionalInfo1.publishYear = p;
//         this -> additionalInfo1.price = pc;
//         this -> additionalInfo1.pageCount = pr;
//     } 

//     // Book ( string a, string t, string g, int p, int pc, float pr, float total ) {
//     //     this -> author2.author = a;
//     //     this -> additionalInfo2.title = t;
//     //     this -> additionalInfo2.genre = g;
//     //     this -> additionalInfo2.publishYear = p;
//     //     this -> additionalInfo2.price = pc;
//     //     this -> additionalInfo2.pageCount = pr;
//     // } 

//     void display () {
//         cout << "The Author is : " << author1.author << ", the Title of book is : " << additionalInfo1.title << ", the Genre is : " << additionalInfo1.genre << ", the Published Year is : " << additionalInfo1.publishYear << ", the price is : " << additionalInfo1.price << ", the Page Count are : " << additionalInfo1.pageCount << endl;
//     }

//     // void display1 () {
//     //     cout << "The Author is : " << author2.author << ", the Title of book is : " << additionalInfo2.title << ", the Genre is : " << additionalInfo2.genre << ", the Published Year is : " << additionalInfo2.publishYear << ", the price is : " << additionalInfo2.price << ", the Page Count are : " << additionalInfo2.pageCount << endl;
//     // }

//     static float calculateTotalValue ( const Book& b1, const Book& b2 ) {
//         return b1.additionalInfo1.price + b2.additionalInfo1.price;
//         //In float calculateTotalValue(const Book& b1, const Book& b2), const means that b1 and b2 are not modified inside the function. It's a way to ensure that the function only reads the values of b1 and b2 but doesn't change them
//     }
// };


// int main () {
    
    // float total = 0;
    // string author;
    // cout << "Enter the Author : ";
    // cin >> author;
    // string title;
    // cout << "Enter the Title : ";
    // cin >> title;
    // string genre;
    // cout << "Enter the Genre : ";
    // cin >> genre;
    // int publishYear;
    // cout << "Enter the Publish Year : ";
    // cin >> publishYear;
    // float price;
    // cout << "Enter the Price : ";
    // cin >> price;
    // int pageCount;
    // cout << "Enter the Page Count : ";
    // cin >> pageCount;

    // Book b1 ( author, title, genre, publishYear, price, pageCount );
    // b1.display ();

    // cout << "Enter the Author : ";
    // cin >> author;
    // cout << "Enter the Title : ";
    // cin >> title;
    // cout << "Enter the Genre : ";
    // cin >> genre;
    // cout << "Enter the Publish Year : ";
    // cin >> publishYear;
    // cout << "Enter the Price : ";
    // cin >> price;
    // cout << "Enter the Page Count : ";
    // cin >> pageCount;

    // Book b2 ( author, title, genre, publishYear, price, pageCount );
    // b2.display ();

    // cout << "The total price of two books are : " << Book::calculateTotalValue ( b1, b2 );
    /*Yes, you’re correct. Making calculateTotalValue a static function would be a good approach in this case, especially if you want to ensure that the function is called in a way that does not depend on a specific instance of the Book class. This is particularly useful when:
    Multiple Instances: You have multiple instances, and the function needs to operate on multiple of these instances without being tied to any one of them.
    Utility: The function performs a task that logically doesn’t belong to a single instance but rather involves multiple instances.
    In summary, if you need to access instance-specific data while using Book:: syntax, you cannot do it with static methods. You would use non-static methods for that purpose. If you want to perform calculations involving instance-specific data from within a static method, you need to pass the necessary instances as parameters to the static method.*/
//     return 0;
// }


// Lab -> 3 Task - 1

// #include <iostream>
// #include <cmath>
 
// using namespace std;

// class Triangle {
// private:
//     double side1;
//     double side2;
//     double side3;

// public:
//     Triangle () {
//         side1 = 0.0f;
//         side2 = 0.0f;
//         side3 = 0.0f;
//     }

//     Triangle ( double s1, double s2, double s3 ) {
//         side1 = s1;
//         side2 = s2;
//         side3 = s3;
//     }

//     Triangle ( const Triangle& t2 ) {
//         cout << "Copy Constructor" << endl;
//         side1 = t2.side1;
//         side2 = t2.side2;
//         side3 = t2.side3;
//     }

//     double getSide1 () {
//         return side1;
//     }

//     double getSide2 () {
//         return side2;
//     }

//     double getSide3 () {
//         return side3;
//     }   

//     double calculateArea () {
//         double s = 0, result = 0;

//         s = (side1 + side2 + side3) / 2;

//         result = sqrt( s * ((s - side1) * (s - side2) * (s - side3)) );
//         return result;
//     }

//     void display () {
//         cout << "Size 1 is : " << side1 << endl;
//         cout << "Size 2 is : " << side2 << endl;
//         cout << "Size 3 is : " << side3 << endl;
//     }

//     ~Triangle () {
//         cout << "Destructor called" << endl;
//     }
// };


// int main () {
 
//     Triangle t1;

//     double side1, side2, side3;
//     cout << "Enter the size 1 : ";
//     cin >> side1;
//     cout << "Enter the size 2 : ";
//     cin >> side2;
//     cout << "Enter the size 3 : ";
//     cin >> side3;

//     Triangle t2 ( side1, side2, side3 );
//     t2.display ();

//     Triangle t3 ( t2 );
//     t3.display ();

//     t3 = t2;
    
//     cout << t3.getSide1 () << endl;
//     cout << t3.getSide2 () << endl;
//     cout << t3.getSide3 () << endl;

//     t3.display ();

//     cout << "The Area of triangle through Heron's formula is : " << t3.calculateArea () << endl;

//     return 0;
// }


// Lab -> 3 Task - 2

// #include <iostream>
 
// using namespace std;

// class LineSegment {
// private:
//     double length;

// public:
//     LineSegment () {
//         length = 0.0;
//     }

//     LineSegment ( double l ) {
//         length = l;
//     }

//     LineSegment ( const LineSegment& ls ) {
//         length = ls.length;
//     }

//     double getLength () {
//         return length;
//     }

//     void display () {
//         cout << "The length is : " << length << endl;
//     }

//     ~LineSegment () {
//         cout << "Constructor called" << endl;
//     }
// };


// int main () {
    
//     LineSegment l;

//     double length;
//     cout << "Enter the length : ";
//     cin >> length;

//     LineSegment ls ( length );
//     LineSegment ls1 ( ls );

//     ls1 = ls;
//     ls1.display ();

//     cout << "The length is : " << ls1.getLength () << endl;
//     ls1.display ();
 
//     return 0;
// }


// Lab 4 -> Task 1

// #include <iostream>
 
// using namespace std;

// class Book {
// public:
//     string title;
//     string author;
//     int year;

// public:
//     Book () {
//         title = "unknown";
//         author = "unknown";
//         year = 0;
//     }

//     void printInfo () {
//         cout << "Title is : " << title << endl;
//         cout << "Author is : " << author << endl;
//         cout << "Year is : " << year << endl;
//     }
// };


// class FictionBook : public Book {
// public:
//     string genre;
//     string subject;

// public:
//     FictionBook () {
//         title = "unknown";
//         author = "unknown";
//         year = 0;
//         genre = "unknown";
//     }

//     void printGenre () {
//         cout << "Genre is : " << genre << endl;
//     }
// };


// class NonFictionBook : public Book {
// public:
//     string genre;
//     string subject;

// public:
//     NonFictionBook () {
//         title = "unknown";
//         author = "unknown";
//         year = 0;
//         subject = "unknown";
//     }

//     void printSubject () {
//         cout << "Subject is : " << subject << endl;
//     }
// };


// int main () {
 
//     Book b1;
//     b1.printInfo ();

//     FictionBook f;
//     f.printGenre ();

//     NonFictionBook n;
//     n.printSubject ();

//     return 0;
// }

// TASK 1 THORA OR BEHTAR

// #include <iostream>
// using namespace std;

// class Book {
// public:
//     string title;
//     string author;
//     int year;

//     // Constructor to initialize title, author, and year
//     Book(string t = "unknown", string a = "unknown", int y = 0) {
//         title = t;
//         author = a;
//         year = y;
//     }

//     void printInfo() const {
//         cout << "Title: " << title << endl;
//         cout << "Author: " << author << endl;
//         cout << "Year: " << year << endl;
//     }
// };

// class FictionBook : public Book {
// public:
//     string genre;

//     // Constructor to initialize title, author, year, and genre
//     FictionBook(string t = "unknown", string a = "unknown", int y = 0, string g = "unknown")
//         : Book(t, a, y) // Call base class constructor
//     {
//         genre = g;
//     }

//     void printGenre() const {
//         printInfo(); // Call base class function
//         cout << "Genre: " << genre << endl;
//     }
// };

// class NonFictionBook : public Book {
// public:
//     string subject;

//     // Constructor to initialize title, author, year, and subject
//     NonFictionBook(string t = "unknown", string a = "unknown", int y = 0, string s = "unknown")
//         : Book(t, a, y) // Call base class constructor
//     {
//         subject = s;
//     }

//     void printSubject() const {
//         printInfo(); // Call base class function
//         cout << "Subject: " << subject << endl;
//     }
// };

// int main() {
//     // Base class object
//     Book b1("Generic Book", "Author A", 2000);
//     b1.printInfo();
//     cout << endl;

//     // Derived class object (FictionBook)
//     FictionBook f("Fiction Book", "Author B", 2010, "Fantasy");
//     f.printGenre();
//     cout << endl;

//     // Derived class object (NonFictionBook)
//     NonFictionBook n("Non-Fiction Book", "Author C", 2020, "Science");
//     n.printSubject();

//     return 0;
// }

// Lab -> 4 Task 2 

// #include <iostream>
 
// using namespace std;

// class ElectronicDevice {
// private:
//     string brand;
//     string model;
//     int year;

// public:
//     ElectronicDevice ( string b = "unknown", string m = "unknown", int y = 0 ) {
//         brand = b;
//         model = m;
//         year = y;
//     }

//     void displayInfo () {
//         cout << endl;
//         cout << "Brand is : " << brand << endl;
//         cout << "Model is : " << model << endl;
//         cout << "Year is : " << year << endl;
//     }
// };


// class Smartphone : public ElectronicDevice {
// private:
//     string operatingSystem;

// public:
//     Smartphone ( string b = "unknown", string m = "unknown", int y = 0, string o = "unknown" ) : ElectronicDevice ( b, m, y ) {
//         operatingSystem = o;
//     }

//     void showOperatingSystem () {
//         displayInfo ();
//         cout << "Operating System is : " << operatingSystem << endl;
//         cout << endl;
//     }
// };


// class Laptop : public ElectronicDevice {
// private:
//     int ramSize;

// public:
//     Laptop ( string b = "unknown", string m = "unknown", int y = 0, int r = 0 ) : ElectronicDevice ( b, m, y ) {
//         ramSize = r;
//     }

//     void showRamSize () {
//         displayInfo ();
//         cout << "Ram size is : " << ramSize << endl;
//         cout << endl;
//     }
// };


// class Tablet : public ElectronicDevice {
// private:
//     string displayType;

// public:
//     Tablet ( string b = "unknown", string m = "unknown", int y = 0, string d = "unknown" ) : ElectronicDevice ( b, m, y ) {
//         displayType = d;
//     }

//     void showDisplayType () {
//         displayInfo ();
//         cout << "Display type is : " << displayType << endl;
//         cout << endl;
//     }
// };


// int main () {
 
//     ElectronicDevice ed ( "Apple", "Xr", 2017 );
//     Smartphone sp ( "Samsung", "S24Ultra", 2023, "Android" );
//     Laptop l ( "Apple", "MacBook", 2021, 256 );
//     Tablet t ( "Samsung", "TabA", 2020, "Oled" );
//     ed.displayInfo ();
//     sp.showOperatingSystem ();
//     l.showRamSize ();
//     t.showDisplayType ();
    
//     /*Values change object ke lihaaz se hote jese ke baar baar electronic device ko new values mil rhy lakin us purane obj me change nhi a rha jo obj value de rha us me a rha*/

//     return 0;
// }


// Lab 5 -> Task 1 Doing this in another folder bcz zyada files banani is me tou clean kaam ho ga

// #include <iostream>
 
// using namespace std;

// class Person {
// private:
//     string name;
//     int age;

// public:
//     Person ( const string& n, int a ) {
//         name = n;
//         age = a;
//     }

//     void display () const {
//         cout << "Name is : " << name << endl;
//         cout << "Age is : " << age << endl;
//     }

//     friend ostream & operator << ( ostream& o, Person& p );
//     friend istream & operator >> ( istream& o, Person& p );
//     friend string ReturningDoctorsName ( Person& obj );
// };


// ostream & operator << ( ostream& o, Person& p ) {
//     o << p.name << endl;
//     o << p.age << endl;

//     return o;
// }


// istream & operator >> ( istream& i, Person& p ) {
//     cout << "Enter the name : ";
//     i >> p.name;
//     cout << "Enter the age : ";
//     i >> p.age;

//     return i;
// }


// class Doctor : public Person {
// private:
//     string specialization;

// public:
//     Doctor ( const string& n, int a, string s ) : Person ( n, a ) {
//         specialization = s;
//     }

//     void display () const {
//         Person::display (); 
//     }

//     string getSpecialization () {
//         return specialization;
//     }

//     friend ostream & operator << ( ostream& o, Doctor& d );
//     friend istream & operator >> ( istream& i, Doctor& d );
// };


// string ReturningDoctorsName ( Person& obj ) {
//     return obj.name;
// }


// ostream & operator << ( ostream& o, Doctor& d ) {
//     o << d.specialization << endl;

//     return o;
// }


// istream & operator >> ( istream& i, Doctor& d ) {
//     cout << "Enter the Doctor's specialization : " << endl;
//     i >> d.specialization;

//     return i;
// }


// class Patient : public Person {
// private:
//     string name;
//     int patientId;

// public:
//     Patient ( const string& n, int a, int pI ) : Person ( n, a ) {
//         patientId = pI;
//     }

//     void display () const {
//         Person::display ();
//         cout << "Patient Id is : " << patientId << endl;
//     }

//     void setPatientsNameById ( string n ) {
//         this -> name = n;
//     }

//     string PatientsNameById () {
//         return name;
//     }

//     int getpatientId () {
//         return patientId;
//     }

//     friend ostream & operator << ( ostream& o, Patient& p1 );
//     friend istream & operator >> ( istream& i, Patient& p1 );
// };


// ostream & operator << ( ostream& o, Patient& p1 ) {
//     o << p1.patientId << endl;

//     return o;
// }


// istream & operator >> ( istream& i, Patient& p1 ) {
//     cout << "Enter the Patient's Id : " << endl;
//     i >> p1.patientId;

//     return i;
// }


// class Medicine {
// private:
//     string name;
//     int quantity;

// public:
//     Medicine ( string n, int q ) {
//         name = n;
//         quantity = q;
//     }

//     void setMedicineName ( string n ) {
//         this -> name = n;
//     }

//     string getMedicineName () {
//         return name;
//     }

//     friend ostream & operator << ( ostream& o, Medicine& m );
//     friend istream & operator >> ( istream& i, Medicine& m );
// };


// ostream & operator << ( ostream& o, Medicine& m ) {
//     o << m.quantity << endl;

//     return o;
// }


// istream & operator >> ( istream& i, Medicine& m ) {
//     cout << "Enter the quantity of medicine : ";
//     i >> m.quantity;

//     return i;
// }


// int main () {
 
//     Person p ( "unknown", 0 );
//     Doctor d ( "Unknown", 0, "unknown" );
//     Patient p1 ( "unknown", 0, 0 );
//     Medicine m ( "unknown", 0 );

//     int n;

//     do {
//         cout << endl;
//         cout << "Enter the number, ( 0 to exit ): ";
//         cin >> n;

//         if ( n == 1 ) {
//             cout << "ADDING A DOCTOR" << endl;
//             cin >> p;
//             cin >> d;
//             cout << "The Doctor's information is -> : " << endl;
//             cout << p;
//             cout << d;
//         }

//         else if ( n == 2 ) {
//             cout << "ADDING A PATIENT" << endl;
//             string name;
//             cout << "Enter patient's name : ";
//             cin >> name;
//             p1.setPatientsNameById ( name );
//             cin >> p1;
//             cout << "The Patient's information is -> : " << endl;
//             cout << p1.PatientsNameById () << endl;
//             cout << p1;
//         }

//         else if ( n == 3 ) {
//             cout << "ADDING A MEDICINE" << endl;
//             string name;
//             cout << "Enter Medicine's name : ";
//             cin >> name;
//             m.setMedicineName ( name );
//             cin >> m;
//             cout << "The Medicine's information is -> : " << endl;
//             cout << m.getMedicineName () << endl;
//             cout << m;
//         }

//         else if ( n == 4 ) {
//             cout << "FIND DOCTOR BY SPECIALIIZATION" << endl;
//             string specialization;
//             cout << "Enter the specialization : " << endl;
//             cin >> specialization;

//             if ( specialization == d.getSpecialization () ) {
//                 cout << "Doctor found : ";
//                 string name = ReturningDoctorsName ( p );
//                 cout << name << endl;
//             }

//             else {
//                 cout << "Doctor not found" << endl;
//             }
//         }

//         else if ( n == 5 ) {
//             cout << "FIND PATIENT BY ID" << endl;
//             int id;
//             cout << "Enter the Patient's id : ";
//             cin >> id;

//             if ( id == p1.getpatientId () ) {
//                 cout << "Patient found : ";
//                 string name1 = p1.PatientsNameById ();
//                 cout << name1 << endl;
//             }

//             else {
//                 cout << "Patient not found" << endl;
//             }
//         }

//         else if ( n == 6 ) {
//             cout << "FIND MEDICINE" << endl;
//             string name;
//             cout << "Enter the Medicine's name : ";
//             cin >> name;

//             if ( name == m.getMedicineName () ) {
//                 cout << "Medicine found : ";
//                 string name1 = m.getMedicineName ();
//                 cout << name1 << endl;
//             }

//             else {
//                 cout << "Medicine not found" << endl;
//             }
//         }

//         else if ( n == 7 ) {
            
//         }

//         // else if ( n == 8 ) {
           
//         // }

//         // else if ( n == 9 ) {
            
//         // }

//         else {
//             if ( n != 0 ) {
//                 cout << "Wrong input, Enter again." << endl;
//             }
//         }
//     }

//     while ( n != 0 );
//     cout << "You have entered -1 so program has ended" << endl;
   
//     return 0;
// }

//ASSOCIATION, AGGREGATION and COMPOSITION

// #include <iostream>
// #include <string>

// using namespace std;

// class Student {
// public:
//     Student(const string& name) : name(name) {}

//     void study() const {
//         cout << name << " is studying." << endl;
//     }

//     string getName() const {
//         return name;
//     }

// private:
//     string name;
// };

// class Teacher {
// public:
//     void teach(const Student& student) const {
//         cout << "Teaching " << student.getName() << endl;
//         student.study();
//     }
// };

// int main() {
//     Student student("John");
//     Teacher teacher;

//     teacher.teach(student); // Teacher interacts with Student

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// class Teacher; // Forward declaration

// class Student {
// public:
//     Student(const string& name) : name(name) {}

//     void study() const {
//         cout << name << " is studying." << endl;
//     }

//     void setTeacher(Teacher* teacher) {
//         this->teacher = teacher;
//     }

//     string getName() const {
//         return name;
//     }

//     void getTeacher() const;

// private:
//     string name;
//     Teacher* teacher; // Bidirectional association
// };

// class Teacher {
// public:
//     void teach(const Student& student) const {
//         cout << "Teaching " << student.getName() << endl;
//         student.study();
//     }
// };

// void Student::getTeacher() const {
//     if (teacher) {
//         cout << "This student has a teacher." << endl;
//     } else {
//         cout << "This student has no teacher assigned." << endl;
//     }
// }


// int main() {
//     Student student("John");
//     Teacher teacher;

//     student.setTeacher(&teacher); // Set teacher for the student
//     teacher.teach(student); // Teacher interacts with Student
//     student.getTeacher(); // Check if the student has a teacher

//     return 0;
// }
// #include <iostream>
// #include <string>

// using namespace std;

// // class Department; // Forward declaration

// class Department {
// public:
//     Department(const string& deptName) : deptName(deptName) {}

//     string getDeptName() const {
//         return deptName;
//     }

// private:
//     string deptName;
// };


// class Professor {
// public:
//     Professor(const string& name) : name(name), department(nullptr) {}

//     void displayInfo() const {
//         cout << "Professor: " << name << endl;
//         if(department) {
//             cout << "Department: " << department->getDeptName() << endl;
//         } else {
//             cout << "No department assigned." << endl;
//         }
//     }

//     void setDepartment(Department* dept) {
//         this->department = dept; // Aggregation: Professor has a Department
//     }

// private:
//     string name;
//     Department* department; // Pointer to a Department, represents aggregation
// };

// int main() {
//     // Creating objects independently
//     Department csDept("Computer Science");
//     Professor prof1("Dr. John");

//     // Aggregation: Assigning a department to the professor
//     prof1.setDepartment(&csDept);

//     // Displaying information
//     prof1.displayInfo();

//     return 0;
// }

// LAB -> 7 ------> IS KO FILING ME BHE LIKHA HAI

#include <iostream>
 
using namespace std;

class ElectricityMeter {
protected:    
    int voltage;
    int unitCost;

public:

    ElectricityMeter () {
        cout << "Defualt" << endl;
        voltage = 5;
        unitCost = 20; // Yaha likhne se value ja nhi rhy spm1 and spm2 ko
    }

    ElectricityMeter ( int v ) {
        voltage = v;
    }

    virtual double calculateBill ( int units ) const = 0;

    virtual void additionalFunction () const = 0;

    virtual double operator + ( const ElectricityMeter& other ) const = 0;

    virtual double operator * ( int multiplier ) const = 0;

    // virtual bool operator == ( const ElectricityMeter & other ) const = 0;

    int getVoltage () const {
        return voltage;
    }
};


class SinglePhaseMeter : public ElectricityMeter {
public:
    SinglePhaseMeter () {

    }

    SinglePhaseMeter ( int v ) : ElectricityMeter ( v ) {
        voltage = v;
        unitCost = 20;
    }

    double calculateBill ( int units ) const {
        double bill = 0;

        if ( units <= 100 ) {
            bill = units * unitCost * ( 1 + voltage * 0.1 );
            return bill;
        }

        else {
            bill = 100 * unitCost + ( units - 100 ) * ( unitCost * 2.0 ) * ( 1 + voltage * 0.1 );
            return bill;
        }
    } 

    void additionalFunction () const {
        cout << "Additional function for SinglePhaseMeter" << endl;
    }

    double operator + ( const ElectricityMeter& other ) const {
        return this -> calculateBill ( 100 ) + other.calculateBill ( 100 );
    }

    double operator * ( int multiplier ) const {
        return this -> calculateBill ( 100 ) * multiplier;
    }
};


class ThreePhaseMeter : public ElectricityMeter {
public:

    ThreePhaseMeter () {

    }

    ThreePhaseMeter ( int v ) : ElectricityMeter ( v ) {
        voltage = v;
    }
    
    double calculateBill ( int units ) const {
        double bill = units * 4.0;
        return bill;
    }

	void additionalFunction () const {
        cout << "Additional function for ThreePhaseMeter" << endl;
    }

    double operator * ( int multiplier ) const { // MUST BE WRITTEN BECAUSE OF ABSTRACT CLASS OF ELECTRICITY METER
        return this -> calculateBill ( 100 ) * multiplier;
    }

	double operator + ( const ElectricityMeter& other ) const {
        return this -> calculateBill ( 100 ) + other.calculateBill ( 100 );
    }
};


class CommercialMeter {
public:
    double calculateBill ( int units ) const {
        double bill = units * 7.0;
        return bill;
    }

	void additionalFunction () const {
        cout << "Additional function for Commercial Meter" << endl;
    }

	double operator + ( const CommercialMeter& other ) const {
        return this -> calculateBill ( 20 ) + other.calculateBill ( 10 );
    } 
};


class NonCommercialMeter {
public:
    double calculateBill ( int units ) const {
        double bill = units * 3.0;
        return bill;
    }

	void additionalFunction () const {
        cout << "Additional function for Non-Commercial Meter" << endl;
    }

	double operator + ( const NonCommercialMeter& other ) const {
        return this -> calculateBill ( 50 ) + other.calculateBill ( 10 );
    }
};


class IndustrialMeter {
public:
    double calculateBill ( int units ) const {
        double bill = units * 6.0;
        return bill;
    }

	void additionalFunction () const {
        cout << "Additional function for Industrial Meter" << endl;
    }

	double operator + ( const IndustrialMeter& other ) const {
        return this -> calculateBill ( 5 ) + other.calculateBill ( 2 );
    }
};


int main () {
 
    ElectricityMeter* em;
    SinglePhaseMeter spm;
    SinglePhaseMeter spm1 ( 120 );
    SinglePhaseMeter spm2 ( 150 );
    ThreePhaseMeter tpm;
    ThreePhaseMeter tpm1 ( 100 );
    ThreePhaseMeter tpm2 ( 110 );
    CommercialMeter cm; // Inheritence ho ge tab he ho sakta run time polymorphism
    CommercialMeter cm1;
    CommercialMeter cm2;
    NonCommercialMeter ncm1;
    NonCommercialMeter ncm2;
    IndustrialMeter im1;
    IndustrialMeter im2;

    em = &spm;

    int unit;
    cout << "Enter the unit : ";
    cin >> unit;
    double ans = em -> calculateBill ( unit );
    cout << "Bill of Single Phase Meter is : " << ans << endl;

    double ans1 = spm1 + spm2;
    cout << "Sum of bills of Single Phase Meter : " << ans1 << endl;

    double ans2 = spm1 * 2;
    cout << "Double of bill 1 : " << ans2 << endl;

    em = &tpm;

    double ans3 = em -> calculateBill ( unit );
    cout << "Bill of Three Phase Meter is : " << ans3 << endl;

    double ans4 = tpm1 + tpm2;
    cout << "Sum of bill of Three Phase Meter is : " << ans4 << endl;

    double ans5 = tpm1 * 2;
    cout << "Double of bill 2 : " << ans5 << endl;

    cout << "The Bill of Commercial Mater is : " << cm.calculateBill ( 100 ) << endl;

    double ans6 = cm1 + cm2;
    cout << "Sum of bill of Commercial Meter is : " << ans6 << endl;

    double ans7 = ncm1 + ncm2;
    cout << "Sum of bill of Non-Commercial Meter is : " << ans7 << endl;

    double ans8 = im1 + im2;
    cout << "Sum of bill of Industrial Meter is : " << ans8 << endl;
    
    return 0;

    /*Ah, I see the confusion! Let’s clarify why the issue still exists even though you're creating two instances using both the default and parameterized constructors.

    Why unitCost is still not working:
    Default Constructor (SinglePhaseMeter spm):

    This does call the default constructor of ElectricityMeter, which initializes unitCost = 20. So, when you use spm, the unitCost should be 20 as expected.
    Parameterized Constructor (SinglePhaseMeter spm1(120) and SinglePhaseMeter spm2(150)):

    IMP*****************These call the parameterized constructor ElectricityMeter(int v), but it does not set unitCost to 20. The unitCost remains uninitialized for these objects (spm1 and spm2). *****************IMP
    The core issue:
    The parameterized constructor of the base class (ElectricityMeter) is not setting the unitCost. Only voltage is being set in that constructor.
    How to Fix:
    You should explicitly initialize unitCost in your parameterized constructor. For example, modify the parameterized constructor of ElectricityMeter:

    cpp
    Copy code
    ElectricityMeter ( int v ) {
        voltage = v;
        unitCost = 20; // Ensure unitCost is initialized
    }
    This way, whenever you call the parameterized constructor, both voltage and unitCost will be correctly initialized.

    Key Takeaway:
    The reason unitCost was not correctly set when using spm1 or spm2 is that the parameterized constructor does not initialize unitCost, leading to unpredictable behavior during bill calculation.

    You're correct. If you want unitCost to always be 20 for all instances (both default and parameterized), you should ensure it's set in both constructors. YEH JO MASLA A RHA THA UNICOST KA 20 VALUE KA TOU WO KEH RHA KE SPM1 AND SPM2 NHI USE KR PAIN GE AJEEB SAMJH NHI LAGE*/



    //ABSTRACT CLASS KA ERROR JO A RHA THA IS LIE KE HM ABSTRACT CLASS KA FUNCTION NHI USE KR RHY THE
    /*The error you're seeing is because ThreePhaseMeter is still considered an "abstract class." This happens because ThreePhaseMeter has not implemented the pure virtual function operator* that you defined in the ElectricityMeter base class.This makes operator* a pure virtual function, meaning every derived class must implement this function to be a concrete class. If a derived class doesn't implement it, it remains abstract, and you can't create objects of abstract classes.Since ThreePhaseMeter doesn't implement the operator* function, it remains an abstract class, and hence the error when you try to create objects of this class.An abstract class in C++ is a class that cannot be instantiated (i.e., you cannot create objects of that class). It is used to define a common interface for derived classes. An abstract class contains at least one pure virtual function (a function declared with = 0), which means that derived classes must provide their own implementation of this function.
    hese pure virtual functions (= 0) make ElectricityMeter an abstract class, so you cannot create an object of ElectricityMeter directly. Derived classes like SinglePhaseMeter and ThreePhaseMeter must implement these pure virtual functions.
    Is ThreePhaseMeter abstract?
    Yes, ThreePhaseMeter can become abstract if it does not implement all the pure virtual functions from the ElectricityMeter class.
    Since you did not implement the operator* in ThreePhaseMeter, it remains abstract, meaning you can't create objects of ThreePhaseMeter either until you implement all pure virtual functions.ElectricityMeter: Abstract class (contains pure virtual functions).
    SinglePhaseMeter: Concrete class (implements all pure virtual functions).
    ThreePhaseMeter: Abstract class (if it doesn't implement all pure virtual functions from ElectricityMeter).
    If a derived class inherits pure virtual functions from its base class but does not implement them, that derived class remains abstract. To use a derived class like ThreePhaseMeter concretely (i.e., create objects of it), you must implement all pure virtual functions in that derived class.*/
}

// Defualt
// Defualt
// Enter the unit : 2
// Bill of Single Phase Meter is : 60
// Sum of bills of Single Phase Meter : 58000
// Double of bill 1 : 52000
// Bill of Three Phase Meter is : 8
// Sum of bill of Three Phase Meter is : 800
// Double of bill 2 : 800
// The Bill of Commercial Mater is : 700
// Sum of bill of Commercial Meter is : 210
// Sum of bill of Non-Commercial Meter is : 180
// Sum of bill of Industrial Meter is : 42