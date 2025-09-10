// #include<iostream>
// using namespace std;
// void reachHome(int source, int destination){

// cout <<  source << " " << destination << endl;
   
//     if (source == destination){
//         cout << "Ponch gya" << endl;      //NEECHE WALA CODE IS KA UPDATED VERSION HAI
//         return ;
//     }
//     source++;
//     reachHome(source, destination);
    
// }
// int main(){
//     int source = 1;
//     int destination = 10;
//     reachHome(source, destination);
//     return 0;
// }

//


// #include<iostream>
// using namespace std;
// void reachHome(int source, int destination){
//     if (source < 10){
//         cout << "Step " << source << " != "  << " " << destination << endl;
//         source++;
//         reachHome(source, destination);
//     } 
//    else if (source == destination){
//        cout << "Step " << source << " = " << destination << endl;
//        cout << "Ponch gya" << endl;
//        return ;
//     }
    
// }
// int main(){
//     int source = 1;
//     int destination = 10;
//     reachHome(source, destination);
//     return 0;
// }

//

// #include<iostream>
// using namespace std;  //FIBONACCI
// int fibo(int n){
//     if (n == 0){
//         return 0;
//     }
//     if (n == 1){
//         return 1;
//     }
//     // int ans = fibo(n - 1) + fibo( n - 1);
//     // return ans;
//     return fibo(n - 1) + fibo( n - 2);
// }
// int main(){
//     int n;
//     cin >> n;
//     cout << fibo(n);
   
//     return 0;
    // 4
    // fibo 3 + fibo 2 so 2 + fibo 2 i.e, 1 so 2 + 1 = (((((((((((((((((((3)))))))))))))))))))ANSWER
    // fibo 3
    // fibo 2 + fibo 1 = 1 + 1 = 2 so fibo 3 = 2 
    // fibo 2
    // fibo 1 + fibo 0 = 1 + 0 = 1 so fibo 2 = 1

//}

//

// #include<iostream>
// using namespace std; //STAIRS WALA CODE HAI
// int stairs(int n){
//     if (n < 0){
//         return 0;
//     }
//     if (n == 0){
//         return 1;
//     }
//     return stairs(n - 1) + stairs(n - 2);
// }
// int main(){
//     int n;
//     cin >> n;
//     stairs(n);
//     cout << stairs(n) << endl;
//     return 0;
// }

//

#include<iostream>
using namespace std;  // SAY DIGITS  if 243 then i have to say two four three
void sayDigit(int n, string arr[]){
    if (n == 0){
        return ;
    }
    int digit = n % 10;
    n = n / 10;
    // cout << arr[digit] << " " ;
    sayDigit(n, arr);
    cout << arr[digit] << " " ;
}
int main(){
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int n;
    cin >> n;
    sayDigit(n, arr);
    return 0;
} 


