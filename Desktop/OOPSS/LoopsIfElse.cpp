// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int i = 0;
//     do {
//         cout << i << endl;
//         i++;
//     } while (i < 5);

//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     if (condition1) {
//     // If condition1 is true, this block is entered
//     if (condition2) {
//         // If condition1 and condition2 both are true, this block is executed
//         // Code block A
//     } else {
//         // If condition1 is true but condition2 is false, this block is executed
//         // Code block B
//     }
// } else {
//     // If condition1 is false, this block is executed
//     // Code block C
// }

//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     if (condition1) {
//     // If condition1 is true, this block is executed
//     // Code block A
// } else if (condition2) {
//     // If condition1 is false and condition2 is true, this block is executed
//     // Code block B
// } else {
//     // If both condition1 and condition2 are false, this block is executed
//     // Code block C
// }

//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int main() {
//     if (condition1) {
//     // Code block A
// } else if (condition2) {
//     // Code block B
// } else if (condition3) {
//     // Code block C
// } else {
//     // Code block D
// }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Pick a number from 1 to 8." << endl;
//     char answer;
//     cout << "Is it less than 5? (y|n): ";
//     cin >> answer;
//     if (answer == 'y') { // 1 <= n <= 4
//         cout << "Is it less than 3? (y|n): ";
//         cin >> answer;
//         if (answer == 'y') { // 1 <= n <= 2
//             cout << "Is it less than 2? (y|n): ";
//             cin >> answer;
//             if (answer == 'y') {
//                 cout << "Your number is 1." << endl;
//             }
//             else {
//                 cout << "Your number is 2." << endl;
//             }
//         } else { // 3 <= n <= 4
//             cout << "Is it less than 4? (y|n): ";
//             cin >> answer;
//             if (answer == 'y') {
//                 cout << "Your number is 3." << endl;
//             }
//             else {
//                 cout << "Your number is 4." << endl;
//             }
//         }
//     } else { // 5 <= n <= 8
//         cout << "Is it less than 7? (y|n): ";
//         cin >> answer;
//         if (answer == 'y') { // 5 <= n <= 6
//             cout << "Is it less than 6? (y|n): ";
//             cin >> answer;
//             if (answer == 'y') {
//                 cout << "Your number is 5." << endl;
//             }
//             else {
//                 cout << "Your number is 6." << endl;
//             }
//         } else { // 7 <= n <= 8
//             cout << "Is it less than 8? (y|n): ";
//             cin >> answer;
//             if (answer == 'y') {
//                 cout << "Your number is 7." << endl;
//             }
//             else {
//                 cout << "Your number is 8." << endl;
//             }
//         }
//     }
//     return 0;
// }



//Doing above question

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     cout << "Pick a number from 1 to 8." << endl;
//     char answer;
//     cout << "Is it less than 5? (y|n): " << endl;
//     cin >> answer;

//     if (answer == 'y') {
//         cout << "Is it less then 3(y / n)?" << endl;
//         cin >> answer;

//         if (answer == 'y') {
//             cout << "Is it less then 2(y / n)?" << endl;
//             cin >> answer;

//             if (answer == 'y') {
//                 cout << "*****Number is 1*****" << endl;
//             } else {
//                 cout << "*****Number is 2*****" << endl;
//             }

//         } else {
//             cout << "Is it less then 4(y / n)?" << endl;
//             cin >> answer;
//             if (answer == 'y') {
//                 cout << "*****Number is 3*****" << endl;
//             } else {
//                 cout << "*****Number is 4*****" << endl;
//             }
//         }
//     } else {
//         cout << "Is your number less then 7(y / n)?" << endl;
//         cin >> answer;
        
//         if (answer == 'y') {
//             cout << "Is it less then 6(y / n)?" << endl;
//             cin >> answer;

//             if (answer == 'y') {
//                 cout << "*****Number is 5*****" << endl;
//             } else {
//                 cout << "*****Number is 6*****" << endl;
//             }
//         } else {
            
