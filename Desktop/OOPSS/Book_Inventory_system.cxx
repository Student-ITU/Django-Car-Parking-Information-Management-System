/*Task: Bookstore Inventory Management

A local bookstore wants to manage its inventory effectively. They have various categories of books, each with different prices. Write a program to assist the bookstore owner with the following tasks:

Add Books to Inventory:
Allow the owner to add new books to the inventory. For each book, the owner should input the title, author, category, and price.

Search Books:
Implement a search functionality where the owner can search for books by title, author, or category. If a book is found, display its details (title, author, category, and price). If not found, display a message indicating that the book is not in the inventory.

Update Book Price:
Allow the owner to update the price of a book in the inventory. Prompt the owner to enter the title of the book and the new price.

Sell Books:
Implement a functionality to sell books to customers. Ask the owner to enter the title of the book being sold. If the book is in stock, deduct one from the inventory and display the total price. If the book is not in stock, display a message indicating that the book is out of stock.

Inventory Summary:
Provide an end-of-day summary showing the total number of books in each category, the total value of the inventory, and the total revenue generated from book sales.*/

#include <iostream>
using namespace std;
 
int main() {
    
    string title[100];
    string author[100];
    string category[100];
    int quantity[100];
    int price[100];
    int choice;
    int totalPrice = 0;
    string search;
    bool exit = true;
    int count = 0;
    bool check = false;

    while (exit == true) {
        cout << "1. For adding books to the inventory, press 1" << endl;
        cout << "2. For searching books to the inventory, press 2" << endl;
        cout << "3. For updating books to the inventory, press 3" << endl;
        cout << "4. For selling books to the inventory, press 4" << endl;
        cout << "5. For checking summary books to the inventory, press 5" << endl;
        cout << "For exit, press 6" << endl;

        cin >> choice;
        if (choice == 1) {   
            cout << "Enter Title" << endl;   
            cin >> title[count];
            cout << "Enter Author" << endl;  
            cin >> author[count];
            cout << "Enter Category" << endl;  
            cin >> category[count];
            cout << "Enter Price" << endl;  
            cin >> price[count];
            cout << "Enter Quantity" << endl;  
            cin >> quantity[count];
            count++;
        }

        else if (choice == 2) {
            cout << "Search book" << endl;
            cin.ignore();
            getline(cin, search);

            for (int i = 0; i < count; i++) {
                if (search == title[i] || search == author[i] || search == category[i]) { //Price nhi lia cz woh int me hai
                    cout << "The details of the book is as follow" << endl;
                    cout << "The Title of the book is : " << title[i] << endl;
                    cout << "The Author of the book is : " << author[i] << endl;
                    cout << "The Category of the book is : " << category[i] << endl;  
                    cout << "The Price of the book is : " << price[i] << endl;
                    cout << "The quantity of the book is : " << quantity[i] << endl;

                    check = true;//mistake when Quran
                } else {
                    check = false;
                }
            }

            if (check == true) {
                cout << "We found the book" << endl;
            } else {
                cout << "Book is not available" << endl;
            }

        }
        
        else if (choice == 3) {
            cout << "For Updating books" << endl;
            cout << "Enter title of book" << endl;
            cin >> search;

            for (int i = 0; i < count; i++) {
                if (search == title[i]) {
                    cout << "Old Price : " << price[i] << endl;
                    cout << "Enter the new price" << endl;
                    cin >> price[i];
                    cout << "Price updated " << price[i] << endl;
                }
            }
        }

        else if (choice == 4) {
            cout << "Enter the title of book you want to sell" << endl;
            cout << "For Selling the books" << endl;
            cout << "Enter title of book" << endl;
            cin >> search;
            for (int i = 0; i < count; i++) {
                if (search == title[i] && quantity[i] > 0) {
                    cout << "Selling book to customer, Book is " << title[i] << endl;
                    cout << "Price is : " << price[i] << endl;
                    totalPrice = totalPrice + price[i];
                    quantity[i] = quantity[i] - 1;
                    cout << "You have successfully purchased the book" << endl;
                    
                    check = true;
                    break;
                }
            }

            if(check == false) { //or !check
                cout << "This book is not in stock" << endl; //2 times a raha book is not in the stock
            }
        }

        else if (choice == 5) {
            cout << "The summary of the day is" << endl;
    
            for (int i = 0; i < count; i++) {
               cout << "Total price is " << totalPrice;
            }
        }

        else if (choice == 6) {
            cout << "Exit" << endl;
            exit = false;
        }
    }

    return 0;
}