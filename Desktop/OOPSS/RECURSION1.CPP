// #include<iostream>
// using namespace std;

// int fact(int n){
//     if (n == 0){
//         return 1;
//     }

//     int smaller = fact(n - 1);
//     int bigger = n * smaller;
//     return bigger;
//    //return n * fact(n - 1);

// }

// int main(){

//     int n;
//     cin >> n;
//     int ans = fact(n);
//     cout << "Ans is : " << ans << endl;

//     return 0;
// }

// //1. BASE CASE 2. PROCESSING 3. RECURSIVE RELATION THIS IS CALLED TAIL RECURSION...
// //1. BASE CASE 2. RECURSIVE RELATION 3. PROCESSING THIS IS CALLED HEAD RECURSION...

// #include<iostream>
// using namespace std;

// int power(int n) {
//     if (n == 0) {
//         return 1;
//     }

//     int smaller = power(n - 1);
//     int bigger = 2 * smaller;
//     return bigger;

// }

// int main() {

//     int n;
//     cin >> n;

//     int ans = power(n);
//     cout << "Power of " << n << " is : " << ans << endl;

//     return 0;
// }

// //

// #include<iostream>
// using namespace std;

// void counting(int n) {
//     if (n == 0) {
//         return ;
//     }
//     // cout << n << endl;
//     counting(n - 1);
//     cout << n << endl;

// }

// int main() {

//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;

//     counting(n);

//     return 0;
// }

// //RECURSION 2

// #include<iostream>
// using namespace std;

// void reachHome(int src, int dest) {

//     if (src <= 9) {
//         cout << "Source " << src << " Destination " << dest << endl;
//     }

//     // Base case
//     if (src == dest){
//         cout << "Source " << src << " Destination " << dest << " REACHED BALE! BALE! " << endl;
//         return ;
//     }

//     //Processing
//     src++;

//     //Recursive Call
//     reachHome(src, dest);

// }

// // int main() {

// //     int dest = 10;
// //     int src = 1;
// //     reachHome(src, dest);
// //     return 0;
// // }

// #include<iostream>
// using namespace std;

// int fibo(int n) {
//     if (n == 0) {
//         return 0;
//     }

//     if (n == 1) {
//         return 1;
//     }

//     return fibo(n - 1) + fibo (n - 2); //R.R

// }

// int main() {

//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;

//     int ans = fibo(n);
//     cout << "The Ans is " << ans << endl;

//     return 0;
// }

// //Problem of Stairs

// #include<iostream>
// using namespace std;

// int stairs(int n) {
//     if (n < 0) {
//         return 0;
//     }

//     if (n == 0) {
//         return 1;
//     }

//     return stairs(n - 1) + stairs(n - 2);

// }

// int main() {

//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;

//     int ans =  stairs(n);
//     cout << "The ans is " << ans << endl;
//     return 0;
// }

// //Say Digits

// #include<iostream>
// using namespace std;

// void sayDigit(int n, string arr[]) {
//     if (n == 0) {
//         return;
//     }

//     int digit = n % 10;
//     n = n / 10;
//     sayDigit(n, arr);
//     cout << arr[digit] << " ";
// }

// int main() {

//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;

//     string arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

//     sayDigit(n, arr);
// // R.W
// // int n;
// // cin >> n;
// // cout << n / 10;
//     return 0;
// }

// //RECURSION 3   ->   Q : Is Array sorted or not ??

// #include<iostream>
// using namespace std;

// bool isSorted(int arr[], int size) {
//     if (size == 0 || size == 1){
//         return true;
//     }

//     if (arr[0] > arr[1]) {
//         return false;
//     } else {
//         bool remainingPart = isSorted(arr + 1, size - 1);
//         return remainingPart;
//     }
// }
// int main() {

//     int arr[5] = {1, 3, 4, 5, 7};
//     int size = 5;
//     bool ans = isSorted(arr, size);
//     if (ans) {
//         cout << "Array is Sorted" << endl;
//     } else {
//         cout << "Array is not Sorted" << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int calculateSum(int arr[], int n) {
//     if (n == 0) {
//         return 0;
//     }

//     return arr[n - 1] + calculateSum(arr, n - 1);
// }

// int main() {
//     int arr[] = {3, 2, 5, 1, 6};
//     int size = 5;

//     int sum = calculateSum(arr, size);

//     cout << "The sum is: " << sum << endl;

//     return 0;
// }

// // RECURSION 4  Recursion with string***************

// #include<iostream>
// using namespace std;

// void reverse(string& str, int i, int j) {
//     if (i > j) {
//         return ;
//     }

//     swap(str[i], str[j]);
//     reverse(str, i + 1, j - 1);
// }

// int main() {

//     string name;
//     cout << "Enter the Word" << endl;
//     getline(cin, name);
//     reverse(name, 0, name.length() - 1);
//     cout << "Reverse of your word is : " << name << endl;

//     return 0;
// }

// // //PALINDROME

// #include<iostream>
// using namespace std;
// bool palindrome(string str, int i, int j) {

//     if (i > j) {   // cross ho gai tou mtlab palindrome hai
//         return true;
//     }

//     if (str[i] != str[j]) {
//         return false;
//     }

//     if (str[i] == str[j]) {
//         return true;
//     }

//     return palindrome(str, i + 1, j - 1);
// }


// int main() {

//     string name;
//     cout << "Enter the Word" << endl;
//     getline(cin, name);

//     bool isPalindrome = palindrome(name, 0, name.length() - 1);
//     if (isPalindrome) {
//         cout << "IT IS A PALINDROME" << endl;
//     }
//     else {
//          cout << "IT IS NOT A PALINDROME" << endl;
//     }

//     return 0;
// }

// // // CALCULATING POWER USING RECURSION

// // // #include<iostream>
// // // using namespace std;

// // // int power(int a, int b) {

// // //     if (b == 0) {
// // //         return 1;
// // //     }

// // //     return a * power(a, b - 1);

// // // }

// // // int main() {

// // //     int a, b;
// // //     cout << "Enter the numbers" << endl;
// // //     cin >> a >> b;
// // //     int p = power(a, b);
// // //     cout << "The Power of " << a << " is " << p << endl;
// // //     return 0;
// // // }

// // //Create a recursive function to find the sum of the digits of a positive integer. For example, the sum of the digits of 123 would be 1 + 2 + 3 = 6.

// #include<iostream>
// using namespace std;

// int sum(int n) {

//     int sum2 = 0;
//     if (n == 0) {
//         return 0;
//     }

//     int digit = n % 10;
//     n = n / 10;
//     return digit + sum(n);  //Sath sath update kr raha us ko jo mein ne kia tha sum(n) woh galat tha in case of recursion
    // sum2 = sum2 + digit;
    // sum2 = sum2 + sum(n);
    // return sum2;

    //DRY RUN
    // 3 + (sum(12);
    // 3 + (2 + (sum1));
    // 3 + (2 + (1 +sum(0));
    // 3 + 2 + 1 + 0 = 6;
// }

// int main() {

//     int n;
//     cout << "Enter the Number" << endl;
//     cin >> n;
//     int sum1 = sum(n);
//     cout << "The Sum is " << sum1 << endl;

//     return 0;
// }

// // // FIND BOOK

// #include<iostream>
// using namespace std;

// bool find(string str[], int index, string str1) {

//     if (index >= 5) {
//         return false;
//     }

//     if (str[index] == str1) {
//         return true;
//     }
//     // else {
//     //     return false;  YAHA YEH IS LIE NHI LIKHNA KYUNKE AGAR BOOK 1 FIND NA HOYE TOU IS NE FALSE RETURN KRNA AND CODE KHATAM HO JANA
//     // }

