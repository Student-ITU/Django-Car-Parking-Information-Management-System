/* Hardware Store Inventory Management:
A local hardware store wants to manage its inventory effectively. Write a program to assist the store owner with the following tasks:
Add Hardware Items to Inventory: Allow the owner to add new hardware items to the inventory. For each item, prompt the owner to input the name, category, quantity, and price per unit.
Check Stock Levels: Implement a functionality to check the stock levels of hardware items in the inventory. Prompt the owner to enter the name of the item. If the item is found, display its current stock level. If not found, display a message indicating that the item is not in the inventory.
Restock Inventory: Allow the owner to restock the inventory by adding more items. Prompt the owner to enter the name of the item and the quantity to be added.
Sell Hardware Items: Implement a functionality to sell hardware items to customers. Ask the owner to enter the name of the item being sold. If the item is in stock, deduct the quantity sold from the inventory and display the total price. If the item is not in stock, display a message indicating that the item is out of stock.
Inventory Summary: Provide an end-of-day summary showing the total quantity of items in each category, the total value of the inventory, and the total revenue generated from item sales. */


#include <iostream>
using namespace std;

int main() {
    
    string hardwareName[100];
    string category[100];
    int quantity[100];
    int quantity1[100];
    int price[100];
    bool exit = true;
    int choice;
    string search;
    int count = 0;
    int totalRevenue = 0;
    int restore = 0;
    int totalInventoryValue = 0;
    int totalInventoryValue1 = 0;
    int totalPrice = 0;
    int sellQ;

    while (exit == true) {
        cout << "1. For adding Hardwares to the inventory, press 1" << endl;
        cout << "2. For checking stock levels in the inventory, press 2" << endl;
        cout << "3. For Restoring books to the inventory, press 3" << endl;
        cout << "4. For selling hardware in the inventory, press 4" << endl;
        cout << "5. For checking summary of hardware in the inventory, press 5" << endl;
        cout << "For exit, press 6" << endl;
        cout << "Enter the choice" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "Enter the Hardware name" << endl;
            cin >> hardwareName[count];
            cout << "Enter the Category" << endl;
            cin >> category[count];
            cout << "Enter the Quantity" << endl;
            cin >> quantity[count];
            cout << "Enter the Quantity1" << endl;
            cin >> quantity1[count];
            cout << "Enter the price" << endl;
            cin >> price[count];
            count++;
        }

        else if (choice == 2) {
            cout << "Enter Hardware name to check its availability" << endl;
            cin.ignore();
            getline(cin, search);

            for (int i = 0; i < count; i++) {
                if (search == hardwareName[i]) {
                    cout << "The remaining stock are : " << quantity[i] << endl;
                }

                else {
                    cout << "The item is not in the inventory" << endl;
                }
            }
            
        }

        else if (choice == 3) {
            cout << "For restoring the item, Enter item name" << endl;
            cin.ignore();
            getline(cin, search);

            for (int i = 0; i < count; i++) {
                if (search == hardwareName[i]) {
                    cout << "How much do you want to restore " << hardwareName[i] << " ? " << endl;
                    cin >> restore;
                    quantity[i] = quantity[i] + restore;
                    cout << "So the new quantity is " << quantity[i] << " as we restored " << restore << " quantities of " << hardwareName[i] << endl;
                }

            }

        }

        else if (choice == 4) {
            cout << "For selling the item, Enter item name" << endl;
            cout << "Enter Hardware name for selling" << endl;
            cin.ignore();
            getline(cin, search);
            cout << "Enter the quantity to sell" << endl;
            cin >> sellQ;

            for (int i = 0; i < count; i++) {
                if (search == hardwareName[i]) {
                   if (quantity[i] >= sellQ) {
                    totalPrice = sellQ * price[i];
                    totalRevenue += totalPrice;
                    quantity[i] -= sellQ;
                    cout << "Sold " << sellQ << " units of " << hardwareName[i] << ". Total Price: " << totalPrice << endl;
                    
                   
                } else {
                    cout << "Sorry, not enough stock available for " << hardwareName[i] << endl;
                }

                

                } else { // why not printing inside loop
                    cout << "This item is not in the inventory" << endl;
                }
            }

        }

        else if (choice == 5) {
            cout << "*****Summary*****" << endl;
            cout << "Enter the category" << endl;
            cin.ignore();
            getline(cin, search);

            for (int i = 0; i < count; i++) {
                if (search == category[i]) {
                    cout << "Primarily there were " << quantity1[i] << " " << category[i] << " after restoring " << restore << " of them and selling the " << sellQ << " of them "; 
                    cout << "Total quantity of " << category[i] << " are : " << quantity[i] << endl;
                    totalInventoryValue += quantity1[i] * price[i];
                    cout << "Total Value of the OLD Inventory : $" << totalInventoryValue << endl;
                    totalInventoryValue1 += quantity[i] * price[i];
                    cout << "Total Value of the remaining Inventory : $" << totalInventoryValue1 << endl;
                    cout << "Total Revenue Generated from Item Sales: $" << totalPrice << endl;
                }
            }
        }

        else if (choice == 6) {
            cout << "Exit" << endl;
            exit = false;
        }
    }
    return 0;
}