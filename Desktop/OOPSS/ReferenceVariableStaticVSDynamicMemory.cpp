// #include<iostream>
// using namespace std;
 
// int main() {
    
//     int i = 5;
//     //ref var
//     int &j = i;
//     cout << i << endl;
//     i++;
//     cout << i << endl;   //yeh bs akele chez hai baki jo likha woh function ka hisa neeche wala para us mein reference variable pas by ref samjhaya. 
//     j++;
//     cout << i << endl;
//     cout << j << endl;
    
//     return 0;
// }

//

// #include <iostream>
// using namespace std;

// void update(int& n1) {
//     n1++;
//     cout << "Inside" << endl << n1 << endl;
// }

// int main() {

//     int n = 5;
//     cout << "Before" << endl;
//     cout << n << endl;
//     update(n);
//     cout << "After" << endl;
//     cout << n << endl;
//     return 0;
// }

//


// #include <iostream>
// using namespace std;

// int& func(int n) {

//     int num = n;
//     int& ans = num;   //yeh bhe bad practice kyun ke int num, ans wagera local variable hai yeh is func ke bahir ja ke die ho jai ga tou jab block khatam hone ke baad memory clear he ho jani tou pass kya kar rhy phir? is waja se galat practice hai ho sakta ke access he na kr pain is lie
//     return ans;
// }

// int* fun(int n) {

//     int* ptr = &n; //yeh bhe bad practice same uper wala case
//     return ptr;
// }

// void update(int& n) {

//     n++;
// }

// int main() {

//     int n = 5;
//     cout << "Before" << endl;
//     cout << n << endl;
//     update(n);
//     cout << "After" << endl;
//     cout << n << endl;

//     // int ans1 = fun(n);
//     // cout << ans1 << endl;
//     int ans = fun(n);
//     cout << ans << endl;
//     return 0;
// }

//

// #include <iostream>
// using namespace std;
 
// int main() {

//     int n;
//     cin >> n;
//     int arr[n];  //BAD PRACTICE hai is case mein run time pe pata chal rha lakin hamein compile time pe size pta hoa chaye like int arr[1000];
//     //agar ese likhna tou heap memory use krna hota 'new' keyword se ho ga
//     //jab stack memory ka use krte use kehte static memory allocation and jab heap se tou dynamic memory allocation
//     //char* ch = new char; or char* ch  yeh 8 byte ka hai in stack store and new char aik byte ka in heap is lie size is baar 9 ai ga 8 nhi ptr ka . 1 is lie hai udhr kyun ke char hai agar int hota tou new int 4 byte leta or dusra tou hai he pointer is lie 8 + 4 = 12
     
//     return 0;
// }



// #include <iostream>
// using namespace std;
 
// int main() {
    
//     char ch = 'q';
//     cout << sizeof(ch) << endl;
//     char* c = &ch;
//     cout << sizeof(c) << endl;
//     char* cc = new char;
//     cout << sizeof(cc) << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int getSum(int *arr, int n) {
    
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum = sum + arr[i];
//     }
//     return sum;
// }

// int main() {
    
//     // int* arr = new int[5];  //arr ko heap(DMA) mein ese convert krna
//     // pointer = 8 memory in stack means static memory and int[5] = 4 * 5 = 20 in heap that is dynamic memory

//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     int ans = getSum(arr, n);
//     cout << "Answer is " << ans << endl;
//     delete[] arr;
//     arr = nullptr;
//     return 0;
// }


// sma vs dma

// while(true) {
//     int i = 5;  //yeh aik step ke baad release ho jate phir dubara ate or memory release ho jate
// }

//vs

// while(true) {
//     int *p = new int;  //ab since ke int *p stack mein baa hai tou yeh tou aik step ke baad release ho jai ge lakin jo hamare new int hai woh heap mein store hai lakin woh release nhi ho ge woh 4 byte ke hai or har bare jab loop guzre ga  4 + 4 + 4 .... is trha add ho jai ge, int *p ne 8 byte le the tou woh tou release ho ge har bare or jab 4 + 4 + 4... hota jai ga tou heap bhe tou full ho jai ge tou program war jai ga matlab crash ho jai ga. TOU CONCLUSION YEH HOA KE STATIC MEMORY ALLOCATION AUTOMATICALLY SAAF HO JATE OR DYNAMIC MEMORY ALLOCATION MANUAL HAI BAAR BAAR RLEASE KRNE PARTE HAI OR RELEASE HM DELETE KEYWORD SE KRTE. 


//     *****IF NOT ARRAY THEN***** 
//     int *i = new int;
//     delete i;


//     *****IF ARRAY THEN*****
//     int *arr = new int[50];
//     delete[] arr; 