//             cout << "So, is your number less then 8(y / n)?" << endl;
//             cin >> answer;
//             if (answer == 'y') {
//                 cout << "*****Number is 7***** "<< endl;
//             } else {
//                 cout << "*****Number is 8*****" << endl;
//             }
//         }
//     }

    
//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int days;
//     double lateFee;
//     double fine;
//     char c;
//     bool exit = true;
//     while (exit == true) {
//         cout << "If you want to exit, Press 'E' and If you want to continue, Press 'C' " << endl;
//         cin >> c;
//         if (c == 'E' || c == 'e') {
//             cout << "Exit" << endl;
//             exit = false;
//         }

//         // cout << "If you want to continue, Press 'C' " << endl;
//         // cin >> c;
//         else if (c == 'C' || c == 'c') {
            
//             cout << "Enter the number of days the book is overdue" << endl;
//             cin >> days;

//             if (days <= 7) {
//                 cout << "Yes, the book is overdue for " << days << " days" << endl;
//                 fine = 69.75;
//             }

//             else if (days >= 8 && days <14) {
//                 cout << "Yes, the book is overdue for " << days << endl;
//                 fine = 139.5;
//             }

//             else if (days >= 14) {
//                 cout << "Yes, the book is overdue for " << days << endl;
//                 fine = 279.53;
//             }

//             lateFee = days * fine;
//             cout << "The fine is : " << lateFee << endl;
//         }

//         else { //Yeh same jo uper if else if and else ka likha us jese shakal ban rhy jab upr wale sare false tou yeh chale ga
//             cout << "You have entered the wrong input except(E|e / C|c)" << endl;
//         }
//     }
//     return 0;
// }

// Quit and continue baad mein poochu ga

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int days;
//     double lateFee;
//     double fine;
//     char c;
//     bool exit = true;
//     cout << "Enter the number of days the book is overdue" << endl;
//     cin >> days;
//     while (exit == true) {
//         // cout << "If you want to exit, Press 'E' and If you want to continue, Press 'C' " << endl;
//         // cin >> c;
//         // if (c == 'E' || c == 'e') {
//         //     cout << "Exit" << endl;
//         //     exit = false;
//         // }

//         // // cout << "If you want to continue, Press 'C' " << endl;
//         // // cin >> c;
//         // else if (c == 'C' || c == 'c') {

//             if (days <= 7) {
//                 cout << "Yes, the book is overdue for " << days << " days" << endl;
//                 fine = 69.75;
//             }

//             else if (days >= 8 && days <14) {
//                 cout << "Yes, the book is overdue for " << days << endl;
//                 fine = 139.5;
//             }

//             else if (days >= 14) {
//                 cout << "Yes, the book is overdue for " << days << endl;
//                 fine = 279.53;
//             }

//             lateFee = days * fine;
//             cout << "The fine is : " << lateFee << endl;
//         // }

//         cout << "If you want to exit, Press 'E' and If you want to continue, Press 'C' " << endl;
//         cin >> c;
//         if (c == 'E' || c == 'e') {
//             cout << "Exit" << endl;
//             exit = false;
//         }

//         // cout << "If you want to continue, Press 'C' " << endl;
//         // cin >> c;
//         else if (c == 'C' || c == 'c') {
            
//             cout << "Enter the number of days the book is overdue" << endl;
//             cin >> days;

//         }
        
//         else { //Yeh same jo uper if else if and else ka likha us jese shakal ban rhy jab upr wale sare false tou yeh chale ga
//             cout << "You have entered the wrong input except(E|e / C|c)" << endl;
//         }
//     }
//     return 0;
// }

// Factorial of a number

// #include <iostream>
// using namespace std;
 
// int main() { //yeh mein ne likha is mein masla a raha ke agar -3 likhta tou neeche wale cheez bhe chal jate
    
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     int count = 1;
//     for (int i = 1; i < n; i++) {
//         if (n < 0) {
//             cout << "Invalid Input" << endl;
//             return 1;
//         } else {
//             count = count * i;
//         }
//     }

//     cout << "The factorial of " << n << " is " << count * n;
//     return 0;
// }

//Corrected by me

// #include <iostream>
// using namespace std;
 
// int main() { 
    
//     int n;
//     cout << "Enter the number : " ;
//     cin >> n;
//     int count = 1;

//     if (n < 0) {
//         cout << "Invalid Input" << endl;
//         return 1;
//     }

