#include<iostream>
using namespace std;
class Sample{
private:
    int value:
public:
    void read(){
        cin >> value;
    }

    void display(){
        cout << value << endl;
    }

     void operator = (Sample &S){
        value = S.value;
    } //Operator is ka keyword

};
int main(){
   Sample S1, S2;
   S1.read();
   S2.read();
   S1.display();
   S2.display();
   S1 = S2;
   S1.display();
    
    return 0;
}