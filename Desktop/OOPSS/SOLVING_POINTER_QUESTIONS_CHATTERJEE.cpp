// // Pointer Comparison:
// int* ptr1;
// int* ptr2;
// // ... Assuming ptr1 and ptr2 are assigned valid addresses
// if (ptr1 == ptr2) {
//     // Pointers point to the same location
// } else {
//     // Pointers do not point to the same location
// }



/*Functions-Related Questions with Pointers and Arrays:
Access Array Elements through Pointer:

Write a function printArray that takes a pointer to an integer array and prints all the elements.
Modify Array Elements through Pointer:

Write a function doubleArray that takes a pointer to an integer array and doubles the value of each element.
Sum of Array Elements through Pointer:

Write a function sumArray that takes a pointer to an integer array and returns the sum of all elements.
Update String through Pointer:

Write a function appendString that takes a pointer to a character array and appends  "World" to the existing string.
Swap Arrays through Pointers:

Write a function swapArrays that takes two pointers to integer arrays and swaps their contents.*/

//Q1
// #include<iostream>
// using namespace std;

// /*void printArray(int arr[], int size);
// OR
// void printArray(int* arr, int size);
// Both declarations convey that the function expects a pointer to the first element of an integer array. It's more a matter of coding style or personal preference. The important thing is to use the same type in the function declaration and the corresponding call.*/

// void printArray(int *arr, int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main() {
    
//     int arr[4] = {1, 2, 3, 4};
//     int size = 4;
//     printArray(arr, size);
//     return 0;
// }

//Q2

// #include<iostream>
// using namespace std;

// void doubleArray(int *arr, int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] * 2 << " ";
//     }
//     cout << endl;
// }
// int main() {
    
//     int arr[4] = {1, 2, 3, 4};
//     int size = 4;
//     doubleArray(arr, size);
//     return 0;
// }

//Q3

// #include<iostream>
// using namespace std;

// int* doubleArray(int *arr, int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum = sum + arr[i];
//     }
    
//     return &sum;
    
// }
// int main() {
    
//     int arr[4] = {1, 2, 3, 4};
//     int size = 4;
//     int *sum1 = doubleArray(arr, size);
//     // int sum11 = *sum1;
//     cout << "Sum is " << *sum1 << endl;
//     return 0;
// }

/*You: sameershahzad@Sameers-MacBook-Air OOPs % cd "/Users/sameershahzad/Desktop/O
OPs/" && g++ SOLVING_POINTER_QUESTIONS_CHATTERJEE.cpp -o SOLVING_POINTER_QU
ESTIONS_CHATTERJEE && "/Users/sameershahzad/Desktop/OOPs/"SOLVING_POINTER_Q
UESTIONS_CHATTERJEE
SOLVING_POINTER_QUESTIONS_CHATTERJEE.cpp:83:13: warning: address of stack memory associated with local variable 'sum' returned [-Wreturn-stack-address]
    return &sum;
            ^~~
1 warning generated.
Sum is 10 (warning de raha)

ChatGPT
The warning you're seeing is due to returning the address of a local variable (sum) from the doubleArray function. This is generally not safe, as the local variable is stored on the stack, and its memory can be invalidated once the function exits.

To resolve this issue, especially if you want to return a pointer to the sum, you should use dynamic memory allocation. Here's an updated version of your code using dynamic memory:*/

//Q4
//Write a function appendString that takes a pointer to a character array and appends  "World" to the existing string.

// #include<iostream>
// #include<cstring>  // Include the header for string functions

// using namespace std;

// void appendString(char* str) {
//     // Use strcat to concatenate "World" to the existing string
//     strcat(str, "World");
// }

// int main() {
//     const int bufferSize = 20;  // Adjust the size based on your needs
//     char greeting[bufferSize] = "Hello, ";

//     cout << "Before appending: " << greeting << endl;

//     appendString(greeting);

//     cout << "After appending: " << greeting << endl;

//     return 0;
// }

//Q5
//Write a function swapArrays that takes two pointers to integer arrays and swaps their contents.
// #include<iostream>
// using namespace std;

// void swapArrays(int *arr1, int *arr2, int size) {
//     for (int i = 0; i < size; i++) {
//         int temp = arr1[i];
//         arr1[i] = arr2[i];
//         arr2[i] = temp;
        
//     }
// } 
// int main() {
    
//     const int size = 5;  // Adjust the size based on your arrays
//     int array1[size] = {1, 2, 3, 4, 5};
//     int array2[size] = {6, 7, 8, 9, 10};

//     cout << "Before swapping:" << endl;
//     cout << "Array 1: ";
//     for (int i = 0; i < size; i++) {
//         cout << array1[i] << " ";
//     }
//     cout << endl;

//     cout << "Array 2: ";
//     for (int i = 0; i < size; i++) {
//         cout << array2[i] << " ";
//     }
//     cout << endl;

//     // Call the swapArrays function to swap the contents of the arrays
//     swapArrays(array1, array2, size);
//         cout << "\nAfter swapping:" << endl;
//     cout << "Array 1: ";
//     for (int i = 0; i < size; i++) {
//         cout << array1[i] << " ";
//     }
//     cout << endl;

//     cout << "Array 2: ";
//     for (int i = 0; i < size; i++) {
//         cout << array2[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//POINTER SE PANGE LENE LAGA IS QUESTION MEIN
// #include<iostream>
// using namespace std;

// void *swapArrays(int *arr1, int *arr2, int size) {
//     for (int i = 0; i < size; i++) {
//         int temp = arr1[i];
//         arr1[i] = arr2[i];
//         arr2[i] = temp;
        
//     }
// } 
// int main() {
    
//     const int size = 5;  // Adjust the size based on your arrays
//     int array1[size] = {1, 2, 3, 4, 5};
//     int array2[size] = {6, 7, 8, 9, 10};

//     cout << "Before swapping:" << endl;
//     cout << "Array 1: ";
//     for (int i = 0; i < size; i++) {
//         cout << array1[i] << " ";
//     }
//     cout << endl;

//     cout << "Array 2: ";
//     for (int i = 0; i < size; i++) {
//         cout << array2[i] << " ";
//     }
//     cout << endl;

//     // Call the swapArrays function to swap the contents of the arrays
//     swapArrays(array1, array2, size);
//         cout << "\nAfter swapping:" << endl;
//     cout << "Array 1: ";
//     for (int i = 0; i < size; i++) {
//         cout << array1[i] << " ";
//     }
//     cout << endl;

//     cout << "Array 2: ";
//     for (int i = 0; i < size; i++) {
//         cout << array2[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//DMA of 1D arr


//Q1
// #include<iostream>
// using namespace std;
 
// int main() {
    
//     int n;
//     cin >> n;
//     int *arr = new int[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     delete[] arr;

//     return 0;
// }

//Q2 EASY

//Q3
// #include<iostream>
// using namespace std;
 
// int main() {
    
//     int n;
//     cin >> n;
//     char *arr = new char[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     delete[] arr;
    
//     return 0;
// }

//Q4

// #include<iostream>
// using namespace std;
 
// int main() {
    
//     int n;
//     cin >> n;
//     int m;
//     cin >> m;
//     int **arr = new int *[n];
//     for (int i = 0; i < n; i++) {
//         arr[i] = new int[m];
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n; i++) {
//         delete[] arr[i];
//     }
//     delete[] arr;
    
//     return 0;
// }

//Q5

#include<iostream>
using namespace std;
 
int main() {
    
    return 0;
}