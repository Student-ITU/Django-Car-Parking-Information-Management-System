// #include<iostream>
// using namespace std;
// class Test{ //unary operator overloading
// private:
//     int num, num1;
// //Dono ne ek hi shaqs ko barbad kia usne hume ,humne khud ko
// public:
//     Test(){
//         num = 1;
//         num1 = 2;

//         }

//         void operator++(){
//             ++num;
//             ++num1;
//         }

//         void operator++(int){
//             num++;
//             num1++;
//         }

//          void operator--(){
//             --num;
//             --num1;
//         }

//         void operator--(int)  {
//             num--;
//             num1--;
//         }

//         void display(){
//             cout << "Value is: " << num << endl << "Value is: " << num1 << endl;
//         }


// };
// int main(){
//     //Overloading use krte kyun ke jo hamare user defined data type hote(structs, class) un me + - % / yeh sare symbols in ke sath use nhi hota yeh bs built in data type (int, float) wagera ke sath use hota
//     // Unary operator mein aik operand ata means ++n or n++ same like minus
//     //((( Test t1, t2;
//     // cout << t1 + t2 << endl; // like this yeh nhi ho rha )))
   
//     Test t1;
//     t1.display();
//     ++t1; // Prefix ke lie hai    void operator++(){
//                                     // ++num;
//                                 // } 
//     t1.display();
//     t1++;  
//     t1.display();
//         //    postfix ke lie      void operator++(int){
//                                     // num++;
//                                 // } 
//                                 //Operator jo likha woh likha must hai
//     --t1;
//     t1.display();
//     t1--;
//     t1.display();

//     return 0;
// }



// Binary operator c++ oops 
// #include <iostream>
// using namespace std;

// class Test {
//     int num1;

// public:
//     Test(int n) {
//         num1 = n; 
//     }

//     Test operator+ (Test t2) {
//         Test t3(0);
//         t3.num1 = num1 + t2.num1;
//         return t3;
//     }

    // void display() {
    //     cout << "Value is " << num1 << endl; 
    // }
// }; 

// int main() {
    
//     Test t1(5);
//     Test t2(25);
//     Test sum(0); //0 is lie pass kia kyunke hm ne aik constructor banaaya kyunke jab obj banate tou constructor call hota or cz woh parameterized hai is lie argument de rhy

//     sum = t1 + t2;  //right(t2) =  argument, left(t1) = function call means Test t2 jo likha woh argment pass kar dia or jo sara function hai operator+ woh t1 ke waja se call ho jai ga, 2 objects ko add kr rhy
//     sum.display();
//     return 0;
// }

//Question -> Add two distances make a distance class which has inches nd feet.
#include <iostream>
using namespace std;

class Distance {
    float feet;
    float inches;

public:
    Distance() {
        feet = 0;
        inches = 0;
    }
//Another way of writing -> Distance(int f, float i) : feet(f), inches(i) {}
    Distance(float f, float i) {
        feet = f;
        inches = i;
    }    

    Distance operator+ (Distance d3) { //Operator ka keyword hota
        Distance temp;
        temp.feet = feet + d3.feet;
        temp.inches = inches + d3.inches;
        return temp;
    }

    void display() {
        cout << "Inches : " << inches << endl; 
        cout << "Feet : " << feet << endl; 
    }  

};

int main() {
    
    Distance d1;
    Distance d2(5.5, 4.5);
    Distance d3(10.5, 9.5);
    d1 = d2 + d3;
// Ji haan, return temp; ka matlab hai ke temp object ki value operator+ function se wapas kar di jati hai. Jab d1 = d2 + d3; ka statement execute hota hai, to operator+ function call hoti hai, jo d2 aur d3 ke data members ka sum calculate karti hai aur ek temporary object temp mei store karti hai. Fir return temp; ke through, temp ka value d1 mei copy ho jata hai, jisse d1 object ke data members ka value d2 aur d3 ke data members ka sum ho jata hai.
    d1.display();  
// Jab d1.display(); call hota hai, to display function execute hoti hai, jismein inches aur feet ki values print hoti hain jo d1 object ke data members hain. Yeh values d1 object se li jati hain aur display function ke andar print ki jati hain. Is tarah se, display function ke andar values chali jati hain jab d1.display() call hota hai.
    return 0;
}