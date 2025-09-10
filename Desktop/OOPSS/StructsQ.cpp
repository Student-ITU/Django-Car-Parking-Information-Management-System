/*Define a struct called Person with members name (string) and age (int). Create a few instances of this struct and print their details.*/
/*Summary:
Anonymous Structs: Useful for quick definitions where you only need the struct in a limited scope. You can declare multiple instances at the point of definition but cannot reuse the struct elsewhere in the code.
Named Structs: Better for reusable, organized code where you might need to create instances of the struct in different parts of your program.
So, while you can create multiple instances of an anonymous struct, the primary limitation is the scope and reusability of the struct definition itself. Thank you for pointing out the error, and I hope this clears up any confusion!*/
// #include <iostream>
// using namespace std;

// struct  {
//     string name;
//     int age;
// } p1, p2;

// int main () {
    
//     // Person p1;
//     // p1.name = "Sameer";
//     // p2.age = 18;

//     cin >> p1.name;
//     cin >> p1.age;

//     cout << "Name is : " << p1.name << endl;
//     cout << "Age is : " << p1.age << endl;
//     return 0;
// }

/*Struct Array ---->
Define a struct called Book with members title (string), author (string), and pages (int). Create an array of 5 Book structs and initialize them with some data. Write a function to print the details of all books in the array.*/

// #include <iostream>

// using namespace std;

// struct Book {

//     string title[5];
//     string author[5];
//     int pages[5];
//     int count;

//     void input () {
//         while (count < 5) {
//             cout << "Enter the title of the book :" << endl;
//             cin >> title[count];
//             cout << "Enter the author of the book :" << endl;
//             cin >> author[count];
//             cout << "Enter the pages of the book :" << endl;
//             cin >> pages[count];
//             count = count + 1;
//         }
//     }

//     void print () {
//         for (int i = 0; i < 5; i++) {
//             cout << title[i] << " " << author[i] << " " << pages[i] << endl;
//         }
//     }
// };

// int main () {
    
//     Book b1;

//     int count;
//     b1.input();
//     b1.print();
//     return 0;
// }

/*Struct with Functions ---->
Define a struct called Rectangle with members length (double) and width (double). Write functions to calculate and return the area and perimeter of the rectangle.*/

// #include <iostream>

// using namespace std;

// struct Rectangle {

//     double length;
//     double width;

//     double Area ( double& length, double& width) {
//         return length * width;
//     }

// };

// int main () {
    
//     Rectangle r1;

//     double length = 3.2;
//     double width = 4.3;

//     cout << "\033[7;33mThe Area is : " << r1.Area( length, width ) << endl;

//     return 0;
// }


/*Define a struct called Student with members name (string) and age (int). Create a 2D array of Student objects to represent a classroom with 3 rows and 2 columns. Write a program to input the name and age of each student and then display their details.
Use nested loops to input data for each student.
Use another set of nested loops to display the details of each student.*/

// #include <iostream>
 
// using namespace std;

// struct Student {
//     string name;
//     int age;
// };

// int main () {
    
//     Student classroom[3][2];

//     for (int row = 0; row < 3; row++) {
//         for (int col = 0; col < 2; col++) {
//             cout << "Enter the student's name :" << endl;
//             cin >> classroom[row][col].name;
//             cout << "Enter the student's age :" << endl;
//             cin >> classroom[row][col].age;
//         }
//     }

//     for (int row = 0; row < 3; row++) {
//         for (int col = 0; col < 2; col++) {
//             cout << classroom[row][col].name << " ";
//             cout << classroom[row][col].age;
//             cout << endl;
//         }
//     }
 
//     return 0;
// }


// #include <iostream>
 
// using namespace std;

// struct Student {
//     string name;
//     int age;

// };

// struct Classroom {
//     Student classroom[3][2];

// };

// void input () {
//     for (int row = 0; row < 3; row++) {
//         for (int col = 0; col < 2; col++) {
//             cout << "Enter the student's name :" << endl;
//             cin >> classroom[row][col].name;
//             cout << "Enter the student's age :" << endl;
//             cin >> classroom[row][col].age;
//         }
//     }

//     for (int row = 0; row < 3; row++) {
//         for (int col = 0; col < 2; col++) {
//             cout << classroom[row][col].name << " ";
//             cout << classroom[row][col].age;
//             cout << endl;
//         }
//     }
// }

// int main () {
    
//     Student b1;

//     b1.input();
 
//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Student {
//     string name;
//     int age;
// };

// struct Classroom {
//     Student students[3][2];
// };

// void input ( Classroom& MyClassRoom ) {
//     for (int row = 0; row < 3; row++) {
//         for (int col = 0; col < 2; col++) {
//             cout << "Enter the name :" << endl;
//             cin >> MyClassRoom.students[row][col].name;
//             cout << "Enter the age :" << endl;
//             cin >> MyClassRoom.students[row][col].age;
//         }
//     }
// }

// int main () {

//     Classroom MyClassRoom;

//     input( MyClassRoom );

//     for (int row = 0; row < 3; row++) {
//         for (int col = 0; col < 2; col++) {
//             cout << "Student's Name " << row << " : " << MyClassRoom.students[row][col].name << " ";
//             cout << "Student's age " << col << " : " << MyClassRoom.students[row][col].age << endl;
//         }
//     }
// }


