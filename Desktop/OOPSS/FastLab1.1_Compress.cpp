/* Write a program that takes size of an array and its elements and removes consecutive occurrences of same number from the list. For the example given below, your program should have space of exactly 7 integers on heap after compression. Do not consume any extra byte on heap.
Sample Run:
Array Before Compression: 1,1,2,2,2,3,4,5,5,5,5,5,7,7,7,2,2,2
Array After Compression: 1,2,3,4,5,7,2 */

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int n;
//     cout << "Enter the size :" << endl;
//     cin >> n; 
//     bool Exit = true;
//     bool Out = true;
//     int i = 0, j = 1;

//     int* array = new int[n];

//     cout << "Enter the elements" << endl;
//     for (int row = 0; row < n; row++) {
//         cin >> *(array + row);
//     }

//     while ( j < n ) {

//         // for (int r = 0; r < n; r++) { // 5
//             if (*(array + i) != *(array + j)) {
//                 i = i + 1;
//                 j = j + 1;//1,1,2,2,2,3,4,5,5,5,5,5,7,7,7,2,2,2
//             }

//             else {
//                 // Out = true;
//                 // while ( true ) { //!validate -> while loop kaam krta hai jab tak condition true milte rhy ge 
//                     for (int y = j; y < n; y++) { 
//                         *(array + y) = *(array + y + 1);
//                     }

//                     array[n - 1] = 0;
//                     n--; // <5

//                     // if (*(array + i) != *(array + j)) {
//                     //     // Out = false;
//                     //     break;
//                     // }
//                 // }
//             }
//         }

//         if (j == n) {
//             Exit = false;
//         }
//     }

//     cout << "Compressed array is :" << endl;
//     for (int row = 0; row < n; row++) {
//         cout << *(array + row) << " ";
//     }
//     cout << endl;

//     delete[] array;
//     array = nullptr;
//     return 0;
// }

/*Exercise – Expand Array
Write a program that keeps taking integer input from the user until user enters -1 and displays the data in reverse order. 
Your program should save the input in a dynamically allocated array. Initially create a dynamic array of five integers. Each time the array gets filled your program should double the size of array (i.e. create a new array of double size, copy previous data in new array, delete previous array) and continue taking the input. After receiving -1 (i.e. end of data input) your program should print the numbers in the reverse order as entered by the user.
Important Note: subscript operator [] is not allowed to traverse the array. Use only offset notation. i.e instead of using myArray[i] use *(myArray+i) to read/write an element. Do not consume extra space. There shouldn’t be any memory leakage or dangling pointers in your code.*/

// #include <iostream>
// using namespace std;
 
// int main () {
    
    // int capacity;
    // cout << "Enter the size :" << endl;
    // cin >> capacity;
    // int size1 = capacity;
    // int size = 0;
    // bool Exit = true;
    
    // int* array = new int[capacity];

    // cout << "Enter elements(stop for -1) :" << endl;
    // while (true) {
    //     cin >> *(array + size);
        
    //     if (*(array + size) == -1) {
    //         *(array + size) = 0; //0 ka matlab kya hota
    //         size--;

    //         capacity = size;
    //         int* temp = new int[capacity];

    //         for (int x = 0; x <= size; x++) {
    //             *(temp + x) = *(array + x);
    //         }
    //         delete[] array;
    //         array = temp;
//             break;
//         }

//         if (size == capacity) {
//             int* temp = new int[capacity * 2];
//             capacity = capacity * 2;

//             for (int y = 0; y <= size; y++) {
//                 *(temp + y) = *(array + y);
//             }

//             delete[] array;
//             array = temp;
//         }

//         array[size] = *(array + size);
//         size = size + 1;
//     }

   
//     cout << "Elements in reverse are :" << endl;
//     for (int row = size; row >= 0; row--) {
//         cout << *(array + row) << " ";
//     }
//     return 0;
// }

/*Exercise 1 [Input Array]:
Write a function int* InputArray(int& size) that asks user to enter size of required array, allocates the memory on heap, takes input in array and returns its pointer.
Exercise 2 [Output Array]:
Write a program void OutputArray(int* myArray, const int& size) that takes a pointer to an integer array and prints its data.
Write main function to test above functionality.
Exercise – Expand Array
Write a program that keeps taking integer input from the user until user enters -1 and displays the data in reverse order. 
Your program should save the input in a dynamically allocated array. Initially create a dynamic array of five integers. Each time the array gets filled your program should double the size of array (i.e. create a new array of double size, copy previous data in new array, delete previous array) and continue taking the input. After receiving -1 (i.e. end of data input) your program should print the numbers in the reverse order as entered by the user.
Note: Write a separate function that AllocateAndCopyArray to grow and copy the array. Use OutputArray function to print the final array.
•	Important Note: subscript operator [] is not allowed to traverse the array. Use only offset notation. i.e instead of using myArray[i] use *(myArray+i) to read/write an element. Do not consume extra space. There shouldn’t be any memory leakage or dangling pointers in your code.*/