//     for (int i = 1; i < n; i++) {
//         count = count * i;
//     }

//     cout << "The factorial of " << n << " is " << count * n;
//     return 0;
// }

// Design a program for a simple vending machine that sells snacks. The vending machine offers three types of snacks: chips, chocolate bars, and cookies. Each snack has a fixed price: chips cost $1.50, chocolate bars cost $2.00, and cookies cost $1.00.Write a C++ program that simulates this vending machine. The program should display a menu with options for selecting a snack. Prompt the user to choose a snack by entering the corresponding number. After selecting a snack, the program should calculate and display the total price. Use if-else statements to handle different snack selections. Ensure the program handles invalid inputs appropriately.Once the user completes a transaction, they should be prompted if they want to continue buying snacks or exit the program.

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int no_of_snacks;
//     float price;
//     int choose;
//     char choice;
//     bool exit = true;

//     while (exit == true) {

//         cout << "Select 'E' or 'e' tou exit or select 'C' or 'c' to continue" << endl;
//         cin >> choice;
//         if (choice == 'E' || choice == 'e') {
//             cout << "Exit" << endl;
//             exit = false;
//         }

//         else if (choice == 'C' || choice == 'c') {
//             cout << "Enter the option" << endl;
//             cin >> choose;

//             if(choose == 0) {
              
//                 cout << "*****MENU*****" << endl;
//                 cout << "Choose a snack" << endl;
//                 cout << "1. Chips" << endl;
//                 cout << "2. Chocolate Bars" << endl;
//                 cout << "3. Cookies" << endl;
//             }

//             else if (choose == 1) {
//                 cout << "You have entered option 1 and here we have 1 chips of price 420" << endl;
//                 price = 420;
//                 cout << "How many Chips do you want?" << endl;
//                 cin >> no_of_snacks;
//                 cout << "Your total amount will be : " << no_of_snacks * price << endl;
//             }

//             else if (choose == 2) {
//                 cout << "You have entered option 2 and here we have 1 Chocolate Bar of price 560" << endl;
//                 price = 560;
//                 cout << "How many Chocolatee Bars do you want?" << endl;
//                 cin >> no_of_snacks;
//                  cout << "Your total amount will be : " << no_of_snacks * price << endl;
//             }

//             else if (choose == 3) {
//                 cout << "You have entered option 3 and here we have 1 Cookie of price 280" << endl;
//                 price = 280;
//                 cout << "How many Cookies do you want?" << endl;
//                 cin >> no_of_snacks;
//                  cout << "Your total amount will be : " << no_of_snacks * price << endl;
//             }

//             // (((((((((((cout << "Your total amount will be : " << no_of_snacks * price << endl;

//             else if (choose == 4) {
//                 cout << "You have entered the 4, now Exit" << endl;
//                 exit = false;
//             }

//             else {
//                 cout << "You have entered the wrong choose" << endl;
//             }
//         }

//             // else if (choose == 4) {
//             //     cout << "You have entered the 4, now Exit" << endl;
//             //     exit = false;
//             // }

//             else {
//                 cout << "You have entered the wrong input other the (E,e |||| C,c)" << endl;
//             }
//     }
//     return 0;
// }

//Scenario:
// You are tasked with creating a program for a simplified banking system. The system should support two types of accounts: Savings Account and Checking Account. Each account type has different rules and features:

// Savings Account:
// Initial balance: $100
// Annual interest rate: 3%
// Users can deposit and withdraw money.
// Interest is compounded annually and added to the account balance at the end of the year.
// Checking Account:
// Initial balance: $50
// Users can deposit and withdraw money.
// If the balance falls below $20, a $10 penalty fee is charged.
// Write a C++ program that simulates this simplified banking system. The program should provide options for creating accounts, depositing money, withdrawing money, and displaying account details. Use loops to allow users to perform multiple transactions until they choose to exit. Include appropriate error messages for invalid transactions and account operations.

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int accountBalance = 0;
//     int saving;
//     int checking;
//     int deposit;
//     int x;
//     int y;
//     int choose;
//     char choice;
//     bool exit = true;
//     while (exit == true) {

