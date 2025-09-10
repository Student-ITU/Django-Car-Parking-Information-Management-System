// #include<iostream>
// using namespace std;
// // ROW WISE
// int main() {
    
//     int arr[3][4];
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     for(int i = 0; i < 3; i++) {
//         cout << "Row no. " << i << endl;
//         for(int j = 0; j < 3; j++) {
//             // cout << "Row no. " << i << " -> " << arr[i][j] << " ";
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

    // return 0;
// }

//

// #include<iostream>
// using namespace std;
// //COLOMN WISE 
// int main() {
    
//     int arr[3][4];
//     for(int j = 0; j < 4; j++) {
//         for(int i = 0; i < 3; i++) {
//             cin >> arr[i][j];
//         }
//     }

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//

// #include<iostream>
// using namespace std;
// //IN CASE WE DON'T TAKE INPUT
// int main() {
    
//     int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//

// #include<iostream>
// using namespace std;
// //IN CASE HAM KHUD BATAIN KE KON SE ELEMENTS HONE CHAYE
// int main() {
    
//     int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


//TO FIND ELEMENT BY LINEAR SEARCH


// #include<iostream>
// using namespace std;
 
// bool isPresent(int arr[][4], int target, int row, int col);

// int main() {
    
//     int arr[3][4];
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     int target;
//     cout << "Enter the Target" << endl;
//     cin >> target;
//     bool ans = isPresent(arr, target, 3, 4);
//     if (ans) {
//         cout << "Target found which is " << target << endl;
//     } else {
//         cout << "Target not found" << endl;
//     }
//     return 0;
// }

// bool isPresent(int arr[][4], int target, int row, int col) {
    
    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 4; j++) {

    //         if (arr[i][j] == target) {
    //             return true;
    //          }
            //else {
            //     return false;
            // } 
            //**IMPORTANT**The problem is that the return false; statement is inside the inner loop (for(int j = 0; j < 4; j++)). As soon as the first element is checked and it doesn't match the target, the function will return false without checking the remaining elements. This is because the return false; statement is inside the else block, and it executes immediately when a non-matching element is encountered.
            
//         }
//     }
//     return false;
// }

// SUM

// #include<iostream>
// using namespace std;

// int sum(int arr[][4], int i, int j) {
//     int sum = 0;
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             sum = sum + arr[i][j];
//         }
//     }
//     return sum;
// }
// int main() {
    
//     int arr[3][4];
//     cout << "Enter the elements" << endl;
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     int ans = sum(arr, 3, 4);
//     cout << "The Sum is " << ans << endl;
//     return 0;
// }

/*Row-wise SUM like 3  2  2 = 7
                    2  12 1 = 15 */

// #include<iostream>
// using namespace std;
// //When passing a two-dimensional array to a function, you must specify the number of columns as a constant when you write the parameter type, so the compiler can pre-calculate the memory addresses of individual elements.
// void sum(int arr[][4], int i, int j) {
//     for(int i = 0; i < 3; i++) {
//         int sum = 0; /*Effect: The int sum = 0; statement is inside the outer loop, so a new sum is created for each row.

//         Impact: After processing each row, sum is reset to 0 for the next row. It calculates the sum independently for each row.*/
//         for(int j = 0; j < 4; j++) {
//             sum = sum + arr[i][j];
//         }
//         cout << sum << endl;
//     }
    
// }
// int main() {
    
//     int arr[3][4];
//     cout << "Enter the elements" << endl;
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     sum(arr, 3, 4);
//     return 0;
// }

//Col wise Sum

// #include<iostream>
// using namespace std;
//When passing a two-dimensional array to a function, you must specify the number of columns as a constant when you write the parameter type, so the compiler can pre-calculate the memory addresses of individual elements.
// void sum(int arr[][4], int i, int j) {
//     for(int j = 0; j < 4; j++) {
//         int sum = 0; 
//         for(int i = 0; i < 3; i++) {
//             sum = sum + arr[i][j];
//         }
//         cout << sum << endl;
//     }
    
// }
// int main() {
    
//     int arr[3][4];
//     cout << "Enter the elements" << endl;
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     sum(arr, 3, 4);
//     return 0;
// }
/*1 2 3 4 5 6 7 8 9 10 11 12
15
18
21
24
It is like  :-
1 5 9   = 15
2 6 10  = 18
3 7 11  = 21
4 8 12  = 24 */

//LARGEST ROW SUM


// #include<iostream>
// using namespace std;
//When passing a two-dimensional array to a function, you must specify the number of columns as a constant when you write the parameter type, so the compiler can pre-calculate the memory addresses of individual elements.
// void sum(int arr[][4], int i, int j) {
//     for(int i = 0; i < 3; i++) {
//         cout << "Sum of Row no." << i << endl;
//         int sum = 0; 
//         for(int j = 0; j < 4; j++) {
//             sum = sum + arr[i][j];
//         }
//         cout << "Row no. " << i << " -> " << sum << " " << endl;
        
//     }
    
// }

// int largestRow(int arr[][4], int i, int j) {
    // int maxi = INT_MIN;
    // for(int i = 0; i < 3; i++) {
    //     int sum = 0; 
    //     for(int j = 0; j < 4; j++) {
    //         sum = sum + arr[i][j];
    //     }
    //     if (maxi < sum) {
    //         maxi = sum;
    //     }
    // }
    // cout << "The Maximum Sum is" << maxi << endl; 
//     return maxi;

// }

// int main() {
    
//     int arr[3][4];
//     cout << "Enter the elements" << endl;
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     sum(arr, 3, 4);
//     int ans = largestRow(arr, 3, 4);
//     cout << "The Largest row is " << ans << endl;
//     return 0;
// }

// WAVE ORDER PRINTING 

