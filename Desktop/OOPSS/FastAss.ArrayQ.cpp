// #include <iostream>
// using namespace std;
 
// int main() {

//     int r1, c1, r2, c2;
//     cout << "Enter the rows of 1st matrix" << endl;
//     cin >> r1;
//     cout << "Enter the columns of 1st matrix" << endl;
//     cin >> c1;
//     cout << "Enter the rows of 2nd matrix" << endl;
//     cin >> r2;
//     cout << "Enter the columns of 2nd matrix" << endl;
//     cin >> c2;

//     int matrix[r1][c1], matrix1[r2][c2], result[r1][c1];

//     if (c1 != r2) {
//         return 0;
//     }

//     for (int row = 0; row < r1; row++) {
//         for (int col = 0; col < c1; col++) {
//             cin >> matrix[r1][c1];
//         }
//     }

//     for (int row = 0; row < r2; row++) {
//         for (int col = 0; col < c2; col++) {
//             cin >> matrix1[r2][c2];
//         }
//     }

//     for (int row = 0; row < r1; row++) {
//         for (int col = 0; col < c2; col++) {
//             for (int k = 0; k < ; k++) {
 
//             }
//         }
//     }
//     return 0;
// }


//memory allocation ke lie size dete parameter mein 2d array ke


// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int Array[2][2];
//     int sum = 0, sum1;
    
//     cout << "Enter the numbers" << endl;
//     for (int row = 0; row < 2; row++) {
//         for (int col = 0; col < 2; col++) {
//             cin >> Array[row][col];
//         }
//     }

//     for (int row = 0; row < 2; row++) {
//         for (int col = 0; col < 2; col++) {
           
//         }
//     }



//     for (int row = 0; row < 2; row++) {
//         for (int col = 0; col < 2; col++) {
//            sum = sum + Array[row][col];
//         }
//     }
//     cout << "Sum of all elements -> " << sum << endl;
//     cout << "Square of sum all elements in the matrix -> " << " ";
//     sum1 = sum * sum;
//     cout << sum1 << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// void arrange(char my_Array[], int n) { //ask from sir jab 11 likhte elements tou sahi ho raha but jab 10 tou galat
//     int c, cc, ccc;
//     int count = 0, count1 = 0, count2 = 0;
//     for (int row = 0; row < 10; row++) {

//         if (my_Array[row] == 'a') {
//             count++;
//             c = count;
//         }

//         if (my_Array[row] == 'b') {
//             count1++;
//             cc = count1;
//         }

//         if (my_Array[row] == 'c') {
//             count2++;
//             ccc = count2;
//         }
//     }

//     for (int row = 0; row < c; row++) {
//         my_Array[row] = 'a';
//     }

//     for (int row = c; row < cc + c; row++) {
//         my_Array[row] = 'b';
//     }

//     for (int row = cc + c; row < ccc + cc + c; row++) {
//         my_Array[row] = 'c';
//     }

// }

// int main() {
    
//     char my_Array[10] = {'a', 'b', 'c', 'b', 'c', 'a', 'b', 'a', 'c', 'b'};

//     cout << "Before" << endl;
//     for (int row = 0; row < 10; row++) {
//         cout << my_Array[row] << " ";
//     }
    // cout << endl;

    // arrange(my_Array, 10);

    // cout << "After" << endl;
    // for (int row = 0; row < 10; row++) {
    //     cout << my_Array[row] << " ";
    // }

    // return 0;
// }




// #include <iostream>
// using namespace std;
 
// int main() {
    
//     const int m = 3;
//     const int n = 3;
//     int sum = 0, average = 0;
//     int Array[m][n];

//     cout << "Enter the numbers" << endl;
//     for (int row = 0; row < m; row++) {
//         for (int col = 0; col < n; col++) {
//             cin >> Array[row][col];
//         }
//     }

//     for (int row = 0; row < m; row++) {
//         int max = INT_MIN, min = INT_MAX; sum = 0;
//         for (int col = 0; col < n; col++) {
//             sum = sum + Array[row][col];

