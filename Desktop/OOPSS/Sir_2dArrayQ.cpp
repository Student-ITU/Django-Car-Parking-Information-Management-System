// #include <iostream>
// using namespace std;
// //Globally declare kia
// int total_marks[7];
// string names[7] = {"Ali", "Saad", "Hina", "Zain", "Abid", "Saim", "Ayesha"};
// int marks[7][4] = {{85, 90, 75, 92}, {65, 80, 78, 55}, {45, 50, 75, 98}, {35, 60, 76, 99}, {87, 70, 85, 92}, {89, 92, 65, 89}, {89, 93, 79, 78}};

// void selectionSort(int totalMarks[], int n) 
// { 
// 	int i, j, max_idx; 

// 	for (i = 0; i < n - 1; i++) { 
		
// 		max_idx = i; 
// 		for (j = i + 1; j < n; j++) { 
// 			if (totalMarks[j] < totalMarks[max_idx]) //we are checking for maximum value. 
// 			max_idx = j;  //We are saving index of maximum value.
// 		} 

// 		if (max_idx != i) { // 20 != 20  
//             int temp = totalMarks[i];
//             totalMarks[i] = totalMarks[max_idx];
//             totalMarks[max_idx] = temp;
            
//             string temp1 = names[i];
//             names[i] = names[max_idx];
//             names[max_idx] = temp1;
            
//             for (int col = 0; col < 4; col++) { 
//                 int temp3 = marks[i][col];
//                 marks[i][col] = marks[max_idx][col];
//                 marks[max_idx][col] = temp3;
//             }
//         }
	        
// 	} 
// }    
    
// int main() {
    
//     int sum = 0;
//     int i = 0;

//     for (int row = 0; row < 7; row++) {
//         sum = 0;
//         for (int col = 0; col < 4; col++) {
//             sum = sum + marks[row][col];
//         }
//         cout << "Sum of row " << row + 1 << " is " << sum << endl;
//         total_marks[i] = sum;
//         i = i + 1;
//     }
    
//     selectionSort(total_marks, 7); 
// 	cout << "Sorted array: \n"; 
    
//     for (int i = 0; i < 7; i++) {
//         cout << endl;
//         cout << "Name " << " : ";
//         cout << names[i] << endl;
//         cout << "Total Marks " << " : ";
//         cout << total_marks[i] << endl;

//         cout << "Marks : ";
//         for (int j = 0; j < 4; j++) {
            
//             cout << marks[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }




// #include <iostream>
// using namespace std;
// //Globally declare kia
// int total_marks[7];
// string names[7] = {"Ali", "Saad", "Hina", "Zain", "Abid", "Saim", "Ayesha"};//Initialization of names
// int marks[7][4] = {{85, 90, 75, 92}, {65, 80, 78, 55}, {45, 50, 75, 98}, {35, 60, 76, 99}, {87, 70, 85, 92}, {89, 92, 65, 89}, {89, 93, 79, 78}};

// void selectionSort(int totalMarks[], int n) {
//     int max_idx; //Declaration of max_idx

//     for (int i = 0; i < n - 1; i++) {
//         max_idx = i;

//        for (int j = i + 1; j < n; j++) {
//         if (totalMarks[j] > totalMarks[max_idx]) {
//             max_idx = j;
//         }
//        }

//        if (max_idx != i) {
//             int temp = totalMarks[i];
//             totalMarks[i] = totalMarks[max_idx];
//             totalMarks[max_idx] = temp;

//             string temp1 = names[i];
//             names[i] = names[max_idx];
//             names[max_idx] = temp1;  

//             for (int col = 0; col < 4; col++) { 
//                 int temp3 = marks[i][col];
//                 marks[i][col] = marks[max_idx][col];
//                 marks[max_idx][col] = temp3;
//             }
//         }
//     }
// }

// int main() {
    
//     int sum = 0;
//     int i = 0;

//     for (int row = 0; row < 7; row++) {
//         sum = 0;
//         for (int col = 0; col < 4; col++) {
//             sum = sum + marks[row][col];
//         }
//         cout << "Sum of row " << row + 1 << " is " << sum << endl;
//         total_marks[i] = sum;
//         i = i + 1;
//     }

//     selectionSort(total_marks, 7);

//     cout << "Sorted array: \n"; 
    
//     for (int i = 0; i < 7; i++) {
//         cout << endl;
//         cout << "Name " << " : ";
//         cout << names[i] << endl;;
//         cout << "Total Marks " << " : ";
//         cout << total_marks[i] << endl;

//         cout << "Marks : ";
//         for (int j = 0; j < 4; j++) {
            
//             cout << marks[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


//

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string arr[2][3];
//     string names[2] = {"Ali", "Ahmed"};
//     string ages[2] = {"18", "20"};
//     string salaries[2] = {"10k", "12k"};

//     // Assigning values using a loop
//     for (int i = 0; i < 2; i++) {
//         arr[i][0] = names[i];
//         arr[i][1] = ages[i];
//         arr[i][2] = salaries[i];
//     }

//     // Printing the 2D array
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