//     return find(str, index + 1, str1);

// }
// int main() {

//     string str[] = {"BOOK 1", "BOOK 2", "BOOK 3", "BOOK 4", "BOOK 5"};
//     string str1;
//     cout << "Enter the name of the book u wanna find" << endl;
//     getline(cin, str1);
//     bool found = find(str, 0, str1);
//     if (found) {
//         cout << "Yes! your Book has been found" << endl;
//     }
//     else {
//         cout << "Sorry! we couldn't find the book" << endl;
//     }
//     return 0;
// }

// // //Write a recursive function to check if a given string is a palindrome. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization).

// #include<iostream>
// using namespace std;

// bool palindrome(string n, int i, int j) {

//     if (i > j) {
//         return true;
//     }

//     if (n[i] != n[j]) {
//         return false;
//     }

//     return palindrome(n, i + 1, j - 1);
// }

// int main() {

//     string n;
//     getline(cin, n);
//     bool pal = palindrome(n, 0, n.length() - 1);

//     if (pal) {
//         cout << "Yes! This is a Palindrome" << endl;
//     }
//     else {
//         cout << "NO! This is not a Palindrome" << endl;
//     }
//     return 0;
// }

// // // Write a recursive function to reverse a given string. For example, the reverse of "hello" should be "olleh".

// #include<iostream>
// using namespace std;

// void Reverse(string& str, int i, int j) {   //hm ne & is lie lagya kyun ke return nhi kr rha woh kyunke void hai is lie woh sirf us ke andar he change ho ga or main mein change nhi rhy ga lakin & lagaya tou copy nhi bane woh he string bane...
//     if (i > j) {
//         return ;
//     }

//     swap(str[i], str[j]);
//     // i++;
//     // j--;

//     Reverse(str, i + 1, j - 1);

// }

// int main() {

//     string str;
//     cout << "Enter the Word" << endl;
//     getline(cin, str);
//     Reverse(str, 0, str.length() - 1);
//     cout << "The Reverse is " << str << endl;

//     return 0;
// }

// /*Counting Stairs:
// Implement a recursive function to count the number of ways a person can climb a staircase with n steps, where the person can take 1 or 2 steps at a time.*/

// // #include<iostream>
// // using namespace std;

// // int steps(int n) {

// //     if (n < 0) {
// //         return 0;
// //     }

// //     if (n == 0) {
// //         return 1;
// //     }

// //     return steps(n - 1) + steps(n - 2);

// // }

// // int main() {

// //     int n;
// //     cin >> n;
// //     int ans = steps(n);
// //     cout << ans << endl;
// //     return 0;
// // }

// //PALINDROME

// // #include<iostream>
// // using namespace std;

// // int palindrome(string n, int i, int j) {

// //     if (i > j) {
// //         return true;
// //     }

// //     if (n[i] != n[j]) {
// //         return false;
// //     }

// //     if (n[i] == n[j]) {
// //         return true;
// //     }
// //     return palindrome(n, i + 1, j - 1);
// // }
// // int main() {

// //     string n;
// //     cout << "Enter the Word" << endl;
// //     getline(cin ,n);
// //     int yes = palindrome(n, 0, n.length() - 1);
// //     if (yes) {
// //         cout << "YES! this is Palindrome" << endl;
// //     } else {
// //         cout << "NO! this is not Palindrome" << endl;
// //     }
// //     return 0;
// // }

// //Array sorted or not?

// #include<iostream>
// using namespace std;

// int isSorted(int arr[], int size) {

//     if (size == 0 || size == 1) {
//         return true;
//     }

//     if (arr[0] > arr[1]) {
//         return false;
//     }

//     return isSorted(arr + 1, size - 1);

// }

// int main() {

//     int arr[6] = {1, 2, 3, 43, 5, 6};
//     int size = 6;
//     int yes = isSorted(arr, 6);

//     if (yes) {
//         cout << "YES! Array is sorted" << endl;
//     } else {
//          cout << "NO! Array is not sorted" << endl;
//     }

//     return 0;
// }

// //You have a phone book with names sorted alphabetically. Implement a recursive function to search for a contact by name. If the contact is found, print a success message; otherwise, print a message indicating it's not in the phone book.

// #include<iostream>
// using namespace std;

// bool search(string str[], string target, int size) {

//     if (size > 6) {
//         return false;
//     }

//     if (str[0] == target) {
//         return true;
//     }

//     return search(str + 1, target, size + 1);

// }
// int main() {

//     string str[6] = {"SAMEER", "ALI", "AHMAD", "ABDUL REHMAN", "KHAWAR", "HAMZA"};
//     string target;
//     cout << "Enter name" << endl;
//     getline(cin, target);
//     bool ans = search(str, target, 0);
//     if (ans) {
//         cout << "YES! name is found" << endl;
//     } else {
//         cout << "NO! name is not found" << endl;
//     }

//     return 0;
// }

// AGAIN TRYING ABOVE QUESTIONS

// #include<iostream>
// using namespace std;

// int palindrome(string n, int i, int j) {
//     if (i > j) {
//         return true;
//     }

//     if (n[i] != n[j]) {
//         return false;
//     }

//     if (n[i] == n[j]) {
//         return true;
//     }

//     return palindrome(n, i + 1, j - 1);

// }
// int main() {

//     string n;
//     cout << "Enter the Word" << endl;
//     getline(cin ,n);
//     int yes = palindrome(n, 0, n.length() - 1);
//     if (yes) {
//         cout << "YES! this is Palindrome" << endl;
//     } else {
//         cout << "NO! this is not Palindrome" << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// bool isSorted(int arr[], int size) {
//     if (size == 0 || size == 1) {
//         return true;
//     }

//     if (arr[0] > arr[1]) {
//         return false;
//     }

//     // if (arr[0] < arr[1]) {
//     //     return true;
//     // }
//     else{
//         return isSorted(arr + 1, size - 1);
//     }

//     // return isSorted(arr + 1, size - 1);
// }
// int main() {

//     int arr[5] = {1, 2, 4, 5, 7};
//     int size = 5;
//     bool ans = isSorted(arr, size);
//     if (ans) {
//         cout << "Array is Sorted" << endl;
//     } else {
//         cout << "Array is not Sorted" << endl;
//     }
//     return 0;
// }

//LAB 6 -> old pf

// Q -> 1

// #include <iostream>
 
// using namespace std;

// int sum ( int n ) {
//     if ( n == 1 ) {
//         return 1;
//     }

//     int result = n + sum ( n - 1 );
//     return result;
//     // 4 + 3 = 10
//     // 3 + 2 = 6
//     // 2 + 1 = 3
// }

// int main () {
 
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;

//     int result = sum ( n );
//     cout << "Result is : " << result << endl;
 
//     return 0;
// }

//Q -> 2

// #include <iostream>
 
// using namespace std;

// int powerr ( int n, int m ) {
//     if ( m == 0 ) {
//         return 1;
//     }

//     int result = n * powerr ( n, m - 1 );
//     // n = 2, m = 4
//     // 2 * (2, 3)
//     // 2 * (2, 2)
//     // 2 * (2, 1)
//     // 2 * (2, 0)
//     return result;
// }

// int main () {
 
//     int n, m;
//     cout << "Enter the number : ";
//     cin >> n;
//     cout << "Enter the power : ";
//     cin >> m;

//     int result = powerr ( n, m );
//     cout << "Result is : " << result << endl;
 
