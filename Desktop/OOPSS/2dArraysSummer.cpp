// #include <iostream>
// #include <string>
// using namespace std;

// struct Student {
//     string name;
//     int rollNo;
//     float cgpa;
// };

// int main() {
//     const int rows = 2;
//     const int cols = 2;
//     Student students[rows][cols]; // 2D array of Student structs

//     // Initializing the 2D array
//     students[0][0] = {"Sameer", 12345, 3.5};
//     students[0][1] = {"Ali", 12346, 3.6};
//     students[1][0] = {"Sara", 12347, 3.7};
//     students[1][1] = {"Ahmed", 12348, 3.8};

//     // Output the 2D array
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "Name: " << students[i][j].name 
//                  << ", Roll No: " << students[i][j].rollNo 
//                  << ", CGPA: " << students[i][j].cgpa << endl;
//         }
//     }

//     return 0;
// }
//Error a rha is waja se ke {Sameer wagera is mein likha }.The errors you encountered are due to the fact that C++ does not support direct list initialization of struct members in a 2D array like that. 
// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// private:
//     string name;
//     int rollNo;
//     float cgpa;

// public:
//     // Default constructor
//     Student() : name(""), rollNo(0), cgpa(0.0f) {}

//     // Parameterized constructor
//     Student(string n, int r, float c) : name(n), rollNo(r), cgpa(c) {}

//     // Setter functions
//     void setName(string n) { name = n; }
//     void setRollNo(int r) { rollNo = r; }
//     void setCgpa(float c) { cgpa = c; }

//     // Getter functions
//     string getName() { return name; }
//     int getRollNo() { return rollNo; }
//     float getCgpa() { return cgpa; }

//     // Print function
//     void print() {
//         cout << "Name: " << name << ", Roll No: " << rollNo << ", CGPA: " << cgpa << endl;
//     }
// };

// int main() {
//     const int rows = 2;
//     const int cols = 2;
//     Student students[rows][cols]; // 2D array of Student objects

//     // Initializing the 2D array
//     students[0][0] = Student("Sameer", 12345, 3.5f);
//     students[0][1] = Student("Ali", 12346, 3.6f);
//     students[1][0] = Student("Sara", 12347, 3.7f);
//     students[1][1] = Student("Ahmed", 12348, 3.8f);

//     // Output the 2D array
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             // students[i][j].print();
//             cout << "Name: " << students[i][j].getName()
//             << ", Roll No: " << students[i][j].getRollNo() 
//             << ", CGPA: " << students[i][j].getCgpa() << endl;
//         }
//     }


//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// struct Student {
//     string name;
//     int rollNo;
//     float cgpa;

//     // Constructor
//     Student(string n, int r, float c) : name(n), rollNo(r), cgpa(c) {}
//      void print() {
//         cout << "Name: " << name << ", Roll No: " << rollNo << ", CGPA: " << cgpa << endl;
//     }
// };

// int main() {
//     const int rows = 2;
//     const int cols = 2;
//     Student students[rows][cols] = {
//         {Student("Sameer", 1234533, 3.5f), Student("Ali", 12346, 3.6f)},
//         {Student("Sara", 123467, 3.7f), Student("Ahmed", 12348, 3.8f)}
//     };
//     // students[0][0] = Student("Sameer", 122345, 3.5); ese bhe likh sakte

//     // Output the 2D array
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             students[i][j].print();
//             // cout << "Name: " << students[i][j].name 
//             // << ", Roll No: " << students[i][j].rollNo 
//             // << ", CGPA: " << students[i][j].cgpa << endl;
//         }
//     }

//     return 0;
// }

//

// #include <iostream>
// #include <string>
// using namespace std;

// struct Student {
//     string name;
//     int rollNo;
//     float cgpa;
// };

// int main() {
//     const int rows = 2;
//     const int cols = 2;
//     Student students[rows][cols]; // 2D array of Student structs

//     // Manually initializing the 2D array
//     students[0][0].name = "Sameer";
//     students[0][0].rollNo = 12345;
//     students[0][0].cgpa = 3.5f;

//     students[0][1].name = "Ali";
//     students[0][1].rollNo = 12346;
//     students[0][1].cgpa = 3.6f;

//     students[1][0].name = "Sara";
//     students[1][0].rollNo = 12347;
//     students[1][0].cgpa = 3.7f;

//     students[1][1].name = "Ahmed";
//     students[1][1].rollNo = 12348;
//     students[1][1].cgpa = 3.8f;

