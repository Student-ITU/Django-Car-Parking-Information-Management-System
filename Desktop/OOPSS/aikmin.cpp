// #include<iostream>
// using namespace std;

// class Area{
// public:
//     float width;
//     float length;

//     void display() {
//         cout << "Area is " << length * width << endl;
//     }
// };

// int main() {
    
//     Area a;
//     a.length = 12;
//     a.width = 2;
//     // cout << "Enter Length" << endl;
//     // cin >> a.length;
//     // cout << "Enter Width" << endl;
//     // cin >> a.width;
//     a.display();

//     return 0;
// }

//

// #include<iostream>
// using namespace std;

// class Area{
// public:
//     float width;
//     float length;

//     int getWidth() {
//         return width;
//     }

//     int getLength() {
//         return length;
//     }

//     void setWidth(int w) {
//         width = w;
//     }

//     void setLength(int l) {
//         length = l;
//     }
//     void display() {
//         cout << "Area is " << length * width << endl;
//     }
// };

// int main() {
    
//     Area a;
//     a.setWidth(12);
//     a.setLength(2);
//     cout << "The Width is " << a.getWidth() << endl;
//     cout << "The Length is " << a.getLength() << endl;
//     a.display();

//     return 0;
// }

//Input ab

// #include<iostream>
// using namespace std;

// class Area{
// public:
//     float width;
//     float length;

//     int getWidth() {
//         return width;
//     }

//     int getLength() {
//         return length;
//     }

//     void setWidth() {
//         cout << "Enter the Width" << endl;
//         // cin >> width;
//     }

//     void setLength() {
//         cout << "Enter the Length" << endl;
//         // cin >> length;
//     }
//     void display() {
//         cout << "Area is " << length * width << endl;
//     }
// };

// int main() {
    
//     Area a;
//     a.setWidth();
//     cin >> a.width;
//     a.setLength();
//     cin >> a.length;
//     cout << "The Width is " << a.getWidth() << endl;
//     cout << "The Length is " << a.getLength() << endl;
//     a.display();

//     return 0;
// }

//STATIC VS DYNAMIC ALLOCATION


// #include<iostream>
// using namespace std;

// class Area{
// public:
//     float width;
//     float length;

//     int getWidth() {
//         return width;
//     }

//     int getLength() {
//         return length;
//     }

//     void setWidth() {
//         cout << "Enter the Width" << endl;
//         cin >> width;
//     }

//     void setLength() {
//         cout << "Enter the Length" << endl;
//         cin >> length;
//     }
//     void display() {
//         cout << "Area is " << length * width << endl;
//     }
// };

// int main() {
    
//     Area *a = new Area();
//     (*a).setWidth();
//     a->setLength();
//     cout << "The Width is " << (*a).getWidth() << endl;
//     cout << "The Length is " << a->getLength() << endl;
//     (*a).display();
//     delete a;
//     return 0;
// }

//Constructor  (JAB AIK BHE HAM CONSTRUCTOR BANA LETE HAIN TOU JO PEHLE SE BANE HOTE HAIN DEFUALT WOH KHATAM HO JATE HAIN)


// #include<iostream>
// using namespace std;

// class Paper{
// private:
//     int n1;
//     char grade;
// public:
//     Paper() {
//         n1 = 100;
//         grade = 'A';
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

//PASSING ARGUMENTS TO CONSTRUCTOR(JAB AIK BHE HAM CONSTRUCTOR BANA LETE HAIN TOU JO PEHLE SE BANE HOTE HAIN DEFUALT WOH KHATAM HO JATE HAIN)


// #include<iostream>
// using namespace std;

// class Paper{
// private:
//     int n1;
//     char grade;
// public:
//     Paper(int n, char g) {
//         n1 = n;
//         grade = g;
//     }
//     void display(){
//         cout << "First data member " << n1 << endl;
//         cout << "Second data member " << grade << endl;
//     }
// };

// int main(){
//     Paper p1(100, 'A');
//     p1.display();
//     return 0;
// }

//INPUT IN CONSTRUCTOR(JAB AIK BHE HAM CONSTRUCTOR BANA LETE HAIN TOU JO PEHLE SE BANE HOTE HAIN DEFUALT WOH KHATAM HO JATE HAIN)

