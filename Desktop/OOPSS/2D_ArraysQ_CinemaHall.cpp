// #include <iostream>
// using namespace std;

// // int seats[10][20];
// // bool Evening[true];
// // int count = 0;

// int main() {
    
//     int seats[10][20];
//     bool Evening[10][20];
//     int count = 0;
//     int remainingSeats = 0;
//     int remainingSeats1 = 0;
//     int i = 10, j = 20, k;
//     int row1 = 0, seatNo = 0;
//     cout << "Entr i and then j" << endl;
//     cin >> i >> j;
   
    
//     cout << "Enter" << endl;
//     for (int row = 0; row < i; row++) {
//         for (int col = 0; col < j; col++) {
//             cin >> seats[row][col];
//             Evening[row][col] = false;
//             count++;
//         }
//     }

//     for (int row = 0; row < i; row++) {
//         for (int col = 0; col < j; col++) {
//             cout << seats[row][col] << " ";
//         }
//         cout << endl;
//     }
//     cout << "Total number of seats booked are : " << count << endl;
//     remainingSeats = 200 - count;
//     cout << "Enter the number of seats required" << endl;
//     cin >> k;

//     if (k < remainingSeats) {
        
//         cout << "Remaining seats are " << remainingSeats << endl;
//         for (int row = 0; row < i; row++) {
//             for (int col = 0; col < j; col++) {
//                 cout << "Row" << row << "Col" << col << "SeatNoIs" << row+col << "  " << seats[row][col] << "   "; 
//             }
//             cout << endl;
//         }
//        remainingSeats1 = remainingSeats - k;
//        cout << "After taking more seats now remaining seats are " << remainingSeats1 << endl;
//     }

//     else {
//         cout << "Seats are full" << endl;
//     }

//     return 0;
// }

//Again

#include <iostream>
using namespace std;

int main() {
    
    int book;
    int book1 = 0;
    int choice;
    int count = 0;
    int cc = 0; 
    int row1 = 10, col1 = 20;
    bool Evening[row1][col1];// Empty is equal to true Book is false
    bool exit = true;
    
    for (int row = 0; row < row1; row++) {
        for (int col = 0; col < col1; col++) {
            Evening[row][col] = true; // Setting all seats to true means all seats are empty
        }

    }
//global vs local
    while(exit == true) {
        cout << "For booking seats, press 1" << endl;
        cout << "For checking booking status , press 2" << endl;
        cout << "For Exit, press 3" << endl;
        cout << "Enter choice" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "How many seats you want to book" << endl;
            cin >> book;
           
            cc = 0;
            if (book <= 100 && book > 0) {
                book1 = book1 + book;
                if ((row1 * col1) - count > book) {
                    // Checking availability
                    // for (int row = 0; row < row1 && cc >= book; row++) { // aik se zyada conditions bhe likh sakte
                    for (int row = 0; row < row1 && cc >= book; row++) { 
                        for (int col = 0; col < col1; col++) {
                            if (Evening[row][col] == true) { //Check /// andar kesay ai ga chalna tou 0 se he hai na tou woh    tou false hoye ho ge tou check true kesay ho ga 
                                Evening[row][col] = false;
                                cc = cc + 1;
                                count = count + 1;
                                if (cc >= book) {
                                    break;
                                }
                            }
                        }
                    }
                }
                else {
                    cout << "Seats are booked" << endl;
                }
                
            }
            
            else {
                cout << "Wrong booking input" << endl;
            }
        }

        else if (choice == 2) {
            cout << "Number of seats booked are : " << book1 << endl;
        }

        else if (choice == 3) {
            cout << "Exit" << endl;
            exit = false;
        }

        else {
            cout << "Input is wrong" << endl;
        }
    }

    return 0;
}




/*Student Grades Management System:
Design a program to manage student grades. Each student has grades for different subjects. Implement functionalities to:

Enter grades for each student and subject.
Calculate the average grade for each student.
Find the highest and lowest grades in each subject.
Determine the overall class average.*/

// #include <iostream>
// #include <string>
// using namespace std;
 
// int main() {
    
//     string subject, subject1;
//     string names[5] = {"Sameer", "Ali", "Ahmad", "Subhan", "Abdul"};
//     // string subjects[5][5] = {{"Maths"}, {"Chemistry"}, {"Physics"}, {"Pf"}, {"Islamiyat"}};
//     string subjects[5][5] = {{"Maths", "Chemistry", "Physics", "Pf", "Islamiat"},
//     {"Maths", "Chemistry", "Physics", "Pf", "Islamiat"}, {"Maths", "Chemistry", "Physics", "Pf", "Islamiat"}, {"Maths", "Chemistry", "Physics", "Pf", "Islamiat"}, {"Maths", "Chemistry", "Physics", "Pf", "Islamiat"}};
//     int grades[5][5] = {{3, 60, 70, 80, 90}, {10, 20, 30, 40, 50}, {50, 60, 5, 20, 40}, {10, 90, 10, 20, 10}, {10, 20, 10, 80, 5}};
//     int totalMarks = 0;
//     int totalMarks1 = 0;
//     int totalClassMarks = 0;
//     int average = 0;

//     cout <<  "Grades for each student and subject" << endl;

//     for (int row = 0; row < 5; row++) {
//         cout << "Name is : " << names[row] << " ->" << endl;
//         for (int col = 0; col < 5; col++) {
//             cout << "Marks in " << subjects[row][col] << " are : " << grades[row][col] << "   ";
//         }
//         cout << endl;
//     }

//     cout << "Average of each student" << endl;

//     for (int row = 0; row < 5; row++) {
//         totalMarks = 0;
//         cout << "Name is : " << names[row] << " -> " << endl; 
//         for (int col = 0; col < 5; col++) {
//             totalMarks = totalMarks + grades[row][col];
//             totalClassMarks = totalMarks + 0;
//         }
//         cout << "Total marks : " << totalMarks << " ";
//         average = totalMarks / 5;
//         cout << " and the average is : " << average << endl;
//     }

//     int row, col, max, min;
//     for (int row = 0; row < 5; row++) {
//         max = 0; min = 1000;
//         for (int col = 0; col < 5; col++) {
//             if (max < grades[row][col]) {
//                 max = grades[row][col];
//                 subject = subjects[row][col];
//             }

//             if (min > grades[row][col]) {
//                 min = grades[row][col];  
//                 subject1 = subjects[row][col];
//             }
//         }
//         cout << "Name is : " << names[row] << " ->" << endl;
//         cout << "The subject of the student in which he got the maximum marks is : " << subject << " marks are : " << max << endl;
//         cout << "The subject of the student in which he got the minimum marks is : " << subject1 << " marks are : " << min << endl;
//     }

//     cout << "Overall class avrage" << endl;
//     for (int row = 0; row < 5; row++) {
//         for (int col = 0; col < 5; col++) {
//             totalMarks1 = totalMarks1 + grades[row][col];
//             totalClassMarks = totalMarks1 + 0;
//         }
//     }
//     cout << "Total marks of the whole class are : " << totalClassMarks;
//     return 0;
// }