//     // Output the 2D array
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "Name: " << students[i][j].name 
//                  << ", Roll No: " << students[i][j].rollNo 
//                  << ", CGPA: " << students[i][j].cgpa << endl;
//         }
//     }

//     return 0;
// }

//

// #include <iostream>
// #include <string>
// using namespace std;

// struct Student {
//     string name;
//     int rollNo;
//     float grades[5]; // Array to store grades for 5 subjects

//     // Function to print student details
//     void printDetails() {
//         cout << "Name: " << name << ", Roll No: " << rollNo << ", Grades: ";
//         for (int i = 0; i < 5; ++i) {
//             cout << grades[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Student student;
//     student.name = "Sameer";
//     student.rollNo = 12345;
//     // Initializing the grades array
//     student.grades[0] = 3.5f;
//     student.grades[1] = 3.6f;
//     student.grades[2] = 3.7f;
//     student.grades[3] = 3.8f;
//     student.grades[4] = 3.9f;

//     // Print student details
//     student.printDetails();

//     return 0;
// }


//Template function Q in c++
/*Implement a Function Template for Maximum Value
Write a template function maxValue that takes two arguments of any type and returns the greater of the two. Demonstrate its use with int, float, and char types.*/
/*template <typename T> T maxValue ( T x, T y )
template: This keyword is used to define a template. It allows the function to operate with generic types.
<typename T>: This part declares a type parameter T. T can be any type (int, float, char, etc.). The typename keyword specifies that T is a type parameter.
T: The return type of the function. Since T is a template parameter, it means the return type of the function will be the same as the type of the arguments provided.
maxValue: This is the name of the function. It is a template function that will find the maximum of two values.
( T x, T y ): These are the parameters of the function. x and y are both of type T, meaning they can be of any type specified when the function is called.
Putting it all together, template <typename T> T maxValue ( T x, T y ) defines a template function named maxValue that takes two arguments of type T and returns a value of type T. The actual type T will be determined when the function is called*/

// #include <iostream>
 
// using namespace std;

// template <typename T> T maxValue ( T x, T y ) {
//     if ( x > y ) {
//         cout << "The greater is x that is : ";
//         return x;
//     }

//     else {
//         cout << "The greater is y that is : ";
//         return y;
//     }
// }

// int main () {
 
//     int ans1 = maxValue ( 3, 5 );
//     cout << ans1 << endl;
//     float ans2 = maxValue ( 3.3, 3.1 );
//     cout << ans2 << endl;
//     char ans3 = maxValue ( 'A', 'F' );
//     cout << ans3 << endl;
 
//     return 0;
// }

/*Template Function for Swapping Values
Write a template function swapValues that swaps the values of two variables. Show its usage with different types such as int, double, and string.*/

// #include <iostream>
// #include <string>

// using namespace std;

// // Template function to swap values
// template <typename T>
// void swapValues(T& x, T& y) {
//     T temp = x;
//     x = y;
//     y = temp;
// }

// int main() {
//     // Test with int
//     int a = 2, b = 3;
//     cout << "Before swapping: a = " << a << ", b = " << b << endl;
//     swapValues(a, b);
//     cout << "After swapping: a = " << a << ", b = " << b << endl;
//     cout << endl;

//     // Test with double
//     double c = 2.3, d = 3.1;
//     cout << "Before swapping: c = " << c << ", d = " << d << endl;
//     swapValues(c, d);
//     cout << "After swapping: c = " << c << ", d = " << d << endl;
//     cout << endl;

//     // Test with string
//     string e = "Sam", f = "Abd";
//     cout << "Before swapping: e = " << e << ", f = " << f << endl;
//     swapValues(e, f);
//     cout << "After swapping: e = " << e << ", f = " << f << endl;
//     cout << endl;

//     return 0;
// }


//
/*Template Function for Array Sum

Write a template function arraySum that takes a pointer to an array and its size, and returns the sum of the array elements. Test this function with an array of int and an array of double.*/

// #include <iostream>
 
// using namespace std;
 
// template <typename T> T arraySum ( T array[], int size ) { //Size ko int kar dia na ke T cz size tou banaya he int agar use T kar dia phir masla ho ga
//     T sum = 0;
//     for ( int i = 0; i < size; i++ ) {
//         // static T sum = 0;
//         sum = sum + array[i];
//     }
//     return sum;
// }

// int main () {
    
