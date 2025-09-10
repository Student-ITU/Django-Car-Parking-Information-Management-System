#include<iostream>
using namespace std;
int main(){
//    int c;
//    cin >> c;
//    cout << char(c);

// char c;
// cin >> c;
// if (c >= 'a' && c <= 'z'){
//     cout << "This is Lower case" << endl;
// }
// else if (c >= 'A' && c <= 'Z'){
//     cout << "This is Upper case" << endl;
// }else if(c >= '0' && c <= '9'){
//     cout << "This is a Number" << endl;
// }else{
//     cout << "Incorrect" << endl;
// }


// int sum = 0;
// int n;
// cin >> n;
// int i;
// cin >> i;

// while (i <= n){
//     if (i % 2 == 0){
//          sum = sum + i;
         
//     }
//     i++;   // DEKHO AB ESE IF KE ANDAR NHI LIKHNA NEECHE LIKHNA
  
// }
// cout << sum;

//


// int n; 
// cin >> n;
// int i = 1;
// while (i <= n){
//     int j = 1;
//     while (j <= n){
//         cout << "*" << " ";   // Equal rows an column ke stars
//         j++;
//     }
//     cout << endl;
//     i++;
// }

//


// int n;
// cin >> n;
// int i = 1;
// while (i <= n){
//     int j = 1;
//     while(j <= n){
//         cout << i << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }


//


// int n;
// cin >> n;
// int i = 1;
// for (;i <= n;){
//     cout << i << endl;   //FOR INTO WHILE LOOP JFF.
//     i++;
// }


//


// int n;
// cin >> n;
// int i = 1;
// for (; ;){
//     if (i <= n){
//         cout << i << endl;
//     }
//     else{
//         break;  //THIS IS HOW WE CAN USE BREAK IN IF ELSE TOO.
//     }
//     i++;
// }

//

// int n;
// cin >> n;
// int a = 0;
// int b = 1;
// cout << a << " " << b << " ";
// for (int i = 1; i <= n; i++){  //FIBONACCI SERIES from 1 to 10
//     int actualNumber = a + b;
//     cout << actualNumber << " ";
//     a = b;
//     b = actualNumber;
// }

//

//WHILE LOOOP IS PRIME NUMBER WALA BS NHI LIKHA SIR WALA

// int n;
// cin >> n;
// bool isPrime = 1;
// for (int i = 2; i < n; i++){
//     if (n % i == 0){
//        isPrime = 0;
//        break;
//     }
// }
// if (isPrime == 0){
// cout << "Not a Prime Number" << endl;
// }
// else{
//     cout << "A Prime Number" << endl;
// }

//CONTINUE WORD KA AGR USE KRNS TOU

// for (int i = 1; i <= 5; i++){
//     cout << "HI" << endl;
//     cout << "BYE" << endl;
//     continue;   //**CONTINUE** SE HOA YEH KE US NE KAHA NEECHE WALA CHOR DO OR DUBARA UPER JAO LOOP CHALAO KYUN KE 5 TAK CHALE GA BS NEECHE ANSWER PLZ WALE CHEEZ NHI CHALE GE...
//     cout << "ANSWER PLZ" << endl;
// }

//

// for (int i = 0; i <= 5; i++){
//     cout << i << " ";          //EXAMPLE OUTPUT QUESTION   0 2 4
//     i++;

// }

//

// for (int i = 0; i <= 5; i--){
//     cout << i << " ";          //EXAMPLE OUTPUT QUESTION  INFINITE LOOP
//     i++;

// }

//ANOTHER EXAMPLE

// for (int i = 0; i <= 15; i += 2){
//     cout << i << " ";
//     if (i & 1){
//         continue;
//     }
//     i++;
// }

//SWITCH STATEMENT
// int num;
// cin >> num;
// switch( num ){
//     case 1:
//     cout << "First" << endl;
//     break;
//     case 2:
//     cout << "Second" << endl;
//     break;
//     case 3:
//     cout << "Third" << endl;
//     break;
//     default:
//     cout << "Default case" << endl;
// }

//Example of Calculator
// int a;
// cout << "Enter the value of a" << endl;
// cin >> a;
// int b;
// cout << "Enter the value of b" << endl;
// cin >> b;
// char operation;
// cout << "Enter operation" << endl;
// cin >> operation;
// switch(operation){
//     case '+':
//     cout << "Addition " << a + b << endl;
//     break;
//     case '-':
//     cout << "Subtraction " << a - b << endl;
//     break;
//     case '*':
//     cout << "Multiplication " << a * b << endl;
//     break;
//     case '/':
//     cout << "Division " << a / b << endl;
//     break;
//     default:
//     cout << "Invalid Operation Entered" << endl;
//     break;
// }

//SOLVING QUESTION ON SWITCH STATEMENT


// int amount;
// cout << "Enter the Number " << endl;
// cin >> amount;
// int num = 1;
// int note = 0;
// switch(num){
//     case 1:
//     note = amount / 100;
//     amount = amount - (100 * note);
//     cout << note << " Rs. 100 note required " << endl;

//     case 2:
//     note = amount / 50;
//     amount = amount - (50 * note);
//     cout << note << " Rs. 50 note required " << endl;
    
//     case 3:
//     note = amount / 20;
//     amount = amount - (20 * note);
//     cout << note << " Rs. 20 note required " << endl;
    
//     case 4:
//     note = amount / 1;
//     amount = amount - (1 * note);
//     cout << note << " Rs. 1 note required" << endl;
//     break;

//     default:
//     cout << "Invalid option " << endl;
//     break;

// }


//PATTERNS PRINTING STARTING
//1st
// int n;
// cin >> n;
// int i = 1;
// while (i <= n){
//     int j = 1;
//     while (j <= n){
//         cout << j << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }


//2nd
// int n;
// cin >> n;
// int i = 1;
// while (i <= n){
//     int j = 1;
//     while (j <= n){
//         cout << n - j + 1 << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }

//3rd

// int n;
// cin >> n;
// int i = 1;
// int count = 1;
// while (i <= n){
//     int j = 1;
//     while (j <= n){
//         cout << count << " ";
//         count  = count + 1; 
//         j++;
//     }
//     cout << endl;
//     i++;
// }

//TRIANGLE PRINT

// int n;
// cin >> n;
// int i = 1;
// while (i <= n){
//     int j = 1;
//     while (j <= i){
//         cout << "*" << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }

//4th

// int n;
// cin >> n;
// int i = 1;
// while (i <= n){
//     int j = 1;
//     while (j <= i){
//         cout << i << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }


//5th
// int n; 
// cin >> n;
// int i = 1;
// int count  = 1;
// while (i <= n){
//     int j = 1;
//     while (j <= i){
//        cout << count << " ";
//        count++;
//         j++;
//     }
//     cout << endl;
//     i++;
// }

//6th

// int n; 
// cin >> n;
// int i = 1;
// while (i <= n){
//     int j = 1;
//     int value  = i;
//     while (j <= i){
//        cout << value << " ";
//        value++;
//         j++;
//     }
//     cout << endl;
//     i++;
// }

//7th

// int n; 
// cin >> n;
// int i = 1;
// while (i <= n){
//     int j = 1;
//     while (j <= i){
//        cout << i - j + 1 << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }

//8th
// int n; 
// cin >> n;
// int i = 1;
// while (i <= n){
//     int j = 1;
//     while (j <= n){
//         char ch = 'A' + i - 1;
//        cout << ch << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }

//9th
// int n; 
// cin >> n;
// int i = 1;
// while (i <= n){
//     int j = 1;
//     while (j <= n){
//         char ch = 'A' + j - 1;
//        cout << ch << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }

//10th

int n; 
cin >> n;
int i = 1;
while (i <= n){
    int j = 1;
    int start = 1;
    while (j <= n){
        char ch = 'A' + j - 1;
        cout << start << " ";
        start++;
       cout << ch << " ";
        j++;
    }
    cout << endl;
    i++;
}



    return 0;
}