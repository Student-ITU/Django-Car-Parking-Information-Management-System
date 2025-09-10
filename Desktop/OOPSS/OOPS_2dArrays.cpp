// #include <iostream>
 
// using namespace std;

// struct VenuePass {
//     string passHolderName;
//     int passNumber;
//     string category;
//     bool checkInStatus;

//     void createVenuePass( const string& s, const int& p, const string& c) {
//         this -> passHolderName = s;
//         this -> passNumber = p;
//         this -> category = c;
//         this -> checkInStatus = true;
//     }
    
//     void printCategory() {
//         cout << "Print category is : " << category << endl; 
//     }

//     void printCheckinStatus() {
//         cout << "Print check in status is : " << checkInStatus << endl;
//     }

//     void printVenuePassDetails() {
//         cout << "Print pass number is : " << passNumber << endl;
//     }
// };

// int main () {
 
//     VenuePass v;
//     v.createVenuePass ( "Sameer", 249, "A");
//     v.printCategory ();
 
//     return 0;
// }

// #include <iostream>
 
// using namespace std;

// struct car {
//     string licensePlate;
//     string make;
//     string model;
//     int location;

//     string 2dArray[3][4];

//     void addCar () {
//         string add[5];

//         for ( int row = 0; row < 2; row++ ) {
//             for ( int col = 0; col < 4; col++ ) {
//                 cin >> 2dArray[row][col];
//             }
        // }
//     }

//     void deleteCar () {
//         string name;
//         cout << "Delete car by license plate : " << endl;
//         cin >> licensePlate;

//     }

//     void printCar () {

//     }

//     void checkCarParkingLocation () {

//     }
// };


// int main () {
 
    
 
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// struct Student {
//     string name;
//     int rollNo;
//     float cgpa;
// };

// int main() {
//     const int rows = 2;
//     const int cols = 2;
//     Student students[rows][cols]; // 2D array of Student structs

//     // Initializing the 2D array
//     students[0][0] = {"Sameer", 12345, 3.5};
//     students[0][1] = {"Ali", 12346, 3.6};
//     students[1][0] = {"Sara", 12347, 3.7};
//     students[1][1] = {"Ahmed", 12348, 3.8};

//     // Output the 2D array
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "Name: " << students[i][j].name 
//                  << ", Roll No: " << students[i][j].rollNo 
//                  << ", CGPA: " << students[i][j].cgpa << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// struct Student {
//     string name;
//     int rollNo;
//     float cgpa;
// };

// int main() {
//     const int row = 2;
//     const int col = 2;
    
//     Student students[row][col]; // 2D array of Student structs

//     // Manually initializing the 2D array
//     students[0][0].name = "Sameer";
//     students[0][0].rollNo = 12345;
//     students[0][0].cgpa = 3.5f;

//     students[0][1].name = "Ali";
//     students[0][1].rollNo = 12346;
//     students[0][1].cgpa = 3.6f;

//     students[1][0].name = "Sara";
//     students[1][0].rollNo = 12347;
//     students[1][0].cgpa = 3.7f;

//     students[1][1].name = "Ahmed";
//     students[1][1].rollNo = 12348;
//     students[1][1].cgpa = 3.8f;


//     // for (int i = 0; i < row; i++) {
//     //     for (int j = 0; j < col; j++) {
//     //         cin >> students[i][j].name;
//     //         cin >> students[i][j].rollNo;
//     //         cin >> students[i][j].cgpa;
//     //     }
//     // }

//     // Output the 2D array
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cout << "Name: " << i << j << " " << students[i][j].name 
//                  << ", Roll No: " << i << j << " " << students[i][j].rollNo 
//                  << ", CGPA: " << i << j << " " << students[i][j].cgpa << endl;
//         }
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// struct Student {
//     string name;
//     int rollNo;
//     float cgpa;
// };

// int main() {
//     const int rows = 2;
//     const int cols = 2;
//     Student students[rows][cols]; // 2D array of Student structs

//     // Manually initializing the 2D array
//     students[0][0].name = "Sameer";
//     students[0][0].rollNo = 12345;
//     students[0][0].cgpa = 3.5f;

//     students[0][1].name = "Ali";
//     students[0][1].rollNo = 12346;
//     students[0][1].cgpa = 3.6f;

//     students[1][0].name = "Sara";
//     students[1][0].rollNo = 12347;
//     students[1][0].cgpa = 3.7f;

//     students[1][1].name = "Ahmed";
//     students[1][1].rollNo = 12348;
//     students[1][1].cgpa = 3.8f;

//     // Output the 2D array
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "Name: " << students[i][j].name 
//                  << ", Roll No: " << students[i][j].rollNo 
//                  << ", CGPA: " << students[i][j].cgpa << endl;
//         }
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// struct Student {
//     string name;
//     int rollNo;
//     float grades[5]; // Array to store grades for 5 subjects

//     // Function to print student details
//     // void printDetails() {
//     //     cout << "Name: " << name << ", Roll No: " << rollNo << ", Grades: ";
//     //     for (int i = 0; i < 5; ++i) {
//     //         cout << grades[i] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     void printDetails ();
// };

