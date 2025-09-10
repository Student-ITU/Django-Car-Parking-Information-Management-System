// #include<iostream>
// using namespace std;
// void printArray(int arr[], int size){ //Funtion mein ese karna array ko 
//     for (int i = 0; i < size; i++){ 
//         cout << arr[i];
//     }
//     cout << endl;
//     cout << "Printing done" << endl;
//     for (int i = 0; i < 5; i++){  //char wale ka kia kyun ke check krne ke lie ke data type ka same hona zaruri hai int agar main mein hai  tou call ke lie bhe uper int he honanchaye
//         cout << " " << arr[i];
//     }

//}

    //FOR MAX AND MIN QUESTION

    // int getMax(int num[], int size){
    //     int max = INT_MIN;  //-2147483648 yeh value store hai INT_MIN mein
    //     for (int i = 0; i < size; i++){
    //         if (num[i] > max){  //YAHA MAX MEIN -2147483648 YEH STORE HAI ABHI
    //             max = num[i];
    //         }
    //     }
    //     return max;
    // }

    //MIN

    // int getMin(int num[], int size){
    //     int mini = INT_MAX; //int max ke value 2147483647.
    //     for (int i = 0; i < size; i++){
    //         // if (num[i] < min){ 
    //         //     min = num[i];
    //         // }
    //         mini = min(mini, num[i]); //Also can be done like this
    //     }
    //     return mini;
    // }
   
   //*************Linear Search**************


    // int search(int arr[], int size, int key){
    //     for (int i = 0; i < size; i++){
    //         if (arr[i] == key){
    //             return i;
               
    //         }
    //     }
    //     return -1;
    // }
   

    //SWAPING KE LIE FUNCTION
   

// int main(){
    // int dost[10] = {0}; // is ka mtlab hota ke andar 0 index se 9th tak 0 a jai ga or yeh case sirf 0 ke had tak ho ga applicable yaad rakhna 1 wagera mein nhi us ko krne ke lie taeqka hai jise google karna ho ga (Tareka mil gya).
    // cout << dost;
    // int arr0[10] = {0};
    // int n = 10;
    // for (int i = 0; i < n; i++){ // sab 0 ho jain ge
    //     cout << arr0[i];
    // }

    //
  
    // int size = 5;
    // int arr[5];
    // int value = -21;
    // for (int i = 0; i < 5; i++){
    //     arr[i] = value;
    // }
    // for (int i = 0; i < 5; i++){  //KAHI NA KAHI KAAM A SAKTE
    //     cout << " " << arr[i];
    // }
    // // arr[2];
    // cout << endl;
    // cout << " " << arr[2];
    // cout << " " << arr[3];


    // //


    // cout << endl;
    // int arr1[15] = {2, 7};
    // int n = 15;
    // for (int i = 0; i < n; i++){ // yeh yeh dikha raha ke 2 hain bs 2 7 or waha 15 likha or n bhe 15 kia tou baki jo integers hon ge waha 000000 likha ai ga
    //     cout << arr1[i];
    // }


    


    //int arr[10] = {1};   // Function mein array ko ese likhte
    // int n = 10;
    // printArray(arr, n);
    //  int arrSize = sizeof(arr)/sizeof(int); //Variable change hona chaye
    // cout << "Size of arr " << arrSize << endl;
    // int arr1[15] = {2, 7};
    // int n1 = 15;
    // printArray(arr1, n1);



    //




    // char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    // // printArray(char, 5);
    // for (int i = 0; i < 5; i++){
    //     cout << " " << ch[i];
    // }

    //MIN MAX OF ARRAY


    // int size;
    // cin >> size;
    // int num[1000];   //int num[size] ese nhi krna gande practice hai.
    // for(int i = 0; i < size; i++){
    //     cin >> num[i];
    // }
    // int ans = getMax(num, size);
    // cout << "MAX IS " << ans << endl;

    //MIN

    // int size;
    // cin >> size;
    // int num[1000];   //int num[size] ese nhi krna gande practice hai.
    // for(int i = 0; i < size; i++){
    //     cin >> num[i];
    // }
    // int ans = getMin(num, size);
    // cout << "MIN IS " << ans << endl;

    // Linear Search************
    // int arr[10] = {5, 6, 7, 8, 12, 13, 43, 1};
    // int key;
    // cin >> key;
    // int found = search(arr, 10, key);
    // if (found != -1){
    //     cout << "Key is present" << endl;

    // }
    // else{
    //     cout << "Key is absent" << endl;
    // }



    //




    // int arr[13] = {3, 2};
    // // int size = sizeof(arr) / sizeof(arr[0]);
    // // cout << size << endl;
    // int n = 13;
    
    // for (int i = 0; i < n; i++){
    //     cout << arr[i] ;
    // }

    //SUM OF ELEMENTS OF ARRAY

    // int n;
    // cin >> n;
    // int sum = 0;
    // int arr[4];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++){
    //     sum = sum + arr[i];
    // }
    // cout << "The Sum is : " << sum << endl;

    //**********REVERSE AN ARRAY***********
    // int n;
    // cin >> n;
    // int arr[6] = {1, 2, 3, 4, 5, 6};
    // int start = 0;
    // int end = n - 1;
    // while(start <= end){
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
    
    
         
    
   

    
//     return 0;
// }

   
//*******************************************************************
//ARRAYS QUESTION LEETCODE
//1st swap alternate
// #include<iostream>
// using namespace std;

// void printArray(int arr[], int n){
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//         // cout << endl;

//     }
// }
// void swapAlternate(int arr[], int size){
//     for (int i = 0; i < size; i += 2){
//         if (i + 1 < size){
//             swap(arr[i], arr[i + 1]);
//         }
//     }

// }
// int main() {

//     int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int odd[7] = {1, 2, 3, 4, 5, 6, 7};
//     swapAlternate(even, 8);
//     cout << "EVEN" << endl;
//     printArray(even, 8);
//     cout << endl;
//     swapAlternate(odd, 7);
//     cout << "ODD" << endl;
//     printArray(odd, 7);
//     return 0;
// }

//SWAP KISI OR TAREKE SE KRNE LAGE ISE SAWAL KO
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
        // cout << endl;

    }
}
void swapAlternate(int arr[], int size){
    int temp;
    for (int i = 0; i < size; i += 2){
        if (i + 1 < size){
            //YAH YEH USE KR LO 
            // swap(arr[i], arr[i + 1]);

            //YAH YEH USE KR LO
            // temp = arr[i];
            // arr[i] = arr[i + 1];
            // arr[i + 1] = temp;

        }
    }

}
int main() {

    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[7] = {1, 2, 3, 4, 5, 6, 7};
    swapAlternate(even, 8);
    cout << "EVEN" << endl;
    printArray(even, 8);
    cout << endl;
    swapAlternate(odd, 7);
    cout << "ODD" << endl;
    printArray(odd, 7);
    return 0;
}