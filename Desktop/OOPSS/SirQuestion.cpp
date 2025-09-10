// #include <iostream>
// using namespace std;

// int main() {

//     int purchasedAmount;
//     char c;
//     bool check = true;
//     while(check == true) {
//         cin >> c;
//         if (c == 'q') {
//             cout << "Exit" << endl;
//             check = false;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//     int totalPurchasedAmount;
//     char c;
//     bool check = true;
//     double discount;
//     double DiscountedAmount;
//     double GrandTotal;
//     while (check == true) {
//         cout << "Press q to exit or enter c to continue: ";
//         cin >> c;
//         if (c == 'q') {
//             cout << "Exit" << endl;
//             check = false;
//         }
//         else if (c == 'c') {
//             cout << "Enter your purchase amount: ";
//             cin >> totalPurchasedAmount;

//             if (totalPurchasedAmount >= 100 && totalPurchasedAmount < 500) {
//                 discount = 0.05;
//             }

//             else if (totalPurchasedAmount >= 500 && totalPurchasedAmount < 1000) {
//                 discount = 0.10;
//             }

//             else if (totalPurchasedAmount >= 1000) {
//                 discount = 0.15;
//             }
//             DiscountedAmount = totalPurchasedAmount * discount;
//             GrandTotal = totalPurchasedAmount - DiscountedAmount;

//             cout << "The total purchase amount is : " << totalPurchasedAmount << endl << "The Discounted Amount is : " << DiscountedAmount << endl << "The Final Amount is : " << GrandTotal << endl;
//         }

//         else {
//             cout << "You entered the wrong input" << endl;
//         }
//     }
//     return 0;
// }

// Changing in the above Question

// #include <iostream>
// using namespace std;

// int main() {

//     int totalPurchasedAmount;
//     char c;
//     bool check = true;
//     double discount;
//     double DiscountedAmount;
//     double GrandTotal;
//     cout << "Enter your purchase amount: ";
//     cin >> totalPurchasedAmount;
//     while (check == true) {
//             if (totalPurchasedAmount >= 100 && totalPurchasedAmount < 500) {
//                 discount = 0.05;
//             }

//             else if (totalPurchasedAmount >= 500 && totalPurchasedAmount < 1000) {
//                 discount = 0.10;
//             }

//             else if (totalPurchasedAmount >= 1000) {
//                 discount = 0.15;
//             }
//             DiscountedAmount = totalPurchasedAmount * discount;
//             GrandTotal = totalPurchasedAmount - DiscountedAmount;

//         cout << "The total purchase amount is : " << totalPurchasedAmount << endl << "The Discounted Amount is : " << DiscountedAmount << endl << "The Final Amount is : " << GrandTotal << endl;

//         cout << "Press q to exit or enter c to continue: ";
//         cin >> c;
//         if (c == 'q') {
//             cout << "Exit" << endl;
//             check = false;
//         }
//         else if (c == 'c') {
//             cout << "Enter your purchase amount: ";
//             cin >> totalPurchasedAmount;

//         }

//         else {
//             cout << "You entered the wrong input" << endl;
//             break;
//         }
//     }
//     return 0;
// }

// Another question
// #include <iostream>
// using namespace std;

// int main()
// {

//     int choice;
//     int currentBalance = 0; // Global ke waja se har jaga access kr sakte
//     int Deposit;
//     int withdraw;
//     char c;
//     bool exit = true;

//     while (exit == true)
//     {

//         cout << "For checking account balance, Press 1" << endl;
//         cout << "For checking Deposit Money, Press 2" << endl;
//         cout << "For checking Withdrawl, Press 3" << endl;
//         cout << "For Exit, Press 4" << endl;

//         cin >> choice;

//         if (choice == 1)
//         {
//             cout << "Account Balance " << currentBalance << endl;
//         }

//         else if (choice == 2)
//         {
//             cout << "For Deposit Money" << endl;
//             cout << "How much money you want to deposit?" << endl;
//             cin >> Deposit;
//             cout << "You deposit money is " << Deposit << endl;
//             currentBalance += Deposit;
//         }

//         else if (choice == 3)
//         {

//             cout << "How much money you want to Withdraw Money" << endl;
//             cin >> withdraw;
//             if (currentBalance < withdraw)
//             {
//                 cout << "Your Current Balance is not enough to for withdrawing money" << endl;
//             }

//             else if (withdraw > 500)
//             {
//                 cout << "You can not withdraw Money more then 500" << endl;
//             }

//             else if (withdraw % 20 == 0)
//             {
//                 currentBalance -= withdraw;
//                 cout << "You have successfully withdrawl your amount" << endl;
//             }

//             else
//             {
//                 cout << "You have entered wrong inputttt" << endl;
//             }
//         }

//         else if (choice == 4)
//         {
//             cout << "Exit" << endl;
//             // return 1;
//             exit = false;
//         }

//         else {
//             cout << "You have entered wrong input" << endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
 
int main() {
    
    int accountBalance = 0;
    int choose;
    string accountype;
    bool exit = true;
    while (exit == true) {
        
        cout << "For creating account, Press 1" << endl;
        cout << "For depositing money, Press 2" << endl;
        cout << "For withdrawing money, Press 3" << endl;
        cout << "For displaying acount details, Press 4" << endl;

        cout << "Enter the option" << endl;
        cin >> choose;

        if (choose == 1)
        {
            int temp2;
            cout << "For saving account press 1 \n";
            cout << "For checking account press 2\n";
            cin >> temp2;

            if(temp2 == 1){
                accountype = "saving";
                accountBalance = 100;
                cout << "You have succesfully created your account and your account type is "<< accountype <<endl;
            }
            else if(temp2 == 2){
                accountype = "checking";
                accountBalance = 50;
                cout << "You have succesfully created your account and your account type is " << accountype << endl;
            }
            else{
                cout<<" Error: You input wrong number\n";
            }


        }
        else if (choose == 2)
        {
            int tempamout;
            if(accountype=="saving")
            {
                cout<<"How much amount you want to deposit ?";
                cin>>tempamout;
                accountBalance += tempamout;
            }
            else if (accountype=="checking")
            {
                cout<<"How much amount you want to deposit ?";
                cin>>tempamout;
                accountBalance += tempamout;
            }
            else
            {
                cout<<"You do not have account, First create your account";
            }

        }
        else if(choose==3)
        {
            int tempamout;
            if(accountype=="saving")
            {
                cout<<"How much amount you want to withdraw ?";
                cin>>tempamout;
                if(accountBalance >= tempamout)
                {
                    accountBalance -= tempamout;
                    cout<<"You  have succesfully withraw amount"<<tempamout;
                }
                else{
                    cout<<"You do not have sufficient balance";
                }
            }
            else if (accountype == "checking")
            {
                cout<<"How much amount you want to withdraw ?";
                cin>>tempamout;
                if(accountBalance >= tempamout)
                {
                    accountBalance -= tempamout;
                    cout<<"You  have succesfully withraw amount"<<tempamout;
                    if(accountBalance < 20)
                    {
                        accountBalance -= 10;
                    }
                }
                else{
                    cout<<"You do not have sufficient balance";
                }      
            }
            else
            {
                cout<<"You do not have account, First create your account";
            }
        }
        else if (choose == 4)
        {
            cout<<"Your account balance is :"<<accountBalance;
        }

    }
    return 0;
}