// #include <iostream>
// using namespace std;

// int* InputArray( int& size ) {
//     cout << "Enter the size" << endl;
//     cin >> size;

//     int* array = new int[size];

//     cout << "Enter the elemnts" << endl;
//     for (int row = 0; row < size; row++) {
//         cin >> *(array + row);
//     }

//     return array;
// }

// void OutputArray( int* MyArray, int& size ) {
//     for (int row = 0; row < size; row++) {
//         cout << MyArray[row] << " ";
//     }
//     cout << endl;
// }

// int main () {

//     int size;
//     int* array = InputArray( size );
//     cout << "Elements are :" << endl;
//     OutputArray( array, size );
//     delete[] array;
//     array = nullptr;
  
//     return 0;
// }

/*Write main function to test above functionality.
Exercise 3 [Compress Array]: 
Write a function int* CompressArray(int* oiginalArr, int& size) that takes a sorted array and removes duplicate elements from this array. 
Sample Run:
//Input:
Enter Size of array: 10
Enter 10 elements: 1 2 2 2 3 3 3 3 3 7
//Output
Array after Compression: 1 2 3 7

Your function will compress the original array, allocate a new array of compressed size (compressed size is 4 in above example) on heap, copy updated array in new array and return the new array.
Take input from user by calling int* InputArray(int& size) (function you implemented in Exercise 1). Call CompressArray, call OutputArray(function you implemented in Exercise 2) to display the final output.*/

// #include <iostream>
// using namespace std;

// int* InputArray( int& size ) {
//     cout << "Enter the size :" << endl;
//     cin >> size;

//     int* array = new int[size];

//     cout << "Enter the elements :" << endl;
//     for (int row = 0; row < size; row++) {
//         cin >> array[row];
//     }

//     return array;
// }

// int* CompressArray( int* originalArr, int& size ) {
//     int i = 0, j = 1;

//     while (j < size) {
//         if (originalArr[i] != originalArr[j]) {
//             i = i + 1;
//             j = j + 1;
//         }

//         else {
//             for (int y = j; y < size; y++) { 
//                 *(originalArr + y) = *(originalArr + y + 1);
//             }

//             originalArr[size - 1] = 0;
//             size--;
//         }
//     }

//     return originalArr;
// }

// void Result( int* originalArr, int& size ) {
//     for (int row = 0; row < size; row++) {
//         cout << originalArr[row] << " ";
//     }
//     cout << endl;
// }

// int main () {
    
//     int size;
//     int* array = InputArray( size );
//     int* originalArr = CompressArray( array, size );
//     cout << "The result is :" << endl;
//     Result( originalArr, size );

//     return 0;
// }

//


// #include <iostream>
// using namespace std;

// int Strlen( char* s1 ) {
//     int count = 0;
//     int x;
//     cout << "Enter the size :" << endl;
//     cin >> x;

//     for (int row = 0; row < x; row++) {
//         cin >> s1;
//         count = count + 1;
//     }

//     return count;
// }

// int main () {

//     char s1;

//     int arr = Strlen( &s1 );

//     cout << "Length of the string is : " << arr << endl;
//     return 0;
// }

//Copies string s2 into array s1. The value of s1 is returned.

// #include <iostream>
// using namespace std;

// char* copy( char* s1, char* s2 ) {

//     char* start = s1;

//     while (*s2 != '\0') {
//         *s1 = *s2;
//         s1++;
//         s2++;
//     }

//     *s1 = '\0'; 

//     return start;
// }

// int main () {
    
//     char s2[14] = "Hello, World!";
//     char s1[50];

//     char* ans = copy( s1, s2 );
//     cout << ans << endl;
//     return 0;
// }

//  Copies at most n characters of string s2 into array s1. The value of s1 is returned...// POINTERS WITH ARRAYS SAMJH SE BAHIR

#include <iostream>
using namespace std;

char* copy1( char* s1 , char* s2, int n ) {
    char* ret = s1;

    for (int row = 0; row < n; row++) {
        *(s1 + row) = *(s2 + row);
    }

    return ret;
}
 
int main () {
    
    int n;
    cout << "Enter n :" << endl;
    cin >> n;

    char* s1[n];   
    char* s2[n];

    for (int row = 0; row << n; row++) {
        cin >> s2[row];
    }

    char* ans = copy1( s1, s2, n );
    cout << ans << endl;
    return 0;
}
 