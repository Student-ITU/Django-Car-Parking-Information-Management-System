/*Project Prompt
Traffic Management Systemm ---->
Your task is to design and implement a Traffic Management System in C++. The system should simulate the management of traffic lights at a series of intersections. The system should be able to:
Initialize Traffic Lights: Initialize traffic lights for multiple intersections. Each intersection has multiple traffic lights, each with a state (red, yellow, green).
Control Traffic Lights: Change the state of traffic lights based on a predefined schedule or manual control.
Display Traffic Light Status: Display the current status of all traffic lights at each intersection.
Log Traffic Light Changes: Log all changes in the state of traffic lights to a file.
Simulation Mode: Run a simulation where traffic light states change automatically over time.
User Interaction: Allow the user to manually change the state of any traffic light.
Dynamic Traffic Light Addition: Add new traffic lights to intersections dynamically.
Report Generation: Generate a report of the traffic light states and changes over a period.
Key Concepts Usage ---->
If-Else Statements: Control the flow of traffic lights based on their current state.
Loops: Iterate over intersections and traffic lights to update states and display information.
1D and 2D Arrays: Store the traffic light states. A 2D array can be used to represent multiple intersections, each containing multiple traffic lights.
Functions: Modularize the code by creating functions for initialization, state change, display, logging, and user interaction.
File Handling: Read from and write to files to log the state changes and generate reports.
Pointers: Manage dynamic memory allocation for traffic lights.
Dynamic Memory Allocation (DMA): Allocate memory dynamically for traffic lights to allow the addition of new lights at runtime.*/




//



/*School Management System Project
Project Description:

Develop a School Management System using C++ that handles student and teacher records, class assignments, and grades. The project should include the use of if-else statements, loops, functions, 1D arrays, dynamic memory allocation (DMA), pointers, and file handling.

Requirements:

Define the Structure:

Students:
Store student information such as name, roll number, and grades.
Teachers:
Store teacher information such as name, employee ID, and assigned class.
Classes:
Maintain a record of classes, each having a list of students and a class teacher.
Operations:

Add New Student:
Input and store new student information.
Add New Teacher:
Input and store new teacher information.
Assign Teacher to Class:
Assign a teacher to a specific class.
Assign Student to Class:
Assign a student to a specific class.
Update Student Grades:
Update the grades of a specific student.
Display Student Information:
Display the information of all students or a specific student.
Display Teacher Information:
Display the information of all teachers or a specific teacher.
Save and Load Data:
Save the current state of the system to a file.
Load the state of the system from a file.
Implementation Details:

Use 1D arrays to store lists of students and teachers.
Use dynamic memory allocation to manage arrays for students and teachers.
Implement file handling to save and load the school management system's state.
Use functions to modularize the code.
Employ pointers for DMA and efficient memory handling.
Example Scenario:

Initialize the system with no students and teachers.
Add a few students and teachers.
Assign students to different classes.
Assign teachers to different classes.
Update a student's grades.
Display information for all students and teachers.
Save the state to a file.
Load the state from a file and display the information again.
Key Features to Implement:
Student Management:

Add, display, and update student information.
Assign students to classes.
Teacher Management:

Add, display, and update teacher information.
Assign teachers to classes.
Class Management:

Manage class assignments for both students and teachers.
File Handling:

Save and load the entire state of the school management system to and from a file.
Dynamic Memory Allocation:

Use pointers and DMA for flexible and efficient memory usage.
Example of Tasks:
Add New Student:

Prompt user to enter student details (name, roll number, initial grades).
Store these details in a dynamically allocated array.
Add New Teacher:

Prompt user to enter teacher details (name, employee ID).
Store these details in a dynamically allocated array.
Assign Student to Class:

Prompt user to select a student and assign them to a class.
Assign Teacher to Class:

Prompt user to select a teacher and assign them to a class.
Update Student Grades:

Prompt user to enter new grades for a specific student.
Display Information:

Display details of all students and teachers.
Save and Load Data:

Implement functions to save and load the data to and from a file.
Note: Focus on creating a structured and modular design for the system, making use of functions to handle different tasks and ensuring proper memory management using DMA and pointers.*/

#include <iostream>
#include <fstream>
using namespace std;
 
int main () {
    
    int n;
    cout << "Enter the size :" << endl;
    cin >> n;

    string* Students = new string[n];
    string* Teachers = new string[n];

    cout << "Enter Student's detail :" << endl;
    for (int i = 0; i < n; i++) {
        cin >> Students[i];
    }

    cout << "Enter Teachers's detail :" << endl;
    for (int i = 0; i < n; i++) {
        cin >> Teachers[i];
    }
    
    return 0;
}