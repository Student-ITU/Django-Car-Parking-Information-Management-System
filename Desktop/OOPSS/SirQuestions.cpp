#include <iostream>
using namespace std;
 
int isPalindrome(string str, int i, int j) {

    for (int i = 0; i < str; i++) {
        swap(str[i], str[j]);
    }
    
}

int main() {
    
    int i = 0;
    int j;
    string str;
    cout << "Enter the word" << endl;
    cin >> str;
    int result = isPalindrome(str, i, str.length() - 1);
    cout << "Answer is" << result << endl;

    return 0;
}