//         cout << "Enter 'E' or 'e' to exit and 'C' or 'c' to continue" << endl;
//         cin >> choice;
//         if (choice == 'E' || choice == 'e') {
//             cout << "Exit" << endl;
//             exit = false;
//         }

//         else if (choice == 'C' || choice == 'c') {

            
//             cout << "MENU" << endl;
//             cout << "For creating account, Press 1" << endl;
//             cout << "For depositing money, Press 2" << endl;
//             cout << "For withdrawing money, Press 3" << endl;
//             cout << "For displaying acount details, Press 4" << endl;
//             cout << "Enter the option" << endl;
//             cin >> choose;

            // else if (choose == 1) {
            //     cout << "You chose 1 to check the account balance" << endl;
            //     cout << "Your current Balance is " <<  accountBalance << endl;
            // }

            // else if (choose == 2) {
            //     cout << "Type 1 if your account already exist and type 0 if not?" << endl;
            //     cin >> x;
            //     if (x == 1) {
            //         cout << "You already have an account" << endl;
            //     }

            //     else if (x == 0) {
            //         cout << "You dont have an account" << endl;
//                     exit = false;
//                 }
//             }

//             else if (choose == 3) {
//                 cout << "You have selected option 2 to deposit money" << endl;
//                 cout << "Select the account type -> 1. Saving and 2. Checking" << endl;
//                 cin >> y;
//                 if (y == 1) {
//                     cout << "You chose Saving account" << endl;
//                     cout << "Enter the amount to deposit" << endl;
//                     cin >> deposit;
//                     accountBalance = deposit;
//                     saving = accountBalance;
//                 } 
                
//                 else if (y == 0) {
//                     cout << "You chose Checking account" << endl;
//                     cout << "Enter the amount to deposit" << endl;
//                     cin >> deposit;
//                     accountBalance = deposit;
//                     checking = accountBalance;
//                 }
//             }
//         }
//     }
//     return 0;
// }

//Question

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int BooksTaken;
//     int max;
//     string name;
//     int borrow, days;
//     float lateFee;
//     float lateFee1;
//     int choose;
//     string types;
//     char choice;
//     bool exit = true;
//     while (exit == true) {

//         cout << "Enter 'E' or 'e' to exit and 'C' or 'c' to continue" << endl;
//         cin >> choice;
//         if (choice == 'E' || choice == 'e') {
//             cout << "Exit" << endl;
//             exit = false;
//         }

//         else if (choice == 'C' || choice == 'c') {

//             cout << "You've been tasked with creating a simple program to manage a library system. The library system should support two types of users: Students and Faculty members." << endl;

//             cout << "The following options are :- " << endl;
//             cout << "0. Register a new user(Student / Faculty)" << endl;
//             cout << "1. For all information" << endl;
//             cout << "2. Borrow a book" << endl;
//             // cout << "3. Return a book" << endl;
//             cout << "3.Display user details(name, type, books borrowed, due date, late fees if any)" << endl;

//             cout << "Enter the option" << endl;
//             cin >> choose;

//             if (choose == 0) {
                
//                 cout << "Enter the type" << endl;
//                 cin >> types;

//                 if (types == "Students") {
//                     cout << "You have selected Student Type" << endl;
//                     cout << "Enter the student name" << endl;
//                     cin >> name;
//                 }

//                 else if (types == "Faculty") {
//                     cout << "You have selected Faculty Type" << endl;
//                     cout << "Enter the Faculty name" << endl;
//                     cin >> name;
//                 }

//                 else {
//                     cout << "Please select correct type(Student / Faculty)" << endl;
//                 }
//             }   

//             else if (choose == 1) {
                
//                 if (types == "Students") {

//                     cout << "All Information for Student" << endl;
//                     cout << "Student can borrow upto 3 books at a time" << endl;
//                     cout << "Student can borrow for a maximum of 14 days" << endl;
//                     cout << "Late fee for the Student is 70 Rs." << endl;
//                 }

//                 else if(types == "Faculty") {

//                     cout << "All Information for Student" << endl;
//                     cout << "Student can borrow upto 5 books at a time" << endl;
//                     cout << "Student can borrow for a maximum of 30 days" << endl;
//                     cout << "Late fee for the Faculty is 140 Rs." << endl;
//                 }
//             }