//     const int size = 5;
//     int array[size] = {1, 2, 4, 5, 6};
//     int sum = arraySum ( array, size );
//     cout << "Sum of int : " << sum << endl;

//     double array1[size] = {1.1, 2.3, 4.4, 5.5, 6.9};
//     double sum1 = arraySum ( array1, size );
//     cout << "Sum of double : " << sum1 << endl;
 
//     return 0;
// }

//While loop question. Write a C++ program that takes a positive integer as input and reverses the digits using a while loop.


// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     int n, reversedNumber = 0;
//     cout << "Enter the number" << endl;
//     cin >> n;

//     while ( n > 0 ) {
//        int lastDigit = n % 10; // Extract the last digit
//         // reversedNumber = reversedNumber * 10 + lastDigit; // Build the reversed number
//         cout << lastDigit;
//         n = n / 10; // Remove the last digit
//     }

//     // cout << "Reversed Number: " << reversedNumber << endl;
   
//     return 0;
// }

//Palindrome

// #include <iostream>
// #include <string>

// using namespace std;

// bool palindrome ( string str, int i, int j, bool ans ) {

//     for ( int r = 0; r < str.length () - 1; r++ ) {

//         if ( i == j ) {
//             ans = true;
//         }

//         if ( str[i] == str[j] ) {
//             swap (str[i], str[j]);
//             i++;
//             j--;
//         }

//         else {
//             ans = false;
//         }
//     }  

//     if ( ans == true ) {
//         cout << "It is a palindrome" << endl;
//     }

//     else {
//         cout << "It is not a palindrome" << endl;
//     }
//     return 0;
// }

// int main () {
 
//     string str = "ssamass";
//     int i = 0;
//     int j = str.length () - 1;
//     bool ans;
//     // bool ans = true;
//     // ans = palindrome ( str, i, j );
//     palindrome ( str, i, j, ans );

//     // if ( ans == true ) {
//     //     cout << "It is a palindrome" << endl;
//     // }

//     // else {
//     //     cout << "It is not a palindrome" << endl;
//     // }
 
//     return 0;
// }

// #include <iostream>
// #include <cstdlib>   // For rand() and srand() functions
// #include <ctime>     // For time() function to seed srand()

// using namespace std;

// int main() {
//     // Seed the random number generator with current time
//     srand(time(0));  // This ensures different random numbers on each run

//     // Generate a random number between 1 and 100
//     int randomNumber = rand() % 100 + 1;  // Generates a number between 1 and 100

//     cout << "Random Number: " << randomNumber << endl;

//     return 0;
// }
/*Problem: Implement a number guessing game where the computer generates a random number between 1 and 100. The user repeatedly guesses the number until they guess it correctly. Use a do-while loop to handle the guessing process.

Hint: Use functions like rand() to generate random numbers and cin to get user input. Provide feedback on each guess (too high, too low).

These questions are designed to test your understanding and application of the do-while loop in solving practical programming problems, such as iterative calculations and interactive games.*/

// #include <iostream>
// #include <cstdlib>
 
// using namespace std;
 
// int main () {

//     int number;
//     int randomNumber;
 
//     do {
//         cin >> number;
//         randomNumber = rand() % 100 + 1;  // Generates a number between 1 and 100
//         cout << "Number is : " << number << endl;

//         cout << "Random Number: " << randomNumber << endl;

//         if ( number < randomNumber ) {
//             cout << "To high! try again" << endl;
//         }

//         else if ( number > randomNumber ) {
//             cout << "To low! try again" << endl;
//         }

//         else {
//             cout << "You guessed right" << endl;
//         }
//     }

//     while ( number != randomNumber );
 
//     return 0;
// }

//

/*Question 1: Reading Integers from a File Until a Specific Value is Found
Problem:
Write a C++ program that reads integers from a file named "numbers.txt" until it encounters the integer -1. Use a do-while loop to handle the reading process. The program should output each integer it reads to the console.*/

// #include <iostream>
// #include <fstream>
 
// using namespace std;
 
// int main () {
    
//     fstream fout;
//     fout.open("numbers.txt"); 
    
//     if ( !fout ) {
//         cerr << "Error opening file for writing!" << endl;
//         return 1;
//     }

//     string n;

//     do {
//         cin >> n;
//         if ( n != "-1" ) {
//             fout << n << endl; //Agar endl; na lagain tou har fout se guzarte file me alag line mein jata but yaha kyun nhi? -> fout alag line mein save nhi krta.
//         }
//     }

