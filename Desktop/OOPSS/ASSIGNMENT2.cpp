// // QUESTION -> 1

// #include <iostream>
 
// using namespace std;

// void MIN_MAX ( int array[], int arrayLength, int& max, int& min ) {
//     static int size = 0;

//     if ( size == arrayLength ) {
//         return;
//     }

//     if ( size < arrayLength ) {
//         if ( max < array[size] ) {
//             max = array[size];
//         }
//     }

//     if ( size < arrayLength ) {
//         if ( min > array[size] ) {
//             min = array[size];
//         }
//     }

//     size = size + 1;

//     MIN_MAX ( array, arrayLength, max, min );
// }


// int main () {
 
//     int array[5] = {11, 2, 3, 4, 53};

//     int arrayLength = sizeof(array)/sizeof(array[0]);

//     int max = INT_MIN, min = INT_MAX;

//     MIN_MAX ( array, arrayLength, max, min );
//     cout << "Maximum element in the array is : " << max << endl;
//     cout << "Minimum element in the array is : " << min << endl;
 
//     return 0;
// }

// // QUESTION -> 2

// #include <iostream>
 
// using namespace std;

// void cubes ( int n ) {

//     static int count = 0;

//     if ( n == 1 ) {
//         return;
//     } 

//     if ( count != 0 ) {
//         n = n - 1;
//     }
//     count = count + 1;

//     cubes ( n ); 

//     cout << n * n * n << endl;
// }


// int main () {
 
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;

//     cubes ( n );
 
//     return 0;
// }

// // Question -> 3

// #include <iostream>
// #include <cmath>

// using namespace std;

// double calculateMean ( double data[], int n, int index = 0, double sum = 0.0 ) {
//     if ( index == n ) {
//         return sum / n;
//     }
//     sum += data[index];

//     return calculateMean ( data, n, index + 1, sum ); 
// }


// double calculateVariance ( double data[], int n, double mean, int index = 0, double sum = 0.0 ) {
//     if ( index == n ) {
//         return sum / (n - 1);
//     }

//     double diff = data[index] - mean;
//     sum += diff * diff;

//     return calculateVariance ( data, n, mean, index + 1, sum );
// }


// double calculateStandardDeviation ( double data[], int n ) {
//     double mean = calculateMean ( data, n ); 
//     double variance = calculateVariance ( data, n, mean ); 

//     return sqrt ( variance );
// }


// int main () {

//     double data[500]; 

//     for ( int i = 0; i < 500; i++ ) {
//         data[i] = i + 1;
//     }

//     double stdDev = calculateStandardDeviation ( data, 500 );
    
//     cout << "Standard Deviation: " << stdDev << endl;
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printArrayAddress(const int arr[], int size) {
//     cout << "Address of array in function: " << &arr << endl; // Address of array pointer in function
//     cout << "Address of array in function: " << arr << endl; // Address of array pointer in function
//     cout << "Address of array in function: " << *arr << endl; // Address of array pointer in function
//     cout << "Address of array in function: " << sizeof(arr) << endl; // Address of array pointer in function
//     cout << "Address of array in function: " << sizeof(*arr) << endl; // Address of array pointer in function
//     cout << "Address of array in function: " << sizeof(&arr) << endl; // Address of array pointer in function
    

// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
    
//     // Address of the array itself (starts at the beginning of the array)
//     cout << "Address of array in main: " << &arr << endl; // Address of array pointer in main
//     cout << "Address of array in main: " << arr << endl; // Address of array pointer in main
//     cout << "Address of array in main: " << *arr << endl; // Address of array pointer in main
//     cout << "Address of array in function: " << sizeof(arr) << endl; // Address of array pointer in function
//     cout << "Address of array in function: " << sizeof(*arr) << endl; // Address of array pointer in function
//     cout << "Address of array in function: " << sizeof(&arr) << endl; // Address of array pointer in function
//     cout << endl;

//     // Pass the array to the function
//     printArrayAddress(arr, 5);

//     return 0;
// }

#include <iostream>
using namespace std;

// Function to create and return a dynamically allocated array
int* createAndCopyArray(const int arr[], int size) {
    // Allocate memory for the new array
    int* newArray = new int[size];
    
    // Copy elements from the original array to the new array
    for (int i = 0; i < size; ++i) {
        newArray[i] = arr[i];
    }
    
    // Return the pointer to the new array
    return newArray;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Create a new array and get the pointer
    int* newArray = createAndCopyArray(arr, size);

    // Use specific elements from the new array
    int indexToAccess = 2; // For example, get the element at index 2
    if (indexToAccess < size) {
        cout << "Element at index " << indexToAccess << " in the new array: " << newArray[indexToAccess] << endl;
    } else {
        cout << "Index out of bounds" << endl;
    }

    // Deallocate the memory for the new array
    delete[] newArray;

    return 0;
}
