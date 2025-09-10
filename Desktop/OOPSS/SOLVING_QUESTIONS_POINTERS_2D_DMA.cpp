// Declare a 2D array of integers with 3 rows and 4 columns. Initialize it with random values.
//  #include<iostream>
//  #include<stdlib.h>
//  using namespace std;

// int main() {

//    int arr[3][4];

//     for(int i = 0; i < 3; i++) {
//        for(int j = 0; j < 4; j++) {
//         arr[i][j] = rand() % 100;
//        }
//     }

   //  for(int i = 0; i < 3; i++) {
   //     for(int j = 0; j < 4; j++) {
   //      cout << arr[i][j] << " ";
   //     }
   //     cout << endl;
   //  }

//     return 0;
// }

// Accessing Elements:
// Access the element in the second row and third column of the following 2D array: int matrix[3][4];
// #include <iostream>
// using namespace std;

// int main()
// {

//    int arr[3][4];

//    for (int i = 0; i < 3; i++)
//    {
//       for (int j = 0; j < 4; j++)
//       {
//          cin >> arr[i][j];
//       }
//    }

//    for (int i = 1; i < 2; i++)
//    {
//       for (int j = 2; j < 3; j++)
//       {
//          cout << arr[i][j] << " ";
//       }
//       cout << endl;
//    }
//    return 0;
// }

//Write a function to calculate the sum of elements in each row of the matrix array.

// #include <iostream>
// using namespace std;

// int main()
// {

//    int arr[3][4];

//    for (int i = 0; i < 3; i++)
//    {
//       for (int j = 0; j < 4; j++)
//       {
//          cin >> arr[i][j];
//       }
//    }

//    for (int i = 0; i < 3; i++)
//    {  
//       int sum = 0;
//       for (int j = 0; j < 4; j++)
//       {
//          sum = sum + arr[i][j];
//       }
//       cout << sum << endl;
//    }
//    return 0;
// }

//Write a function to calculate the sum of elements in each col of the matrix array.

// #include <iostream>
// using namespace std;

// int main()
// {

//    int arr[3][4];

//    for (int i = 0; i < 3; i++)
//    {
//       for (int j = 0; j < 4; j++)
//       {
//          cin >> arr[i][j];
//       }
//    }

//    cout << "Your answer is ->" << endl;

//    for (int j = 0; j < 4; j++)
//    {  
//       int sum = 0;
//       for (int i = 0; i < 3; i++)
//       {
//          sum = sum + arr[i][j];
//       }
//       cout << sum << endl;
//    }
//    return 0;
// }

//Create a function to transpose the matrix array (swap rows with columns).
//yeh 3 by 3 ka tou assaan hai but jab col zyada ho rhy tou farigh answer de rha
// #include<iostream>
// using namespace std;
 
// int main() {
//    int arr[3][3];
//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 3; j++) {
//         cin >> arr[i][j];
//       }
//    }
//    int ans;
//    int col = 0;
//    cout << "Double of row 3 is -> " << endl;
//    for(int i = 0; i < 3; i++) {
//       for (int j = 0; j < 3; j++) {
//          cout << arr[i][j] << " ";
//       }
//       cout << endl;
//    }
   
//    return 0;
// }



//Write a function to search for a specific element in the matrix array and return its position.

// #include <iostream>
// using namespace std;

// bool search(int arr[3][4], int target) {
//    for (int i = 0; i < 3; i++)
//    {
//       for (int j = 0; j < 4; j++)
//       {
//          if (arr[i][j] == target) {
//             return true;
//          } //In this version, if the first element checked is not equal to the target, the function will immediately return false without checking the remaining elements. This means the function will only correctly determine whether the target is present if it happens to be the first element in the matrix.In general, you want to avoid using return inside a loop unless it serves your intended logic. In the corrected version, we only return false after all elements have been checked and none of them match the target.
//       }
      
//    }
//    return false;
// }
// int main()
// {

//    int arr[3][4];
//    int target;
//    cout << "Enter the number" << endl;
//    cin >> target;
//    for (int i = 0; i < 3; i++)
//    {
//       for (int j = 0; j < 4; j++)
//       {
//          cin >> arr[i][j];
//       }
//    }

//   bool ans = search(arr, target);
//   if (ans) {
//    cout << "Number found " << target << endl;
//   } else {
//    cout << "Number not found" << endl;
//   }
//    return 0;
// }

//Maximum Element:
//Find and print the maximum element in the matrix array.
// #include<iostream>
// using namespace std;
 
// int main() {
   // int arr[3][4];

   // for(int i = 0; i < 3; i++) {
   //    for(int j = 0; j < 4; j++) {
   //      cin >> arr[i][j];
   //    }
      
   // }
   // int maxi = INT_MIN;
   // for(int i = 0; i < 3; i++) {
   //    for(int j = 0; j < 4; j++) {
   //      if (arr[i][j] > maxi) {
   //          maxi = arr[i][j];
   //      }
   //    }
     
   // }
//    cout << "The maxium number is " << maxi;
//    return 0;
// }

//Create a new 2D array matrixCopy and copy the values from the original matrix array.
// #include<iostream>
// using namespace std;
 
// int main() {
   
//    int arr[3][4];
//    int arrCopy[3][4];
//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 4; j++) {
//         cin >> arr[i][j];
//       }
      
//    }