//     while ( n != "-1" );

//     fout.close();

//     ifstream fin;
//     fin.open("numbers.txt");

//     if (!fin) {
//         cerr << "Error opening file for reading!" << endl;
//         return 1;
//     }

//     while ( fin >> n ) { // fin >> n sare aik sath print ke agar fout << n << endl; nhi lagaun but agar lagaya tou phir is ko alag alag line mile ge
//         cout << n << endl;
//     }

//     fin.close();
 
//     return 0;
// }


//


// #include <iostream>
// #include <fstream>
 
// using namespace std;
 
// int main () {
    
//     fstream fout;
//     fout.open("numbers.txt"); 
    
//     if ( !fout ) {
//         cerr << "Error opening file for writing!" << endl;
//         return 1;
//     }

//     string n;

//     do {
//         cin >> n; // if cin >> n; ese likhu ga tou har word alag l=line mein jin ke between gap hai i am gap hai tou i 1st line and am 2nd line
//         // getline(cin, n);
//         if ( n != "-1" ) {
// //             fout << n << endl; //Agar endl; na lagain tou har fout se guzarte file me alag line mein jata but yaha kyun nhi? -> fout alag line mein save nhi krta.
//         }
//     }

//     while ( n != "-1" );

//     fout.close();

//     ifstream fin;
//     fin.open("numbers.txt");

//     if (!fin) {
//         cerr << "Error opening file for reading!" << endl;
//         return 1;
//     }

//     while ( getline(fin, n) ) { // fin >> n sare aik sath print ke agar fout << n << endl; nhi lagaun but agar lagaya tou phir is ko alag alag line mile ge
//         cout << n;
//     }

//     fin.close();
 
//     return 0;
// }


//
/*Question 1: Managing Student Grades with a 2D Array and File Handling
Problem:
Write a C++ program that reads student names and their grades from a file named "students.txt". The file contains 3 students, each with 3 grades. Store this information in a 2D array. Calculate the average grade for each student and write the results to a file named "averages.txt".*/

// #include <iostream>
// #include <fstream>
 
// using namespace std;

// struct Student {
//     string names;
//     float grades;
// };

// int main () {

//     fstream fout;
//     fout.open("averages.txt");

//     if ( !fout ) {
//         cerr << "Error opening file for writing!" << endl;
//         return 1;
//     }
 
//     Student arr[3][3];

//     for ( int i = 0; i < 3; i++ ) {
//         for ( int j = 0; j < 3; j++ ) {
//             if ( j == 0 ) {
//                 cin >> arr[i][j].names;
//             }
//             cin >> arr[i][j].grades;
//         }
//     }

//     for ( int i = 0; i < 3; i++ ) {
//         float count = 0, avg = 0;
//         int total = 3;
//         for ( int j = 0; j < 3; j++ ) {
//             if ( j == 0 ) {
//                 cout << arr[i][j].names << " ";
//             }
//             cout << arr[i][j].grades << " ";
//             count = count + arr[i][j].grades;
//         }
//         avg = count / total;
//         fout << "Average grade of " << arr[i][0].names << " is : " << avg << endl;
//         cout << endl;
//     }
//     fout.close ();

//     ifstream fin;
//     fin.open("averages.txt");
    

//     if ( !fout ) {
//         cerr << "Error opening file for reading!" << endl;
//         return 1;
//     }
//     return 0;
// }


// #include <iostream> //String slicing
// #include <string> //String slicing

 
// using namespace std;
 
// int main () {
 
//     string str = "we are bad boys";

//     for ( int i = 0; i < str.length()-1; i++ ) {
//         if (str[i] != ' ') {
//             cout << str[i];
//         }

