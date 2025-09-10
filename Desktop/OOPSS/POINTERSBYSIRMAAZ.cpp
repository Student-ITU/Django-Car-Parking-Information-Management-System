/*Write a C++ program that declares an integer variable num with value 10. Then, declare a pointer variable ptr and initialize it with the address of num. Finally, use the pointer ptr to print the value of num.
Pointer Arithmetic
Write a C++ program that declares an array of integers arr with values {10, 20, 30, 40, 50}. Declare a pointer ptr and initialize it with the address of the first element of arr. Use pointer arithmetic to print the values of all elements of the array.
Swapping Values Using Pointers
Write a C++ function swap(int* a, int* b) that takes two pointers to integers as arguments and swaps the values they point to. In the main() function, declare two integer variables x and y, initialize them with values, and call the swap() function to swap their values.
Pointer to Pointer
Write a C++ program that declares an integer variable num with value 42. Declare a pointer ptr1 that points to num. Then, declare a pointer to pointer ptr2 and initialize it with the address of ptr1. Use ptr2 to print the value of num.
Dynamic Memory Allocation
Write a C++ program that dynamically allocates an array of integers using new[]. Initialize the array with values and use a pointer to print the elements of the array. Don't forget to deallocate the memory using delete[] before the program exits.
Passing Pointers to Functions
Write a C++ function square(int* arr, int size) that takes a pointer to an integer array and its size as arguments. The function should square each element of the array using pointer arithmetic. In the main() function, declare an array of integers, initialize it with values, and call the square() function, passing the array as an argument.
Pointers and Strings
Write a C++ program that declares a character array str with a string value (e.g., "Hello, World!"). Declare a character pointer ptr and initialize it with the address of the first character of str. Use ptr and pointer arithmetic to print each character of the string on a new line.
Pointer to Function
Write a C++ program that declares a function add(int a, int b) that returns the sum of two integers. Declare a pointer to function ptr and initialize it with the address of the add() function. Use ptr to call the add() function and print the result.*/

// #include <iostream>
// using namespace std;
// //*Write a C++ program that declares an integer variable num with value 10. Then, declare a pointer variable ptr and initialize it with the address of num. Finally, use the pointer ptr to print the value of num
// int main() {

//     int num = 10;
//     int *ptr = &num;
//     cout << "Value of num by using pointer ptr " << *ptr << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// //Pointer Arithmetic -> Write a C++ program that declares an array of integers arr with values {10, 20, 30, 40, 50}. Declare a pointer ptr and initialize it with the address of the first element of arr. Use pointer arithmetic to print the values of all elements of the array.
// int main() {
//     int array[5] = {10, 20, 30, 40, 50};
//     int *ptr = &array[0];

//     for (int row = 0; row < 5; row++) {
//         ptr = &array[row];
//         *ptr = array[row];
//         // *ptr = &array[row]; // NOT ALLOWED -> In C++, *ptr = &array[row]; is not a valid syntax because it attempts to assign the address of array[row] to the value pointed to by ptr, which is an integer. This syntax combines pointer dereferencing (*ptr) and address-of operator (&array[row]) in a way that is not meaningful or allowed.
//         cout << *ptr << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// //Write a C++ function swap(int* a, int* b) that takes two pointers to integers as arguments and swaps the values they point to. In the main() function, declare two integer variables x and y, initialize them with values, and call the swap() function to swap their values.
// void swap1(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     cout << "Inside" << endl;
//     cout << "Value of a is " << *a << " and value of b is " << *b << endl;
// }

// int main() {

//     int a = 5, b = 2;
//     int *ptr = &a;
//     int *ptr1 = &b;

//     cout << "Before" << endl;
//     cout << "Value of a is " << a << " and value of b is " << b << endl;
//     swap1(&a, &b);
//     cout << "After" << endl;
//     cout << "Value of a is " << a << " and value of b is " << b << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// //Dynamic Memory Allocation -> Write a C++ program that dynamically allocates an array of integers using new[]. Initialize the array with values and use a pointer to print the elements of the array. Don't forget to deallocate the memory using delete[] before the program exits.
// int main() {

//     int n;
//     cin >> n;
//     int* array = new int[n];

//     for (int row = 0; row < n; row++) {
//         cin >> array[row];
//     }

//     for (int row = 0; row < n; row++) {
//         cout << array[row] << " ";
//     }