// #include<iostream>
// using namespace std;

// class Integers{
// private:
//     int a;
//     int b;
// public:
//     Integers(){
//         cout << "Enter a" << endl;
//         cin >> a;
//         cout << "Enter b" << endl;
//         cin >> b;
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

//ANOTHER WAY OF INPUT(JAB AIK BHE HAM CONSTRUCTOR BANA LETE HAIN TOU JO PEHLE SE BANE HOTE HAIN DEFUALT WOH KHATAM HO JATE HAIN)

// #include<iostream>
// using namespace std;

// class Integers{
// private:
//     int a;
//     int b;
// public:
//     Integers(int x, int y){
//        a = x;
//        b = y;
//     }

//     void Product(){
//         cout << "The Product is " << a * b << endl;
//     }
// };

// int main(){

//     int x, y;
//     cout << "Enter value of x" << endl;
//     cin >> x;
//     cout << "Enter value of y" << endl;
//     cin >> y;
//     Integers i(x, y);
//     i.Product();

//     return 0;
// }


//DYNAMICALLY CALLING CONSTRUCTOR

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

//    Integers *i = new Integers;
//    (*i).Product();
//    delete i;

//     return 0;
// }


//(COPY CONSTRUCTOR)

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
//         cout << "Car 1-> Model is " << model << endl;
//     }

//     void displaymodel() {
//         cout << "Car 2-> Model is " << model << endl;
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

//Taking input in copy constructor(AB YAHA CAR 2 MEIN MODEL IS LIE PRINT NHI HO RAHA BCZ WAHA PE DEEP COPY USE HO GE IS TRHA SE NHI HO RAHA OR YEH COPY CONSTRUCTOR MEIN HOTA MASLA)


// #include<iostream>
// using namespace std;

// class Car {
// private:
//     string model;

// public:
//     Car() {
        
//     }

//     void displayModel() {
//         cout << "Entet the Model" << endl;
//         cin >> model;
//         cout <<  "Car 1-> Model is " << model << endl;
//     }

//     void displaymodel() {
//         cout <<  "Car 2-> Model is " << model << endl;
//     }
// };

// int main() {

//     Car car1;
//     Car car2 = car1;   //AIK YEH TAREKA LIKHNE KA OR AIK TAREKA DUSRA BHE HAI COPY KRNE KA JON SA USE KRNA KAR SAKTE...

//     // Car car2(car1);

//     car1.displayModel();
//     car2.displaymodel();

//     return 0;
// }

//AB CONSTRUCTOR KE ANDAR LOON GA KYUN KE COPY KIA HOA CAR 1 KO IS LIE
//AB HO GYA SAHI

// #include<iostream>
// using namespace std;

// class Car {
// private:
//     string model;

// public:
//     Car() {
//         cout << "Entet the Model" << endl;
//         cin >> model;
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
//     Car car2 = car1;   //AIK YEH TAREKA LIKHNE KA OR AIK TAREKA DUSRA BHE HAI COPY KRNE KA JON SA USE KRNA KAR SAKTE...

//     // Car car2(car1);

//     car1.displayModel();
//     car2.displaymodel();

//     return 0;
// }


//AB AIK DAFA MAIN SE INPUT LE RHY

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



//**this** KEYWORD agar member function ke parameter jo ke string model hai us ka same name ho as class data member then we use this pointer to helps differentiate between the two, or bhe uses hain 1 yah 2 lakin abhi yeh he karna bs.

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

//AGAR ALAG ALAG MODEL LENA HO AIK HONDA AND AIK TOYOTA


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
     // this->year = year;
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

//


// #include<iostream>
// using namespace std;

// class Car {
// private:
//     string model;
    
// public:
// //copy constructor KHUD KA

//     Car(Car &temp) {  //agar and nhi lagain ke tou pass by value pass ho ga jis waja se yeh infinite loop mein phans jai ga is waja se & lagate pass by reference
//     cout << "Copy constructor" << endl;
//         this -> model = temp.model;
//     }
//     Car(string m) {
//         model = m;
//     }

//     void displayModel() {
//         cout << "Car 1-> Model is " << model << endl;
//     }

