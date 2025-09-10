#include<iostream>
using namespace std;
class A{// cpp mein local variables ko importance de jate.
    public:
        int a;
        void setData(int a){
            this->a = a;
        }

        void getData(){
            cout << "The value of a is " << a << endl;
        }
};
int main(){
    //this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setData(4);
    a.getData();
    return 0;
}// this ke begair run karo garbage value mile ge but is ke sath run kro tou sahi mile ge