//  void Student::printDetails() {
//         cout << "Name: " << name << ", Roll No: " << rollNo << ", Grades: ";
//         for (int i = 0; i < 5; ++i) {
//             cout << grades[i] << " ";
//         }
//         cout << endl;
//     }

// int main() {
//     Student student;
//     student.name = "Sameer";
//     student.rollNo = 12345;
//     // Initializing the grades array
//     // student.grades[0] = 3.5f;
//     // student.grades[1] = 3.6f;
//     // student.grades[2] = 3.7f;
//     // student.grades[3] = 3.8f;
//     // student.grades[4] = 3.9f;

//     for ( int row = 0; row < 5; row++ ) {
//         cin >> student.grades[row];
//     }

//     // Print student details
//     student.printDetails();

//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     // Hardcoded 2D array with 3 rows and 2 columns (name and age)
//     string persons[3][2] = {
//         {"Alice", "25"},
//         {"Bob", "30"},
//         {"Charlie", "28"}
//     };

//     // Displaying the 2D array
//     cout << "Name\tAge" << endl;
//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 2; j++) {
//             cout << persons[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     // Declare a 2D array to store names and ages
//     string persons[3][2];

//     // Input loop to populate the array
//     cout << "Enter names and ages for 3 persons:" << endl;
//     for (int i = 0; i < 3; ++i) {
//         cout << "Person " << (i + 1) << ":" << endl;
//         cout << "Name: ";
//         getline(cin, persons[i][0]); // Input for name
//         cout << "Age: ";
//         getline(cin, persons[i][1]); // Input for age
//     }

//     // Displaying the 2D array
//     cout << "\nName\tAge" << endl;
//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 2; j++) {
//             cout << persons[i][0] << "\t" << persons[i][1] << endl;
//         }
//     }

//     return 0;
// }

//

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     // string array[2][2] = {{"Sameer", "18"}, {"Abdul", "22"}};
//     string array[2][2];
//     array[0][0] = "sameer";
//     array[0][1] = "22";
//     array[1][0] = "18";
//     array[1][1] = "Abdul";

//     // for (int i = 0; i < 2; i++) {
//     //     for (int j = 0; j < 2; j++) {
//     //         cin >> array[i][j];
//     //     }
//     // }

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << array[i][j] << " ";
//         }
//         cout << endl;
//     }
 
//     return 0;
// }

/*Question 1: Seating Arrangement in a Theater
You are tasked with creating a seating chart for a small theater. The theater has 5 rows, each with 4 seats. Create a program that:

Initializes the seating chart with all seats marked as available (denoted by 'A').
Allows a user to book a seat by entering the row and seat number.
Updates the seating chart to mark the seat as booked (denoted by 'B').
Displays the current seating chart after each booking.*/

// #include <iostream>
// #include <fstream>
 
// using namespace std;
 
// int main () {
    
//     fstream fout;
//     string line;
//     fout.open("cricket.txt", ios::app);
    
//     int r, c;
//     string Enter;
//     string str1 = "";
//     char array[5][4];
//     bool exit = true;
//     bool stopSitting = true;

//     while ( exit == true ) {
//         for ( int row = 0; row < 5; row++ ) {
//             for (int col = 0; col < 4; col++ ) {
//                 array[row][col] = 'A';
//             }
//         }

//         for ( int row = 0; row < 5; row++ ) {
//             for (int col = 0; col < 4; col++ ) {
//                 cout << array[row][col] << " ";
//             }
//             cout << endl;
//         }

//         cout << "Book your seat by entering seat number" << endl;
//         while ( stopSitting == true ) {
//             cout << "Enter yes if you want to add more or no if you dont want to add more" << endl;
//             cin >> Enter;
//             if ( Enter == "No" ) {
               
//                 for ( int i = 0; i < 5; i++ ) {
//                     str1 = " ";
//                     for ( int j = 0; j < 4; j++ ) { //String manupilation
//                         str1 = str1 + array[i][j];
//                         // fout << array[i][j] << " "; //fout hamesha new line pe value le jata in file so col jab 1 time chale ga 1st line ho ge 2nd line file ke 2nd line mein chala jai ga jab ke mujhe use line mein krna.
//                     }
//                     // fout << array[i][j] << " ";
//                     fout << str1 << endl;
//                 }

//                 stopSitting = false; //Agar sirf yeh likha hoa break na lagaya tou yeh neeche wala chala de ga or jab neeche sara pura ho ga then yeh uper while me ja ke kre ga false and stop, break 1st loop se nikal jai ga.
//                 fout.close();
//                 break;
//             }
//             cout << "Enter the row number : " << endl;
//             cin >> r;
//             cout << "Enter the col number : " << endl;
//             cin >> c;

//             for ( int row = 0; row < 5; row++ ) {
//                 for (int col = 0; col < 4; col++ ) {
//                     if ( row == r && col == c ) {
//                         array[row][col] = 'B';
//                     }
//                     cout << array[row][col] << " ";
//                 }
//                 cout << endl;
//             }
//         }
//         exit = false;

//     }
 
//     return 0;
// }