/*A friend function of a class ids defined ouyside that class scope but it has right to access all private and protected members of the class... even though the prototype of friend functions appear in the class definition, friends are not member funtions...*/

// #include<iostream>
// using namespace std;

// class test{
// private:
//     int num;
// public:
// test() {
//     num = 0;
//     cout << "Constructor is called" << endl;
// }
     
// };

// void show() {  //ab agar us private member num ko is function mein access krna tou is ka friend function banana pare ga    see below ->
//     num = 10;
//     cout << "I am simple function" << endl;
//     cout << "IThe value of num is : " << num << endl;
// }

// int main() {
    
//     test obj;
//     show();
//     return 0;
// }
// #include<iostream>
// using namespace std;

// class test{
// private:
//     int num;
// public:
// test() {
//     num = 0;
//     cout << "Constructor is called" << endl;
// }

// friend void show(test obj);
     

// };

// void show(test obj) {  //ab agar us private member num ko is function mein access krna tou is ka friend function banana pare ga
//     obj.num = 10;
//     cout << "I am simple function" << endl;
//     cout << "IThe value of num is : " << obj.num << endl;
// }

// int main() {
    
//     test obj;
//     show(obj);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A{
// private:
//     int num1;
// public:
//     void getValueA();
     
// };

// void A::void getValueA() {  //ab agar us private member num ko is function mein access krna tou is ka friend function banana pare ga    see below ->
//    cout << "Enter the number" << endl;
//    cin >> num;
// }

// class B{
// private:
//     int num2;
// public:
//     void getValueB();
     
// };

// void B::void getValueB() {  //ab agar us private member num ko is function mein access krna tou is ka friend function banana pare ga    see below ->
//    cout << "Enter the number" << endl;
//    cin >> num2;
// } 

// int main() {
//     A obj;
//     B
//     test obj;
//     show();
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;  // Yeh output print karega

    cin.get();  // Yeh program ko pause karega jab tak user koi key press nahi karta
    cout << "Hello, Worldddd!" << endl; 

    return 0;  // Program yaha end hoga
}