//             else if (choose == 2) {

//                 if (types == "Students") {

//                     cout << "Enter number of books taken" << endl;
//                     cin >> BooksTaken;
//                     cout << "Students can borrow upto 3 books at a time" << endl;

//                     if (BooksTaken <= 3) {

//                         cout << "Students has borrowed " << BooksTaken << " Books" << endl;

//                         cout << "Enter number of days of borrowed book" << endl;
//                         cin >> max;
//                         if (max <= 14) {
//                         cout << "Books borrowed for " << max << " days" << endl;
//                         }

//                         else {
//                             cout << "Books are borrowed more then 14 days now you will be charrged with a fine" << endl;
//                             lateFee = 10 * (max - 14);
//                             lateFee1 = lateFee * (BooksTaken - 3);

//                             cout << "So the late fee is : " << lateFee1 << endl;
//                         }

//                     } 

//                     else {
//                         cout << "Books are borrowed more then the limit" << endl;
//                     }
//                 }

//                 else if (types == "Faculty") {

//                     cout << "Enter number of books taken" << endl;
//                     cin >> BooksTaken;
//                     if (BooksTaken <= 5) {
//                         cout << "Faculty can borrow upto 5 books at a time" << endl;
//                         cout << "Faculty has borrowed " << BooksTaken << " Books" << endl;

//                         if (max <= 30) {
//                             cout << "Enter number of days of borrowed book" << endl;
//                             cin >> max;
//                             cout << "Books borrowed for " << max << " days" << endl;
//                         }

//                         else {
//                             cout << "Books are borrowed more then 30 days now you will be charrged with a fine" << endl;
//                             lateFee = 20;
//                             lateFee = 20 * (max - 30);
//                             lateFee1 = lateFee * (BooksTaken - 5);
//                             cout << "So the late fee is : " << lateFee1 << endl;
//                         }
//                     } 
                
//                     else {
//                         cout << "Books are borrowed more then the limit" << endl;
//                     }
//                 } 
//             }

//             else if(choose == 3) {
//                 cout << "*****Display*****" << endl;
//                 cout << "Name of user is " << name << endl;
//                 cout << "Type is " << types << endl;
//                 cout << "Books Borrowed are : " << BooksTaken << endl;
//                 cout << "Days book is borrowed is : " << max << endl;

//                 if (max > 14 || max > 30) {
//                 cout << "Late fee is : " << lateFee1 << endl;
//                 }
//             }
//         }

//         else {
//             cout << "You have entered wrong Letter other then (E||e, C||c)" << endl;
//         }
//     }
//     return 0;
// }

