// FACTORIAL
//  #include<iostream>
//  using namespace std;

// int fact(int n) {
//     if (n == 0) {
//         return 0;
//     }

//     if (n == 1) {
//         return 1;
//     }

//     return n * fact(n - 1);
// }

// int main() {

//     int n;
//     cout << "Enter number" << endl;
//     cin >> n;
//     int ans = fact(n);
//     cout << "Ans is " << ans << endl;

//     return 0;
// }

// POWER
//  #include<iostream>
//  using namespace std;

// int power(int a, int b) {
//     if (b == 0) {
//         return 1;
//     }

//     return a * power(a, b - 1);
// }
// int main() {

//     int a, b;
//     cout << "Enter number" << endl;
//     cin >> a >> b;
//     int ans = power(a, b);
//     cout << "Ans is " << ans << endl;

//     return 0;
// }

// COUNTING
//  #include<iostream>
//  using namespace std;

// void counting(int n) {
//     if (n == -1) {
//         return;
//     }

//     counting(n - 1);
//     cout << n << endl;

// }
// int main() {

//     int n;
//     cin >> n;
//     counting(n);

//     return 0;
// }

// SOURCE = DESTINATION
//  #include<iostream>
//  using namespace std;

// void arrival(int src, int dest) {
//     if (src > dest) {
//         return;
//     }
//     if (src <= 9) {
//         cout << "Source is " << src << " and " << " destination is " << dest << ", didn't reach home yet " << endl;
//     }

//     if (src == dest) {
//         cout << "Source is " << src << " and " << " destination is " << dest << ", So you have reached home successfully " << endl;

//     }

//     src++;
//     arrival(src, dest);
// }

// int main() {

//     int src;
//     cout << "Enter the source " << endl;
//     cin >> src;
//     int dest;
//     cout << "Enter the destination" << endl;
//     cin >> dest;

//     arrival(src, dest);

//     return 0;
// }

// SAY DIGITS
//  #include<iostream>
//  using namespace std;

// void sayDigit(string arr[], int n) {
//     if (n == 0) {
//         return;
//     }

//     int digit = n % 10;
//     n = n / 10;
//     sayDigit(arr, n);
//     cout << arr[digit] << " ";
// }

// int main() {

//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     string arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

//     sayDigit(arr, n);
//     return 0;
// }

// ARRAY SORTED OR NOT

// #include<iostream>
// using namespace std;

// bool isSorted(int arr[], int size) {
//     if (size == 0 || size == 1) {
//         return true;
//     }

//     if (arr[0] > arr[1]) {
//         return false;
//     } else {
//         return isSorted(arr + 1, size - 1);
//     }

// }
// int main() {
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     int size = 6;
//     bool ans = isSorted(arr, 6);
//     if (ans) {
//         cout << "ARRAY IS SORTED" << endl;
//     } else {
//         cout << "ARRAY IS NOT SORTED" << endl;
//     }
//     return 0;
// }

// SUM USING RECURSION

// #include<iostream>
// using namespace std;

// int sum(int *arr, int size) {
//     if (size == 0) {
//         return 0;
//     }

//     return arr[0] + sum(arr + 1, size - 1);
// }

// int main() {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;

//     int *arr = new int[n];
//     cout << "Enter the elements" << endl;
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int sum1 = sum(arr, n);
//     cout << "The sum is : " << sum1 << endl;
//     return 0;
// }

// REVERSE OF WORD

// #include<iostream>
// using namespace std;

// void reverse(string& n, int i, int j) {  //COPY BANE HAI AGAR & NHI LAGAIN GE TOU RETURN KARE GA HE NHI TOU CHANGE HE NHI HO GA IS TRHA & LAGAYA HO GA TOU COPY NHI BANE GE DONO MEIN CHANGE HO GA
//     if (i > j) {
//         return;
//     }

//     swap(n[i], n[j]);
//     reverse(n, i + 1, j - 1);

// }

// int main() {

//     string n;
//     cin >> n;
//     reverse(n, 0, n.length() - 1);
//     cout << "Reverse of your word is : " << n << endl;

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
//     {
//         cout << "IT IS NOT A PALINDROME" << endl;
//     }
//     return 0;
// }

// FIND BOOK
#include <iostream>
using namespace std;

bool found(string str[], int i, string str1) {
    if (i > 6) {
        return false;
    }

    if (str[0] == str1) {
        return true;
    }
    // else 
    // {
    //     return false;  //YAHA YEH S LIE NHI LIKHNA KE AGAR BOOK 0 INDEX WALE NA MILE TOU WOH FALSE DE KE SORRY WALE STATEMENT PRINT KR DE GA
    // }
    
    return found(str + 1, i + 1, str1);
}

int main()
{

    string str[] = {"BOOK 1", "BOOK 2", "BOOK 3", "BOOK 4", "BOOK 5"};
    string str1;
    cout << "Enter the name of the book u wanna find" << endl;
    getline(cin, str1);
    bool find = found(str, 0, str1);
    if (find)
    {
        cout << "Yes! your Book has been found" << endl;
    }
    else
    {
        cout << "Sorry! we couldn't find the book" << endl;
    }
    return 0;
}