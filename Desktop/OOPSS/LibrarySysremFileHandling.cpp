/*Scenario:
You are tasked with developing a small library management system for a local community library. The system needs to manage the books' data, including storing book information, displaying all books, searching for a book by its title, and updating book information. The book information consists of the book's title, author, ISBN number, and publication year.

The data should be stored in a text file named library.txt, where each book's information is on a new line, with the fields separated by commas, like this: Title,Author,ISBN,Year
The Great Gatsby,F. Scott Fitzgerald,9780743273565,1925
To Kill a Mockingbird,Harper Lee,9780061120084,1960

Tasks:

Store Book Information:
Write a function to add a new book's information to the library.txt file. The function should take the book's details as parameters and append them to the file in the specified format.

Display All Books:
Write a function to read the library.txt file and display all the books in a user-friendly format.

Search for a Book by Title:
Write a function to search for a book by its title in the library.txt file. If the book is found, display its details; otherwise, print a message indicating that the book is not found.

Update Book Information:
Write a function to update the details of a book given its title. The function should search for the book by its title, and if found, update the relevant fields and save the changes back to the library.txt file.*/

// #include <iostream>
// #include <fstream>
// using namespace std;
 
// int main () {
    
//     int choice;
//     string line;
//     // int i = 1;
//     // int count = 0;
//     string title1;
//     string title2;
//     string title;
//     string author;
//     string title3;
//     string author3;
//     long int ISBN3;
//     int year3;
//     long int ISBN;
//     int year;
//     bool end = true;
//     bool exit = true;

//     ofstream fout;
//     fout.open("library.txt"); //loading

//     while (exit == true) {
//         cout << "Store book information, press 1" << endl;
//         cout << "Display all books, press 2" << endl;
//         cout << "Search book by title, press 3" << endl;
//         cout << "Update book information, press 4" << endl;
//         cout << "For exit, press 5" << endl;
//         cout << "Enter your choice :" << endl;
//         cin >> choice;

//         if (choice == 1) { 

//             cout << "Storing book information" << endl;
//             cout << "Enter book's title :" << endl;
//             cin >> title;

//             cout << "Enter book's author :" << endl;
//             cin >> author;

//             cout << "Enter book's ISBN :" << endl;
//             cin >> ISBN;

//             cout << "Enter book's year :" << endl;
//             cin >> year;

//             fout << title << " " << author << " " << ISBN << " " << year << endl;
//             /*ChatGPT
// To achieve reading the data with fin >> title >> author >> ISBN >> year without using getline, you can adapt your input and output to use space-separated values instead of comma-separated values. This way, you can directly use the >> operator for both writing and reading. Here’s how you can modify your code:*/
// //For writing-> agar aik file open hoye or us mein likh ke close kr dia and dubara open kia agar tou us mein data erase ho jai ga
            
//             // count = count + 1;
//         }

//         else if (choice == 2) {

//             cout << "Displaying all books" << endl;
            
//             ifstream fin;
//             fin.open("library.txt");

//             // while (fin) {
//             //     fin >> title >> author >> ISBN >> year;
//             //     cout << endl;
//             //     cout << title << " " << author << " " << ISBN << " " << year << endl;
//             //     // i++;
//             // }

//             if (!fin.is_open()) { //agar file open na ho tou print kro but nhi ho rha print means ke open ho rhy file
//                 cerr << "Error opening file!" << endl;
//             }

//             while (fin >> title >> author >> ISBN >> year) { //agar fin andar likh rha and fin >> wagera bahir tou aik dafa input zyada kar raha v c 4 3 ko
//                 cout << title << " " << author << " " << ISBN << " " << year << endl;
//             }

//             fin.close();
//         }

//         else if (choice == 3) {
//             cout << "Searching a book" << endl;

//             ifstream fin;
//             fin.open("library.txt");

//             if (fin.is_open()) {
//                 // fin >> title >> author >> ISBN >> year;
//                 cout << "File has been opened" << endl;
//                 cout << "Enter the title :" << endl;
//                 cin >> title1;
//                 bool check = true;

//                 while (fin >> title >> author >> ISBN >> year) {
//                     // cout << "Enter the title :" << endl;
//                     // cin >> title1; // yeh sahi chal nhi rha agar yaha likhu