//             if (Array[row][col] > max) {
//                 max = Array[row][col];
//             }

//             if (Array[row][col] < min) {
//                 min = Array[row][col];
//             }
//         }
//         cout << "Sum of row " << row + 1 << " is -> " << sum << endl;
//         average = sum / n;
//         cout << "Average of row " << row + 1 << " is -> " << average << endl;
//         cout << "The maximum marks from row " << row + 1 << " is -> " << max << endl;
//         cout << "The minimum marks from row " << row + 1 << " is -> " << min << endl;
//     }

//     return 0;
// }


/*Write a Menu Driven C++ program that creates one-dimensional array arr[] and initialize it with user. The
program should do following Tasks using Menu, the menu operations are implemented using functions:
a) Write a function Count(), that counts the occurrences of x (a number) in arr[].
b) Write a function Partition(), that take the first element of the array x and put x in a position such
that all smaller elements (smaller than x) are before x, and put all greater elements (greater
than x) after x.
c) Write a function next_XOR(),the count of elements which are equal to the XOR of the next two
elements.
d) Write a function Duplicates(),which calculated the frequencies of all the elements and display
them.
e) Write a function Circular(),which replace every element of the array by the sum of next two
consecutive elements in a circular manner i.e. arr[0] = arr[1] + arr[2], arr[1] = arr[2] + arr[3],
… arr[n – 1] = arr[0] + arr[1].
f) Write a function Search(), takes an array and element to search in the array and returns the
index of element if the element is found. And return the negative number if not found.
g) Write a function shift_Circular (), which shifts an array circularly left by two positions. Thus, if
p[0] = 15, p[1]= 30, p[2] = 28, p[3]= 19 and p[4] = 61 then after the shift p[0] = 28, p[1] = 19, p[2]
= 61, p[3] = 15 and p[4] = 30.*/

// #include <iostream>
// using namespace std;
 
// int main() {
    

//     return 0;
// }


//


/*We are given two sorted arrays (all elements are in ascending order. We need to merge these two arrays
such that the initial numbers (after complete sorting) are in the first array and the remaining numbers are in
the second array.*/

// #include <iostream>
// using namespace std;

// int main() {
    
//     int idx;
//     const int m = 8;
//     const int n = 5;
//     const int a = m + n;

//     int Array[m] = {1, 9, 11, 13, 19, 200, 222, 23, 21};
//     int Array1[n] = {0, 3, 101, 111, 201};
//     int Array2[a];

//     for (int row = 0; row < a; row++) {

//         if (row <= m) {
//             Array2[row] = Array[row];
//         }

//         if (row >= n) {
//             Array2[row] = Array1[row - m];
//         }
//     }

//     cout << endl;
//     cout << "Array is ->" << endl;
//     for (int row = 0; row < a; row++) {
//         cout << Array2[row] << " ";
//     }
//     cout << endl << endl;

//     cout << "Array after sorting is ->" << endl;
//     for (int i = 0; i < a - 1; i++) {
//         idx = i;

//         for (int j = i + 1; j < a; j++) {
//             if (Array2[j] < Array2[idx]) {
//                 idx = j;
//             }
//         }

//         if (idx != i) {
//             int temp = Array2[i];
//             Array2[i] = Array2[idx];
//             Array2[idx] = temp;
//         }
//     }

//     for (int row = 0; row < a; row++) {
//         cout << Array2[row] << " ";
//     }
//     cout << endl << endl;

//     for (int row = 0; row < m; row++) {
//         Array[row] = Array2[row];
//     }

//     cout << "1st Array is ->" << endl;
//     for (int row = 0; row < m; row++) {
//         cout << Array[row] << " ";
//     }
//     cout << endl << endl; 

//     for (int row = 0; row < n; row++) {
//         Array1[row] = Array2[row + m];
//     }

//     cout << "2nd Array is ->" << endl;
//     for (int row = 0; row < n; row++) {
//         cout << Array1[row] << " ";
//     }

//     return 0;
// }


