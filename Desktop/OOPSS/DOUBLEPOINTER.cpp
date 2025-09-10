//int is lie lagate int * me cz is se 2 bato ka pata chalta ke kis type ka data hai  or kitne byte ko consider kia hai
#include <iostream>
 
using namespace std;

void update ( int* p2 ) {
    p2 = p2 + 1; // No change
    // *p2 = *p2 + 1; // p ke value change hoye jo ke i ka address hai
    // **p2 = **p2 + 1; // value aik bhar jai ge 5 to 6
}

int main () {
 
    int i = 5;
    int* p = &i;
    int** p2 = &p;
    cout << p << endl;
    cout << i << endl;
    cout << &p << endl;
    cout << &i << endl;
    cout << *p << endl;
    cout << "Ok " << *p2 << endl; // p2 me jo address para us ke value or waha bhe address hota or agar aik or star lagaya tou value in double pointer
    cout << "Bye " << p2 << endl; // use box mein khare koi * ke waja se age nhi gya or us mein address para p ka
    cout << "Hi " << **p2 << endl;
    cout << &p2 << endl;


    //Function wale me p2 ko as a argument bhej rhy double pointer with functions
    cout << "Before " << i << endl;
    cout << "Before " << p << endl;
    cout << "Before " << p2 << endl;
    update (p);
    cout << "After " << i << endl;
    cout << "After " << p << endl;
    cout << "After " << p2 << endl;
 
    return 0;
}




//DMA WITH DOUBLE POINTER

// #include <iostream>
 
// using namespace std;
 
// int main () {
    
//     int n;
//     cin >> n;

//     int** arr = new int* [n];

//     for (int i = 0; i < n; i++) {
//         arr[i] = new int[n];
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n; i++) {
//         delete [] arr[i];
//     }

//     delete []arr;  
 
 
//     return 0;
// }