//                     // fin >> title >> author >> ISBN >> year;
//                     if (title1 == title) {
//                         cout << title << " " << author << " " << ISBN << " " << year << endl;
//                         check = false;
//                         break;
//                     }

//                     // else if (fin.eof() && title1 != title) {
//                     //     cout << "Not found, try again" << endl;
//                     // }

//                     // else {
//                     //     cout << "Not found, try again" << endl;
//                     //     cout << "Enter the title :" << endl;
//                     //     cin >> title1;
//                     // }
//                 }

//                 if (check == true) {
//                     cout << "Data doesnt found" << endl;
//                 }

//             }

//             fin.close();
//         }

//         else if (choice == 4) {
//             cout << "Updating book information" << endl;

//             ifstream fin;
//             fin.open("library.txt");

//             if (fin.is_open()) {
//                 cout << "Enter the book's title for updating" << endl;
//                 cin >> title2;

//                 bool update = true;
//                 while (fin >> title >> author >> ISBN >> year) { 

//                     if (title2 == title) {
//                         cout << "Enter new title" << endl;
//                         cin >> title3;
//                         title = title3;
//                         cout << "Enter new author" << endl;
//                         cin >> author3;
//                         author = author;
//                         cout << "Enter new ISBN" << endl;
//                         cin >> ISBN3;
//                         ISBN = ISBN3;
//                         cout << "Enter new year" << endl;
//                         cin >> year3;
//                         year = year3;

//                         fin >> title >> author >> ISBN >> year;
//                         fout << title << " " << author << " " << ISBN << " " << year << endl;
//                         cout << title3 << " " << author3 << " " << ISBN3 << " " << year3 << endl;
                        
//                         update = false;
//                         break;
//                     }
//                 }

//                 if (update == true) {
//                     cout << "Wrong input, Try again" << endl;
//                 }
                
//                 fin.close();
//             }

//             else {
//                 cerr << "File is not opened" << endl;
//             }
            
//         }

//         else if (choice == 5) {
//             cout << "Exit" << endl;
//             fout.close(); // Append nhi kre ga matlab aik dafa 
//             break;
//         }

//         else {
//             cout << "Wrong input, Try again" << endl;
//         }
//     }
//     return 0;
// }




//ITU Lab 10 docs

// #include <iostream>
// #include <fstream>
// using namespace std;

// void Q1( int &RollNo, int &Num, string &Name, long int &PhoneNum ) {
//     ofstream fout;
//     fout.open("text.txt");

//     while (fout) {
//         cout << "Enter the Roll number" << endl;
//         cin >> RollNo;

//         if (RollNo == -1) {
//             break;
//         }

//         else {
//             fout << RollNo << " ";
//         }

//         cout << "Enter the Number " << endl;
//         cin >> Num;

//         if (Num == -1) {
//             break;
//         }

//         else {
//             fout << Num << " ";
//         }

//         cout << "Enter the Name" << endl;
//         cin >> Name;

//         if (Name == "-1") {
//             break;
//         }

//         else {
//             fout << Name << " ";
//         }

//         cout << "Enter the Phone Number" << endl;
//         cin >> PhoneNum;

//         if (PhoneNum == -1) {
//             break;
//         }

//         else {
//             fout << PhoneNum << " " << endl;
//         }

//         cout << RollNo << " " << Num << " " << Name << " " << PhoneNum << endl;
//     }

//     fout.close();
// }

// int main () {

//     int RollNo;
//     int Num;
//     string Name;
//     long int PhoneNum;
//     Q1( RollNo, Num, Name, PhoneNum );
//     return 0;
// }



//ITU Lab 10 Q -> 2

// #include <iostream>
// #include <fstream>
// using namespace std;

// void Q3 ( string& line, int& count ) {
//     ofstream fout;
//     fout.open("text.txt");

//     while (true) {
//         getline(cin, line);

//         if (line == "-1") {
//             break;
//         }

//         fout << line << endl;
//     }

//     ifstream fin;
//     fin.open("text.txt");

//     while (getline(fin, line)) {
//         if ( == " ") {
//             count = count + 1;
//         }

//         cout << line << endl;
//     }

//     fin.close();
//     fout.close();

//     cout << "Number of words are : " << count << endl;
// }

// int main () {
    
//     string line;
//     int count = 1;

//     Q3( line, count );
//     return 0;
// }
