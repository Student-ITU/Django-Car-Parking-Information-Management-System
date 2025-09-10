/*
*****
*   *
*   *
*   *
*****
*/

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     int n;
//     cout << "Enter the number for size : ";
//     cin >> n;
//     cout << endl;
//     cout << "Pattern is ->" << endl;
//     cout << endl;

//     for ( int i = 0; i < n; i++ ) {
//         for ( int j = 0; j < n; j++ ) {
//             if ( i == 0 || i == n - 1 ) {
//                 for ( int k = 0; k < n; k++ ) {
//                     cout << "*";
//                 }
//                 break;
//                 cout << endl;
//             }

//             else {
//                 if ( j == 0 || j == n - 1 ) {
//                     cout << "*";
//                 }

//                 else {
//                     cout << " ";
//                 }
//             }
//         }
//         cout << endl;
//     }
 
//     return 0;
// }


/*
*     *
 *   *
  * *
   *     Zig-Zag Pattern
  * *
 *   *
*     *
*/

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     int n;
//     cout << "Enter the size : ";
//     cin >> n;
//     cout << endl;
    
//     int m = n;

//     for ( int i = 0; i < n; i++ ) {
//         for ( int j = 0; j < n; j++ ) {
//             if ( j == i ) {
//                 if ( i < n - 1 ) {
//                     cout << "*";
//                 }

//                 if ( j == i && i == n - 1 ) {
//                     cout << " *";
//                 }

//                 for ( int k = 0; k < m; k++ ) {
//                     if ( j == i && i != n - 1 && j != n - 1 ) {
//                         cout << " ";
//                     }
//                 }
//                 m--;  
//             }      

//             else {
//                 cout << " ";
//             }

//             if ( j == n - 1 && i < n - 1 ) {
//                 cout << "*";
//             }
//         }
//         cout << endl;
//     }

//     m = n - 1;
//     int var = 1;

//     for ( int i = 0; i < n - 1; i++ ) {
//         for ( int j = 0; j < n; j++ ) {
//             if ( j == m - 1 ) {
//                 cout << "*";

//                 for ( int k = 0; k < var; k++ ) {
//                     if ( j == m - 1 ) {
//                         cout << " ";
//                     }
//                 }
//             }

//             else {
//                 cout << " ";
//             }

//             if ( j == n - 1 ) {
//                 cout << " *";
//             }
//         }
//         m--;
//         var++;
//         cout << endl;
//     }
 
//     return 0;
// }

// #include <iostream> 
// using namespace std;
//  class ComplexNumber { 
//     private: 
//     int real; int imaginary;
//      public:
//       ComplexNumber(int real, int imaginary) { 
//         this->real = real; 
//         this->imaginary = imaginary;
//         } 

//      void print() { 
//         cout << real << " + i" << imaginary; 
//         } 

//      ComplexNumber operator+(ComplexNumber c2) { 
//             ComplexNumber c3(0, 0); 
//             c3.real = this->real + c2.real;
//             c3.imaginary = this->imaginary + c2.imaginary; 
//             return c3; 
//         }
//          };


//         int main() { 
//             ComplexNumber c1(3, 5);
//             ComplexNumber c2(2, 4);
//             ComplexNumber c3 = c1 + c2;
//             c3.print(); 
//             return 0; 
//         }




    //     #include <iostream> 
    //     using namespace std;

    //     class Complex { 
    //     private:
    //      int real, imag;
    //      public:
    //       Complex(int r = 0, int i = 0) { 
    //         real = r; imag = i; 
    //     } 
    //     void print() { 
    //         cout << real << " + i" << imag << endl;
    //      } 

    //     friend Complex operator+(Complex const& c1, Complex const& c2); 
    //     };

    //     Complex operator+(Complex const& c1, Complex const& c2) { 
    //         return Complex(c1.real + c2.real, c1.imag + c2.imag); 
    //     } 
        
    // int main() { 

    //     Complex c1(10, 5), c2(2, 4); 
    //     Complex c3 = c1 + c2; 
    //     c3.print(); 
    //     return 0;
    // }

    
// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     int v = 10;
//     int *p = &v;  // p is a pointer to the memory address of v

//     *p = 20;  // Dereferencing p to change v's value
//     v =30;

//     cout << "v: " << v << endl;  // Output: v: 20
//     cout << "*p: " << *p << endl; // Output: *p: 20

 
//     return 0;
// }
   