/*Write a Menu Driven C++ program that creates one-dimensional array arr[] and initialize it with user(Terminal se do). The
program should do following Tasks using Menu, the menu operations are implemented using functions:
a) Write a function Count(), that counts the occurrences of x (a number) in arr[].
b) Write a function Partition(), that take the first element of the array x and put x in a position such
that all smaller elements (smaller than x) are before x, and put all greater elements (greater
than x) after x.
c) Write a function next_XOR(),the count of elements which are equal to the XOR of the next two elements.
d) Write a function Duplicates(),which calculated the frequencies of all the elements and display
them.
e) Write a function Circular(),which replace every element of the array by the sum of next two
consecutive elements in a circular manner i.e. arr[0] = arr[1] + arr[2], arr[1] = arr[2] + arr[3],
arr[n - 1] = arr[0] + arr[1].
f) Write a function Search(), takes an array and element to search in the array and returns the
index of element if the element is found. And return the negative number if not found.
g) Write a function shift_Circular (), which shifts an array circularly left by two positions. Thus, if
p[0] = 15, p[1]= 30, p[2] = 28, p[3]= 19 and p[4] = 61 then after the shift p[0] = 28, p[1] = 19, p[2]
= 61, p[3] = 15 and p[4] = 30.*/

// #include <iostream>
// using namespace std;

// void Count(int array[], int n) {
//     int count = 0;

//     for (int row = 0; row < n; row++) {
//         count = count + 1;
//         cout << array[row] << " ";
//     }
//     cout << endl;
//     cout << "Number of elements in array are -> " << count << endl;
// }

// void Partition(int array[], int n) {

//     int idx;
//     for (int i = 0; i < n - 1; i++) {
//         idx = i; 
//         for (int j = i + 1; j < n; j++) {

//             if (array[j] < array[idx]) {
//                 idx = j;
//             }
//         }

//         if (idx != i) {
//             int temp = array[i];
//             array[i] = array[idx];
//             array[idx] = temp;
//         }
//     }

//     cout << "The array is ->" << " ";
//     for (int i = 0; i < n; i++) {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }

// void XOR(int array1[], int n) {
//     int count1 = 0;
//     int ans;
//     for (int row = 0; row < n - 2; row++) {
       
//         if ((array1[row + 1] == 0 && array1[row + 2] == 0) || (array1[row + 1] == 1 && array1[row + 2] == 1)) {
//             ans = 0;
//         }

//         else {
//             ans = 1;
//         }               


//         if (array1[row] == ans) {
//             count1 = count1 + 1;
//         }
//     }
//     cout << "The count of XOR in sorted array is -> " << count1 << endl;
// }

// void Circular(int array[], int n) {
//     for (int row = 0; row < n - 2; row++) {
//         array[row] = array[row + 1] + array[row + 2];
//     }

//     for (int row = 0; row < n - 2; row++) {
//        cout << array[row] << " ";
//     }

//     for (int row = 0; row < n; row++) {

//     }
// }

// int Search(int array[], int n, int key) {
//     for (int row = 0; row < n; row++) {
//         if (array[row] == key) {
//            return row;
//         }
//     }

//     return -1;
// }

// int main() {
    
//     int array[5] = {5, 4, 1, 3, 2};
//     int array1[5] = {1, 0, 1, 0, 1};

//     Count(array, 5);
//     Partition(array, 5);
//     XOR(array1, 5);
//     Circular(array, 5);
//     int key;
//     cout << "Enter the element to search" << endl;
//     cin >> key;
//     int ans = Search(array, 5, key);
    
//     if (ans >= 0 ) {
//         cout << "Index of " << key << " is found that is -> " << ans << endl;
//     }

//     else {
//         cout << "Not found -> " << ans << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
 
// // int main() {
    
// //     int array[2][2];

// //     for (int row = 0; row < 2; row++) {
// //         for (int col = 0; col < 2; col++) {
// //             cin >> array[row][col];
// //         }
// //     }

// //      for (int row = 0; row < 2; row++) {
// //         for (int col = 0; col < 2; col++) {
// //             cout << array[row][col] << " ";
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // // }

