#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    if (size == 0 || size == 1){
        return true;
    }

    if (arr[0] > arr[1]) {
        return false;
    } else {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}
int main() {

    int arr[5] = {1, 3, 4, 5, 7};
    int size = 5;
    bool ans = isSorted(arr, size);
    if (ans) {
        cout << "Array is Sorted" << endl;
    } else {
        cout << "Array is not Sorted" << endl;
    }

    return 0;
}



#include<iostream>
using namespace std;

int calculateSum(int arr[], int n) {
    if (n == 0) {
        return 0;
    }

    return arr[n - 1] + calculateSum(arr, n - 1);
}

int main() {
    int arr[] = {3, 2, 5, 1, 6};
    int size = 5;

    int sum = calculateSum(arr, size);

    cout << "The sum is: " << sum << endl;

    return 0;
}

// RECURSION 4  Recursion with string***************

#include<iostream>
using namespace std;

void reverse(string& str, int i, int j) {
    if (i > j) {
        return ;
    }

    swap(str[i], str[j]);
    reverse(str, i + 1, j - 1);
}

int main() {
    
    string name;
    cout << "Enter the Word" << endl;
    getline(cin, name);
    reverse(name, 0, name.length() - 1);
    cout << "Reverse of your word is : " << name << endl;
    
    return 0;
}

// //PALINDROME

#include<iostream>
using namespace std;
bool palindrome(string str, int i, int j) {
    
    if(i > j) {   // cross ho gai tou mtlab palindrome hai
        return true;
    }

    if (str[i] != str[j]) {
        return false;
    }

    if (str[i] == str[j]) {
        return true;
    }
   
    return palindrome(str, i + 1, j - 1);
   
}

int main() {
    
    string name;
    cout << "Enter the Word" << endl;
    getline(cin, name);

    bool isPalindrome = palindrome(name, 0, name.length() - 1);
    if (isPalindrome) {
        cout << "IT IS A PALINDROME" << endl;
    }
    else {
         cout << "IT IS NOT A PALINDROME" << endl;
    }

    return 0;
}


// // CALCULATING POWER USING RECURSION


// // #include<iostream>
// // using namespace std;

// // int power(int a, int b) {

// //     if (b == 0) {
// //         return 1;
// //     }

// //     return a * power(a, b - 1);


// // }

// // int main() {

// //     int a, b;
// //     cout << "Enter the numbers" << endl;
// //     cin >> a >> b;
// //     int p = power(a, b);
// //     cout << "The Power of " << a << " is " << p << endl;
// //     return 0;
// // }

// //Create a recursive function to find the sum of the digits of a positive integer. For example, the sum of the digits of 123 would be 1 + 2 + 3 = 6.

#include<iostream>
using namespace std;

int sum(int n) {

    int sum2 = 0;
    if (n == 0) {
        return 0;
    }

    int digit = n % 10;
    n = n / 10;
    return digit + sum(n);  //Sath sath update kr raha us ko jo mein ne kia tha sum(n) woh galat tha in case of recursion
    // sum2 = sum2 + digit;
    // sum2 = sum2 + sum(n);
    // return sum2;
}

int main() {
    
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;
    int sum1 = sum(n);
    cout << "The Sum is " << sum1 << endl;

    return 0;
}

// // FIND BOOK

#include<iostream>
using namespace std;

bool find(string str[], int index, string str1) {

    if (index >= 5) {
        return false;
    }

    if (str[index] == str1) {
        return true;
    }
    // else {
    //     return false;  YAHA YEH IS LIE NHI LIKHNA KYUNKE AGAR BOOK 1 FIND NA HOYE TOU IS NE FALSE RETURN KRNA AND CODE KHATAM HO JANA 
    // }
    
    return find(str, index + 1, str1);



}
int main() {
    
    string str[] = {"BOOK 1", "BOOK 2", "BOOK 3", "BOOK 4", "BOOK 5"};
    string str1;
    cout << "Enter the name of the book u wanna find" << endl;
    getline(cin, str1);
    bool found = find(str, 0, str1);
    if (found) {
        cout << "Yes! your Book has been found" << endl;
    }
    else {
        cout << "Sorry! we couldn't find the book" << endl;
    }
    return 0;
}

// //Write a recursive function to check if a given string is a palindrome. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization).

#include<iostream>
using namespace std;

bool palindrome(string n, int i, int j) {

    if (i > j) {
        return true;
    }

    if (n[i] != n[j]) {
        return false;
    }

    return palindrome(n, i + 1, j - 1);
}

int main() {
    
    string n;
    getline(cin, n);
    bool pal = palindrome(n, 0, n.length() - 1);

    if (pal) {
        cout << "Yes! This is a Palindrome" << endl;
    }
    else {
        cout << "NO! This is not a Palindrome" << endl;
    }
    return 0;
}

// // Write a recursive function to reverse a given string. For example, the reverse of "hello" should be "olleh".

#include<iostream>
using namespace std;

void Reverse(string& str, int i, int j) {   //hm ne & is lie lagya kyun ke return nhi kr rha woh kyunke void hai is lie woh sirf us ke andar he change ho ga or main mein change nhi rhy ga lakin & lagaya tou copy nhi bane woh he string bane...
    if (i > j) {
        return ;
    }

    swap(str[i], str[j]);
    // i++;
    // j--; 

    Reverse(str, i + 1, j - 1);
    

}

int main() {
    
    string str;
    cout << "Enter the Word" << endl;
    getline(cin, str);
    Reverse(str, 0, str.length() - 1);
    cout << "The Reverse is " << str << endl;

    return 0;
}