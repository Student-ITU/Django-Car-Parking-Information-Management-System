// #include<iostream>
// using namespace std;

// bool pal(string str, int i, int j) {
//     for (int i = 0; i <= j; i++) {
//         if (i > j) {
//         return true;
//     }

//     if (str[i] != str[j]) {
//         return false;
//     }

//     if (str[i] == str[j]) {
//         return true;
//     }
//     }
//     return true;

// }
// int main() {

//     string str;
//     cin >> str;
//     bool palindrome = pal(str, 0, str.length() - 1);
//     if (palindrome)
//     {
//         cout << "IT IS A PALINDROME" << endl;
//     }
//     else
//     {
//         cout << "IT IS NOT A PALINDROME" << endl;
//     }

//     return 0;
// }
// PALINDROME
// #include <iostream>
// using namespace std;

// bool isPalindrome(string name, int i, int j) {
//     if (i > j) {
//         return true;
//     }

//     if (name[i] != name[j]) {
//         return false;
//     }

//     if (name[i] == name[j]) {
//         return true;
//     }

//     return isPalindrome(name, i + 1, j - 1);

// }

// int main() {

//     string name;
//     cout << "Enter the Word" << endl;
//     getline(cin, name);

//     bool palindrome = isPalindrome(name, 0, name.length() - 1);
//     if (palindrome)
//     {
//         cout << "IT IS A PALINDROME" << endl;
//     }
//     else
// {
// cout << "IT IS NOT A PALINDROME" << endl;
// }
// return 0;
// }

// counting vowels

// #include<iostream>
// using namespace std;

// int main() {
//     char arr[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
//     char v;
//     cout << "Enter the letter" << endl;
//     cin >> v;
//     for(int i = 0; i < 100; i++) {
//         if (arr[i] == v) {
//             cout << "Vowel found " << endl;
//             break;
//         }
//     }

//     return 0;
// }

// FACTORIAL

// #include<iostream>
// using namespace std;

// int main() {

//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     int fact = 1;
//     for(int i = 1; i <= n ; i++) {
//        fact = fact * i;

//     }
//     cout << fact << endl;
//     return 0;
// }

// REVERSE STRING
//  #include<iostream>
//  using namespace std;

// void reverse(string& str, int i, int j) {
//     for(int i = 0; i < j; i++) {
//         swap(str[i], str[j]);

//         j--;
//     }
// }

// int main() {

//     string str;
//     cout << "Enter the name" << endl;
//     getline(cin, str);
//     reverse(str, 0, str.length() - 1);
//     cout << "The Reverse is : " << str << endl;

//     return 0;
// }

// AVERAGE CALCULATION
//  #include<iostream>
//  using namespace std;

// int main() {
//     float n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         int num;
//         cout << "Enter element " << i << ": ";
//         cin >> num;
//         sum += num;
//     }

//     double average = static_cast<double>(sum) / n;

//     cout << "Average is " << average << endl;

//     return 0;
// }

// Multiplication Table Range:
// Take two numbers as input (start and end) and use a for loop to print the multiplication table for those numbers. give logic of it.
//  #include<iostream>
//  using namespace std;

// int main() {

//     int start;
//     cout << "Enter the number from where u will start" << endl;
//     cin >> start;
//     int end;
//     cout << "Enter the number at where u will end" << endl;
//     cin >> end;

//     for(int i = start; i <= end; i++) {
//         cout << "Write the table of " << i << endl;
//         for(int j = 1; j <= 10; j++) {
//             cout << i << " * " << j << " = " << i * j << endl;
//         }
//     }
//     return 0;
// }

// Average of Odd Numbers:
// Take two numbers as input (start and end) and calculate the average of all odd numbers between them.
//  #include<iostream>
//  using namespace std;

// int main() {

//     int start;
//     cout << "Enter the number from where u will start" << endl;
//     cin >> start;
//     int end;
//     cout << "Enter the number at where u will end" << endl;
//     cin >> end;
//     int sum = 0;
//     int count = 0;
//     for(int i = start; i <= end; i++) {
//         if (i % 3 == 0) {
//             sum = sum + i;
//             count++;
//         }
//     }
//      if (count != 0) {
//         cout << "Average of numbers divisible by 3: " << sum / count << endl;
//     } else {
//         cout << "No numbers divisible by 3 found in the range." << endl;
//     }
//     return 0;
// }

// Sum of Squares:
//  Calculate and print the sum of squares of numbers from 1 to 10 using a for loop.