// Write a program to ask the user for the number of arrays he wants to maintain and then populate each array by taking elements from the user. Merge all these arrays in another array and finally remove duplicate elements from the merged array.
/*11) Write a program to ask the user for the number of arrays he wants to maintain and then populate each
array by taking elements from the user. Merge all these arrays in another array and finally remove duplicate
elements from the merged array.
// 12) Consider an integer array, the number of elements in which is determined by the user. The elements are
// also taken as input from the user. Write a program to find those pairs of elements that have the maximum
// and minimum difference among all element pairs.*/
// //Q -> 11

#include <iostream>
using namespace std;
 
int main() {
    
    int i = 0, count = 0, row1 = 1, k = 0;
    const int size = 2;
    int array1[size];
    int array2[size];
    int array3[size];
    int size1 = size * 3;
    int array[size1];
    bool till = true;

    cout << "Enter the elements for Array 1" << endl;
    for (int row = 0; row < size; row++) {
        cin >> array1[row];
        array[row] = array1[row];
    }

    cout << "Enter the elements for Array 2" << endl;
    for (int row = 0; row < size; row++) {
        cin >> array2[row];
        array[row + size] = array2[row];
    }

    cout << "Enter the elements for Array 3" << endl;
    for (int row = 0; row < size; row++) {
        cin >> array3[row];
        array[row + size + size] = array3[row];
    }

    cout << "Elements of Array 1 are ->" << endl;
    for (int row = 0; row < size; row++) {
        cout << array1[row] << " ";
    }
    cout << endl;

    cout << "Elements of Array 2 are ->" << endl;
    for (int row = 0; row < size; row++) {
       cout << array2[row] << " ";
    }
    cout << endl;

    cout << "Elements of Array 3 are ->" << endl;
    for (int row = 0; row < size; row++) {
        cout << array3[row] << " ";
    }
    cout << endl;

    cout << "Elements of single array are ->" << endl;
    for (int row = 0; row < size1; row++) {
        cout << array[row] << " ";
    }
    cout << endl;

    while (till == true) {
        // 1 2 1 3 4 3 
       for (int row = 0; row < size1; row++) {	
        // row 0 hoye then neeche nhi chale gai cz i = 0, k = 0 and row1 = 1 hai
        // row 1 hoye then neeche i = 0 he raha but row1 = 2 ho gya
            if (i != 0 && row == 0) {
                row1 = row1 + k;
            }
            // i = 0 that is 1 != row1 = 1 that is 2 so this will not be executed and will go to else
            // i = 0 and row1 = 2 so 1 == 1 now and inner chale ga sab
			if (array[i] == array[row1]) {

                if (array[i] == array[row1]) { 
                    row1 = row1;
                    // so agar tou is ke barabar hote tou waha se he shuru krna row1 = row1 that is 2 = 2
                }
                
				for (int r = row1; r < size1; r++) {
                    // r = 2 {r = 2 < 6 then first if isnt true then it will move to else array[2] = array[2 + 1] so 1 2 3 then r = 3; 3 < 6 now array[3] = array[3 + 1] so 1 2 3 4 then r = 4 then this upper condition will again not be executed cz array[i] != array[r] so array[4] = array[4 + 1]
                    if (array[i] == array[r] && r == size1 - 1 < size1) {
                        array[i] = array[r];
                    }

                    else {
                        array[r] = array[r + 1];
                    } 
				}
				size1--; // size becomes 5 in row = 1 phase
			}

            else { // row1 = 1 + 1 = 2
                row1 = row1 + 1;
            }
			// 0 != 5 < 6
            if (row == size1 - 1 < size1) {
			    i = i + 1;
                k++;
                row1 = 0;
            }
            // 0 != 6
			if (i == size1) {
				till = false;
			}
	    }
    }
   
    cout << "Array without repetition is ->" << endl;
    for (int row = 0; row < size1; row++) {
        cout << array[row] << " ";
    }
    cout << endl;

    return 0;
}