/*Make two files, one with the record of students (roll number, name & phone number) and the other with marks in quizzes ( roll number, mark in quiz 1, mark in quiz 2 and so on). 
Q1. Write a struct named Student, which will have attributes of roll number, name, phone number, attempted quizzes and pointer based dynamically allocated float array to store quizzes marks.*/

// #include <iostream>
// #include <fstream>
 
// using namespace std;

// struct Student {

//     int rollNo;
//     string name;
//     long int phoneNo;
//     int quizzes[100];
//     int quizCount;
//     int count;

// // };

// void input ( Student& s1 ) {

//     ofstream fout;
//     fout.open("students.txt");
//     ofstream out;
//     out.open("Quizes.txt");

//     count = 0;

//     while (true) {

//         cout << "Enter the Roll Number :" << endl;
//         cin >> rollNo;

//         if (s1.rollNo == -1) {
//             break;
//         }

//         out << s1.rollNo << " ";

//         cout << "Enter the Name :" << endl;
//         cin >> s1.name;

//         if (s1.name == "-1") {
//             break;
//         }

//         cout << "Enter the Phone Number :" << endl;
//         cin >> s1.phoneNo;

//         if (s1.phoneNo == -1) {
//             break;
//         }

//         s1.quizCount = 0; 
//         cout << "Enter the Marks of quizzes (-1 to stop):" << endl;
//         while (true) {
//             cin >> s1.quizzes[s1.quizCount];
//             if (s1.quizzes[s1.quizCount] == -1) {
//                 break;
//             }
//             out << s1.quizzes[s1.quizCount] << " "; 
//             s1.quizCount++;
//         }
//         s1.count++;

//         out << endl;

//         fout << s1.rollNo << " " << s1.name << " " << s1.phoneNo << endl;

//     }

//     ifstream fin;
//     fin.open("Students.txt");

//     cout << "File of student's record : " << endl;
//     while (fin >> s1.rollNo >> s1.name >> s1.phoneNo) {
//         cout << s1.rollNo << " " << s1.name << " " << s1.phoneNo << endl;
//     }

//     fin.close();
    
//     ifstream in;
//     in.open("Quizes.txt");

//     if (!in.is_open()) {
//         cerr << "File not opened" << endl; //Error handling
//     }
    
//     cout << "File of student's quizes : " << endl;
//     int k = 0;
//     while (in >> s1.rollNo && k < s1.count) {

//         cout << "Roll No: " << s1.rollNo << " Quizes: " << " ";
//         for (int i = 0; i < s1.quizCount; i++) {
//             in >> s1.quizzes[i];
//             cout << s1.quizzes[i] << " ";
//         }
//         cout << endl;
//         k++;
//     }

//     in.close();
//     fout.close();
//     out.close();

// }
// };

// int main () {
 
//     Student s1;
//     s1.input( s1 );
 
//     return 0;
// }

/*Struct for Inventory System
Define a struct called Item with members itemID (int), itemName (string), quantity (int), and price (double). Write functions to add, delete, update, and display items in an inventory system.*/

// #include <iostream>
 
// using namespace std;

// struct Item {
    
//     int itemID[20];
//     string itemName[20];
//     int quantity[20];
//     double price[20];
//     int index;
//     int count1;
//     int exit;
   
//     void add ( Item& i, int count1 = 0 ) {
//         cout << "Adding items :" << endl;

//         while (true) {
//             cout << "Enter item id :" << endl;
//             cin >> itemID[count1];

//             cout << "Enter item name :" << endl;
//             cin >> itemName[count1];
//             cout << "Enter quantity :" << endl;
//             cin >> quantity[count1];
//             cout << "Enter price :" << endl;
//             cin >> price[count1];

//             cout << "Do you want to exit? Enter -1 for exit :" << endl;
//             cin >> exit;
//             if (exit == -1) {
//                 cout << "Now Inventory is :" << endl;
//                 for (int i = 0; i <= count1; i++) {
//                     cout << itemID[i] << " " << itemName[i] << " " << quantity[i] << " " << price[i] << endl;
//                 }

//                 break;
//             }
//             count1 = count1 + 1;
//         }
//     }

//     void deletee ( Item& i ) {
//         cout << "Enter the index of item id you want to delete, please make sure that deleting the item id will also delete its name quantity and price" << endl;
//         cin >> index;

//         for (int i = index; i < count1; i++) {
//             itemID[i] = itemID[i + 1];
//             itemName[i] = itemName[i + 1];
//             quantity[i] = quantity[i + 1];
//             price[i] = price[i + 1];
//         }

//         cout << "Now Inventory is :" << endl;
//         for (int i = 0; i < count1; i++) {
//            cout << itemID[i] << " " << itemName[i] << " " << quantity[i] << " " << price[i] << endl;
//         }
//     }

//     // void update ( Item& i ) {
//     //     cout << "Enter the index you want to update then it will update all of its stuff" << endl;

//     //     while (true) {

//     //     }
//     // }
// };
 
// int main () {
    
//     Item i;
//     int count;
//     cout << "INVENTORY SYSTEM" << endl;
//     i.add ( i );
//     i.deletee ( i );
//     // i.update ( i );
 
//     return 0;
// }


