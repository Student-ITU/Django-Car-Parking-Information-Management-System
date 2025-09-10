// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main() {
//     string message;
//     cout << "Enter a message to append to the file: ";
//     getline(cin, message);

//     ofstream fout("messages.txt", ios::app); // Open the file in append mode
//     if (!fout) {
//         cerr << "Error opening file!" << endl;
//         return 1;
//     }

//     fout << message << endl; // Append the new message to the file

//     fout.close(); // Close the file
//     cout << "Message appended to the file successfully." << endl;
//     return 0;
// }

//APPEND MODE KARTA YEH HAI KE AP NE JO DATA LIKHA FILE MEIN WOH REMOVE NHI HO GA EVEN IF U RUN TERMINAL AGAIN AND IF U RUN THE TERMINAL AGAIN THEN IT WILL WRITE THE DATA IN THE NEXT LINE OF PREVIOUS ONE SO IT DIDNT REMOVE THE OLD DATA AND ADD DATA IN THE NEXT LINE


// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     fstream file("file.txt", ios::in | ios::out | ios::ate); // Open file for reading and writing, move to end
//     if (!file) {
//         cerr << "Error opening file!" << endl;
//         return 1;
//     }

//     file << "Added at the end." << endl; // Write to the file at the end

//     file.seekg(0, ios::beg); // Move to the beginning of the file for reading

//     string line;
//     while (getline(file, line)) {
//         cout << line << endl; // Read and print each line from the file
//     }

//     file.close(); // Close the file
//     return 0;
// }


// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main() {
//     // Step 1: Write some initial data to the file
//     {
//         string line;
//         ofstream fout("example_ate.txt");
//         fout << "Line 1: Initial data" << endl;
//         fout << "Line 2: Initial data" << endl;

//         while(fout) {
//             getline(cin, line);

//             if (line == "-1") {
//                 break;
//             }
//             fout << line << endl;
//         }
//         fout.close();
//     }

//     // Step 2: Open the file in ios::ate mode
//     fstream file("example_ate.txt", ios::in | ios::out | ios::ate);

//     if (!file) {
//         cerr << "Error opening file!" << endl;
//         return 1;
//     }

//     // Step 3: Append some data
//     file << "Line 3: Appended data" << endl;

//     // Move the file pointer to the beginning for reading
//     file.seekg(0, ios::beg);

//     // Step 4: Read and print the entire file content
//     string line;
//     while (getline(file, line)) {
//         cout << line << endl;
//     }

//     file.close(); // Close the file
//     return 0;
// }


//trunc

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream fout("file.txt", ios::out | ios::trunc); // Open file for writing and truncate its contents
//     if (!fout) {
//         cerr << "Error opening file!" << endl;
//         return 1;
//     }

//     fout << "This is a new content after truncation." << endl; // Write new content
   
//     fout.close(); // Close the file
//     return 0;
// }

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Step 1: Write some initial data to the file without truncation
    {
        ofstream fout("example_trunc.txt");
        fout << "Initial Line 1" << endl;
        fout << "Initial Line 2" << endl;
        fout.close();
    }

    // Display the initial content of the file
    cout << "Initial content of the file...:\n";
    ifstream fin("example_trunc.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();

    // Step 2: Open the file in ios::trunc mode to truncate the content
    ofstream fout("example_trunc.txt", ios::app);
    fout << "New Line 1" << endl;
    fout << "New Line 2" << endl;
    fout.close();

    // Display the new content of the file
    cout << "\nNew content of the file after truncation:\n";
    fin.open("example_trunc.txt");
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();

    return 0;
}