//     delete []array;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// // Passing Pointers to Functions -> Write a C++ function square(int* arr, int size) that takes a pointer to an integer array and its size as arguments. The function should square each element of the array using pointer arithmetic. In the main() function, declare an array of integers, initialize it with values, and call the square() function, passing the array as an argument.
// void square1 (int *array, int size) {

//     for (int row = 0; row < size; row++) {
//         array[row] = array[row] * array[row];
//         cout << "Square of element " << row << " is -> " << array[row] << " ";
//     }
// }

// int main() {

//     int array[5] = {1, 2, 3, 4, 5};
//     int *ptr = &array[0];
//     square1(array, 5);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// //Write a C++ program that declares a function add(int a, int b) that returns the sum of two integers. Declare a pointer to function ptr and initialize it with the address of the add() function. Use ptr to call the add() function and print the result
// int add1(int a, int b) {
//     return a + b;
// }

// int main() {

//     int a = 5;
//     int b = 2;
//     int (*ptr) (int, int) = &add1;// Declare a pointer to function ptr and initialize it with the address of the add() function. Use ptr to call the add() function and print the result
//     int sum = ptr(a, b);
//     cout << "Sum of " << a << " and " << b << " is -> " << sum << endl;

//     return 0;
// }

// REVISE THIS TODAY
//  #include <iostream>
//  using namespace std;
// Pointers and Strings -> Write a C++ program that declares a character array str with a string value (e.g., "Hello, World!"). Declare a character pointer ptr and initialize it with the address of the first character of str. Use ptr and pointer arithmetic to print each character of the string on a new line.
//  int main() {

//     // char str[5] = {'H', 'E', 'L', 'L', 'O'}; // 5 cz no need of backslash if we write like this
//     // char str[12] = "Hello World";// backslash 0 ke waja se 12 otherwise 11 ->built in backslash ata thats why aik size extra karna parta
//     string str[2] = {"Hello", "World"}; //Array of strings // alag alag cheze bhe a sakte like "12", "Hi".
//     // string str = "Hello World"; // only one string // H is a string literal // agaar jitne dafa print karna hello world tou ese kr sakte 5 dafa 4 dafa etc.
//     string *ptr = &str[0];

//     for (int row = 0; row < 2; row++) {
//         ptr = &str[row];
//         cout << *ptr << endl;
//     }
//     // while (*str != '\0') {
//     //     cout << *str << endl;
//     //     str++; // Move the pointer to the next character
//     // }
//     return 0;
// }

// FAST -> Lab Manual 1 – Pointers, Filing and Debugging

// #include <iostream>
// using namespace std;

// int myFunction ()
// {
// int numbers[5];
// int *p;
// p = numbers;
// *p = 10;
// p++;
// *p = 20;
// p = &numbers[2];
// *p = 30;
// p = numbers + 3;
// *p = 40;
// p = numbers;
// *(p+4) = 50;

//   for (int n=0; n<5; n++)
//     cout << numbers[n] << ", ";

//   return 0;
// }
// int main()
// {
// myFunction();
// }

// #include <iostream>
// using namespace std;

// int main() {

//     int num1 = 5, num2 = 7, sum = 0;
//     int *xPtr = 0, *yPtr = 0, *sumPtr = 0;
//     cout << "Num1 is -> " << num1 << " and Num2 is -> " << num2 << endl;
//     cout << "Num1 is -> " << &num1 << " and Num2 is -> " << &num2 << endl;
//     xPtr = &num1;
//     yPtr = &num2;
//     cout << "*xPtr is -> " << *xPtr << " and *yPtr is -> " << *yPtr << endl;
//     sumPtr = &sum;
//     cout << "*sumPtr is -> " << *sumPtr << endl;
//     sum = *xPtr + *yPtr;
//     cout << "*sumPtr is -> " << *sumPtr << endl;
//     cout << "xPtr is -> " << xPtr << " and yPtr is -> " << yPtr << endl;
//     return 0;
// }

/*Exercise – Expand Array
Write a program that keeps taking integer input from the user until user enters -1 and displays the data in reverse order.
Your program should save the input in a dynamically allocated array. Initially create a dynamic array of five integers. Each time the array gets filled your program should double the size of array (i.e. create a new array of double size, copy previous data in new array, delete previous array) and continue taking the input. After receiving -1 (i.e. end of data input) your program should print the numbers in the reverse order as entered by the user.
Important Note: subscript operator [] is not allowed to traverse the array. Use only offset notation. i.e instead of using myArray[i] use *(myArray+i) to read/write an element. Do not consume extra space. There shouldn’t be any memory leakage or dangling pointers in your code. WHY????
*/