// #include<iostream>
// using namespace std;

// int main() {

//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     int sum = 0;
//     for(int i = 1; i <= n; i++) {
//         cout << "Square of " << i << " is " << i * i << endl;
//         sum = sum + (i * i);
//     }
//     cout << "Total sum of square of numbers from 1 to 10 is : " << sum << endl;
//     return 0;
// }

// Sum of Digits:
// Take an integer input from the user and calculate the sum of its digits using a while loop.

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     int sum = 0;
//     while(n != 0) {
//         int digit = n % 10;
//         n = n / 10;
//         sum = sum + digit;
//     }
//     cout << "The sum is : " << sum << endl;
//     return 0;
// }

// Palindrome Check:
// Write a program to check if a given string is a palindrome or not using a while loop.

// #include<iostream>
// using namespace std;

// int main() {

//     string str;
//     getline(cin, str);
//     int i = 0;
//     int j = str.length() - 1;
//     bool isPal = true;

//     while(i < j) {
//         if (str[i] != str[j]) {    //You are using return inside the loop, which will exit the entire function immediately. Instead, you should use break to exit the loop and continue with the rest of the code.
//             isPal = false;
//             break;
//         }
//         i++;
//         j--;
//     }

//     if(isPal) {
//         cout << "Yes! this is a Palindrome" << endl;
//     } else {
//         cout << "No! this is not a Palindrome" << endl;
//     }
//     return 0;
// }

// Guess the Number Game:
// Implement a simple "guess the number" game using a while loop. The program generates a random number, and the user has to guess it.

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 249;
//     int target;
//     cout << "Enter the number" << endl;
//     cin >> target;
//     while (target > 0)
//     {
//         if (n == target)
//         {
//             cout << "You have entered the right answer that is " << target << endl;
//             break;
//         }

//         if (n != target)
//         {
//             cout << "Wrong answer. Plz try again" << endl;
//             cin >> target;
//         }
//     }
//     return 0;
// }

// ANOTHER WAY

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 249;
//     int target;

//     cout << "Welcome to the Guess the Number Game!" << endl;
//     cout << "Enter your guess: ";
//     cin >> target;

//     while (target != n)
//     {
//         cout << "Wrong answer. Please try again: ";
//         cin >> target;
//     }

//     cout << "Congratulations! You guessed the number right: " << target << endl;

//     return 0;
// }

//FIBONACCI SERIES
// #include<iostream>
// using namespace std;

// int fibo(int n) {
//     while(n != 0 || n != 1) {
//         return fibo(n - 1) + fibo(n - 2);
//     }
//      cout << "Fibonacci number of " << n << endl;
    
    
// }
// int main() {
    
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;

//     fibo(n);
//     // cout << "Fibonacci number of " << n << " is " << ans << endl;
    
   
//     return 0;
// }

/* Example:

Start with the given positive integer: 6
Since 6 is even, divide it by 2: 6 / 2 = 3
Now, 3 is odd, so multiply it by 3 and add 1: (3 * 3) + 1 = 10
10 is even, so divide it by 2: 10 / 2 = 5
5 is odd, so multiply it by 3 and add 1: (5 * 3) + 1 = 16
16 is even, so divide it by 2: 16 / 2 = 8
Continue this process until you reach 1.
The Collatz sequence for the initial number 6 would be: 6, 3, 10, 5, 16, 8, 4, 2, 1. */
// #include<iostream>
// using namespace std;

// void generateCollatzSequence(int n) {
//     while(n != 1) {
//         cout << n << " ";
//         if (n % 2 == 0) {
//             n = n / 2;
//         } else {
//             n = (3 * n) + 1;
//         }
//     }
//     cout << n << endl;
        
// }

// int main() {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     cout << "Collatz sequence for " << n << ": ";
//     generateCollatzSequence(n);
   
//     return 0;
// }
//Question 1: Generate Collatz Sequence Length
//Write a function to calculate and return the length of the Collatz sequence for a given positive integer. The length is the count of elements in the sequence, including the initial number and 1.

#include<iostream>
using namespace std;

void generateCollatzSequence(int n) {
    int count = 1;
    while(n != 1) {
       
        cout << n << " ";
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
        count++;
    }
    cout << n << endl;
    cout << "Total elements are " << count;
        
}

int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Collatz sequence for " << n << ": ";
    generateCollatzSequence(n);
   
    return 0;
}