//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 4; j++) {
//         arrCopy[i][j] = arr[i][j];
//       }
//    }
//    cout << "Default Array" << endl;
//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 4; j++) {
//         cout << arr[i][j] << " ";
//       }
//       cout << endl;
//    }

//    cout << "Copy Array" << endl;
//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 4; j++) {
//          cout << arrCopy[i][j] << " ";
//       }
//       cout << endl;
//    }
//    return 0;
// }

//SOLVING IT ACCORDING TO DMA
// #include<iostream>
// using namespace std;
 
// int main() {
   
//    int n;
//    cout << "Enter the number" << endl;
//    cin >> n;
//    int m;
//    cout << "Enter the number" << endl;
//    cin >> m;
//    int **arr = new int *[n];
//    for(int i = 0; i < n; i++) {
//       arr[i] = new int [m];//WHY [m]? Jab aap 2D array banate hain, to har row ka length alag ho sakta hai. Isliye har bar new int[m] likhna zaroori hai taaki aap har row ke liye alag length specify kar sakein. Agar aap har row ki length alag nahi lena chahte, to aap ek fixed length ka 2D array bana sakte hain, jisme har row ka length same hoga.
//    }

//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 4; j++) {
//         cin >> arr[i][j];
//       }
//    }
//    //Allocate memory for arrCopy
//    int **arrCopy = new int *[n];
//    for(int i = 0; i < n; i++) {
//       arrCopy[i] = new int[m];
//    }
//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 4; j++) {
//         arrCopy[i][j] = arr[i][j];
//       }
//    }
//    cout << "Default Array" << endl;
//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 4; j++) {
//         cout << arr[i][j] << " ";
//       }
//       cout << endl;
//    }

//    cout << "Copy Array" << endl;
//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 4; j++) {
//          cout << arrCopy[i][j] << " ";
//       }
//       cout << endl;
//    }
//    //Deallocate memory for arr
//    for(int i = 0; i < n; i++) {
//       delete[] arr[i];
//    }
//    delete[] arr;
//    //Deallocate memory for arrCopy
//    for(int i = 0; i < n; i++) {
//       delete[] arrCopy[i];
//    }
//    delete[] arrCopy;

//    return 0;
// }

//Row Manipulation:
//Write a function to double the values in the third row of the matrix array.
// #include<iostream>
// using namespace std;
 
// int main() {
//    int arr[3][4];
//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 4; j++) {
//         cin >> arr[i][j];
//       }
//    }
//    int ans;
//    cout << "Double of row 3 is -> " << endl;
//    for(int i = 2; i < 3; i++) {
//       for(int j = 0; j < 4; j++) {
//          ans = arr[i][j] * 2;
         
//          cout << ans << " "; 
//       }
//       // cout << ans << " "; 
//    }
   
//    return 0;
// }


//Column Average:
//Calculate and print the average value of elements in the second column of the matrix.

// #include<iostream>
// using namespace std;
 
// int main() {
   
//    int arr[3][4];
//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 4; j++) {
//         cin >> arr[i][j];
//       }
//    }
//    int ans;
//    int col = 0;
//    cout << "Double of row 3 is -> " << endl;
//    for(int i = 0; i < 3; i++) {
//       col += arr[i][1];
//    }
//    double avg = col / 3;
//    cout << "Avg is " << avg << endl;
//    return 0;
// }

//Transpose 3x4
// #include<iostream>
// using namespace std;

// int main() {
   
//    const int rows = 3;
//    const int cols = 4;
//    int arr[3][4];
//    cout << "Enter elements of the matrix" << endl;
//    for (int i = 0; i < 3; i++) {
//       for (int j = 0; j < 4; j++) {
//          cin >> arr[i][j];
//       }
//    }

//    //Transpose matrix
//    int transposed[cols][rows];
//    for (int i = 0; i < cols; i++) {
//       for (int j = 0; j < rows; j++) {
//          transposed[i][j] = arr[j][i];
//       }
//    }

//    // Display the original matrix
//    cout << "Original Matrix:" << endl;
//    for (int i = 0; i < rows; ++i) {
//       for (int j = 0; j < cols; ++j) {
//          cout << arr[i][j] << " ";
//       }
//       cout << endl;
//    }

//    // Display the transposed matrix
//    cout << "Transposed Matrix:" << endl;
//    for (int i = 0; i < cols; ++i) {
//       for (int j = 0; j < rows; ++j) {
//          cout << transposed[i][j] << " ";
//       }
//       cout << endl;
//    }

//    return 0;
// }

//DOING DYNAMICALLY

#include<iostream>
using namespace std;

int main() {
   
   int n;
   cin >> n;
   int m;
   cin >> m;
   int arr[n][m];
   int **arr = new int *[n];
   for (int  i = 0; i < n; i++) {
      arr[i] = new int[m];
   }
   cout << "Enter elements of the matrix" << endl;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         cin >> arr[i][j];
      }
   }

   //Transpose matrix
   int transposed[cols][rows];
   int **transposed = new int *[n];
   for (int i = 0; i < cols; i++) {
      for (int j = 0; j < rows; j++) {
         transposed[i][j] = arr[j][i];
      }
   }

   // Display the original matrix
   cout << "Original Matrix:" << endl;
   for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
         cout << arr[i][j] << " ";
      }
      cout << endl;
   }

   // Display the transposed matrix
   cout << "Transposed Matrix:" << endl;
   for (int i = 0; i < cols; ++i) {
      for (int j = 0; j < rows; ++j) {
         cout << transposed[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}