// #include <iostream>
// using namespace std;

// int main() {

//     bool exit = true;

//     while (exit == true) {
//         int n;
//         cout << "Enter the number of elements you want to enter" << endl;
//         cin >> n;

//         if (n == -1) {
//             cout << "Program wrong you have entered -1" << endl;
//             exit = false; // agar exit = false karein ge tou continue lagana pare ga
//             // break;
//             continue;
// /*I see what you're getting at! You're right, the word "continue" typically implies moving forward or proceeding with something. However, in the context of programming, the `continue` statement has a specific meaning.

// In a loop, `continue` skips the rest of the current iteration and moves on to the next iteration. It doesn't cancel or terminate the loop entirely; it simply skips to the next cycle.

// Think of it like a "skip to the next step" button. When you hit `continue`, the program skips the rest of the current step and moves on to the next one.

// In the case of the code you provided, when the user enters -1, the program prints a message, sets `exit` to `false`, and then uses `continue` to skip the rest of the loop body. This ensures that the loop exits cleanly and doesn't execute any unnecessary code.

// So, to answer your question, `continue` doesn't cancel the loop entirely; it simply skips to the next iteration, allowing the loop to exit gracefully when `exit` is set to `false`.*/
//         }

//         int *array = new int[n];

//         cout << "Enter the elements ->" << endl;
//         for (int row = 0; row < n; row++) {
//             cin >> *(array + row);  // cin >> array[row];
//         }

//         cout << "Array in reverse order is -> "<< endl;
//         for (int row = n - 1; row >= 0; row--) {
//             cout << *(array + row) << " "; // cout << array[row];
//         }
//         cout << endl;

//         int *array1 = new int[n * 2];

//         for (int row = 0; row < n; row++) {
//             *(array1 + row) = *(array + row);
//         }

//         cout << "More elements" << endl;
//         for (int row = n; row < n * 2; row++) {
//             cin >> *(array1 + row);
//         }

//         cout << "Elements are -> " << endl;
//         for (int row = 2 * n - 1; row >= 0; row--) {
//             cout << *(array1 + row) << " ";
//         }
//         cout << endl;

//         delete[] array;
//         delete[] array1;
//         array = nullptr;
//         array1 = nullptr;
//     }
//     return 0;
// }

// CHATGPT'S CODE

// #include <iostream>
// using namespace std;

// int main() {

//     int size = 5;
//     int* array = new int[size];
//     int count = 0;
//     cout << "Enter integers (enter -1 to stop):" << endl;

//     while (true) {
//         int num;
//         cin >> num;

//         if (num == -1)
//             break;
//         array[count++] = num;

//         if (count == size) {
//             size *= 2;
//             int* newArray = new int[size];
//             for (int i = 0; i < count; ++i) {
//                 newArray[i] = array[i];
//             }
//             delete[] array;
//             array = newArray;
//         }
//     }

//     cout << "Elements in reverse order:" << endl;
//     for (int i = count - 1; i >= 0; --i) {
//         cout << array[i] << " ";
//     }
//     cout << endl;

//     delete[] array;
//     array = nullptr;
//     return 0;
// }

// //MY CODE IMPROVEMENT

// #include <iostream>
// using namespace std;

// int main() {
//     bool exit = true;

//     while (exit == true) {
//         int n;
//         cout << "Enter the number of elements you want to enter" << endl;
//         cin >> n;

//         if (n == -1) {
//             cout << "Program exited because you have entered -1" << endl;
//             exit = false;
//             continue; // Skip the rest of the loop
//         }

//         int* array = new int[n];

//         cout << "Enter the elements ->" << endl;
//         for (int row = 1; row <= n; row++) {
//             cin >> *(array + row);
//         }

//         cout << "Array in reverse order is -> " << endl;
//         for (int row = n; row >= 1; row--) {
//             cout << *(array + row) << " ";
//         }
//         cout << endl;

//         int* array1 = new int[2 * n];

//         // Copy elements from array to array1
//         for (int row = 1; row <= n; row++) {
//             *(array1 + row) = *(array + row);
//         }

//         cout << "More elements" << endl;
//         for (int row = n + 1; row <= 2 * n; row++) {
//             cin >> *(array1 + row);
//         }

//         cout << "Elements are -> " << endl;
//         for (int row = 2 * n; row >= 1; row--) {
//             cout << *(array1 + row) << " ";
//         }

