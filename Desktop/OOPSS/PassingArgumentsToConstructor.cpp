#include<iostream>
using namespace std;
//W.A.P with class constructor which initialises two data members in constructor then make a function to display them.
class constructor{
    int n1;
    char grade;

    public:
        constructor(int f1, char f2){
            n1 = f1;  // data members ko initialize krne ke lie hota jo hm yeh kr rahay samjh a gya matlab? 0K ..
            grade = f2;
        }

        void display(){
            cout << "First data member: " << n1 << endl;
            cout << "Second data member: " << grade << endl;
        }
};
int main(){
    constructor C1(1000, 'b');
    C1.display();
    return 0;
}