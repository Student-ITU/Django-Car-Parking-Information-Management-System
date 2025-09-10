//Reverse Array:
//Reverse the elements of an array in-place (without using additional arrays).
// #include<iostream>
// using namespace std;

// void reverse(string arr, int i, int j) {
//     while(i < j) {
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
//     cout << "The reverse is " << arr << endl;;
// }
// int main() {
//     string arr;
//     cout << "Enter the number" << endl;
//     getline(cin, arr);
//     reverse(arr, 0, arr.length() - 1);

//     return 0;
// }

//Largest Element:
//Find and print the largest element in an array.
// #include<iostream>
// using namespace std;
 
// int main() {
//     int arr[10] = {13, 23, 35, 49, 55, 61, 87, 99, 92, 66};
//     int maxi = INT_MIN;
//     for(int i = 0; i < 10; i++) {
//         if (maxi < arr[i]) {
//             maxi = arr[i];
//         } 
       
//     }
//     cout << "The largest number is " << maxi;
//     return 0;
// }

//Smallest number
// #include<iostream>
// using namespace std;
 
// int main() {
//     int arr[10] = {13, 23, 35, 1, 55, 61, 87, 99, 92, 66};
//     int mini = INT_MAX;
//     for(int i = 0; i < 10; i++) {
//         if (mini > arr[i]) {
//             mini = arr[i];
//         } 
       
//     }
//     cout << "The smallest number is " << mini;
//     return 0;
// }

//Array Copy:
//Copy the elements of one array into another array.
#include<iostream>
using namespace std;
 
int main() {
    int i;
    int source[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int destination[10];

    for(int i = 0; i < 10; i++) {
        destination[i] = source[i];      
    }
      
    cout << "Copy Elements" << endl;
    for(int i = 0; i < 10; i++) {
        cout << destination[i] << " ";      
    }
    return 0;
}

//Array Search:
//Write a program to search for a specific element in an array and print its index if found.

// #include<iostream>
// using namespace std;
 
// int main() {
    
//     int arr[10];
//     cout << "Enter the elements of array" << endl;
//     for(int i = 0; i < 10; i++) {
//         cin >> arr[i];
//     }

//     int target;
//     cout << "Enter the number" << endl;
//     cin >> target;

//     for(int i = 0; i < 10; i++) {
//         if (arr[i] == target) {
//             target = arr[i];
//             cout << "The number to find is " << target << endl;
//             return 0;
//         } 
        
//     } 
//     cerr << "Number is not found" << endl;

//     return 0;
// }

//Multiply by Factor:
//Multiply each element of an array by a user-specified factor and display the modified array.

// #include<iostream>
// using namespace std;
 
// int main() {
    
//     int arr[5];
//     cout << "Enter the elements of array" << endl;
//     for(int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }

//     int n;
//     cout << "Enter the factor u wanna multiply the elements of array with" << endl;
//     cin >> n;

//     for(int i = 0; i < 5; i++) {
//         cout << arr[i] * n << " ";
//     }


//     return 0;
// }