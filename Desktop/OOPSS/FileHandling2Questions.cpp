/*Reading Input from User and Writing to File:
Question: Write a program that prompts the user to enter their name and age. Then, write this information to a text file named "userinfo.txt".
Reading from File and Displaying Output:
Question: Create a program that reads the contents of a text file named "data.txt" and displays them on the console.*/

// #include <iostream>
// #include <fstream>

// using namespace std;
 
// int main () {
    
//     string name;
//     int age;

//     ofstream fout;
//     fout.open("FileH.txt");

//     while (fout) {
//         cout << "Enter the name :" << endl;
//         cin >> name;

//         if (name == "-1") {
//             break;
//         }

//         cout << "Enter the age :" << endl;
//         cin >> age;

//         if (age == -1) {
//             break;
//         }

//         fout << name << " " << age << endl;
//     }
    
//     fout.close();

//     ifstream fin;
//     fin.open("FileH.txt");

//     while (fin >> name >> age) {
//         cout << name << " " << age << endl;
//     }

//     fin.close();

//     return 0;
// }


//


/*Question 1: Implement a program that reads a list of names from a file and writes them to another file in reverse order.*/


#include <iostream>
#include <fstream>

using namespace std;
 
int main () {
    
    string name;

    ofstream fout;
    fout.open("FileH.txt");

    if (!fout.is_open()) {
        cerr << "File is not opened!" << endl;
        return 1;
    }

    while (true) {
        cout << "Enter the name :" << endl;
        cin >> name;

        if (name == "-1") {
            break;
        }

        fout << name << endl;
    }
    
    fout.close();

    ifstream fin;
    fin.open("FileH.txt");

    if (!fin.is_open()) {
        cerr << "File is not opened!" << endl;
        return 1;
    }

    while (fin >> name) {
        cout << name << endl;
    }

    fin.close(); //close kr ke kholne par rhy

    fin.open("FileH.txt");

    // ofstream fout;
    fout.open("FileHH.txt"); //pehle line jai ge tou del ho ga

    if (!fout.is_open()) {
        cerr << "File is not opened!" << endl;
        return 1;
    }

    while (fin >> name) {
        fout << name << endl;
    }

    fin.close();
    fout.close();

    return 0;
}


//


/*Question 1: Write a program that reads integers from a text file and calculates their sum. Use a loop to iterate through the file.

Question 2: Develop a program that reads lines from a text file and counts the number of words in each line. Use a loop to process each line.*/

// #include <iostream>
// #include <fstream>
// using namespace std;
 
// int main () {
    
//     ofstream fout;
//     fout.open("FileHHH.txt");

//     int count = 0; 
//     int sum = 0; 
//     int n;
//     cout << "Enter the numbers(-1 for exit) :" << endl;

//     while (true) {
//         cin >> n;

//         if (n == -1) {
//             break;
//         }

//         fout << n << endl;
//         count = count + 1;
//     }

//     ifstream fin;
//     fin.open("FileHHH.txt");

//     while (fin >> n) {
//         cout << n << endl;
//     }
    
//     fin.close();

//     fin.open("FileHHH.txt");

//     while (fin >> n) {
//         sum = sum + n;
//     }

//     fout << "The sum is : " << sum << endl;

//     fin.close();
//     fout.close();

//     return 0;
// }

//

// #include <iostream>
// #include <fstream>
// using namespace std;
 
// int main () {
    

//     return 0;
// }


//


/*Question 1: Create a program that reads a list of student names from a file and dynamically allocates memory to store them. Calculate and display the total number of characters in all names combined.
Question 2: Develop a program that reads integers from a file and dynamically allocates memory to store them in an array. Compute the average of the numbers and display it.*/

// #include <iostream>
// #include <fstream>
// using namespace std;
 
// int main () {
    
//     int n, i = 0;
//     cout << "Enter the size :" << endl;
//     cin >> n;

//     string* Array = new string[n];

//     ofstream fout;
//     fou.open("FileHHHH.txt");

//     while (i < n) {
//        getline(cin, Array);
//        fout << Array << endl;
//        i++;
//     }
//     return 0;
// }

