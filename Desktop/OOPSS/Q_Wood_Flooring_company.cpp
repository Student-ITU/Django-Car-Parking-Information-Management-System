// #include <iostream>
// using namespace std;
 
// int main() {
    
//     string customers[10];
//     double quotations[10][5];
//     string woodType[3] ={"Laminate", "Pine", "Oak"};
//     double price[3] = {29.99, 39.99, 54.99};
//     int choice, count = 0, length, width, index;
//     double price1;
//     bool exit = true;
//     bool check = true;

//     while (exit == true) {
//         cout << endl;
//         cout << "If you want to add new quotation, press 1" << endl;
//         cout << "For checking, press 2" << endl;
//         cout << "For Exit, press 3" << endl;
//         cout << "Enter the choice" << endl;
//         cin >> choice;

//         if (choice == 1) {
            
//             cout << "Enter customer's name" << endl;
//             cin >> customers[count];
//             check = true;
//             while (check == true) {
//                 cout << "Enter length" << endl;
//                 cin >> length;
//                 cout << "Enter width" << endl;
//                 cin >> width;
//                 cout << "Enter the Wood type number" << endl;
//                 cout << "For Laminate, press 0" << endl;
//                 cout << "For Pine, press 1" << endl;
//                 cout << "For Oak, press 2" << endl;
//                 cin >> index;
//                 cout << "You want : " << woodType[index] << endl;

//                 if ((length > 1.5 && length < 10.0) && (width > 1.5 && width < 10.0)) {
//                     quotations[count][0] = length;
//                     quotations[count][1] = width;
//                     double area = length * width;
//                     quotations[count][2] = area;
//                     quotations[count][3] = index;
//                     price1 = price[index] * price[index];
//                     quotations[count][4] = price1;
//                     check = false;
//                     cout << "Length " << quotations[count][0] << " ";
//                     cout << "Width " << quotations[count][1] << " ";
//                     cout << "Index " << quotations[count][0] << " ";
//                     cout << " Total sq. metre" << quotations[count][0] << " ";
//                     count++;
                
                    
//                 }

//                 else {
//                     cout << "Wrong values" << endl;
//                 }
//             }
           
//         }

//         else if (choice == 2) {
//             cout << "Checking did it go inside the array" << endl;

//             for (int row = 0; row < count; row++) {
//                 for  (int col = 0; col < 5; col++) {
//                     cout << quotations[row][col] << " ";
//                 }
//                 cout << endl;
//             }
//         }

//         else if (choice == 3) {
//             cout << "Exit" << endl;
//             exit = false;
//         }

//         else {
//             cout << "Wrong input" << endl;
//         }
//     }
//     return 0;
// }

//

/* Library Management System -> Design a program to manage a library's inventory. Implement functionalities to:

Add new books to the inventory: Allow the librarian to input details such as book title, author, genre, and quantity.
Search for books: Allow users to search for books by title, author, or genre and display the details of the matching books.
Borrow books: Allow users to borrow books from the library. Update the quantity of available books accordingly.
Return books: Allow users to return borrowed books to the library. Update the quantity of available books accordingly.
Display inventory: Display the current inventory of books, including details such as title, author, genre, and quantity available.
Generate reports: Provide options to generate reports such as the list of overdue books, most borrowed books, etc.*/

#include <iostream>
using namespace std;
 
int main() {
    
    int count = 0, count1 = 0;
    string search, search1, book;
    string books[3][3];
    int quantity[3];
    int choice;
    bool exit = true;
    bool check = true;

    while (exit == true) {
        
        cout << endl;
        cout << "*****MENU*****" << endl;
        cout << "For adding new books to inventory, press 1" << endl;
        cout << "For searching books, press 2" << endl;
        cout << "For borrowing books, press 3" << endl;
        cout << "For returning books, press 4" << endl;
        cout << "For displaying inventory, press 5" << endl;
        cout << "For generating reports, press 6" << endl;
        cout << "For exit, press 7" << endl;
        cout << "Enter choice" << endl;
        cin >> choice;

        if (choice == 1) {

            if (count < 3) { // Count is row here basically
                cout << "Adding books" << endl;
                cout << "Enter the book name" << endl;
                cin >> books[count][0];
                cout << "Enter the author's name" << endl;
                cin >> books[count][1];
                cout << "Enter the genre" << endl;
                cin >> books[count][2];
                cout << "Enter the quantity" << endl;
                cin >> quantity[count];
                count1 = count1 + quantity[count];
                count++;
            }
        }

        else if (choice == 2) {// Sir se poochna ke array mein se us ka index kesay remove kr sakte agar borrow kia ho and again add kesay krte agar return kia ho.
            cout << "Searching books" << endl;
            cout << "Enter the author's name to search the book" << endl;
            cin >> search;

            for (int row = 0; row < 3; row++) {
                for (int col = 0; col < 3; col++) {
                    if (search == books[row][col]) {
                       cout << "Book is " << books[row][0] << endl;
                    }
                }
            }
        }

        else if (choice == 3) {
            cout << "Enter the book you want to borrow" << endl;
            cin >> book;
            for (int row = 0; row < 3; row++) {
                for (int col = 0; col < 3; col++) {
                    if (book == books[row][0]) {
                        cout << "You have borrowed book " << books[row][0] << endl;
                        books[row][0] = "Borrowed";
                        books[row][1] = "Borrowed";
                        books[row][2] = "Borrowed";
                        quantity[row] = quantity[row] - 1;
                        cout << "Total books were " << count1 << endl;
                        count1 = count1 - 1;
                        cout << "The available books after borrowing are " << count1 << endl;

                        for (int row = 0; row < 1; row++) {
                            cout << "Types of books are " << count << endl;
                        }

                        for (int row = 0; row < count; row++) {
                            for (int col = 0; col < 3; col++) {
                                cout << "Row number " << row << " and col number " << col << " : " << books[row][col] << "     ";
                            }
                            cout << "Quantity of book " << row + 1 << " is : " << quantity[row] << "   ";
                            cout << endl;
                        }

                    }
                }
            }
        }

        else if (choice == 4) {
            cout << "Returning books" << endl;
            
        }

        else if (choice == 5) {

        }

        else if (choice == 6) {

        }

        else if (choice == 7) {
            cout << "Exit" << endl;
            exit = false;
        }

        else {
            cout << "Wrong input, enter again" << endl;
        }
    }
    return 0;
}