//Loops

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     cout << "Enter your number" << endl;
//     int n;
//     cin >> n; //Aik ese cheez jo ha kisi value pe kaam kare woh generic hote(odd, even)

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             cout << j  << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Another question

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     cout << "Enter your number" << endl;
//     int n;
//     cin >> n; 

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - ; j++) {
//             cout << " ";
//         }

//         for (int k = 1; k <= i * 2 - 1; k++) {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }


//     for (int i = n - 1; i >= 1 ; i--) {
//         for (int j = 1; j <= n - i; j++) {
            
//             cout << " ";
//         }

//         for (int k = 1; k <= i * 2 - 1; k++) {
//             cout << "*" << " ";
            
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int accountBalance = 0;
//     int choose;
//     string accountype;
//     bool exit = true;
//     while (exit == true) {
        
//         cout << "For creating account, Press 1" << endl;
//         cout << "For depositing money, Press 2" << endl;
//         cout << "For withdrawing money, Press 3" << endl;
//         cout << "For displaying acount details, Press 4" << endl;
//         cout << "For exit press 5" << endl;

//         cout << "Enter the option" << endl;
//         cin >> choose;

//         if (choose==1)
//         {
//             int temp2;
//             cout<<"For saving account press 1 \n";
//             cout<<"For checking account press 2\n";
//             cin>>temp2;

//             if(temp2 == 1){
//                 accountype = "saving";
//                 accountBalance = 100;
//                 cout<<"You have succesfully created your account and your account type is "<<accountype<<endl;
//             }
//             else if(temp2 == 2){
//                 accountype = "checking";
//                 accountBalance = 50;
//                 cout<<"You have succesfully created your account and your account type is "<<accountype<<endl;
//             }
//             else{
//                 cout<<" Error: You input wrong number\n";
//             }


//         }
//         else if (choose == 2)
//         {
//             int tempamout;
//             if(accountype=="saving")
//             {
//                 cout<<"How much amount you want to deposit ?";
//                 cin>>tempamout;
//                 accountBalance += tempamout;
//             }
//             else if (accountype=="checking")
//             {
//                 cout<<"How much amount you want to deposit ?";
//                 cin>>tempamout;
//                 accountBalance += tempamout;
//             }
//             else
//             {
//                 cout<<"You do not have account, First create your account";
//             }

//         }
//         else if(choose==3)
//         {
//             int tempamout;
//             if(accountype=="saving")
//             {
//                 cout<<"How much amount you want to withdraw ?";
//                 cin>>tempamout;
//                 if(accountBalance>=tempamout)
//                 {
//                     accountBalance -= tempamout;
//                     cout<<"You  have succesfully withraw amount"<<tempamout;
//                 }
//                 else{
//                     cout<<"You do not have sufficient balance";
//                 }
//             }
//             else if (accountype=="checking")
//             {
//                 cout<<"How much amount you want to withdraw ?";
//                 cin>>tempamout;
//                 if(accountBalance>=tempamout)
//                 {
//                     accountBalance -= tempamout;
//                     cout<<"You  have succesfully withraw amount"<<tempamout;
//                     if(accountBalance<20)
//                     {
//                         accountBalance -= tempamout;
//                     }
//                 }
//                 else{
//                     cout<<"You do not have sufficient balance";
//                 }      
//             }
//             else
//             {
//                 cout<<"You do not have account, First create your account";
//             }
//         }
//         else if (choose==4)
//         {
//             cout<<"Your account balance is :"<<accountBalance;
//         }

//         else if (choose == 5) {
//             cout << "Exit" << endl;
//             exit = false;
//         }
//     }
//     return 0;
// }

//Another Question

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int n = 5;
//     for (int i = n; i >= 1; i--) {
//         cout << i << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int num;
//     cin >> num;

//     if (num % 2 == 0) {
//         cout << "Even" << endl;
//     } else {
//         cout << "Odd" << endl;
//     }
    
//     return 0;
// }

//Patterns

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;

//    for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
        
//         if (i == 1 || i == n || j == 1 || j == n) {
//             cout << "*";
//         }

//         else {
//             cout << " ";
//         }
//     }
//     cout << endl;
//    }
    
//     return 0;
// }

/*
    *
   ***
  *****
 *******
*********

*/

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int n;
//     cout << "Enter number" << endl;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         for (int k = 1; k <= i * 2 - 1; k++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
/*
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

*/

// #include <iostream>
// using namespace std;
 
// int main() {

//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
        
//         }

//         for (int k = 1; k <= n; k++) {
//             cout << "*";
//         }
//         cout << endl;
        
//     }
//     return 0;
// }


// Task: Bookstore Inventory Management

// A local bookstore wants to manage its inventory effectively. They have various categories of books, each with different prices. Write a program to assist the bookstore owner with the following tasks:

// Add Books to Inventory:
// Allow the owner to add new books to the inventory. For each book, the owner should input the title, author, category, and price.

// Search Books:
// Implement a search functionality where the owner can search for books by title, author, or category. If a book is found, display its details (title, author, category, and price). If not found, display a message indicating that the book is not in the inventory.

// Update Book Price:
// Allow the owner to update the price of a book in the inventory. Prompt the owner to enter the title of the book and the new price.

// Sell Books:
// Implement a functionality to sell books to customers. Ask the owner to enter the title of the book being sold. If the book is in stock, deduct one from the inventory and display the total price. If the book is not in stock, display a message indicating that the book is out of stock.

// Inventory Summary:
// Provide an end-of-day summary showing the total number of books in each category, the total value of the inventory, and the total revenue generated from book sales.

// #include <iostream>
// using namespace std;
 
// int main() {

//     string books[10];
//    //upper bound(last), lower bound(1st)
//     // books[55] = "Harry Potter";//hard coded
//     // cin >> books[10]; 

//     // cout << "Information saved at index 55 is " << books[55] << endl;
//     // cout << "Information saved at index 10 is " << books[10] << endl;

//     for (int i = 0; i < 10; i++) {
//         cout << "Enter value for index " << i << endl; 
//         cin >> books[i];
//     }

//     for (int i = 0; i < 10; i++) {
//         cout << "Value for index " << i << endl; 
//         cout << books[i] << endl;
//     }

//     return 0;
// }

//Write code for searching and printing index number where we have value "sameer" in existing array name "NAMES:
// #include <iostream>
// using namespace std;
 
// int main() {
    
//     for (int i = 0; i < 5000; i++) {
//         if (names[i] == "Sameer") {
//             cout << "Indexes are" << i << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// #include <cstdlib>

// using namespace std;
 
// int main() {
    
//     int array[10];
//     for (int i = 0; i < 10; i++) {
//         array[i] = rand() % 10 + 1;
//         cout << array[i] << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int temp;
//     int size;
//     cout << "Enter the size" << endl;
//     cin >> size;
//     int array[10];

//     for (int i = 0; i < size; i++) {
//         array[i] = i;
        
//     }
//     // for (int i = 0; i < size; i++) {
//     //    cout << array[i] << endl;
        
//     // }
//     // cout << endl;
//     cout << "Swapping" << endl;
//     for (int i = 0; i < size; i++) {
//         temp = i;   // temp mein 0, i mein 10, size mein 0
//         i = size;
//         size = temp;
//         cout << temp;
//         i++;
//     }

//     return 0;
// } //zsh: abort -> band ho gya


//*****
// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     int array[5] = {1, 2, 3, 4, 10};
//     int sum = 0;
//     int average = 0;
//     for (int i = 0; i < 5; i++) {
//         sum = sum + array[i];
//     }
//     average = sum / n;
//     cout << "So the Average is : " << average << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     bool present = false;
//     string NETFLIX[10];

//     cout << "Enter the names" << endl;
//     for (int i = 4; i < 7; i++) {
//        getline(cin, NETFLIX[i]);
//     }

//     for (int i = 4; i < 7; i++) {
//        if (NETFLIX[i] == "Breaking Bad") {
//         cout << "The Book Breaking Bad is present and ";
//         present = true;
//        }
//     }
    
//     if (present == true) {
//         cout << "YES ! This is best season." << endl; 
//     }

//     else {
//         cout << "I wish i could watch it." << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int max = 0;
//     int array[5];

//     cout << "Enter the numbers" << endl;
//     for (int i = 0; i < 5; i++) {
//         cin >> array[i];
//     }

//     for (int i = 0; i < 5; i++) {
//         if (max < array[i]) {
//             max = array[i];
//         }
//     }
//     cout << "The Maximum number is :" << max;

//     return 0;
// }
//*****

// #include <iostream>
// using namespace std;

// int main() {
//     int sum = 0;
//     int i = 1;

//     // Use a do-while loop to input 5 numbers and calculate their sum
//     do {
//         sum += i;
//         i++;
//     } while (i <= 5); // Loop until i is less than or equal to 5

//     cout << "The sum of the numbers is: " << sum << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
 
int main() {
    
    int removeIndex;
    int choice;
    int x;
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    string* array = new string[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << endl;
    cout << "*****(The Movies are)*****" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << array[i] << endl;
    }

    cout << "If you want to remove any movie, press 1 to continue" << endl;
    cin >> choice;

    if (choice == 1) {
    cout << "Enter the movies you want to remove" << endl;
    cout << "Enter the index number" << endl;
    cin >> removeIndex;
  
    if (removeIndex >= 1 && removeIndex <= n) {
        // removeIndex--;
        // for (int i = removeIndex; i < n - 1; i++) { //ASK FROM SIR
        //     array[i] = array[i + 1];
        // }
        // n--;
        cout << "Movie removed successfully!" << endl;
    }

    else {
        cout << "Invalid index! Please enter a valid index." << endl;
    }


    cout << "*****(Remaining Favorite Movies)*****" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << array[i] << endl;
    }
    }

    return 0;
}
