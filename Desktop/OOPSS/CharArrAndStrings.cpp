// #include<iostream>
// using namespace std;
// int main(){
//     char name[20]; // yeh woh he space wala scene
//     cin >> name;
//     cout << name;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     char name[20]; // jaha \0 lagaya waha stop ho jai ga aik yeh cheez
//     cin >> name;
//     name[2] = '\0';
//     cout << name;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int getLength(char name[]){
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     char name[20]; // Length of array Question
//     cin >> name;
//     cout << name << endl;
//     cout << "Your length is: " << getLength(name) << endl;
//     return 0;
// } 

//REVERSE STRING

// #include <iostream>
// using namespace std;

// void reverse(char name[], int n) {
//     int s = 0;
//     int e = n - 1;

//     while(s < e) {
//         swap(name[s++], name[e--]);
//     }
// }
// int main() {
    
//     char name[20];
//     cin >> name;

//     reverse(name, 6);
//     cout << "The reverse is " << name << endl; //getlength kar ke kar lo ge tou 6 wagera likhne ke zarurat nhi pare ge arram se length nikal jai ge automatically kuch change krne ke zarurat nhi pare ge
//     return 0;
// }

/*char s = {'a', 'b', 'c'}; and char s = "abc"; and string s = "abc"; what is the difference in all 3 1st question, 2nd question when to use which one, and thirs null character kab khud likhna or kab khud lik deta compiler

ChatGPT
Let's break down the differences between char s[] = {'a', 'b', 'c'};, char s[] = "abc";, and string s = "abc";.

1. char s[] = {'a', 'b', 'c'};
This declares an array of characters (char) and initializes it with individual characters. It's important to note that with this approach, the array s is not null-terminated. If you want to use it as a string, you should manually add a null character at the end: char s[] = {'a', 'b', 'c', '\0'};. This is necessary if you plan to treat s as a C-style string and use string functions that rely on null-termination.

2. char s[] = "abc";
This declares and initializes a character array (char) and automatically adds a null character ('\0') at the end. The compiler infers the size of the array based on the length of the string literal. This is a common way to initialize strings in C.

3. string s = "abc";
This uses the C++ string class, which is part of the Standard Template Library (STL). It provides dynamic memory management and various member functions for string manipulation. Unlike C-style strings, std::string automatically handles the null-termination, and its size can be easily obtained using the size() member function.

When to use which one:
Use char s[] = {'a', 'b', 'c', '\0'}; when:
You are working with C-style strings, and you need to ensure null-termination manually.
Use char s[] = "abc"; when:
You are working with C-style strings, and you want the compiler to handle null-termination automatically.
Use string s = "abc"; when:
You are working with C++ and can use the std::string class.
You want dynamic memory management, ease of use, and a range of string manipulation functions provided by the C++ standard library.
Null character:
When to write it explicitly ('\0'):
In C-style strings, whenever you are manually initializing an array and need to ensure null-termination.
When the compiler adds it automatically ("abc"):
In string literals, the compiler automatically adds a null character at the end.
It's important to choose the appropriate approach based on the requirements of your program and the string manipulation capabilities you need. If you are working with C++, using std::string is generally preferred for its convenience and safety.

User
char s[] = {'a', 'b', 'c', '\0'};  char s[] = "abc"; in dono ka name ya hai matlab inh kehte kya

ChatGPT
Both char s[] = {'a', 'b', 'c', '\0'}; and char s[] = "abc"; are examples of initializing character arrays in C.

char s[] = {'a', 'b', 'c', '\0'};:

This is a character array initialized with individual characters.
The explicit null character ('\0') at the end ensures that it is null-terminated, making it a C-style string.
The name of this array is s.
char s[] = "abc";:

This is a character array initialized with a string literal.
The compiler automatically adds a null character ('\0') at the end, making it a null-terminated C-style string.
The name of this array is also s.
Both declarations result in a character array named s, but they differ in the way they are initialized. The first one explicitly lists individual characters, while the second one uses a string literal, and the null character is added automatically by the compiler. */

//Check Palindrome
// #include <iostream>
// using namespace std;

// bool palindrome(string s, int i, int j) {
//     bool ans = true;
//     while(i < j) {

//         if (s[i] != s[j]) {
//             ans = false;
//             return ans;
//         }

//         // if (s[i] == s[j]) {
//         //     return true;
//         // }
//         else {
//         i++;
//         j--;
//         }
//     }
//     ans = true;
//     return ans;
// }
// int main() {
    
//     string s;
//     cout << "Enter the word" << endl;
//     getline(cin, s);

//     bool ans = palindrome(s, 0, s.length() - 1);

//     if (ans) {
//         cout << "Yes, this is a Palindrome" << endl;
//     } else {
//         cout << "No, this is not a Palindrome" << endl;
//     }
//     return 0;
// }

// add @40 where there is space
// #include <iostream>

// int main() {
//     std::string str;

//     // Input the string with words
//     std::cout << "Enter a string with words: ";
//     std::getline(std::cin, str);

//     std::string modifiedStr; // Initialize an empty string to store the modified version

//     // Iterate over the original string
//     for (int i = 0; i < str.length(); ++i) {
//         if (str[i] == ' ') {
//             modifiedStr.push_back('@');
//             modifiedStr.push_back('4');
//             modifiedStr.push_back('0');
//         } else {
//             modifiedStr.push_back(str[i]); // Copy non-space characters directly
//         }
//     }

//     // Output the modified string
//     std::cout << "Modified string: " << modifiedStr << std::endl;

//     return 0;
// }


//FAST 3 lab
// #include<iostream>
// using namespace std;
// int main() {

// //Exercise 1
// char charArray[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
// // \0 yeh likhne ka fiada he hai, or ese he c-style string kehte hain jis mein \0 laga dein akhir mein jb ke agar na likhte \0 tou woh simple character array khelate
// cout << charArray << endl;
// }

//Part 3 Q -> 1
// #include <iostream>
// using namespace std;

// int StringLength(char* myStr1) {
//     int count = 0;

//     for (int i = 0; i < *myStr1; i++) {
//        if (myStr1[i] == '\0') {
//         break;
//        } else {
//         count++;
//        }
//     }

//     return count;
// }
// int main() {
    
//     char myStr1[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0' };
//     // char myStr1[] = "Hello World";
//     int ans = StringLength(myStr1);
//     cout << "The length is : " << ans;
//     return 0;
// }
#include <iostream>
using namespace std;

int StringLength(char* myStr1) {
    int count = 0;

    for (int i = 0; myStr1[i] != '\0'; i++) {
        count++;
    }

    return count;
}

int main() {
    char myStr1[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0' };
    int ans = StringLength(myStr1);
    cout << "The length is : " << ans;
    return 0;
}
