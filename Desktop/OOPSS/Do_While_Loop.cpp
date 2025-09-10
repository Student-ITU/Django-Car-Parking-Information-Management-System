#include<iostream>
using namespace std;
 
int main() {
    
    int i = 1;
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    do {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    } while (i <= 10);
    
    return 0;
}