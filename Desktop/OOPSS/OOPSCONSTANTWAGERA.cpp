//Static  -> Data member and Member function
//It is always initialized with zero bcz its default value is zero
//AIK BARE ZARURI BAAT KE HM MEMBER FUNCTIONS KO PUBLIC MEIN KYUN BANATE KYUN KE HMEIN UN MEMBER FUNCTIONS KO MAIN FUNCTION SE OBJECT KE THROUGH ACCESS KRNA HOTA HAI
#include<iostream>
using namespace std;
class A{
private:
    int a;
    static int b;
public:
    A(int x, int y) {
        a = x;
        b = y;
    }

    void show() {
        cout << a << " " << b;
    }

    static void disp() { // yeh static data member ko he access kr sakta
        cout << b;
    }
};
int A::b = 0;//yeh dekho yeh kaam krna he karna hai zero rakhna
//Static ko obj ke through bhe access kr sakte or wase bhe

int main() {
    
    A obj(10, 0), obj2(100, 200);
    obj.show(); 
    cout << endl;
    obj2.show();  
    cout << endl;
    A::disp();
    cout << endl;
    obj.show();
    return 0;
}