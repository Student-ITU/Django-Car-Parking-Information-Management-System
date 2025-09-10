// #include <iostream>
 
// using namespace std;
 
// int main () {
    
//     int arr[2][2];

//     for ( int row = 0; row < 2; row++ ) {
//         for ( int col = 0; col < 2; col++ ) {
//             cin >> arr[row][col];
//         }
//     }

//     for ( int row = 0; row < 2; row++ ) {
//         for ( int col = 0; col < 2; col++ ) {
//             cout << arr[row][col];
//         }
//     }
 
//     return 0;
// }

// #include <iostream>
 
// using namespace std;
 
// int main () {
   
//     string arr[3][2] = {{"s"}, {"So", "2"}, {"wo", "2"}};

//     cout << "N" << endl;
//     for ( int row = 0; row < 3; row++ ) {
//         for ( int col = 0; col < 2; col++ ) {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }
 
//     return 0;
// }

       

//hard coded 2d arrays with structs
// #include <iostream>
// #include <string>

// using namespace std;

// // Define the struct
// struct Person {
//     string name;
//     int age;
// };

// int main() {
//     // Define the dimensions of the 2D array
//     const int rows = 2;
//     const int cols = 2;

//     // Declare a 2D array of Person structs
//     Person people[rows][cols] = {
//         {{"Alice", 30}, {"Bob", 25}},
//         {{"Charlie", 35}, {"Diana", 28}}
//     };

//     // Print the values
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "Name: " << people[i][j].name << ", Age: " << people[i][j].age << endl;
//         }
//     }

//     return 0;
// }

// user input 2d arrays with structs

// #include <iostream>
// #include <string>

// using namespace std;

// // Define the struct
// struct Person {
//     string name;
//     int age;
// };

// int main() {
//     // Define the dimensions of the 2D array
//     const int rows = 2;
//     const int cols = 2;

//     // Declare a 2D array of Person structs
//     Person people[rows][cols];

//     // Taking input from the user
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "Enter name for person [" << i << "][" << j << "]: ";
//             cin >> people[i][j].name;
//             cout << "Enter age for person [" << i << "][" << j << "]: ";
//             cin >> people[i][j].age;
//         }
//     }

//     // Print the values
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "Name: " << people[i][j].name << ", Age: " << people[i][j].age << endl;
//         }
//     }

//     return 0;
// }



// #include <iostream>

// using namespace std;

// struct Date {
//     int age;
//     string name;
//     char letter;
// };

// int main() {
//     // Initialize the 2D array with only the relevant elements filled
//     Date arr[3][3] = {
//         {{18, "Sameer", 'w'}}, {{12, "Ali", 'z'}}, {{33, "Ahmad", 'x'}}};

//     // Print only the initialized elements
//     for (int row = 0; row < 3; row++) {
//     for (int col = 0; col < 1; col++) {
//         cout << arr[row][0].age << " " << arr[row][0].name << " " << arr[row][0].letter << endl;
//     }
//         // if (arr[row][0].age != 0) {
//         //     cout << arr[row][0].age << " " << arr[row][0].name << " " << arr[row][0].letter << endl;
//         // }
//     }

//     return 0;
// }

#include <iostream>
 
using namespace std;

struct Person {
    string name;
    int age;
};

void print ( Person* p ) {
    cout << p->name << " " << p->age << endl;
}


int main () {
 
    Person p = {"Sameer", 18};
    print(&p);
 
    return 0;
}

// #include <iostream>
 
// using namespace std;

// void divide(int dividend, int divisor, int quotient, int remainder) {
//     if (divisor != 0) {
//         quotient = dividend / divisor;
//         remainder = dividend % divisor;
//     } else {
//         cout << "Error: Division by zero." << endl;
//     }
//     // cout << "Quotient: " << quotient << endl;
//     // cout << "Remainder: " << remainder << endl;
// }

// int main() {
//     int dividend = 10;
//     int divisor = 3;
//     int quotient, remainder;
 
//     divide(dividend, divisor, quotient, remainder);
 
//     cout << "Quotient: " << quotient << endl;
//     cout << "Remainder: " << remainder << endl;
 
//     return 0;
// }