//         delete[] array;
//         delete[] array1;
//         array = nullptr; // Set to nullptr to prevent dangling pointers
//         array1 = nullptr; // Set to nullptr to prevent dangling pointers
//     }
//     return 0;
// }

/*	•	Question 1 - Compress Array:
Write a program that takes size of an array and its elements and removes consecutive occurrences of same number from the list. For the example given below, your program should have space of exactly 7 integers on heap after compression. Do not consume any extra byte on heap.
Sample Run:
Array Before Compression: 1,1,2,2,2,3,4,5,5,5,5,5,7,7,7,2,2,2
Array After Compression: 1,2,3,4,5,7,2

  •	Question 2 - Find Common Elements (Intersection):
Implement a function that finds common elements in two sorted arrays.  If array1 = {1,2,3,4,5,6} and array2 is {1,3,5,7}, then array3 (common elements) should be {1,3,5}.  Note array3 should not have any duplicate elements and at the end array3 should not consume a single extra byte on heap.  You have to:
  •	Allocate the three arrays dynamically after inputting the size of array1 and array2 from the user.  Statically allocated arrays are NOT allowed.
  •	Initially you can allocate elements = (size of array1 + size of array2) to array3.  For example you would allocate 6+4 to array 3 for the above example.  After finding the common elements, the allocated size of array3 may be more than what you need.  (In the above example you require 3 whereas you have allocated 12).
*/

// #include <iostream>
// using namespace std;

// int main() {

//     bool exit = true;
//     int i = 0, row1 = 1;
//     // int move = 1;
//     int n;
//     cout << "Enter the size" << endl;
//     cin >> n;

//     int *array = new int[n];

//     cout << "Enter elements ->" << endl;
//     for (int row = 0; row < n; row++) {
//         cin >> *(array + row);
//     }

//     cout << "Elements are ->" << endl;
//     for (int row = 0; row < n; row++) {
//         cout << *(array + row) << " ";
//     }
//     cout << endl;

//     while ( exit == true ) { 
//         for (int row = 0; row < n; row++) { 

//             if (*(array + i) == *(array + row1) && i <= n) {

//                 for (int col = row1; col < n - 1; col++) {
//                     *(array + row1) = *(array + row1 + 1);

//                     // if (*(array + row1 + 1) < n - 1) {
//                     //     move = move + 1;
//                     // }
//                 }
//                 *(array + (n - 1)) = 0;
//                 // row1 = row1;
//                 n--;
//             }

//             if (*(array + i) != *(array + row1) && row1 < n) {
//                 row1 = row1 + 1; 
//             }

//             if (row1 == n - 1) {
//                 i++;
//                 row1 = i + 1;
//             }

//             if (i == n - 2) {
//                 exit = false;
//             }
//         }
//     }

//     cout << "Without repeition array is ->" << endl;
//     for (int row = 0; row <= n; row++) {
//         cout << *(array + row) << " ";
//     }
//     cout << endl;

//     delete[] array;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//     int count = 0;
//     string array[4];
//     string name;
//     cout << "Enter name" << endl;
//     cin >> array[count];
//     count++;
//     int number;
//     cout << "Enter number" << endl;
//     cin >> array[count];
//     count++;
//     string address;
//     cout << "Enter address" << endl;
//     cin >> array[count];
//     count++;
//     int age;
//     cout << "Enter age" << endl;
//     cin >> array[count];
//     count++;

//     for (int row = 0; row < count; row++) {
//         cout << array[row] << " ";
//     }
//     return 0;
// }

// ABDUL'S CODE

// #include <iostream>
// #include <string>
// using namespace std;

// class BankAccount {
// public:
//     string Name;
//     int phone;
//     int Cnic;
//     int LoginId;
//     int pass;
//     int WithdrawLimit;

//     BankAccount() : phone(0), Cnic(0), LoginId(0), pass(0), WithdrawLimit(0) {}

//     void AddAccount() {
//         cout << "Enter your Full Name: ";
//         getline(cin, Name);
//         while (!ValidateName()) {
//             cout << "Invalid name! Please enter a valid name: ";
//             getline(cin, Name);
//         }

//         cout << "Enter your Phone Number: ";
//         while (!ValidatePhone()) {
//             cout << "Invalid phone number! Please enter a valid phone number: ";
//             cin >> phone;
//             cin.ignore();
//         }

//         cout << "Enter your CNIC: ";
//         while (!ValidateCnic()) {
//             cout << "Invalid CNIC! Please enter a valid CNIC: ";
//             cin >> Cnic;
//             cin.ignore();
//         }