//     void displaymodel() {
//         cout << "Car 2-> Model is " << model << endl;
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


//DEEP AND SHALLOW COPY
//AND DEFAULR COPY CONSTRUCTOR SHALLOW COPY KRTA

// #include<iostream>
// using namespace std;

// class Car {
// private:
//     char *name;  //name[100] nhi likha kyun ke hm ne heap pe store krwana tou is waja se ese likhna dynamically
//     string model;
    
// public:
//     Car() {
//         cout << "Simple Constructor" << endl;
//         name = new char[100];
//     }


// //copy constructor

//     Car(Car &temp) {  //agar and nhi lagain ke tou pass by value pass ho ga jis waja se yeh infinite loop mein phans jai ga is waja se & lagate pass by reference
//     cout << "Copy constructor" << endl;
//         this -> model = temp.model;
//     }
//     Car(string m) {
//         model = m;
//     }

//     void displayModel() {
//         cout << "Car 1-> Model is " << model << endl;
//     }

//     void displaymodel() {
//         cout << "Car 2-> Model is " << model << endl;
//     }

    
// };

// int main() {

//     Car car1("Toyota");
//     Car car2 = car1;   //AIK YEH TAREKA LIKHNE KA OR AIK TAREKA DUSRA BHE HAI COPY KRNE KA JON SA USE KRNA KAR SAKTE...

//     // Car car2(car1);

//     car1.displayModel();
//     car2.displaymodel();

//     return 0;
//}





//


// #include<iostream>
// using namespace std;

// class Hero{

// private:
//     int health;
// public:
//     char level;
//     //Copy Constructor
//     Hero(Hero& temp) { //agar (and) nhi lagain ke tou pass by value pass ho ga jis waja se yeh infinite loop mein phans jai ga is waja se & lagate pass by reference  temp ko mile ga woh Hero ko call kre ga is trha he hota jai ga agar & na lagaya
//     cout << "Copy constructor" << endl;
//         this -> health = temp.health;
//         this -> level = temp.level;
//     }

//     Hero() {
//         cout << "Simple constructor called" << endl;
//     }
//     //Parameterised constructor

//     Hero(int health) {
//         this -> health = health;
//     }

//     Hero(int health, char level) {
//         this -> level = level;
//         this -> health = health;
//     }

//     void print() {
//         cout << "Health is " << this -> health << endl;  //this is lie lagaya ke abhi wale obj ke data member ke baat ho rhy just to avoid confusion likha
//         cout << "Level is " << this -> level << endl;
//     }

//     // int getHealth() {
//     //     return health;
//     // }

//     // char getLevel() {
//     //     return level;
//     // }

//     // void setHealth(int h) {
//     //     health = h;
//     // }

//     // void setLevel(char ch) {
//     //     level = ch;
//     // }

// };

// int main() {
//     Hero a;
//     Hero S(70, 'C');
//     S.print();

//     Hero R(S);
//     R.print();
//     return 0;
// }


//SHALLOW AND DEEP COPY
//DEFAULT CONSTRUCTOR DO SHALLOW COPY


#include<iostream>
using namespace std;

class Hero{

private:
    int health;
public:
    char *name; //name[100] is lie nhi likha kyun ke hm heap pe karwana chate waha space zyada hote is lie dynamically allocate krwa rhy
    char level;
    //Copy Constructor
    Hero(Hero& temp) { //agar (and) nhi lagain ke tou pass by value pass ho ga jis waja se yeh infinite loop mein phans jai ga is waja se & lagate pass by reference  temp ko mile ga woh Hero ko call kre ga is trha he hota jai ga agar & na lagaya
    cout << "Copy constructor" << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }
    //Parameterised constructor

    Hero(int health) {
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    void print() {
        cout << "Health is " << this -> health << endl;  //this is lie lagaya ke abhi wale obj ke data member ke baat ho rhy just to avoid confusion likha
        cout << "Level is " << this -> level << endl;
    }

    void setName(char name[]) {
        strcpy(this -> name, name);
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

};

int main() {
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);
    Hero a;
    Hero S(70, 'C');
    S.print();

    Hero R(S);
    R.print();
    return 0;
}



