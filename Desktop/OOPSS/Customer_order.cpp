/*Customer Order Management System:

A local bakery wants to create a program to manage customer orders effectively. Write a program to assist the bakery owner with the following tasks:

Place Orders:
Allow customers to place orders for bakery items. Each order should include the item name, quantity, and price per item.

Track Order Status:
Implement functionality to track the status of orders. Customers should be able to check the status of their orders by providing their order ID.

Update Order Status:
Enable bakery staff to update the status of orders. Staff should be able to mark orders as "in progress," "ready for pickup," or "completed."

Cancel Orders:
Allow customers to cancel their orders if they change their minds. Once canceled, the order status should reflect this change.

Order Summary:
Provide an end-of-day summary showing the total number of orders, the total revenue generated, and the breakdown of orders by item category.*/

#include <iostream>
using namespace std;
             
int main() {
    
    string name[100];
    int quantity[100];
    int price[100];
    int orderID[100];
    string cancel;
    int choice;
    int count = 0;
    int tracking;
    int time;
    int totalRevenue = 0;
    bool exit = true;
    bool check = false;
    while (exit == true) {
        cout << "1. For placing order, Press 1" << endl;
        cout << "2. For tracking order, Press 2" << endl;
        cout << "3. For updating order, Press 3" << endl;
        cout << "4. For canceling order, Press 4" << endl;
        cout << "5. For order summary, Press 5" << endl;
        cout << "6. For exit, press 6" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "*****(For placing order)*****" << endl;
            cout << "Enter order id" << endl;
            cin >> orderID[count];
            cout << "Enter item name" << endl;
            cin >> name[count];
            cout << "Enter quantity" << endl;
            cin >> quantity[count];
            cout << "Enter price" << endl;
            cin >> price[count];
            count++;
        }

        else if (choice == 2) {
            cout << "Tracking order" << endl;
            cin >> tracking;
            for (int i = 0; i < count; i++) {
                if (tracking == orderID[i]) {
                    cout << "Order id is : " << orderID[i] << endl;
                    cout << "Item name is : " << name[i] << endl;
                    cout << "Quantity is : " << quantity[i] << endl;
                    totalRevenue = price[i] * quantity[i];
                    cout << "Price is : " << totalRevenue << endl;
                }
            }
        }

        else if (choice == 3) {
            cout << "For updating order" << endl;
            cout << "Order's time is 30 mins" << endl;
            cin >> time;

            if (time < 30) {
                cout << "Your order is in progress" << endl;
            }

            else if (time == 30) {
                cout << "Your order is completed and is ready for pickup" << endl;
            }

            else if (time >= 30) {
                cout << "Your order is overdue or delayed" << endl;
            }
        }

        else if (choice == 4) {
            cout << "You can only cancel the order if it is in progress or delayed, press cancel" << endl;
            cin >> cancel;
            cout << "Enter the time" << endl;
            cin >> time;
            if (cancel == "Cancel" && (time < 30 ||time > 30)) {
            cout << "Your order has been CANCELED" << endl;
            cout << "Thanks for visiting" << endl;
            return 0;
            }
            else if (cancel == "No" && time == 30) {
                cout << "You didn't cancel the order" << endl;
                check = true;
            }
        }

        else if (choice == 5) {
            cout << "Exit" << endl;
            exit = false;
        }
        
        
    }

    if (check == true) {

        cout << "*****(The summary is)*****" << endl;
        for (int i = 0; i < count; i++) {
            cout << "The total number of order : " << name[i] << endl;
            cout << "The total number of Quantity : " << quantity[i] << endl;
            totalRevenue = price[i] * quantity[i];
            cout << "The total revenue is : " << totalRevenue;
        }
    }
    
    return 0;
}