// #include<iostream>
// using namespace std;
 
// int main() {
    
    // int arr[10] = {2, 5, 6, 34};
    // cout << "Address of 1st memory block is " << arr << endl;
    // cout << arr[0] << endl;
    // cout << "Address of 1st memory block is " << &arr[0] << endl;
    // cout << "Address of Entire array is " << &arr << endl;
    // cout << *arr << endl;
    // cout << *arr + 1 << endl;  // is mein index pe jo value hai us mein 1 add ho raha 5 hai tou 6 ho jai ga.
    // cout << *(arr + 1) << endl;  // is mein index aage aage ja rhy.
    // cout << *(arr) + 1 << endl;  //value at 0 location + 1 which is 3.
    // int i = 3;
    // cout << i[arr] << endl;
    // cout << arr[i] << endl;

    // cout << endl;

    // int temp[10]= {1, 2};
    // cout << sizeof(temp) << endl;
    // cout << sizeof(*temp) << endl;
    // cout << sizeof(&temp) << endl;  // is waqt hm size of pointer to an array le rhy is lie size 8 a raha
    // cout << endl;
    // int *ptr = &temp[0];
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(*ptr) << endl; // 1st element ka size le raha
    // cout << sizeof(&ptr) << endl;          

    // cout << endl;

    // int a[20] = {1, 2, 3, 4, 5};
    // cout << a << endl;
    // cout << &a[0] << endl;
    // cout << &a << endl;
    // cout << endl;
    // int *p = &a[0];
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;

    // cout << endl;

    // int arr[10];
    // // arr = arr + 1; // Nhi hota yeh, nhi kr sakte array mein bs pointer mein kr sakte 
    // int *ptr = &arr[0];
    // cout << ptr << endl;    
    // ptr = ptr + 1;
    // cout << ptr << endl;
    // cout << &ptr << endl;
    

    // //Char arrays
        
    // int arr[5] = {1, 2, 3, 4, 5};
    // char ch[90] = "abcde";
    // // char *c = "abcde";   yeh kabhi nhi krna
    // // char *c = &ch[0]; // This can be done
    // cout << &arr << endl;
    // cout << arr << endl;
    // cout << ch << endl;
    // int *ptr =  &arr[0];
    // cout << arr << endl;
    // char *c = &ch[0];
    // cout << c << endl;   //jab tak null character nhi ata tab tak khatam nhi hota is lie abcde print ho raha 
    // cout << endl;   
    // char temp = 'z';//***
    // char *p = &temp;
    // cout << *p << endl; //yeh bs z print kre ga  
    // cout << p << endl; // yeh address hai char ka jese jab int hota tou address is trha ata 0*123434be32 tou agar. Null char nhi mil rha is lie z��(k print ho rha
    // cout << &temp << endl;  //yeh dekho same same hai dono 
    // cout << temp << endl;
    // cout << &p << endl;
    // cout << static_cast<void*>(p) << endl;
    // return 0;
// }


// Functions with pointers

//  pass by reference with pointer arguments
// #include<iostream>
// using namespace std;

// void print(int *p) {

//     cout << &p << endl;
//     cout << p << endl;
//     cout << *p << endl;
// }

// void update(int *p) {

// // p = p + 1;
//     *p = *p + 1;
//     cout << "Inside " << *p << endl;  //value update ho jate hai  but address nhi hota
// }

// int main() {
    
//     int value = 5;
//     int *p = &value;
//     cout << "Before " << *p << endl;
//     update(&value);
//     cout << "hi " << &value << endl;
//     cout << "After " << *p << endl;
//     print(p);
//     return 0;
// }

// function mein jab array pass krte tou us time agar sizeofarr likha tou waha array pass nhi hota pointer hota *arr, arr[] likhu aik he bat hai jab function mein likhein ge size 8 ho ga cz yeh as a poiner pass hote na ke agar int data type hai or size array ka 5 hai tou 20 ai ga nhi agar pass k rhy tou as a pointer pass ho ge so size 8 ho ge 
// BENEFIT OF ARRAY AS A POINTER??
// Ans: u can send part of array getsum(arr + 3); matlab array ko 3 se aage part se send kar dia zaruri nhi pura array he send ho ga

#include <iostream>
using namespace std;

// Pass-by-Value
int square1(int n)  
{
    // Address of n in square1() is not the same as n1 in
    // main()
   
    cout << "address of n1 in square1 (): " << &n << "\n";
    cout << "address of n1 in square1 (    ): " << n << "\n";
    

    // clone modified inside the function
    n *= n;
    return n;
}
// Pass-by-Reference with Pointer Arguments
void square2(int* n)
{
    // Address of n in square2() is the same as n2 in main()
    n = n + 1;// so cz of this address of n changes and it will not  // idhr change ho rha address but neeche ni pass by reference with pointer arguments
    cout << "address of n2 in square2(): " << n << "\n";
    cout << "address of n2 in square2(): " << &n << "\n";
    cout << "address of n2 in square2(): " << *n << "\n";

    // Explicit de-referencing to get the value pointed-to
    *n *= *n;
    cout << "address of n2 in square2(): " << *n << "\n";
}
// Pass-by-Reference with Reference Arguments
void square3(int& n)
{
    // Address of n in square3() is the same as n3 in main()
    cout << "address of n3 in square3   (): " << &n << "\n";
    cout << "address of n3 in square3()      : " << n << "\n";

    // Implicit de-referencing (without '*')
    n *= n;
    cout << "Inside" << n << endl;
}
void geeks()
{
    // Call-by-Value
    int n1 = 8;
    cout << "address of n1 in main(): " << &n1 << "\n";
    cout << "Square of n1: " << square1(n1) << "\n";
    cout << "No change in n1: " << n1 << "\n";
    cout << endl;
    // Call-by-Reference with Pointer Arguments
    int n2 = 8;
    cout << "address of n2 in main(): " << &n2 << "\n";
    square2(&n2);
    cout << "Square of n2   : " << n2 << "\n"; // reason uper likh de n = n + 1 -> 64 kyun nhi hoa
    cout << "Change reflected in n2: " << &n2 << "\n";
    cout << endl;
    // Call-by-Reference with Reference Arguments
    int n3 = 8;
    cout << "address of n3 in main(): " << &n3 << "\n";
    square3(n3);
    cout << "Square of n3: " << n3 << "\n";
    cout << "Change reflected in n3: " << n3 << "\n";
}
// Driver program
int main() { geeks(); }