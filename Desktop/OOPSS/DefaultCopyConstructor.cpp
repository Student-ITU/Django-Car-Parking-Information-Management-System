#include<iostream>
using namespace std;
class Student{
    int id;
    string name;
    public:
        void in(){
            cout << "Enter id:" << endl;
            cin >> id;
            cin.ignore();
            cout << "Enter name:" << endl;
            getline(cin, name);
        }
        void out(){
            cout << "The id is : " << id << endl;
            cout << "The Name is : " << name << endl;
        }
};
int main() {
    Student S1;
    S1.in();
    Student S2 (S1); //Default copy constructor use ho rha aik or method bhe ese likhne ka Student S2 = S1;
    S1.out();
    S2.out();
    return 0;
}