//         cout << "Select your Login Id: ";
//         cin >> LoginId;

//         cout << "Enter a Password: ";
//         cin >> pass;

//         cout << "Enter daily Withdraw Limit: ";
//         cin >> WithdrawLimit;
//     }
//     void DisplayAccount() const {
//         cout << "Name: " << Name << endl;
//         cout << "Phone Number: " << phone << endl;
//         cout << "CNIC: " << Cnic << endl;
//         cout << "Login Id: " << LoginId << endl;
//         cout << "Password: " << pass << endl;
//         cout << "Withdraw Limit: " << WithdrawLimit << endl;
//     }

// private:

//     bool ValidateName() const {
//         for (char c : Name) {
//             if (!IsAlphabeticOrSpace(c)) {
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool ValidatePhone() const {
//         return (phone >= 0) && IsNumeric(phone);
//     }

//     bool ValidateCnic() const {
//         return (CountDigits(Cnic) == 13) && IsNumeric(Cnic);
//     }

//     bool IsAlphabeticOrSpace(char c) const {
//         return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c == ' ');
//     }

//     bool IsNumeric(int num) const {
//         if (num < 0) {
//             return false;
//         }
//         while (num > 0) {
//             int digit = num % 10;
//             if (digit < 0 || digit > 9) {
//                 return false;
//             }
//             num /= 10;
//         }
//         return true;
//     }

//     int CountDigits(int num) const {
//         int count = 0;
//         while (num > 0) {
//             num /= 10;
//             count++;
//         }
//         return count;
//     }
// };

// int main() {
//     char option;

//     do {
//         cout << "Enter an Option:" << endl;
//         cout << "Add Account (1)" << endl;
//         cout << "Exit (0)" << endl;
//         cin >> option;
//         cin.ignore();
//         if (option == '1') {
//             BankAccount newAccount;
//             newAccount.AddAccount();
//             newAccount.DisplayAccount();
//             cout << "Account Added Successfully!\n";
//         }
//     } while (option != '0');

//     return 0;
// }

// // DMA

// #include <iostream>
// using namespace std;

// class DynamicArray {
// private:
//     // Pointer to store array created
//     // using new keyword
//     int* array = NULL;
//     // Size of array
//     int size;

//     // Container size
//     int capacity;

// public:
//     // Default constructor with size 1
//     DynamicArray()
//     {
//         capacity = 1;
//         size = 0;
//         array = new int[capacity];
//     }

//     // Taking size from the user
//     DynamicArray(int capacity)
//     {
//         this->capacity = capacity;
//         array = new int[capacity];
//         size = 0;
//     }

//     // Returns the size of Array
//     // i.e Total elements stored currently
//     int getSize() { return size; }

//     // Returns the size of container
//     int getCapacity() { return capacity; }

//     // Inserting element after last stored index
//     void push_back(int value)
//     {
//         // check is array having size to store element or
//         // not
//         if (size == capacity) {

//             // if not then grow the array by double
//             growArray();
//         }

//         // insert element
//         array[size] = value;
//         // increment the size or last_index+1
//         size++;
//     }

//     // Deleting element at last stored index
//     void pop_back()
//     {
//         // Replace the last index by 0
//         array[size - 1] = 0;

//         // Decrement the array size
//         size--;

//         // Reduce if the container half element of its
//         // capacity
//         if (size == (capacity / 2)) {
//             shrinkArray();
//         }
//     }

//     // Increase the array size by double of current capacity
//     void growArray()
//     {

//         // Creating new array of double size
//         int* temp = new int[capacity * 2];

//         capacity = capacity * 2;
//         // copy element of old array in newly created array
//         for (int i = 0; i < size; i++) {
//             temp[i] = array[i];
//         }

//         // Delete old array
//         delete[] array;

//         // Assign newly created temp array to original array
//         array = temp;
//     }

//     // Reduce the size of array by half
//     void shrinkArray()
//     {

//         // Creating new array of half size
//         capacity = size;
//         int* temp = new int[capacity];

//         // copy element of old array in newly created array
//         for (int i = 0; i < size; i++) {
//             temp[i] = array[i];
//         }

//         // Delete old array
//         delete[] array;

//         // Assign newly created temp array to original array
//         array = temp;
//     }

//     // Searching element in the given array
//     int search(int key)
//     {
//         for (int i = 0; i < size; i++) {
//             if (array[i] == key) {
//                 // If element found return its index
//                 return i;
//             }
//         }

//         // Return -1 if element not found;
//         return -1;
//     }

//     // Insert element at given index
//     void insertAt(int index, int value)
//     {
//         // check is array having size to store element or
//         // not
//         if (size == capacity) {

//             // if not then grow the array by double
//             growArray();
//         }

//         for (int i = size - 1; i >= index; i--) {
//             array[i + 1] = array[i];
//         }

//         array[index] = value;
//         size++;
//     }

//     // Delete element at given index
//     void deleteAt(int index)
//     {
//         for (int i = index; i < size - 1; i++) {
//             array[i] = array[i + 1];
//         }

//         // Replace the last index by 0
//         array[size - 1] = 0;

//         // Decrement the array size
//         size--;

//         // Reduce if the container half element of its
//         // capacity
//         if (size == (capacity / 2)) {
//             shrinkArray();
//         }
//     }

//     // To Print Array
//     void printArrayDetails()
//     {
//         cout << "Elements of array : ";
//         for (int i = 0; i < size; i++) {
//             cout << array[i] << " ";
//         }
//         cout << endl;
//         cout << "No of elements in array : " << size
//         << ", Capacity of array :" << capacity << endl;
//     }

//     bool isEmpty()
//     {
//         if (size == 0) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }
// };

// int main()
// {
//     DynamicArray da;

//     da.push_back(1);
//     da.push_back(2);
//     da.push_back(3);
//     da.push_back(4);
//     da.push_back(5);
//     da.push_back(6);
//     da.push_back(7);
//     da.push_back(8);
//     da.push_back(9);
//     da.push_back(10);
//     da.push_back(11);

//     da.printArrayDetails();

//     da.shrinkArray();
//     cout << "\nCapacity of array  after shrinking : "
//     << da.getCapacity() << endl;

//     cout << "\nAfter inserting at index 3 " << endl;
//     da.insertAt(3, 50);
//     da.printArrayDetails();

//     cout << "\nAfter delete last element ";
//     da.pop_back();
//     da.printArrayDetails();

//     cout << "\nAfter deleting at index 3 ";
//     da.deleteAt(3);
//     da.printArrayDetails();

//     cout << "\nSearching 5 in array ";
//     int index = da.search(5);
//     if (index != -1) {
//         cout << "Element found at index : " << index << endl;
//     }
//     else {
//         cout << "Element not found " << endl;
//     }
//     return 0;
// }

// FIRST I'MA DO THIS QUESTION

/*Exercise – Expand Array
Write a program that keeps taking integer input from the user until user enters -1 and displays the data in reverse order.
Your program should save the input in a dynamically allocated array. Initially create a dynamic array of five integers. Each time the array gets filled your program should double the size of array (i.e. create a new array of double size, copy previous data in new array, delete previous array) and continue taking the input. After receiving -1 (i.e. end of data input) your program should print the numbers in the reverse order as entered by the user.
Important Note: subscript operator [] is not allowed to traverse the array. Use only offset notation. i.e instead of using myArray[i] use *(myArray+i) to read/write an element. Do not consume extra space. There shouldn’t be any memory leakage or dangling pointers in your code.*/

// #include <iostream>
// using namespace std;

// int main() {

// 	bool exit = true;
// 	int size = 0;
// 	int capacity = 5;
// 	int *arr = new int[size];
// 	cout << "Enter integers (enter -1 to stop) :" << endl;

// 	while (exit == true) {
// 		int n;
// 		cin >> n;

// 		if (n == -1) {
// 			exit = false; // Jab yeh krte tou neeche chala deta dubara then size aik or dafa plus ho jata and -1 bhe put ho jata, agar yeh likhna tou is ke aage continue lagana pare ga
// 			continue;
// 			// break;
// 		}

// 		if (size == capacity) {
// 			int *temp = new int[capacity * 2];
// 			capacity = capacity * 2;

// 			for (int row = 0; row < size; row++) {
// 				temp[row] = arr[row];
// 			}

// 			delete[] arr;
// 			arr = temp;
// 		}

// 		cout << "Hi\n";
// 		arr[size] = n;
// 		size = size + 1;
// 	}

//     capacity = size;
//     int *temp = new int[capacity];
//     for (int row = 0; row < size; row++) {
//         temp[row] = arr[row];
//     }

//     delete[] arr;
//     arr = temp;

// 	cout << "Elements in reverse are :" << endl;
// 	for (int row = size - 1; row >= 0; row--) {
// 		cout << arr[row] << " ";
// 	}
// 	cout << endl;
// 	return 0;
// }

/* •Lab Manual – Dynamic 1D Array
•	Important Note:
•	There shouldn’t be any memory leakage or dangling pointers in your program.
•	Make separate functions for input and output of arrays. Your main should be a sequence of function calls only
•	You are not allowed to use global variables and goto instruction
•	Submit only one cpp file having main function testing all the following functions
Exercise 1 [Input Array]:
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

// int* InputArray(int& size) {
//     int *array = new int[size];

//     for (int row = 0; row < size; row++) {
//         cin >> array[row] << " ";
//     }
//     cout << endl;

//     return array;
// }

// int main() {

//    int n;
//    cout << "Enter amount of numbers you want to enter" << endl;
//    cin >> n;
//    InputArray(n);

//     return 0;
// }

/*Scenario: Managing Library Book Inventory

Question:
You are tasked with developing a program for managing a library's book inventory using a dynamic array-based approach. The program should allow for efficient addition, removal, and updating of book information while ensuring optimal memory usage. Below are the requirements and tasks for implementing the BookInventory class.

Requirements:

Book Information: Each book entry in the inventory should include:
Title
Author
Number of copies available
Functionality:
Add Book: Add a new book to the inventory.
Remove Book: Remove a book from the inventory.
Update Copies: Update the number of copies available for a book.
Search Book: Search for a book by its title.
Display Inventory: Display the entire inventory, including title, author, and number of copies available.
Dynamic Array: Utilize a dynamic array to store the book inventory, ensuring it grows and shrinks dynamically based on the number of books stored.
Tasks:

a) Implement the BookInventory class according to the provided requirements.

b) Write a sample program demonstrating the usage of the BookInventory class. Your program should showcase adding new books, removing books, updating copies, searching for books, and displaying the entire inventory.

c) Discuss the advantages and disadvantages of using a dynamic array-based approach for managing the book inventory compared to other data structures, such as linked lists or hash tables.

d) Propose potential enhancements or additional features that could be incorporated into the BookInventory class to improve its functionality or usability.*/

// #include <iostream>
// #include <string>
// using namespace std;

// class Book {
// private:
//     string title;
//     string author;
//     int copies;

// public:
//     Book(string title, string author, int copies) : title(title), author(author), copies(copies) {}

//     // Getter methods for title, author, and copies
//     string getTitle() { return title; }
//     string getAuthor() { return author; }
//     int getCopies() { return copies; }

//     // Setter method for updating copies
//     void updateCopies(int newCopies) { copies = newCopies; }
// };

// class BookInventory {
// private:
//     string* temp;
//     int capacity;
//     int size;
//     int n;

// public:
//     BookInventory(int n) : capacity(n), size(0) {
//         temp = new string[n];
//     }

//     // Add Book method
//     void addBook(string title, string author, string copies) {
//         cout << "Adding title, author, copies :" << endl;
//         // Implement adding a new book to the inventory
//         int i = 0, size = 1;
//         n = 3;

//         for (int row = 0; row < size; row++) {
//             temp[row + i] = title;
//             i++;
//             temp[row + i] = author;
//             i++;
//             temp[row + i] = copies;
//         }

//         for (int row = 0 ; row < n; row++) {
//             cout << temp[row] << " ";
//         }
//         cout << endl << endl;
//     }

//     // Remove Book method
//     void removeBook(string title, int index) {
//         cout << "Delete title :" << endl;
//         // Implement removing a book from the inventory
//         int i = 0, size = 1;
//         string *temp1 = new string[n]; // temp1 local elements bhe sirf yaha tak he rhy ge

//         for (int row = 0; row < n; row++) {
//             temp1[row] = temp[row];
//         }

//         for (int row = index; row < n - 1; row++) {
//             temp1[row] = temp[row + 1];
//         }

//         n--;

//         for (int row = 0; row < n; row++) {
//            cout << temp1[row] << " ";
//         }
//         cout << endl << endl;
//     }

//     // Update Copies method
//     void updateCopies(string title, string newCopies) {
//         // Implement updating the number of copies for a book
//         n++;
//         int i = 1, size = 1;
//         for (int row = 0; row < size; row++) {
//             temp[row] = title;
//             i++;
//             temp[row + i] = newCopies;
//         }

//         for (int row = 0; row < n; row++) {
//             cout << temp[row] << " ";
//         }

//         cout << endl << endl;
//     }

//     // Search Book method
//     Book* searchBook(string title) {
//         // Implement searching for a book by its title
//         return nullptr; // Change this line
//     }

//     // Display Inventory method
//     void displayInventory() {
//         // Implement displaying the entire inventory
//     }
// };

// int main() {
//     // Create a BookInventory object with capacity 50
//     BookInventory inventory(50);

//     // Sample usage of methods
//     inventory.addBook("Title1", "Author1", "10");
//     inventory.removeBook("Title2", 0);
//     inventory.updateCopies("Title3", "20");
//     // Book* foundBook = inventory.searchBook("Title4");
//     // inventory.displayInventory();

//     return 0;
// }

/*Exercise 1 [Input Array]:
Write a function int* InputArray(int& size) that asks user to enter size of required array, allocates the memory on heap, takes input in array and returns its pointer.*/

/*
#include <iostream>
using namespace std;

int* InputArray(int* arr, int &size) {
  cout << "Enter the size of the array: ";
  // cin >> size;
  // arr = new int[size];
  for (int i = 0; i < size; i++) {
    cout << "Enter element " << i + 1 << ": ";
    cin >> arr[i];
  }
  cout << &arr[0] << endl;
  return arr; //address return
}

void OutputArray(int* myArray, const int& size) {
  for (int i = 0; i < size; i++) {
    cout << myArray[i] << " ";
  }
  // cout << &myArray[0] << endl;
  // myArray[0] = 50;
  cout << std::endl;
  cout << " o" << endl;
}

int main() {

  int size; //int *arr = &arr1[0]; is ka mtlab yeh hoa
  // int* arr = InputArray(size); //int* arr
  cin >> size;
  int* arr = new int[size];
  InputArray(arr, size);
  // cout << &arr[0] << endl;
  // cout << size << endl;
  cout << "You entered: ";
  OutputArray(arr, size);
  // OutputArray(arr, size);
  delete[] arr; // free the memory
  return 0;
}*/

/*Exercise 1 [Input Array]:
Write a function int* InputArray(int& size) that asks user to enter size of required array, allocates the memory on heap, takes input in array and returns its pointer.
Exercise 2 [Output Array]:
Write a program void OutputArray(int* myArray, const int& size) that takes a pointer to an integer array and prints its data.
Write main function to test above functionality.Exercise – Expand Array
Write a program that keeps taking integer input from the user until user enters -1 and displays the data in reverse order.
// Your program should save the input in a dynamically allocated array. Initially create a dynamic array of five integers. Each time the array gets filled your program should double the size of array (i.e. create a new array of double size, copy previous data in new array, delete previous array) and continue taking the input. After receiving -1 (i.e. end of data input) your program should print the numbers in the reverse order as entered by the user.
// Note: Write a separate function that AllocateAndCopyArray to grow and copy the array. Use OutputArray function to print the final array.
// •	Important Note: subscript operator [] is not allowed to traverse the array. Use only offset notation. i.e instead of using myArray[i] use *(myArray+i) to read/write an element. Do not consume extra space. There shouldn’t be any memory leakage or dangling pointers in your code.*/
// #include <iostream>
// using namespace std;

//     int *InputArray(int &size)
//     {
//       cout << "Enter the size" << endl;
//       cin >> size;

//       void OutputArray(int *arr, int &size)
//       {
//         cout << "Elements are :" << endl;

//         for (int row = 0; row < size; row++)
//         {
//           cout << arr[row] << " ";
//         }
//       }

//       int main()
//       {

//         int size;

//         int *arr = InputArray(size);
//         OutputArray(arr, size);

//         delete[] arr;
//         arr = nullptr;
//         return 0;
//       }


// #include <iostream>

// int* InputArray(int& size) {
//   std::cout << "Enter the size of the array: ";
//   std::cin >> size;
//   int* arr = new int[size];
//   for (int i = 0; i < size; i++) {
//     std::cout << "Enter element " << i + 1 << ": ";
//     std::cin >> arr[i];
//   }
//   return arr;
// }

// void OutputArray(int* myArray, const int& size) {
//   for (int i = 0; i < size; i++) {
//     std::cout << myArray[i] << " ";
//   }
//   std::cout << std::endl;
// }

// int main() {
//   int size;
//   int* arr = InputArray(size);
//   std::cout << "You entered: ";
//   OutputArray(arr, size);
//   delete[] arr; // free the memory
//   return 0;
// }


