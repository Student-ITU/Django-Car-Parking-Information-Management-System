// #include<iostream>
// using namespace std;
// class Car{
//     public:
//         Car(){
//             cout<< "Hello, whass up?" << endl;

//             cout << endl;

//             cout << "yeh aik constructor banaya hai tou aik member function lakin class ke name pe banana ese " << endl;

//              cout << endl;

//             cout << "2 batein yad rakhni constructor banane se hamein main mein call nhi krna parta iss function ko jab compile karein ge tou likha jai ga ham ne jese peeche kia b1.display() woh nhi karna pare ga  jab ham obj banate class ke related tou yeh automatically call ho jata or dusre baat yeh ke is ka yni constructor ka name same hona pare ga class ka jo hai means car tou constructor bhe car" << endl;

//             cout << endl;

//             cout << "Constructor ke koi (return type) nhi hote or in ko use is lie krte take data members ko initialize kr sakien is ke lie neeche dekho jo naya program banaya" << endl;
//         }
// };
// int main(){
//     Car C1;
//     return 0;
// }

#include<iostream>
using namespace std;
//W.A.P with class constructor which initialises two data members in constructor then make a function to display them.
class constructor{
    int n1;
    char grade;

    public:
        constructor(){
            n1 = 100;
            grade = 'A';
        }

        void display(){
            cout << "First data member: " << n1 << endl;
            cout << "Second data member: " << grade << endl;
        }
};
int main(){
    constructor C1;
    C1.display();
    return 0;
}