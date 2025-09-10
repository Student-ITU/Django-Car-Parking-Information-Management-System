// #include <iostream>

// using namespace std;

// int main () {

//     int capacity = 10;
//     int size = 0;  
//     char* arr = new char[capacity];

//     cout << "Enter a string (press Enter to finish) : ";

//     char ch;
//     while ( cin.get(ch) && ch != '\n' ) {
//         if ( size == capacity ) {
//             capacity *= 2; 
//             char* newArr = new char[capacity];

//             for ( int i = 0; i < size; i++ ) {
//                 newArr[i] = arr[i];
//             }

//             delete[] arr;
//             arr = newArr;
//         }
//         arr[size++] = ch; 
//     }

//     int freq[128] = {0};

//     for ( int i = 0; i < size; i++ ) {
//         freq[arr[i]]++;
//     }
//     cout << endl;

//     cout << "Frequency of characters : " << endl;
//     for ( int i = 0; i < 128; i++ ) {
//         if ( freq[i] > 0 ) {
//             cout << (char)i << ": " << freq[i] << endl;
//         }
//     }

//     delete[] arr;

//     return 0;
// }


// #include <iostream>

// using namespace std;

// #define SIZE 5

// int main () {

//     // a. Declare an array of type unsigned int called values with five elements,
//     // and initialize the elements to the even integers from 2 to 10.
//     unsigned int values[SIZE] = {2, 4, 6, 8, 10};

//     // b. Declare a pointer vPtr that points to an object of type unsigned int.
//     unsigned int* vPtr;

//     // c. Use a for statement to print the elements of array values using array subscript notation.
//     cout << "Array elements using array subscript notation:" << endl;
//     for ( int i = 0; i < SIZE; i++ ) {
//         cout << values[i] << " ";
//     }
//     cout << endl;

//     // d. Write two separate statements that assign the starting address of array values to pointer variable vPtr.
//     vPtr = values;       // First way: Assigning base address of array
//     vPtr = &values[0];   // Second way: Using the address of the first element

//     // e. Use a for statement to print the elements of array values using pointer/offset notation.
//     cout << "Array elements using pointer/offset notation :" << endl;
//     for ( int i = 0; i < SIZE; i++ ) {
//         cout << *(vPtr + i) << " ";
//     }
//     cout << endl;

//     // f. Use a for statement to print the elements of array values using pointer/offset notation with the array name as the pointer.
//     cout << "Array elements using pointer/offset notation with array name as pointer :" << endl;
//     for ( int i = 0; i < SIZE; i++ ) {
//         cout << *(values + i) << " ";
//     }
//     cout << endl;

//     // g. Use a for statement to print the elements of array values by subscripting the pointer to the array.
//     cout << "Array elements by subscripting the pointer to the array :" << endl;
//     for ( int i = 0; i < SIZE; i++ ) {
//         cout << vPtr[i] << " ";
//     }
//     cout << endl;

//     // h. Refer to the fifth element of values using:
//     //    - Array subscript notation
//     cout << "Fifth element using array subscript notation : " << values[4] << endl;

//     //    - Pointer/offset notation with the array name as pointer
//     cout << "Fifth element using pointer/offset notation with array name as pointer : " << *(values + 4) << endl;

//     //    - Pointer subscript notation
//     cout << "Fifth element using pointer subscript notation : " << vPtr[4] << endl;

//     //    - Pointer/offset notation
//     cout << "Fifth element using pointer/offset notation : " << *(vPtr + 4) << endl;

//     // i. What address is referenced by vPtr + 3? What value is stored at that location?
//     cout << "Address referenced by vPtr + 3 : " << (vPtr + 3) << endl;
//     cout << "Value stored at that location : " << *(vPtr + 3) << endl;

//     // j. Assuming that vPtr points to values[4], what address is referenced by vPtr -= 4?
//     // What value is stored at that location?
//     vPtr = &values[4];
//     vPtr -= 4;
//     cout << "Address referenced by vPtr -= 4 : " << vPtr << endl;
//     cout << "Value stored at that location : " << *vPtr << endl;

//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// int main () {

//     //Allocate memory for an int and initialize it
//     int* p = new int;
//     *p = 5; //Correctly set the value of the allocated int
//     *p = *p + 5; //Increment the value at the allocated memory

//     //Create a string and change its value
//     string s = "Harry";
//     s = "Sally"; //Correctly change the value of the string

//     //No need to delete (((s))) since it's a local variable, not allocated with new keywoed...

//     //Allocate memory for an array of 10 ints
//     int* a = new int[10];
//     *a = 5; //Set the first element of the array
//     a[9] = 5; //Set the last element of the array

//     //Deallocate memory for the array
//     delete[] a;

//     //Initialize a pointer and allocate memory
//     int* q = nullptr;
//     q = new int;
//     *q = 5; //Set the value at the allocated memory

//     //Assign pointer p to q
//     q = p; //p points to memory allocated with new int

//     //Deallocate memory pointed to by q
//     delete q; //Deleting memory that q points

//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// struct FamilyMember {
//     string name;
//     int age;
//     string relation;
// };

// int main () {

//     int size = 0;
//     int capacity = 2; 

//     FamilyMember* members = new FamilyMember[capacity];

//     while ( true ) {
//         cout << "Enter family member’s name : ";
//         getline( cin, members[size].name );

//         cout << "Enter family member’s age : ";
//         cin >> members[size].age;
//         cin.ignore(); 

//         cout << "Enter family member’s relation : ";
//         getline( cin, members[size].relation );

//         size++;

//         if ( size == capacity ) {
//             capacity *= 2; 
//             FamilyMember* newMembers = new FamilyMember[capacity];

//             for ( int i = 0; i < size; i++ ) {
//                 newMembers[i] = members[i];
//             }

//             delete[] members;
//             members = newMembers;
//         }

//         cout << "Add another family member? 1/0: ";
//         int addMoree;
//         cin >> addMoree;
//         cin.ignore();

//         if ( addMoree == 0 ) {
//             break;
//         }
//     }

//     for ( int i = 0; i < size; i++ ) {
//         cout << members[i].name << ", " << members[i].age << ", is the " << members[i].relation << "." << endl;
//     }

//     delete[] members;

//     return 0;
// }

#include <iostream>
#include <string>

void printString(const std::string& str) {
    // str = "sameer";
    std::cout << str << std::endl; // Can read but not modify
}

int main() {
    printString("Hello"); // This is fine
    std::string myString = "World";
    printString(myString); // Also fine
    return 0;
}
