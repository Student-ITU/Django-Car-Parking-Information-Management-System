/*Question:
You are working on an airport management system, and you need to create a program that can handle flight scheduling and passenger management. The program should perform the following tasks:

Store flight information (flight number, origin, destination, departure time, and number of available seats) in a 2D array.
Allow users to book tickets for a specific flight by providing the flight number and the number of passengers.
Update the number of available seats for the selected flight based on the number of passengers booked.
Sort the flights in ascending order based on their departure times.
Identify and print the flights with no available seats.

Explanation:

Store flight information (flight number, origin, destination, departure time, and number of available seats) in a 2D array:

Create a 2D array to store flight information, where each row represents a flight, and the columns represent the flight number, origin, destination, departure time, and number of available seats.
Use nested loops or other techniques to populate the 2D array with flight data.

Allow users to book tickets for a specific flight by providing the flight number and the number of passengers:

Prompt the user to enter a flight number and the number of passengers.
Use conditional statements to check if the entered flight number exists in the 2D array.
If the flight exists, check if the requested number of seats is available by comparing it with the number of available seats stored in the 2D array.

Update the number of available seats for the selected flight based on the number of passengers booked:

If the requested number of seats is available, subtract the number of passengers from the available seats in the 2D array for the selected flight.

Sort the flights in ascending order based on their departure times:

Use a sorting algorithm (e.g., bubble sort, selection sort, or built-in sorting functions) to sort the flights based on their departure times in ascending order.
After sorting, the 2D array will have flights ordered from earliest to latest departure times.

Identify and print the flights with no available seats:

Iterate through each row (flight) in the sorted 2D array.
Check if the number of available seats for each flight is zero.
If a flight has no available seats, print the flight number, origin, destination, and departure time.*/
// #include <iostream>
// #include <cstring>
// using namespace std;
// //string numberStr1 = "125";
// // int number1 = stoi(numberStr1);
// int main() {

//     const int row1 = 3;
//     const int col1 = 5;

//     string flights[row1][col1] = {{"UA202", "Chicago", "San Francisco", "10", "120"}, {"DL303", "Miami", "Seattle", "12", "100"},
//     {"AA101", "New York", "Los Angeles", "9", "150"}};
    
//     string flightNo;
//     int noOfPass;
//     int choice;
//     int remainingSeats;
//     int remainingSeats1 = 0;
//     bool again = true;
//     bool exit = true;
    
//     while (exit == true) {

//         cout << "Book tickets, press 1" << endl;
//         cout << "Exit, press 2" << endl;
//         cout << "Enter your choice" << endl;
//         cin >> choice;

//         if (choice == 1) {
//             cout << "Timeline of flights according to their departure time" << endl;
//             int i, j, min_idx; 
//                 for (i = 0; i < row1; i++) { 
//                     min_idx = i; 
//                     for (j = i + 1; j < row1; j++) { 
//                         if (stoi(flights[j][3]) < stoi(flights[min_idx][3])) {
//                             min_idx = j;
//                         }
//                     } 

//                     if (min_idx != i) { 
                        
//                         for (int j = 0; j < col1; j++) { 
//                             string temp = flights[i][j];
//                             flights[i][j] = flights[min_idx][j];
//                             flights[min_idx][j] = temp;
//                         }
//                     }
//                 } 

//                 for (int i = 0; i < row1; i++) {
//                     for (int j = 0; j < col1; j++) {
                        
//                         cout << flights[i][j] << " ";
//                     }
//                     cout << endl;
//                 }

//             again = true;
//             while (again == true) {
//                 cout << "For booking tickets enter the flight number and the number of passengers" << endl;
//                 cout << "Enter the flight number" << endl;
//                 cin >> flightNo;
//                 cout << "Enter the number of passengers" << endl;
//                 cin >> noOfPass;

//                 for (int row = 0; row < row1; row++) {
//                     // for (int col = 0; col < col1; col++) {
                        
//                     if (flightNo == flights[row][0]) {
//                         if (noOfPass < stoi(flights[row][col1 - 1])) {
//                             cout << "You have booked " << noOfPass << " seats from row " << row << endl;

//                             remainingSeats = stoi(flights[row][col1 - 1]) - noOfPass;
//                             //Value har bare new update hote 
                            

//                             cout << "Remaining number of seats in row " << row << " is are -> " << remainingSeats << endl;
//                             // cout << "Remaining number of seats in row " << row << " is are -> " << remainingSeats1 << endl;
//                             again = false;
//                             break;
//                         }

//                         else {
//                             cout << "Number of passengers booked are greater then plane's seats" << endl;
//                             again = true;
//                             break;
//                         }
//                     }

//                         // else {
//                         //     cout << "You have entered wrong flight number" << endl;
//                         //     break;// yeh bahir kyun nhi gya
//                         // }
//                     // }
//                 }
//             }
//         }
        

//         if (choice == 2) {
//             cout << "Exit" << endl;
//             exit = false;
//         }
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
    
//     int arrays[4][5] = {{1, 2, 3, 4, 5}, {11, 12, 13, 14, 3}, {8, 0, 9, 6, 1}, {10, 7, 6, 0, 2}};
//     int i, j, min_idx;  

// 	for (i = 0; i < 4; i++) { 
		
// 		min_idx = i; 
// 		for (j = i + 1; j < 5 - 1; j++) { 
// 			if (arrays[j][4] < arrays[min_idx][4]) {
// 			    min_idx = j;
//             }
// 		} 

// 		if (min_idx != i) { 
            
//             for (int j = 0; j < 5; j++) { 
//                 int temp = arrays[i][j];
//                 arrays[i][j] = arrays[min_idx][j];
//                 arrays[min_idx][j] = temp;
//             }
//         }
// 	} 

//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 5; j++) {
            
//             cout << arrays[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