//     return 0;
// }

// Q -> 3

// #include <iostream>
 
// using namespace std;

// int result = 0;

// int sumOfSquares ( int n ) {
//     if ( n == 0 ) { //Base case
//         return 1;
//     }

//     result = result + (n * n); //Processing
//     sumOfSquares ( n - 1 ); //Recursive relation
//     // result = 0 + (3 * 3)
//     // result = 9 + (2 * 2)
//     // result = 13 + (1 * 1)
//     //Tail recursion
//     return result;
//     /*When a return statement is executed in a function, the control of the program goes back to the point where the function was called, and the value specified in the return statement is sent back to the caller. This return value can be used in the caller function for further processing. Let's illustrate this step-by-step using a simple example.*/
// }

// int main () {
 
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int m = n;

//     int result = sumOfSquares ( n );
//     cout << "Result is : " << result << endl;

//     return 0;
// }

// Q -> 3


// #include <iostream>

// using namespace std;

// int sumOfSquares(int n) {
//     if (n == 1) { // Base case
//         return 1;
//     }

//     int result = sumOfSquares(n - 1); // Recursive relation
//         // 4 = result = 16
//         // hi*2
//         // 3 = result = 9 + 16 = 25
//         // hi*2
//         // 2 = result = 4 + 25 = 29
//         // hi*2
//         // 1 = result = 29 + 1 = 30
//         // hi*2 jab 0 karein ge tou yeh do dafa or ai ga or chalta hai neeche bhe recursive case se bhe


//     // cout << "hi\n";
//     result = result + (n * n); // Processing after the recursive call
//     // cout << "hi\n";
//     return result;/*
// The result is returned after the recursive calls complete, and the base case initiates the return process, causing the result = result + (n * n); line to execute for each level of the recursion before returning.*/
//     cout << "hi\n";
// }

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     int result = sumOfSquares(n);
//     cout << "Result is: " << result << endl;

//     return 0;
// }


// #include <iostream>
 
// using namespace std;
 
// int main () {
 
    
 
//     return 0;
// }

// #include <iostream>
 
// using namespace std;

// int sumOfNumbers ( int n ) {
//     if ( n == 0 ) {
//         return 0;
//     }

//     int result = n + sumOfNumbers ( n - 1 );
//     // cout << "Hi" << endl;
//     return result;
//     cout << "Hi" << endl;// -> will never proceed
// }

// int q1 ( int n ) {
//     int result = sumOfNumbers ( n );
//     return result;
// }

// int calculatePower ( int n, int m ) {
//     if ( m == 0 ) {
//         return 1;
//     }

//     int result = n * calculatePower ( n, m - 1 );
//     return result;
// }

// int q2 ( int n, int m ) {
//     int result = calculatePower ( n, m );
//     return result;
// }

// int main () {

//     int n;
 
//     do {
//         cout << "Welcome to lab 6" << endl;
//         cout << "Enter the question u want to run, for stopping ( n == -1 )" << endl;
//         cin >> n;

//         if ( n == 1 ) {
//             cout << "Run question 1" << endl;
//             int n;
//             cout << "Enter the number" << endl;
//             cin >> n;

//             int result = q1 ( n );
//             cout << "Result is : " << result << endl;
//         }

//         else if ( n == 2 ) {
//             cout << "Run question 2" << endl;
//             int n, m;
//             cout << "Enter the number" << endl;
//             cin >> n;
//             cout << "Enter the exponent" << endl;
//             cin >> m;

//             int result = q2 ( n, m );
//             cout << "Result is : " << result << endl;
//         }

//         else if ( n != -1 ) {
//             cout << "You have entered wrong question" << endl;
//         }
//     }