//         else {
//             break;
//         }
//     }
 
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void addition ( int n, int m, char operation ) {
//     int result = n + m;
//     cout << "Result is : " << result << endl;
// }

// void subtraction ( int n, int m, char operation ) {
//     int result = n - m;
//     cout << "Result is : " << result << endl;
// }

// void q1()
// {
//     // Write your solution for question 1 here
//     int n, m;
//     cout << "Enter both numbers first n and then m" << endl;
//     cin >> n >> m;
//     char operation;
//     cout << "Choose operation" << endl;
//     cin >> operation;

//     if ( operation == '+' ) {
//         addition ( n, m, operation );
//     }

//     else if ( operation == '-' ) {
//         subtraction ( n, m, operation );
//     }

//     else {
//         cout << "You entered wrong operation" << endl;
//     }
// }

// void q2()
// {
//     // Write your solution for question 2 here
//     int marks;
//     cout << "Enter the marks" << endl;
//     cin >> marks;

//     if ( marks >= 90 && marks < 100) {
//         cout << "Grade A+" << endl;
//     }

//     else if ( marks >= 85 && marks < 90 ) {
//         cout << "Grade A" << endl;
//     }

//     else if ( marks >= 77 && marks < 85 ) {
//         cout << "Grade A-" << endl;
//     }

//     else if ( marks >= 72 && marks < 77 ) {
//         cout << "Grade B+" << endl;
//     }

//     else if ( marks >= 68 && marks < 72 ) {
//         cout << "Grade B" << endl;
//     }

//     else if ( marks >= 65 && marks < 68 ) {
//         cout << "Grade B-" << endl;
//     }

//     else if ( marks >= 62 && marks < 65 ) {
//         cout << "Grade C+" << endl;
//     }

//     else if ( marks >= 59 && marks < 62 ) {
//         cout << "Grade C" << endl;
//     }

//     else if ( marks >= 56 && marks < 59 ) {
//         cout << "Grade C-" << endl;
//     }

//     else if ( marks >= 53 && marks < 56 ) {
//         cout << "Grade D+" << endl;
//     }

//     else if ( marks >= 50 && marks < 53 ) {
//         cout << "Grade D" << endl;
//     }

//     else if ( marks >= 0 && marks < 50 ) {
//         cout << "Grade F" << endl;
//     }

//     else {
//         cout << "You have entered wrong input" << endl;
//     }

// }

// void q3()
// {
//     // Write your solution for question 3 here
//     char check;
//     cout << "Enter the character" << endl;
//     cin >> check;

//     if ( check == 'a' || check == 'e' || check == 'i' || check == 'o' || check == 'u' ) {
//         cout << check << " is a vowel" << endl;
//     }

//     else {
//         cout << "It is a consonant" << endl;
//     }
// // }

// void q4()
// {
//     // Write your solution for question 4 here

//     string check;
//     cout << "Enter the name of the file extension" << endl;
//     cin >> check;

//     if ( check == ".txt" ) {
//         cout << "This is text file" << endl;
//     }

//     else if ( check == ".jpg" ) {
//         cout << "This is image file" << endl;
//     }

//     else if ( check == ".cpp" ) {
//         cout << "This is source code file" << endl;
//     }

//     else {
//         cout << "It is not extension of any file" << endl;
//     }
// }

// void q5()
// {
//     // Write your solution for question 5 here
//     char command;
//     cout << "Enter the command" << endl;
//     cin >> command;

//     switch( command ) {
//         case 'G':
//         cout << "Go" << endl;
//         break;

//         case 'Y':
//         cout << "Slow down" << endl;
//         break;

//         case 'R':
//         cout << "Stop" << endl;
//         break;

//         default:
//         cout << "You entered wrong command" << endl;
//         break;
//     }
// }

// int main() {

//     q1();
// //     q2();
// //     q3();
// //     q4();
// //     q5();

//     return 0;
// }


#include <iostream>
 
using namespace std;
 
int main () {
 
    // Q1
    // int x;
    // cout << "Enter x" << endl;
    // cin >> x;
    // int y;
    // cout << "Enter y" << endl;
    // cin >> y;
    // int c = y;


    // for ( int i = 0; i < x; i++ ) {
    //     for ( int j = 0; j < y - ( c - 1); j++ ) {
    //         cout << "*";
    //     }
    //     c--;
    //     cout << endl;
    // }

    // Q2

    // int n;
    // cout << "Enter the number" << endl;
    // cin >> n;

    // int result;

    // while ( n > 0 ) {
    //     result = n % 10;
    //     cout << result;
    //     n = n / 10;
    // }
   
   // Q3

    // int n;
    // cout << "Enter the number" << endl;
    // cin >> n;
    // int count = 0;

    // for ( int i = 2; i <= n; i++ ) {
    //     if ( n % i == 0 ) {
    //         count = count + 1;
    //     }
    // }

    // if ( count == 1) {
    //     cout << "Yes it is prime" << endl;
    // }
    
    // else {
    //     cout << "No it is not prime" << endl;
    // }

    // Q4

    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int m;
    cout << "Enter the number" << endl;
    cin >> m;

    for ( int i = 0; i <= 36 ; i++ ) {
        if ()
    }


    return 0;
}