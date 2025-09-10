// #include<iostream>
// using namespace std;

// class A{
// public:
//     int x;
//     A() {
//         cout << "Default Constructor" << endl;
//     }

//     A(int y) {
//        x = y;
//     }
// };
// int main() {
//     A o;
//     A obj1(56);
//     A obj2 = obj1;
//     cout << obj1.x;
//     return 0;
// }

//COPY CONSTRUCTOR

#include<iostream>
using namespace std;

class A{
private:
    int x;
public:
    int get() {
        return x;
    }
    A() {
        cout << "Default Constructor" << endl;
    }

      A(int y) {
       x = y;
    }

    A(A &t) { // obj is t
        cout << "Copy Constructor" << endl;
        x = t.x;
    }

};
int main() {
    
    A obj1(10);
    A obj2 = obj1;  //Copy constructor call ho rhaa
    cout << obj2.;
    return 0;
}