//     while ( n != -1 );
//     cout << "You entered -1 for stop" << endl;
 
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void sumOfNumbers(int n) {
//     if (n == 0) {
//         return;
//     }

//     sumOfNumbers(n - 1);
//     cout << "HI" << endl;
// }

// int main() {
//     sumOfNumbers(3);  // Example call
//     return 0;
// }


//LAB 6 old pf
/*Q1. Write a program in a function named q1, to implement a recursive function to find the sum of natural numbers from 1 to n. Pass n as a parameter to the Function q1 and it should return the integer type result in the main function.
For example: the sum of natural numbers from 1 to 20 is 210.*/


// #include <iostream>
 
// using namespace std;

// int sum ( int n ) {
//     if ( n == 1 ) {
//         return 1;
//     }

//     int ans = n + sum ( n - 1 );
//     return ans;
// }

// int main () {
 
    // int n;
    // cout << "Enter the number : ";
    // cin >> n;

    // int ans = sum ( n );
    // cout << "Sum is : " << ans << endl;
 
//     return 0;
// }

/*Q2. Write a program in a function named q2,  to calculate the first number raised to the power of the second number recursively. Pass two numbers as input parameters to the function using recursion and display the result in the main function.
For example: 2 raised to the power of 5 is 32.*/

// #include <iostream>
 
// using namespace std;

// int power ( int n, int m ) {
//     if ( m == 0 ) {
//         return 1;
//     }

    // int ans = n * power ( n, m - 1 );
    // return ans;

//     // m == 4 -> 2 * (2, 3) 8*2 = 16
//     // m == 3 -> 2 * (2, 2) 4*2 = 8;
//     // m == 2 -> 2 * (2, 1) 2*2 = 4;
//     // m == 1 -> 2 * (2, 0) = 2*1 = 2;
//     // m == 0 -> 1;
//     // 0 return 1
// }

// int main () {
 
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;

//     int m;
//     cout << "Enter the power : ";
//     cin >> m;

//     int ans = power ( n, m );
//     cout << "Sum is : " << ans << endl;
 
//     return 0;
// }


/*Q3. Write a program in a function named q3,  to calculate the sum of squares of natural numbers from 1 to n recursively. Pass n as input parameters to the function and display the result in the main function.
For example: the sum of squares of natural numbers from 1 to 3 is 14.*/

// #include <iostream>
 
// using namespace std;

// int sumProduct ( int n ) {
//     if ( n == 0 ) {
//         return 0;
//     }

//     //3 * 3 = 9 + sumProduct(2)
//     //2 * 2 = 4 + sumProduct(1)
//     //1 * 1 = 1 + sumProduct(0)
//     //0 * 0 = 0

//     int product = n * n;

//     int ans = product + sumProduct ( n - 1 );
//     return ans; //ans ne sumProduct(1) ko dia 1 sumProduct(2) ne 5 receive kia and sumProduct(3) ne 14 jo answer hai
// }

// int main () {
 
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;

//     int ans = sumProduct ( n );
//     cout << "Sum is : " << ans << endl;
 
//     return 0;
// }

//Without tail recursion 

/*Dry Run of the Head Recursion Code

#include <iostream>

using namespace std;

int sumProduct(int n) {
    if (n == 0) {
        return 0; // Base case: when n is 0, return 0
    }

    // Recursive call first
    int sum = sumProduct(n - 1);
    
    // Then add the square of the current number
    int product = n * n; //n tou 1 he tha na is lie 1*1 or sum me 0 tha n - 1 sum tha
    return sum + product; // Return the accumulated sum
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = sumProduct(n); // Call the function and get the result
    cout << "Sum is: " << ans << endl; // Display the result

    return 0;
}
Input: 
𝑛
=
3
n=3

Execution Steps:

Initial Call:

sumProduct(3)
Inside sumProduct(3):

Recursive Call: int sum = sumProduct(2);
Calls sumProduct(2)
Inside sumProduct(2):

Recursive Call: int sum = sumProduct(1);
Calls sumProduct(1)
Inside sumProduct(1):

Recursive Call: int sum = sumProduct(0);
Calls sumProduct(0)
Inside sumProduct(0):

Base Case: if (n == 0) is true, so return 0.
Returning from sumProduct(0):

return 0;
Inside sumProduct(1):

After Recursive Call:
sum = 0 (from sumProduct(0))
product = 1 * 1 = 1
Return Value: sum + product = 0 + 1 = 1
return 1;
Inside sumProduct(2):

After Recursive Call:
sum = 1 (from sumProduct(1))
product = 2 * 2 = 4
Return Value: sum + product = 1 + 4 = 5
return 5;
Inside sumProduct(3):

After Recursive Call:
sum = 5 (from sumProduct(2))
product = 3 * 3 = 9
Return Value: sum + product = 5 + 9 = 14
return 14;
Back to main():

int ans = sumProduct(3); is now 14
cout << "Sum is: " << ans << endl; prints Sum is: 14
Summary of Dry Run
sumProduct(3) calls sumProduct(2).
sumProduct(2) calls sumProduct(1).
sumProduct(1) calls sumProduct(0).
sumProduct(0) hits the base case and returns 0.
As the recursion unwinds:
sumProduct(1) computes 1 and returns it.
sumProduct(2) computes 5 (1 + 4) and returns it.
sumProduct(3) computes 14 (5 + 9) and returns it.
Final Output: The sum of squares of numbers from 1 to 3 is 14, which is printed by the main() function.*/

/*Q4.  A geometric series is a sequence of numbers in which each term is found by multiplying the previous term by a fixed, nonzero number called the "common ratio." In other words, a geometric series is a sequence of the form [a, ar, ar2, ar3,…….]. The general formula for the nth term Tn of a geometric series is given by:
Tn = a * r (n-1)
Where:
·         Tn is the nth term of the series.
·         a is the first term of the series, called the "initial term" or "first term."
·         r is the common ratio, which is a constant value.
·         n is the term number.
Write a program in a function named q4, that uses recursion to calculate the nth term of the geometric series. Pass the first term , common ratio and term number as parameters of functions by prompting the user from the main function to enter values of these parameters. Function q4 should return the integer type result in the main function. Display the result in the main function.
 Example:
Suppose you have a geometric series with the following information:
First term a = 2
Common ratio r = 3
 You want to find the 5th term of this geometric series.
 Using the formula Tn = a * r (n-1), you can calculate the 5th term as follows:
T5 = 2 * 3 (5-1)
T5 = 2 * 3 4
T5 = 2 * 81
T5 = 162 
So, the 5th term of this geometric series with a first term of 2 and a common ratio of 3 is 162.
*/

// #include <iostream>
 
// using namespace std;

// int GeometricSeries ( int a, int r, int n ) {
//     if ( n == 1 ) { //agar 0 return kar rha tou waha kuch multiply nhi krna 0 bs value de ga jo seedha uper chale jai ge GeometricSeries(2, 3, 0) pe or ise 1 bana de ge phir 1 * 3 3 ho ga or woh return hi jai ga uper 
//         return 1;
//     }

//     // 5-> 2 *  3 * ( 4 ) = 81
//     // 4-> 2 *  3 * ( 3 ) = 27
//     // 3-> 2 *  3 * ( 2 ) = 9
//     // 2-> 2 *  3 * ( 1 ) = 3
//     //1-> 1


//     int ans = r * GeometricSeries( a, r, n - 1 );
//     return ans;
// }

// int main () {
 
//     int a, r, n;
//     cout << "Enter a : ";
//     cin >> a;
//     cout << "Enter r : ";
//     cin >> r;
//     cout << "Enter n : ";
//     cin >> n;

//     int result = GeometricSeries ( a, r, n );
//     cout << "Result is : " << result * a << endl;

 
//     return 0;
// }


//Lab 6 summer

// #include <iostream>
 
// using namespace std;

// int sumOfNumbers ( int n ) {
//     if ( n == 0 ) {
//         return 0;
//     }

//     int result = n + sumOfNumbers ( n - 1 );
//     return result;
// }

// int q1 ( int n ) {
//     int result = sumOfNumbers ( n );
//     return result;
// }

// int calculatePower ( int n, int m ) {
//     if ( m == 0 ) {
//         return 1;
//     }

//     int result = n * calculatePower ( n, m - 1 );
//     return result;
// }

// int q2 ( int n, int m ) {
//     int result = calculatePower ( n, m );
//     return result;
// }

// int main () {

//     int n;
 
//     do {
//         cout << "Welcome to lab 6" << endl;
//         cout << "Enter the question u want to run, for stopping ( n == -1 )" << endl;
//         cin >> n;

//         if ( n == 1 ) {
//             cout << "Run question 1" << endl;
//             int n;
//             cout << "Enter the number" << endl;
//             cin >> n;

//             int result = q1 ( n );
//             cout << "Result is : " << result << endl;
//         }

//         else if ( n == 2 ) {
//             cout << "Run question 2" << endl;
//             int n, m;
//             cout << "Enter the number" << endl;
//             cin >> n;
//             cout << "Enter the exponent" << endl;
//             cin >> m;

//             int result = q2 ( n, m );
//             cout << "Result is : " << result << endl;
//         }

//         else if ( n != -1 ) {
//             cout << "You have entered wrong question" << endl;
//         }
//     }

//     while ( n != -1 );
//     cout << "You entered -1 for stop" << endl;
 
//     return 0;
// }


//

/*Question 2: Reverse a String
Write a recursive function to reverse a given string */
/*
#include <iostream>
#include <algorithm>
 
using namespace std;

void reverse ( string str, int i, int j ) {
    if ( i > j ) {
        return;
    }


    swap ( str[i], str[j] );
    
    reverse ( str, i + 1, j - 1 );
    cout << str;
}

int main () {
 
    string str = "sameer";
    int i = 0;
    int j = str.length () - 1;

    reverse ( str, i, str.length() - 1 );

 
    return 0;
}bhai is code ko sahi se dry run kr ke dikha do mein dekhna chata ke kis trha kar raha yeh sahi se batao aik aik stepo kaha ja rha samjha ga thanks???
ChatGPT
Sure! Let’s perform a step-by-step dry run of your provided C++ code. This code attempts to reverse the string "sameer" and prints the string during each step of the recursion.

Code:
cpp
Copy code
#include <iostream>
#include <algorithm>

using namespace std;

void reverse(string str, int i, int j) {
    if (i > j) {
        return;
    }

    swap(str[i], str[j]);
    reverse(str, i + 1, j - 1);
    cout << str; // Print the string after each recursive call returns
}

int main() {
    string str = "sameer";
    int i = 0;
    int j = str.length() - 1;

    reverse(str, i, j);

    return 0;
}
Dry Run:
Initial Call:

Function Call: reverse("sameer", 0, 5)
Condition: i (0) <= j (5) → True, proceed.
Swap: swap(str[0], str[5])
Characters swapped: 's' and 'r'
String becomes: "ramees"
Next Call: reverse("ramees", 1, 4)
Second Call:

Function Call: reverse("ramees", 1, 4)
Condition: i (1) <= j (4) → True, proceed.
Swap: swap(str[1], str[4])
Characters swapped: 'a' and 'e'
String becomes: "remees"
Next Call: reverse("remees", 2, 3)
Third Call:

Function Call: reverse("remees", 2, 3)
Condition: i (2) <= j (3) → True, proceed.
Swap: swap(str[2], str[3])
Characters swapped: 'm' and 'e'
String becomes: "reemas"
Next Call: reverse("reemas", 3, 2)
Base Case:

Function Call: reverse("reemas", 3, 2)
Condition: i (3) > j (2) → True, return from function. No further action in this call.
Backtracking:

Returning to reverse("reemas", 2, 3)

Print: "reemas"
String: "reemas" (no change since the cout statement prints the string as is)
Returning to reverse("remees", 1, 4)

Print: "reemas"
String: "reemas" (no change since the cout statement prints the string as is)
Returning to reverse("ramees", 0, 5)

Print: "reemas"
String: "reemas" (no change since the cout statement prints the string as is)
Final Output:

The function reverse prints the string at each level of recursion when the function returns. Thus, the final output printed will be:

Copy code
reemas
reemas
reemas
Explanation:
Recursion: The function performs swaps and then makes recursive calls with updated indices.
Print Statement: The cout << str prints the string each time a recursive call returns. This results in multiple prints as each recursive call completes and returns to its caller.
String State: The string is fully reversed by the end of recursion, but the print statements output the state of the string after each recursion returns.
Each recursive level of the reverse function prints the string after the swap operation and all recursive calls return, which is why you see the same reversed string "reemas" printed multiple times.*/
// #include <iostream>
// #include <algorithm>
 
// using namespace std;

// void reverse ( string& str, int i, int j ) {
//     if ( i >= j ) {
//         return;
//     }


//     swap ( str[i], str[j] );
    
//     reverse ( str, i + 1, j - 1 );
// }

// int main () {
 
//     string str = "sameer";
//     int i = 0;
//     int j = str.length () - 1;

//     reverse ( str, i, str.length() - 1 );
//     cout << str;
 
//     return 0;
// }
/* Write a function in main.cpp to print ASCII values and their equivalent characters. ASCII values vary from 0 to 255.*/

// #include <iostream>
 
// using namespace std;
 
// int main () {


//     for ( int i = 0; i <= 255; i++ ) {
//         // cout << i << " -> " << (char)i << endl;
//         cout << i << " -> " << static_cast<char>(i) << endl;
//     }
 
//     return 0;
// }

/*Fibonacci series through recursion*/

// #include <iostream>
 
// using namespace std;

// int fibonacciSeries ( int n ) {
//     if ( n == 0 || n == 1 ) {
//         return n;
//     }
//     cout << "Hi" << endl;

//     return fibonacciSeries ( n - 1 ) + fibonacciSeries( n - 2 );
//     // 0 1 1 2 3 5 8 13 21 34 -> 5 0 se start hota
//     //fibo(5) = fibo(4) + fibo(3) = 3 + 2 = 5
//     //fibo(4) = fibo(3) + fibo(2) = 2 + 1 = 3
//     //fibo(3) = fibo(2) + fibo(1) = 1 + 1 = 2
//     //fibo(2) = fibo(1) + fibo(0) = 1 + 0 = 1
//     // cout << "Hi" << endl;
// //     return ans;
// }

// int main () {
 
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;

//     int result = fibonacciSeries ( n );
//     cout << "The result is : " << result << endl;
 
//     return 0;
// }

//With 4 loop

// #include <iostream>
 
// using namespace std;
 
// int main () {

//     int count = 1;
 
//     for ( int i = 0; i < 7; i++ ) {
//         for ( int j = 0; j < count; j++ ) {
//             cout << "*" << " ";
//         }
//         count = count + 1;
//         cout << endl;
//     }
 
//     return 0;
// }

//With recursion


// #include <iostream>
 
// using namespace std;

// void pattern ( int i, int j, int sizeOfRow, int count ) {
//     if ( i == sizeOfRow ) {
//         return;
//     } 

//     // sizeOfRow = 3 -> 0 < 1 -> * -> 1 < 1 -> else -> i = 1, j = 0, count = 2 -> 0 < 2 -> * 1 < 2 -> * -> ** -> 2 < 2 -> else -> i = 2, j = 0, count = 3 -> 0 < 3 -> * -> 1 < 3 -> * - 2 < 3 -> * -> *** -> 3 < 3 -> else -> i = 3; j = 0, count = 4 -> i == sizeOfRow -> return

//     if ( j < count ) {
//         cout << "*" << " ";
//         j = j + 1;
//     }

//     else {
//         i = i + 1;
//         cout << endl;
//         j = 0;
//         count = count + 1;
//     }

//     pattern ( i, j, sizeOfRow, count );

// }

// int main () {
    
//     int i = 0;
//     int j = 0;
//     int count = 1;
//     int sizeOfRow;
//     cout << "Enter size : " ;
//     cin >> sizeOfRow;

//     pattern ( i, j, sizeOfRow, count );
 
//     return 0;
// }

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     string str;
//     cout << "Enter the string" << endl;
//     getline ( cin, str );

//     int i = 0;
//     int j = str.length () - 1;

//     cout << "***** Normal *****" << endl;
//     for ( int i = 0; i <= str.length () - 1; i++ ) {
//         cout << str[i] << " ";
//     }
//     cout << endl << endl;

//     while ( i < j ) {
       
//         swap ( str[i], str[j] );
//         i++;
//         j--;
//     }

//     cout << "***** Reverse *****" << endl;
//     for ( int i = 0; i <= str.length () - 1; i++ ) {
//         cout << str[i] << " ";
//     }
 
//     return 0;
// }




// Recursion climb stairs

// #include <iostream>
 
// using namespace std;

// int waysToGetToTop ( int n ) {
//     if ( n == 0 ) {
//         return 1;
//     }

//     if ( n == 1 ) {
//         return 1;
//     }

//     return waysToGetToTop(n - 1) + waysToGetToTop(n - 2);
//     // 5 -> 4 + 3 = 8
//     // 4 -> 3 + 2 = 5
//     // 3 -> 2 + 1 = 3
//     // 2 -> 1 + 0 = 2
// }


// int main () {
 
//     int n;
//     cout << "Enter the stairs" << endl;
//     cin >> n;

//     int ans = waysToGetToTop ( n );
//     cout << "Answer is : " << ans;
 
//     return 0;
// }

//

// #include <iostream>
// #include <string>

// using namespace std;

// // Function to swap characters at position x and y in a string
// void swap(char& x, char& y) {
//     char temp = x;
//     x = y;
//     y = temp;
// }

// // Recursive function to generate all permutations of the string
// void permute(string str, int l, int r) {
//     if (l == r) {
//         cout << str << endl;
//     } else {
//         for (int i = l; i <= r; i++) {
//             // Swap the current index with the fixed position
//             swap(str[l], str[i]);
//             // Recursively generate permutations for the rest of the string
//             permute(str, l + 1, r);
//             // Backtrack to restore the original string
//             swap(str[l], str[i]);
//         }
//     }
// }

// int main() {
//     string str = "ABC";
//     int n = str.size();
//     permute(str, 0, n - 1);
//     return 0;
// }

//


// strings and char array

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     string firstName = "John";
//     string lastName = "Doe";
//     string fullName = firstName + " " + lastName;
//     cout << fullName;
    
    //

    // string firstName = "John ";
    // string lastName = "Doe";
    // string fullName = firstName.append(lastName);
    // cout << fullName;

    //

    // string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // cout << "The length of the txt string is: " << txt.size();

    //

    // string txt = "We are the so-called \"Vikings\" from the north.";
    // cout << txt;
    // cout << endl;
    // // cout << "\n";
    // string txt1 = "It\'s alright.";
    // cout << txt1;
    // cout << endl;
    // string txt2 = "The character \\ is called backslash.";
    // cout << txt2;
    // return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
// 	string str(5, 'g');
// 	cout << str;
// 	return 0;
// }

// C++ Program to demonstrate use of string keyword
// #include <iostream>
// using namespace std;

// int main()
// {

// 	string s = "GeeksforGeeks";
// 	string str("GeeksforGeeks");

// 	cout << "s = " << s << endl;
// 	cout << "str = " << str << endl;

// 	return 0;
// }

//

// C++ Program to demonstrate use of stringstream object
// #include <iostream>
// #include <sstream>
// #include<string>

// using namespace std;

// int main()
// {

// 	string s = " GeeksforGeeks to the Moon ";
// 	stringstream obj(s);
// 	// string to store words individually
// 	string temp;
// 	// >> operator will read from the stringstream object
// 	while (obj >> temp) {
// 		cout << temp << " ";
// 	}
// 	return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
    // char charArray[4] = {'s', 'a', 'm', '\0'}; // Size of the array is 4

    // Printing the array as a string
// int i = 0;

//     while ( charArray[i] != '\0') {
//         cout << charArray[i];
//         i = i + 1;
//     }

    // for ( int i = 0; charArray[i] != '\0'; i++ ) {
    //     cout << charArray[i] <<  " ";

    // }

    // for ( int i = 0; i != 3; i++ ) {
    //     cout << charArray[i] << " ";

    // }

    //

    // char array[7] = "Sameer";

    // int i = 0;

    // while ( array[i] != '\0') {
    //     cout << array[i] << " ";
    //     i = i + 1;
    // }

    // while ( i != 6 ) {
    //     cout << array[i] << " ";
    //     i = i + 1;
    // }

    // for ( int i = 0; array[i] != '\0'; i++ ) {
    //     cout << array[i] <<  " ";

    // }

    //

    // string str = "sameer hi"; // 10 size measn c style string or is me visible nhi lakin agar kabhi bhe array ko declare krna yah kisi ko batana tou is ka size 10 he ho ga yani aik add kr ke
    // int i = 0;
    // // while ( str[i] != '\0' ) {
    // //     cout << str[i];
    // //     i = i + 1;
    // // }

    // while ( i != 9 ) {
    //     cout << str[i];
    //     i = i + 1;
    // }

    // for ( int i = 0; str[i] != '\0'; i++ ) {
    //     cout << str[i] <<  " ";

    // }

    // for ( int i = 0; i != 9; i++ ) {
    //     cout << str[i] <<  " ";

    // }


    //

//     string str[2] = {"Ali", "Sameer"};
//     int i = 0;

//     // while ( i != 2 ) {
//     //     cout << str[i] << endl;
//     //     i = i + 1;
//     // }
//     int size = sizeof(str) / sizeof(str[0]); // yeh string ke andar batao ga ke kitne hain 2 yani ali and sameer
//     int size1 = str[0].length(); // yeh 0 index wale ke batai ga ke kitne elements that is 3
//     int size2 = str[1].size(); //yeh 1st index ke elemnts count kre ga jo ke hian 6
//     // agar hm  chate ke total length nikale jo ke 9 ai ge 6 + 3 tou us ke lie for loop lagana pare ga with str[].length();
//     cout << size2; 
//     cout << endl;
//     cout << size1;
//     cout << endl;
//     cout << size;
//     cout << endl;
//     int total = 0;

//     for ( int i = 0; i < 2; i++ ) {
//         // total = total + str[i].size ();
//         total = total + str[i].length ();
//     }
//     cout << total << endl;

//     while ( str[i] != "\0" ) {
//         cout << str[i];
//         i = i + 1;
//     }

//     // for ( int i = 0; str[i] != '\0'; i++ ) {
//     //     cout << str[i] <<  " ";
//     // }

//     // for ( int i = 0; i != 9; i++ ) {
//     //     cout << str[i] <<  " ";

//     // }


//     // C++ Program to print string using pointers

// 	// string s = "Geeksforgeeks";

// 	// // pointer variable declared to store the starting
// 	// // address of the string
// 	// char* p = &s[0];

// 	// // this loop will execute and print the character till
// 	// // the character value is null this loop will execute and
// 	// // print the characters

// 	// // while (*p != '\0') {
// 	// // 	cout << *p;
// 	// // 	p++;
// 	// // }
// 	// // cout << endl;

//     // // for ( int i = 0; s[i] != '\0'; i++ ) {
//     // //     cout << *p;
//     // //     p = p + 1;
//     // // }
    
//     // // for ( int i = 0; s[i] != '\0'; i++ ) {
//     // //     cout << s[i];
//     // // }

//     // for ( int i = 0; *p != '\0'; p++ ) {
//     //     cout << *p;
//     //     // p = p + 1;
//     // }

//     return 0;
// }


// Stock buy and sell

// #include <iostream>
 
// using namespace std;

// int buy ( int array[], int &index ) {
//     int min = INT_MAX;
//     for ( int i = 0; i < 5; i++ ) {
//         if ( array[i] < min ) {
//             min = array[i];
//             index = i;
//         }
//     }

//     cout << "Value minimun : " << min << endl;
//     return index;
    
// }


// int sell ( int array[], int index1, int index ) {
//     int max = INT_MIN;
//     for ( int i = 1 + index; i < 5; i++ ) {
//         if ( array[i] > max ) {
//             max = array[i];
//             index1 = i;
//         }
//     }

//     cout << "Value minimun : " << max << endl;
//     return index1;
// }


// int main () {
 
//     int array[5] = {30, 5600, 20, 220, 100};

//     int index = 0, index1 = 0;

//     int ans = buy ( array, index );
//     cout << "Index to buy : ";
//     cout << ans << endl;

//     int ans1 = sell ( array, index1, index );
//     cout << "Index to sell : ";
//     cout << ans1 << endl;


//     int ans3 = array[ans1] - array[ans]; 
//     cout << "The profit is : " << ans3 << endl;
 
//     return 0;
// }

// Matrix Multiplication

// #include <iostream>
 
// using namespace std;
 
// int main () {
    
//     int C1st = 3;
//     int R2nd = 3;
//     int countRow = 0, countCol = 0;

//     int MultipliedArray[3][3] = {0};
//     int array[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int array1[3][3] = {{7, 8, 9}, {4, 5, 6}, {1, 2, 3}};

//     if ( C1st == R2nd ) {
//         cout << "Matrix 1" << endl;
//         for ( int  i = 0; i < 3; i++ ) {
//             for ( int j = 0; j < 3; j++ ) {
//                 cout << array[i][j] << " ";
//             }
//             cout << endl;
//         }

//         cout << endl;

//         cout << "Matrix 2" << endl;
//         for ( int  i = 0; i < 3; i++ ) {
//             for ( int j = 0; j < 3; j++ ) {
//                 cout << array1[i][j] << " ";
//             }
//             cout << endl;
//         }

//         cout << endl;

//         cout << "Multiplication of both Matrices" << endl;

//         for ( int i = 0; i < 3; i++ ) {
//             for ( int j = 0; j < 3; j++ ) {
//                 for ( int k = 0; k < 3; k++ ) { 
//                     MultipliedArray[i][countCol] = MultipliedArray[i][countCol] + ( array[countRow][k] * array1[k][j] );
//                 }
//                 countCol = countCol + 1;
//                 if ( countCol == C1st ) {
//                     countCol = 0;
//                     countRow = countRow + 1;
//                 }
//             }
//         }

//         for ( int i = 0; i < 3; i++ ) {
//             for ( int j = 0; j < 3; j++ ) {
//                 cout << MultipliedArray[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     else {
//         cout << "Number of columns of 1st matrix is not equal to number of rows of 2nd matrix" << endl;
//     }

//     return 0;
// }


// Students data

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     string array[3][3];
//     int marks[3][3];
//     int k = 0;

//     for ( int i = 0; i < 3; i++ ) {
//         for ( int j = 0; j < 3; j++ ) {
//             if ( j < 2 ) {
//                 cin >> array[i][j];
//             }
//             cin >> marks[i][j];
//         }
//     }

//     for ( int i = 0; i < 3; i++ ) {
//         for ( int j = 0; j < 2; j++ ) {
//             cout << array[i][j] << " ";
//             if ( j == 1 ) {
//                 for ( int i = 0; i < 1; i++ ) {
//                     for ( int j = 0; j < 3; j++ ) {
//                         cout << marks[k][j] << " ";
//                     }
//                     cout << endl;
//                 }
//                 k = k + 1;
//             }
//         }
//         cout << endl;
//     }

    // for ( int i = 0; i < 3; i++ ) {
    //     for ( int j = 0; j < 3; j++ ) {
    //         cout << marks[i][j] << " ";
    //     }
    //     cout << endl;
    // }
 
//     return 0;
// }


//


/*Write a recursive function to implement binary search on a sorted array. The function should take the array, the target value, and the start and end indices as parameters, and return the index of the target value if found, or -1 if not found.*/

// #include <iostream>
 
// using namespace std;

// int sorting ( int key, int array[], int size, int i ) {
//     if ( array[i] == key ) {
//         return i;
//     }

//     else {
//         i = i + 1;
//     }

//     if ( i >= size ) {
//         return -1;
//     }

//     return sorting ( key, array, size, i );
// }


// int main () {

//     int array[5] = {56, 24, 98, 45, 32};
//     int size = 5;
//     int i = 0;
 
//     int key;
//     cout << "Enter the number to find : ";
//     cin >> key;

//     int ans = sorting ( key, array, size, i );

//     if ( ans != -1 ) {
//         cout << "Index of " << key << " is : " << ans << endl;
//     }

//     else {
//         cout << "Could not find the number" << endl;
//     }
 
//     return 0;
// }


// Palindrome for loop -> saas = palindrome

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     string str ("SAASSAAS");
//     // cout << str.length();
//     int j = str.length () - 1;
//     int k = j;

//     bool check = true;

//     for ( int i = 0; i <= k; i++ ) {
//         if ( str[i] != str[j - i] ) {
//             check = false;
//             break;
//         }
//         k = k - 1;
//     }

//     if ( check == false ) {
//         cout << "It is not a palindrome" << endl;
//     }

//     else {
//         cout << "It is a palindrome" << endl;
//     }

//     // i = 0, j = 3, i <= 3, if -> str[0] != str[3-0] but it is equal S = S and k = 2, if str[1] != str[3-1] but it is equal A = A, k = 1, i = 2 so i greater loop stops and check remains true.

//     return 0;
// }


//

// strings and char array

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
    // string firstName = "John";
    // string lastName = "Doe";
    // string fullName = firstName + " " + lastName;
    // cout << fullName;
    
    //

    // string firstName = "John ";
    // string lastName = "Doe";
    // string fullName = lastName.append(firstName);
    // cout << fullName;

    //

    // string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // cout << "The length of the txt string is: " << txt.length();
    // cout << endl;
    // cout << "The length of the txt string is: " << txt.size();

    //

    // string txt = "We are the so-called \"Vikings\" from the north.";
    // cout << txt;
    // cout << endl;
    // // cout << "\n";
    // string txt1 = "It\'s alright.";
    // cout << txt1;
    // cout << endl;
    // string txt2 = "The character \\ is called backslash.";
    // cout << txt2;
    // return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
	// string str(5, 'g'); 
	// cout << str;
// 	return 0;
// }

// C++ Program to demonstrate use of string keyword
// #include <iostream>
// using namespace std;

// int main()
// {

	// string s = "GeeksforGeeks";
	// string str("GeeksforGeeks");

	// cout << "s = " << s << endl;
	// cout << "str = " << str << endl;

// 	return 0;
// }

//

// C++ Program to demonstrate use of stringstream object
// #include <iostream>
// #include <sstream>
// #include<string>

// using namespace std;

// int main()
// {

// 	string s = " GeeksforGeeks to the Moon ";
// 	stringstream obj(s);
// 	// string to store words individually
// 	string temp;
// 	// >> operator will read from the stringstream object
// 	while (obj >> temp) {
// 		cout << temp << " ";
// 	}
// 	return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     char charArray[4] = {'s', 'a', 'm', '\0'}; // Size of the array is 4

//     // Printing the array as a string
// int i = 0;

//     while ( charArray[i] != '\0') {
//         cout << charArray[i];
//         i = i + 1;
//     }

//     for ( int i = 0; charArray[i] != '\0'; i++ ) {
//         cout << charArray[i] <<  " ";

//     }

//     for ( int i = 0; i != 3; i++ ) {
//         cout << charArray[i] << " ";

//     }

    //

    // char array[7] = "Sameer";

    // int i = 0;

    // while ( array[i] != '\0') {
    //     cout << array[i] << " ";
    //     i = i + 1;
    // }

    // while ( i != 6 ) {
    //     cout << array[i] << " ";
    //     i = i + 1;
    // }

    // for ( int i = 0; array[i] != '\0'; i++ ) {
    //     cout << array[i] <<  " ";

    // }

    //

    // string str = "sameer hi"; // 10 size measn c style string or is me visible nhi lakin agar kabhi bhe array ko declare krna yah kisi ko batana tou is ka size 10 he ho ga yani aik add kr ke
    // int i = 0;
    // // while ( str[i] != '\0' ) {
    // //     cout << str[i];
    // //     i = i + 1;
    // // }

    // while ( i != 9 ) {
    //     cout << str[i];
    //     i = i + 1;
    // }

    // for ( int i = 0; str[i] != '\0'; i++ ) {
    //     cout << str[i] <<  " ";

    // }

    // for ( int i = 0; i != 9; i++ ) {
    //     cout << str[i] <<  " ";

    // }


    //

    // string str[2] = {"Ali", "Sameer"};
    // int i = 0;

//     // while ( i != 2 ) {
//     //     cout << str[i] << endl;
        // i = i + 1;
//     // }
//     int size = sizeof(str) / sizeof(str[0]); // yeh string ke andar batao ga ke kitne hain 2 yani ali and sameer
//     int size1 = str[0].length(); // yeh 0 index wale ke batai ga ke kitne elements that is 3
//     int size2 = str[1].size(); //yeh 1st index ke elemnts count kre ga jo ke hian 6
//     // agar hm  chate ke total length nikale jo ke 9 ai ge 6 + 3 tou us ke lie for loop lagana pare ga with str[].length();
//     cout << size2; 
//     cout << endl;
//     cout << size1;
//     cout << endl;
//     cout << size;
//     cout << endl;
//     int total = 0;

//     for ( int i = 0; i < 2; i++ ) {
//         // total = total + str[i].size ();
//         total = total + str[i].length ();
//     }
//     cout << total << endl;

    // while ( str[i] != "\0" ) {
    //     cout << str[i];
    //     i = i + 1;
    // }

    // for ( int i = 0; str[i] != "\0"; i++ ) {
    //     cout << str[i] <<  " ";
    // }

    // for ( int i = 0; i != 2; i++ ) {
    //     cout << str[i] <<  " ";

    // }


//     // C++ Program to print string using pointers

	// string s = "Geeksforgeeks";

	// // pointer variable declared to store the starting
	// // address of the string
	// char* p = &s[0];

	// // this loop will execute and print the character till
	// // the character value is null this loop will execute and
	// // print the characters

	// // while (*p != '\0') {
	// // 	cout << *p;
	// // 	p++;
	// // }
	// // cout << endl;

    // // for ( int i = 0; s[i] != '\0'; i++ ) {
    // //     cout << *p;
    // //     p = p + 1;
    // // }
    
    // // for ( int i = 0; s[i] != '\0'; i++ ) {
    // //     cout << s[i];
    // // }

    // for ( int i = 0; *p != '\0'; p++ ) {
    //     cout << *p;
    //     // p = p + 1;
    // }

//     return 0;
// }


// Stock buy and sell

// #include <iostream>
 
// using namespace std;

// int buy ( int array[], int &index ) {
//     int min = INT_MAX;
//     for ( int i = 0; i < 5; i++ ) {
//         if ( array[i] < min ) {
//             min = array[i];
//             index = i;
//         }
//     }

//     cout << "Value minimun : " << min << endl;
//     return index;
    
// }


// int sell ( int array[], int index1, int index ) {
//     int max = INT_MIN;
//     for ( int i = 1 + index; i < 5; i++ ) {
//         if ( array[i] > max ) {
//             max = array[i];
//             index1 = i;
//         }
//     }

//     cout << "Value minimun : " << max << endl;
//     return index1;
// }


// int main () {
 
//     int array[5] = {30, 5600, 20, 220, 100};

//     int index = 0, index1 = 0;

//     int ans = buy ( array, index );
//     cout << "Index to buy : ";
//     cout << ans << endl;

//     int ans1 = sell ( array, index1, index );
//     cout << "Index to sell : ";
//     cout << ans1 << endl;


//     int ans3 = array[ans1] - array[ans]; 
//     cout << "The profit is : " << ans3 << endl;
 
//     return 0;
// }

// Matrix Multiplication

// #include <iostream>
 
// using namespace std;
 
// int main () {
    
//     int C1st = 3;
//     int R2nd = 3;
//     int countRow = 0, countCol = 0;

//     int MultipliedArray[3][3] = {0};
//     int array[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int array1[3][3] = {{7, 8, 9}, {4, 5, 6}, {1, 2, 3}};

//     if ( C1st == R2nd ) {
//         cout << "Matrix 1" << endl;
//         for ( int  i = 0; i < 3; i++ ) {
//             for ( int j = 0; j < 3; j++ ) {
//                 cout << array[i][j] << " ";
//             }
//             cout << endl;
//         }

//         cout << endl;

//         cout << "Matrix 2" << endl;
//         for ( int  i = 0; i < 3; i++ ) {
//             for ( int j = 0; j < 3; j++ ) {
//                 cout << array1[i][j] << " ";
//             }
//             cout << endl;
//         }

//         cout << endl;

//         cout << "Multiplication of both Matrices" << endl;

//         for ( int i = 0; i < 3; i++ ) {
//             for ( int j = 0; j < 3; j++ ) {
//                 for ( int k = 0; k < 3; k++ ) { 
//                     MultipliedArray[i][countCol] = MultipliedArray[i][countCol] + ( array[countRow][k] * array1[k][j] );
//                 }
//                 countCol = countCol + 1;
//                 if ( countCol == C1st ) {
//                     countCol = 0;
//                     countRow = countRow + 1;
//                 }
//             }
//         }

//         for ( int i = 0; i < 3; i++ ) {
//             for ( int j = 0; j < 3; j++ ) {
//                 cout << MultipliedArray[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     else {
//         cout << "Number of columns of 1st matrix is not equal to number of rows of 2nd matrix" << endl;
//     }

//     return 0;
// }


// Students data

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     string array[3][3];
//     int marks[3][3];
//     int k = 0;

//     for ( int i = 0; i < 3; i++ ) {
//         for ( int j = 0; j < 3; j++ ) {
//             if ( j < 2 ) {
//                 cin >> array[i][j];
//             }
//             cin >> marks[i][j];
//         }
//     }

//     for ( int i = 0; i < 3; i++ ) {
//         for ( int j = 0; j < 2; j++ ) {
//             cout << array[i][j] << " ";
//             if ( j == 1 ) {
//                 for ( int i = 0; i < 1; i++ ) {
//                     for ( int j = 0; j < 3; j++ ) {
//                         cout << marks[k][j] << " ";
//                     }
//                     cout << endl;
//                 }
//                 k = k + 1;
//             }
//         }
//         cout << endl;
//     }

//     for ( int i = 0; i < 3; i++ ) {
//         for ( int j = 0; j < 3; j++ ) {
//             cout << marks[i][j] << " ";
//         }
//         cout << endl;
//     }
 
//     return 0;
// }





//  Pattern 2 triangles 
/*       
    *         *
   * *       * * 
  * * *     * * *
 * * * *   * * * *
* * * * * * * * * *
*/ 

// #include <iostream>
 
// using namespace std;
 
// int main () {
    
//     bool check = true;
//     bool forStars = true;
//     int count = 1;
//     int count1 = 0;
//     int decrement = 1;
//     int toStopOuterWhileLoop = 0;
//     int toStop1STInnerWhileLoop = 0;
//     int toStop2NDInnerWhileLoop = 0;
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int multiply = (n * 2);

//     while ( check == true ) {
//         for ( int i = 0; i < count; i++ ) {  
//             count1 = count1 + 1; 
//             for ( int j = 0; j < n; j++ ) {
//                 if ( j < n - decrement ) {
//                     cout << " ";
//                 } 

//                 while ( count1 != toStop1STInnerWhileLoop ) {
//                     if ( j == n - 1 ) {
//                         cout << " *";
//                     }
//                     toStop1STInnerWhileLoop = toStop1STInnerWhileLoop + 1;
//                 }
//                 toStop1STInnerWhileLoop = 0;
//             }
//         }
        
//         for ( int i = 0; i < count; i++ ) {
//             for ( int j = n; j < multiply; j++ ) {
//                 if ( j < multiply - decrement ) {
//                     cout << " " << " "; 
//                 }

//                 while ( count1 != toStop2NDInnerWhileLoop ) {
//                     if ( j == multiply - 1 ) {
//                         cout << " *";
//                     }
//                     toStop2NDInnerWhileLoop = toStop2NDInnerWhileLoop + 1;
//                 }
//                 toStop2NDInnerWhileLoop = 0;
//             }
//         }
//         cout << endl;

//         decrement = decrement + 1;
//         toStopOuterWhileLoop = toStopOuterWhileLoop + 1;

//         if ( toStopOuterWhileLoop == n ) {
//             check = false;
//         }
//     }
 
//     return 0;
// }

#include <iostream>
 
using namespace std;
 
int main () {

        int a = 0;
        string n = "unknown";
        int b = 0;
        float salary = 0.0;
        string array[2][3];

     for ( int i = 0; i < 2; i++ ) {
            for ( int j = 0; j < 1; j++ ) {
                cin >> n;
                array[i][a] = n;
                a = a + 1;
                cin >> b;
                array[i][a] = to_string(b);
                a = a + 1;
                cin >> salary;
                array[i][a] = to_string(salary);
                a = 0;
            }
        }

        for ( int i = 0; i < 2; i++ ) {
            for ( int j = 0; j < 3; j++ ) {
               cout << array[i][j] << " ";
            }
            cout << endl;
        }

 
    return 0;
}