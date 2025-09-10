// #include<iostream>
// using namespace std;

//  class Hero{   ==========//Class User Defined Data type hai, object instance of class hota Class (Blueprint): Class ek blueprint hai jo objects banane ke liye use hota hai. Yeh define karta hai ki ek object mein kaise attributes honge aur kya actions (member functions) kiye ja sakte hain. Jaise ke ghar ka blueprint mein rooms, color, aur garden ka plan hota hai, waise hi class blueprint mein attributes aur member functions ka plan hota hai.

// class Ghar {
// public:
//     int numberOfRooms;  
//     std::string color;
//     bool hasGarden;

//     // Member function
//     void dekheinTV() {
//         std::cout << "TV dekha jaa raha hai!" << std::endl;
//     }
// };
// Yahan Ghar class ek blueprint hai jo ghar ke attributes aur actions ko define karta hai. ==========



//  public://Private ko sirf class ke andar he access kr sakte
//     int health; //health and level are attributes or data members
//     char level;
//     void print(){  //this is member function
//         cout << level;
//     }

//     };

// int main(){

//     Hero h1; 
//     // h1.health = 70;   If input lena tou...
//     cout << "Enter the Health :";
//     cin >> h1.health;
//     h1.level = 'A';
//     cout << sizeof(h1) << endl;    //Empty class hai tou 1 byte of memory allocate ho ge 0 nhi.
//     cout << h1.health << endl;
//     cout << h1.level << endl;
   
//     return 0;
// }




// #include<iostream>
// using namespace std;

// class Student{
// public:
   
//     int rollNumber;
//     string name;
//     float marks;
//     void displayInfo(){
       
//         cout << "Roll Number is " << rollNumber << endl;
//         cout << "Name is " << name << endl;
//         cout << "Marks are " << marks << endl;
//     }
// };

// int main(){       //BS CIN IGNORE KA USE KRNE E LIE INT WALE CHEZE UPER LIKHE AND BAAD MEIN STRING WALE 

//     Student s1;
//     cout << "Enter Roll Number" << endl;
//     cin >> s1.rollNumber;
//     cin.ignore();
//     cout << "Enter Name" << endl;
//     getline(cin, s1.name);
   
