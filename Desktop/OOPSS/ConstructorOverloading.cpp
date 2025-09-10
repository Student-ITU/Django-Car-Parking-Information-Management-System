#include<iostream>
using namespace std;
class Test{
    private:  
        int a, b;
     public:
        Test(int x, int y){
            a = x;
            b = y;
       
        }

        Test(int x){ // alag alag arguments pass kro ge to pata chal jai ga compiler ko ke kis ko lana ab bilkul function overloading ke trha hai jo parameters  pass krein woh match karein ge tou woh he function run ho jata hai
            a = x;
            b = 0;
        }

        void printN(){
            cout << "Your no. is: " << a << " + " << b << endl;
        }

};

int main(){
    Test T1(4, 6);
    T1.printN();
    Test T2(5);
    T2.printN();
   
   
    return 0;
}