//     Void Pointers and address Type Casting
// }

// VOID POINTER

// #include <iostream>
// using namespace std;
// //Basically agar mein int *ptr banaun tou us mein sirf int he store ho ga agar mein ne double ke variable ko reference banana cha tou nhi bane ga is lie hm void pointer use krte ke jon se marzi data type a jai andar
// int main() {
    
//     int i = 5;
//     double j = 6;
//     // int *p = &j;  //Yeh galt hai kyun ke int double ke value store nhi kr sakta 
//     // void &j = i;  // Yeh bhe galat a raha ask from sir
//     void *p = &j; // yeh dekho is mein int p agar krta tou woh double wale value ko nhi pakar rha sirf int wale i ko pakre ga wahe he agar mein ese void kr doon tou j ko bh ele ga and i ko bhe
//     cout << j << endl;
//     j++;
//     cout << i << endl;
//     // int &j = i;
//     cout << j << endl;
//     j++;
//     cout << i << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int age = 22;
//     cout << "Age is : " << age << endl;
//     cin >> age;
//     cout << "Age is : " << age << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//   double marks;

//   // take input from users
//   cout << "Enter your marks: ";
//   cin >> marks;

//   // ternary operator checks if
//   // marks is greater than 40
//     (marks >= 40) ? cout << "You Passed" : cout << "You Failed";

//   return 0;
// }


//POINTER WITH FUNCTIONS

// #include <iostream>
// using namespace std;

// // Pass-by-Value
// int square1(int n)
// {
//     // Address of n in square1() is not the same as n1 in
//     // main()
//     cout << "address of n1 in square1(): " << &n << "\n";

//     // clone modified inside the function
//     n *= n;
//     return n;
// }
// // Pass-by-Reference with Pointer Arguments
// void square2(int* n)
// {
//     // Address of n in square2() is the same as n2 in main()
//     cout << "address of n2 in square2(): " << n << "\n";

//     // Explicit de-referencing to get the value pointed-to
//     *n *= *n;
// }
// // Pass-by-Reference with Reference Arguments
// void square3(int& n)
// {
//     // Address of n in square3() is the same as n3 in main()
//     cout << "address of n3 in square3(): " << &n << "\n"; // agar sirf n likhein ge tou value print ho ge

//     // Implicit de-referencing (without '*')
//     n *= n;
// }
// void geeks()
// {
//     // Call-by-Value
//     int n1 = 8;
//     cout << "address of n1 in main(): " << &n1 << "\n";
//     cout << "Square of n1: " << square1(n1) << "\n";
//     cout << "No change in n1: " << n1 << "\n";

//     // Call-by-Reference with Pointer Arguments
//     int n2 = 8;
//     cout << "address of n2 in main(): " << &n2 << "\n";
//     square2(&n2);
//     cout << "Square of n2: " << n2 << "\n";
//     cout << "Change reflected in n2: " << n2 << "\n";

//     // Call-by-Reference with Reference Arguments
//     int n3 = 8;
//     cout << "address of n3 in main(): " << &n3 << "\n";
//     square3(n3);
//     cout << "Square of n3: " << n3 << "\n";
//     cout << "Change reflected in n3: " << n3 << "\n";
// }
// // Driver program
// int main() { geeks(); }

//POINTERS WITH ARRAYS
// C++ program to illustrate Array Name as Pointers
// #include <iostream>
// using namespace std;
// void geeks()
// {
//     // Declare an array
//     int val[3] = { 5, 10, 20 };

//     // declare pointer variable
//     int* ptr;

//     // Assign the address of val[0] to ptr
//     // We can use ptr=&val[0];(both are same)
//     ptr = val;
//     cout << "Elements of the array are: ";
//     cout << ptr[0] << " " << ptr[1] << " " << ptr[2];
// }
// // Driver program
// int main() { geeks(); }

// C++ program to illustrate Pointer Arithmetic
// #include <iostream>
// using namespace std;
// void geeks()
// {
//     // Declare an array
//     int v[3] = { 10, 100, 200 };

//     // declare pointer variable
//     int* ptr;

//     // Assign the address of v[0] to ptr
//     ptr = v;

//     for (int i = 0; i < 3; i++) {
//         cout << "Value at ptr = " << ptr << "\n";
//         cout << "Value at *ptr = " << *ptr << "\n";

//         // Increment pointer ptr by 1
//         ptr++;
//     }
// }

// Driver program
// int main() { geeks(); }
#include <iostream>
 
using namespace std;
 
int main () {
 
    while ( true ) {
        int* i = new int;
        cout << i << endl;
        delete i;
    }
 
    return 0;
}