//     cout << "Enter Marks" << endl;
//     cin >> s1.marks;
//     s1.displayInfo();
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Employee{
// public:
//     string name;
//     int employeeID;
//     float salary;

//     void displayDetails(){
//         cout << "Name is " << name << endl;
//         cout << "Employee's ID is " << employeeID << endl;
//         cout << "Salary is " << salary << endl;
//     }
// };

// int main(){

//     Employee e1;
//     cout << "Enter name " << endl;
//     getline(cin, e1.name);
//     cout << "Enter Employee's ID " << endl;
//     cin >> e1.employeeID;
//     cout << "Enter Salary " << endl;
//     cin >> e1.salary;

//     e1.displayDetails();

//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Book{
// public:
//     string title;
//     string author;
//     float price;

//     void showDetails(){
//         cout << "Title is " << title << endl;
//         cout << "Author is " << author << endl;
//         cout << "Price is " << price << endl;
//     }
// };

// int main(){

//     Book b1;
//     cout << "Enter Title's name " << endl;
//     getline(cin, b1.title);
//     cout << "Enter Author's name " << endl;
//     getline(cin, b1.author);
//     cout << "Enter Price " << endl;
//     cin >> b1.price;
//     // cin.ignore();
//     b1.showDetails();

//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Rectangle{
// public:
//     float length;
//     float width;
//     void calculateArea(){
//         cout << "The Length is " << length << endl;
//         cout << "The Width is " << width << endl;
//     }
// };

// int main(){

//     Rectangle r1;
//     cout << "Enter the Length " << endl;
//     cin >> r1.length;
//     cout << "Enter the Width " << endl;
//     cin >> r1.width;
//     r1.calculateArea();
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Car{
// public:
//     string brand;
//     string model;
//     int year;
//     void displayInfo(){
//         cout << "The Brand is " << brand << endl;
//         cout << "The Model is " << model << endl;
//         cout << "The Year is " << year << endl;
//     }
// };

// int main(){

//     Car c1;
//     cout << "Enter the Brand Name " << endl;
//     getline(cin, c1.brand);
//     cout << "Enter the Model Name " << endl;
//     getline(cin, c1.model);
//     cout << "Enter the Year " << endl;
//     cin >> c1.year;
//     c1.displayInfo();  // TAKE AIK DAFA US KA BHE LIKH PAUN
//     c1.brand = "Honda";
//     c1.model = "Civic";
//     c1.year = 2024;
//     c1.displayInfo();
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Circle{
// public:
//     float radius;
//     float pi = 3.14;
//     void calculateArea(){
//         cout << "Radius is " << radius << " ";
//         cout << "Pi is " << pi << endl;
//     }
//     // void Solve(){
//     //     cout << "The Area of Circle is " << radius * pi << endl;
//     // }

// };

// int main(){

//     Circle c1;
//     cout << "Enter the Radius " << endl;
//     cin >> c1.radius;
    
//     c1.calculateArea();
    
//     cout << "The Aqrea of Circle is " << c1.radius * c1.pi << endl;

//     // OR
   
//     // c1.Solve();

    
//     return 0;
// }

// SETTER AND GETTER

// #include<iostream>
// using namespace std;

// class Hero{
// private:   // YEH PRIVATE HAI OR ISE ACCESS KRNA CHATE HAIN TOU GET AND SET KA USE HOTA HAI
//     int health;
// public:
//     char level;

//    int getHealth(){
//        return health;
//    }

//    char getLevel(){
//         return level;
//    }

//    void setHealth(int h, char name){
//     if (name == 'A'){
//         health = h;
//     }
//    }

//    void setLevel(char ch){
//         level = ch;
//    }
// };

// int main(){

//     Hero h1;
//     char name;
//     cin >> name;
//     h1.setHealth(70, name);
//     cout << "Hero Health is " << h1.getHealth() << endl;
//     h1.setLevel('A');
//     cout << "Hero Level is " << h1.getLevel() << endl;

//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Student{
// private:
//     string name;
//     int rollNumber;
//     float marks;

// public:
//     string getName(){
//         return name;
//     }

//     int getRollNumber(){
//         return rollNumber; 
//     }

//     float getMarks(){
//         return marks;
//     }

//     void setName(string n){
//         name = n;
//     }

//      void setRollNumber(int r){
//         rollNumber = r;
//     }

//      void setMarks(float m){
//         marks = m;
//     }
// };

// int main(){

//     Student s1;
//     s1.setName("Sameer Shahzad");
//     cout << "The Name is " << s1.getName() << endl;

//     s1.setRollNumber(12345);
//     cout << "The Roll Number is " << s1.getRollNumber() << endl;

//     s1.setMarks(1092);
//     cout << "The Marks are " << s1.getMarks() << endl;
//     return 0;
// }

// YEH UPER WALE SAWAL KA HE UPDATED VERSION HAI UPDATED VERSION IS SENSE MEIN KE INPUT LIA SET SE NA KE JIS TRHA VALUES LIKHE US TRHA...

// #include<iostream>
// using namespace std;

// class Student{
// private:
//     string name;
//     int rollNumber;
//     float marks;

// public:
//     string getName(){
//         return name;
//     }

//     int getRollNumber(){
//         return rollNumber; 
//     }

//     float getMarks(){
//         return marks;
//     }

//     void setName(){
//         cout << "Enter the Name" << endl;
//         getline(cin, name);
       
//     }

//     void setRollNumber(){
//         cout << "Enter the Roll Number" << endl;
//         cin >> rollNumber;
        
//     }

//      void setMarks(){
//         cout << "Enter the marks" << endl;
//         cin >> marks;
      
//     }
// };

// int main(){
//     Student s1;
//     s1.setName();
//     cout << "The Name is " << s1.getName() << endl;

//     s1.setRollNumber();
//     cout << "The Roll Number is " << s1.getRollNumber() << endl;

//     s1.setMarks();
//     cout << "The Marks are " << s1.getMarks() << endl;
//     return 0;
// }

// ANOTHER QUESTION ON SET GET IN WHICH I AM FIRST SOLVING WITHOUT INPUT

// #include<iostream>
// using namespace std;

// class Person{
// private:
//     string name;
//     int age;
//     char gender;
// public:
//     string getName(){
//         return name;
//     }

//     int getAge(){
//         return age;
//     }

//     char getGender(){
//         return gender;
//     }

//     void setName(string n){
//         name = n;
//     }

//     void setAge(int a){
//         age = a;
//     }

//     void setGender(char g){
//         gender = g;
//     }
//     void display(){
//         cout << "The Name is " << getName() << endl;
//         cout << "The Age is " << getAge() << endl;
//         cout << "The Gender is " << getGender() << endl;
//     }
// };

// int main(){

//     Person p1;
//     p1.setName("CHEEESA");
//     p1.setAge(18);
//     p1.setGender('M');
//     p1.display();
//     return 0;
// }

// NOW DOING WITH INPUT

// #include<iostream>
// using namespace std;

// class Rectangle{
// private:
//     float length;
//     float width;
// public:
//     float getLength(){
//         return length;
//     }

//     float getWidth(){
//         return width;
//     }

//     void setLength(){
//         cout << "Enter the Length" << endl;
//         cin >> length;

//     }

//     void setWidth(){
//         cout << "Enter the Width" << endl;
//         cin >> width;
//     }

//     void sum(){
//         cout << "The Sum is " << length + width << endl;
//     }

// };

// int main() {

//     Rectangle r1;
//     r1.setLength();
//     r1.setWidth();

//     cout << "The Length is " << r1.getLength() << endl;
//     cout << "The Width is " << r1.getWidth() << endl;
//     r1.sum();
    
//     return 0;
// }

// STATIC VS DYNAMIC ALLOCATION

// #include<iostream>
// using namespace std;

// class Rectangle{
// private:
//     float length;
//     float width;
// public:
//     float getLength(){
//         return length;
//     }

//     float getWidth(){
//         return width;
//     }

//     void setLength(){
//         cout << "Enter the Length" << endl;
//         cin >> length;

//     }

//     void setWidth(){
//         cout << "Enter the Width" << endl;
//         cin >> width;
//     }

//     void sum(){
//         cout << "The Sum is " << length + width << endl;
//     }

// };

// int main() {

//     Rectangle r1;  //STATIC ALLOCATION
//     r1.setLength();
//     r1.setWidth();

//     cout << "The Length is " << r1.getLength() << endl;
//     cout << "The Width is " << r1.getWidth() << endl;
//     r1.sum();

// //DYNAMIC ALLOCATION!!!!!!
// // Using Dynamic Memory Allocation (DMA) in getter (get) and setter (set) methods in Object-Oriented Programming (OOP) provides flexibility, efficient memory usage, and helps manage resources. 

//     Rectangle *r2 = new Rectangle();
//     r2->setLength();
//     r2->setWidth();

//     cout << "The Length is " << (*r2).getLength() << endl;
//     cout << "The Width is " << r2->getWidth() << endl;
//     (*r2).sum();
//     delete r2;
    

//     return 0;
// }

// QUESTION GIVEN BY CHATGPT GONNA SOLVE THIS BY BOTH STATIC AND DYNAMIC MEMORY ALLOCATION...

// #include<iostream>
// using namespace std;
// class Triangle{
// private:
//     float base;
//     float height;
//     float area;

// public:
//     int getBase(){
//         return base;
//     }

//     int getHeight(){
//         return height;
//     }

//     void setBase(){
//         cout << "Enter the Base" << endl;
//         cin >> base;
//     }

//     void setHeight(){
//         cout << "Enter the Height" << endl;
//         cin >> height;
//     }

//     void Area(){
//         cout << "The Area is ";
//         area = 0.5 * (base * height);
//         cout << area << endl;
//     }
// };

// int main(){
//     //STATIC ALLOCATION
//     Triangle t1;
//     t1.setBase(); //Jab input le rhy ho tou uper parameters nhi provide krne function mein set ke
//     t1.setHeight();

//     cout << "The Base is " << t1.getBase() << endl;
//     cout << "The Height is " << t1.getHeight() << endl;
//     t1.Area();

//     //DYNAMIC ALLOCATION
//     Triangle *t2 = new Triangle();  //Yaha () use krna tou kar lo nhi tou rehne do
//     t2->setBase();
//     t2->setHeight();

//     cout << "The Base is " << t2->getBase() << endl;
//     cout << "The Height is " << t2->getHeight() << endl;
//     t2->Area();
//     delete t2;

//     return 0;
// }

// CONSTRUCTOR  -> kisi bhe object ko create krte hoy bts us ke constructor invoke hota and constructor ka koi return type nhi hota, is ka name same as class hota, mostly it is used to initialize data members of class, jesa neeche dekha ham ne main mein kuch nhi likha ise call krne ke lie woh khude call ho gya jab hm ne class ka obj p1 banaya

// #include<iostream>
// using namespace std;
// class Paper{
// public:
//     Paper(){
//         cout << "I am a Constructor" << endl;
//         cout << "I automatically gets called, when obj of class is created" << endl;
//     }
// };
// int main(){
//     Paper p1;
//     return 0;
// }

// QUESTION


// #include<iostream>
// using namespace std;
// class Paper{
// private:
//     int n1;
//     char grade;
// public:
//     Paper(){
//         n1 = 100;
//         grade = 'a';
//     }

//     void display(){
//         cout << "First data member " << n1 << endl;
//         cout << "Second data member " << grade << endl;
//     }
// };

// int main(){
//     Paper p1;
//     p1.display();
//     return 0;
// }

// PASSING ARGUMENTS TO CONSTRUCTOR

// #include<iostream>
// using namespace std;
// class Paper{
// private:
//     int n1;
//     char grade;
// public:
//     Paper(int f1, char f2){
//        n1 = f1;
//        grade = f2;
//     }

//     void display(){
//         cout << "First data member " << n1 << endl;
//         cout << "Second data member " << grade << endl;
//     }
// };

// int main(){
//     Paper p1(100, 'a');
//     p1.display();
//     return 0;
// }

// Question on constructor

// #include<iostream>
// using namespace std;
// class Integers{
// private:
//     int a;
//     int b;
// public:
//     Integers(){
//         a = 100;
//         cout << "a is " << a << endl;

//         b = 10;
//         cout << "b is " << b << endl;
//     }

//     void Product(){
//         cout << "The Product is " << a * b << endl;
//     }


// };

// int main(){
//     Integers i;
//     i.Product();

//     return 0;
// }

// ISSE SAWAL MEIN ARGUMENTS PASS KR RHA(PARAMETERIZED CONSTRUCTOR)


// #include<iostream>
// using namespace std;
// class Integers{
// private:
//     int a;
//     int b;
// public:
//     Integers(int x, int y){
//        cout << "a = 100 and b = 10" << endl;
//        a = x;
//        b = y;
//     }

//     void Product(){
//         cout << "The Product is " << a * b << endl;
//     }


// };

// int main(){
//     Integers i(100, 10);
//     i.Product();

//     return 0;
// }


// AB MEIN CONSTRUCTOR MEIN INPUT LENE LAGA 

// #include<iostream>
// using namespace std;
// class Integers{
// private:
//     int a;
//     int b;
// public:
//     Integers(){
//       cout << "Enter a" << endl;
//       cin >> a;
//       cout << "Enter b" << endl;
//       cin >> b;
//     }

//     void Product(){
//         cout << "The Product is " << a * b << endl;
//     }


// };

// int main(){
//     Integers i;
//     i.Product();

//     return 0;
// }

// DYNAMICALLY CALLING CONSTRUCTOR

// #include<iostream>
// using namespace std;

// class Integers {
// private:
//     int a;
//     int b;
// public:
//     Integers() {
//       cout << "Enter a" << endl;
//       cin >> a;
//       cout << "Enter b" << endl;
//       cin >> b;
//     }

//     void Product() {
//         cout << "The Product is " << a * b << endl;
//     }


// };

// int main() {

//     Integers *i = new Integers;
//     (*i).Product();
//     delete i;

//     return 0;
// }

// (COPY CONSTRUCTOR)

// #include<iostream>
// using namespace std;

// class Car {
// private:
//     string model;

// public:
//     Car(string m) {
//         model = m;
//     }

//     void displayModel() {
//         cout <<  "Car 1-> Model is " << model << endl;
//     }

//     void displaymodel() {
//         cout <<  "Car 2-> Model is " << model << endl;
//     }
// };

// int main() {

//     Car car1("Toyota");
//     Car car2 = car1;   //AIK YEH TAREKA LIKHNE KA OR AIK TAREKA DUSRA BHE HAI COPY KRNE KA JON SA USE KRNA KAR SAKTE...

//     // Car car2(car1);

//     car1.displayModel();
//     car2.displaymodel();

//     return 0;
// }

// **this** KEYWORD agar member function ke parameter jo ke string model hai us ka same name ho as class data member then we use this pointer to help differentiate between the two, or bhe uses hain 1 yah 2 lakin abhi yeh he karna bs.

// #include<iostream>
// using namespace std;

// class Car {
// private:
//     string model;

// public:
//     Car(string model) {
//         this->model = model;
//     }

//     void displayModel() {
//         cout <<  "Car 1-> Model is " << model << endl;
//     }

//     void displaymodel() {
//         cout <<  "Car 2-> Model is " << model << endl;
//     }
// };

// int main() {

//     Car car1("Toyota");
//     Car car2 = car1;   //AIK YEH TAREKA LIKHNE KA OR AIK TAREKA DUSRA BHE HAI COPY KRNE KA JON SA USE KRNA KAR SAKTE...

//     // Car car2(car1);

//     car1.displayModel();
//     car2.displaymodel();

//     return 0;
// }

// TO TAKE INPUT IN CONSTRUCTOR

// #include<iostream>
// using namespace std;

// class Car {
// private:
//     string model;

// public:
//     Car() {
//        cout << "Enter the Model" << endl;
//        getline(cin, model);
//     }

//     void displayModel() {
//         cout <<  "Car 1-> Model is " << model << endl;
//     }

//     void displaymodel() {
//         cout <<  "Car 2-> Model is " << model << endl;
//     }
// };

// int main() {

//     Car car1;
//     // Car car2;
//     Car car2 = car1;   

//     car1.displayModel();
//     car2.displaymodel();

//     return 0;
// }

// //AB AIK DAFA MAIN SE INPUT LE RHY

// #include<iostream>
// using namespace std;

// class Car {
// private:
//     string model;

// public:
//     Car(string m) {
//         model = m;
//     }

//     void displayModel() {
//         cout <<  "Car 1-> Model is " << model << endl;
//     }

//     void displaymodel() {
//         cout <<  "Car 2-> Model is " << model << endl;
//     }
// };

// int main() {
//     cout << "Enter the Model of the Car 1" << endl;
//     string model1;
//     getline(cin, model1);
//     Car car1(model1);
//     Car car2 = car1;   

//     car1.displayModel();
//     car2.displaymodel();

//     return 0;
// }

// AGAR ALAG ALAG MODEL LENA HO AIK HONDA AND AIK TOYOTA


// #include<iostream>
// using namespace std;

// class Car {
// private:
//     string model1;
//     string model2;
//     int year;

// public:
//     Car(string m) {
//         model1 = m;
//     }

//     Car(string mm, int year) {
//         this->year = year;  // pata chal jata this se ke kon sa attribut hai
//         model2 = mm;
//     }

//     void displayModel() {
//         cout <<  "Car 1-> Model is " << model1 << endl;
//     }

//     void displaymodel() {
//         cout <<  "Car 2-> Model is " << model2 << endl;
//         cout << "Year of Car 2 is " << year << endl;
//     }
// };

// int main() {
//     cout << "Enter the Model of the Car 1" << endl;
//     string model1;
//     getline(cin, model1);
//     Car car1(model1); 

//     cout << "Enter the Model of the Car 2" << endl;
//     string model2;
//     getline(cin, model2);
//     Car car2(model2, 2024);   

//     car1.displayModel();
//     car2.displaymodel();

//     return 0;
// }


// DEEP AND SHALLOW COPY
// Default copy do shallow copying
// copy assignment operator a = b;
// DEstructor memory ko deallocate krne ke lie jab scope khatam ho jata obj ke tou woh use khatam kr deta memory clear kr deta and class call hote he destructor bhe call ho jata
// #include<iostream>
// using namespace std;

// class MyClass {
// public:
//     // Default constructor
//     MyClass() {
//         cout << "Default constructor called" << endl;
//     }

//     // Another constructor without parameters
//     // MyClass(int x, int y) {
//     //     cout << "Another constructor without parameters called" << endl;
//     // }
// };

// int main() {
//     MyClass obj1; // Default constructor called
//     MyClass obj11; // Another constructor without parameters called
//     MyClass obj111; // Another constructor without parameters called

//     return 0;
// // }
