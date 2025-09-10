// #include<iostream>
// using namespace std;
// int factorial(int n){
//     //Base Case
//     if (n == 0){
//         return 1;
//     }
//     int choti = factorial(n - 1);    //THIS IS HEAD RECURSION CZ 1 BASE CASE 2 RECURSIVE CALL 3 PROCESSING
//     int bare = n * choti;
//     return bare;
// }
// int main(){
//     int n;
//     cin >> n;
//     int ans = factorial(n);
//     cout << ans;
//     return 0;
// }

//

// #include<iostream>
// using namespace std;
// int power(int m){
//     if (m == 0){
//         return 1;
//     }
//     int smallerProb = power(m - 1);
//     int biggerProb = 2 * smallerProb;
//     return biggerProb;
// }
// int main(){
//     int n;
//     cin >> n;
//     int pow = power(n);
//     cout << pow;
//     return 0;
// }

//

// #include<iostream>
// using namespace std;  //COUNTING 5 4 3 2 1
// void print(int n){
//     if (n == 0){
//         return ;
//     }
//     cout << n << endl;   //TAIL RECURSION CZ PROCESSING PEHLE HO RHY BAAD MEIN RECURSIVE CALL
//     print(n - 1);
//     // cout << n << endl;
// }
// int main(){
//     int n;
//     cin >> n;
//     print(n);
//     return 0;
// }

//


// #include<iostream>
// using namespace std;
// bool isSorted(int arr[], int size){
//     if (size == 0 || size == 1){    //Sorted ka batana ke 12345 aar likha tou sorted and agar 1 2 3 42 5 likh dia tou not sorted
//         return true;
//     }
//     if (arr[0] > arr[1]){
//         return false;
//     }
//     else{
//          return isSorted(arr + 1, size -1);
        
//     }
    
// }
// int main(){
//     int arr[5];
//     int size = 5;
//     for (int i = 0; i < 5; i++){
//         cin >> arr[i];
//     }
//     bool ans = isSorted(arr, size);
//     if(ans){
//         cout << "Array is sorted" << endl;
//     } else{
//          cout << "Array is not sorted" << endl;
//     }
//     return 0;
// }

//

// #include<iostream>
// using namespace std; //PRINT SUM {3, 2, 5, 1, 6} = 17.
// int sumArray(int arr[], int size){
//     // int sum = 0;
//     if(size == 0){
//         return 0;
//     }else{
//     // sum = sum + (arr[0] + arr[1]);
//     // return sumArray(arr + 1, size -1);
//     return arr[0] + sumArray(arr + 1, size - 1);
//     }
    

// }
// int main(){
//      int arr[5];
//     int size = 5;
//     for (int i = 0; i < 5; i++){
//         cin >> arr[i];
//     }
//      int result = sumArray(arr, size);
//     cout << "The sum is : " << result << endl;

//     return 0;
// }

//

// #include<iostream>
// using namespace std;  //LINEAR SEARCH THROUGH RECURSION
// int found(int arr[], int size, int key){
//     if (size == 0){
//         return 0;
//     }
//     if (arr[0] == key){
//         return key;
//     }
//     return found(arr + 1, size - 1, key);
// }
// int main(){
//     int arr[5];
//     int size = 5;
//     for (int i = 0; i < 5; i++){
//         cin >> arr[i];
//     }
//     int key;
//     cout << "Enter the Key" << endl;
//     cin >> key;
//     int ok = found(arr, size, key);
//     if(ok){
//         cout << "Yes, " << ok << " is present. HAVE FUN!" << endl;
//     }
//     else {
//         cout << "Oops, not found!";
//     }
//     return 0;
// }

//

#include<iostream>
using namespace std;  //BINARY SEARCH
int main(){
   
    return 0;
}