/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
// #include <iostream>

// // /* fstream header file for ifstream, ofstream,
// // fstream classes */
// #include <fstream>

// // arrays(temp. data) -> file handling(permanent data) -> data base(more better way of permanent data)
// // dma -> linked list
// using namespace std;

// // Driver Code
// int main()
// {
// 	// Creation of ofstream class object
// 	ofstream fout; // write

// 	string line;

// 	// // by default ios::out mode, automatically deletes
// 	// // the content of file. To append the content, open in ios:app
// 	// // fout.open("sample.txt", ios::app)
// 	fout.open("sample.txt"); //Loading  // open member function hai

// 	// Execute a loop If file successfully opened
// 	while (fout) {

// 		// Read a Line from standard input
// 		getline(cin, line); // aik line likh ke jab enter krte tab jata 2nd line me

// 		// Press -1 to exit
// 		if (line == "-1") {
// 			break;
// 		}

// 		// Write line in file
// 		fout << line << endl; // Saving / writing in file sample.txt
// 	}

// 	// Close the File
// 	fout.close(); // kaam kr lia tou close //close member function hai // resourses release krne ke lie close krte last me good pratice

// 	// Creation of ifstream class object to read the file
// 	ifstream fin; // read

// 	// by default open mode = ios::in mode
// 	fin.open("sample.txt");

// 	// Execute a loop until EOF (End of File)
// 	while (getline(fin, line)) { // fin.eof() tab tak read kro ese bhe likh sakte while ke condition ke jab tak end of file na ho tab tak read krte rho
// 	//fin is lie lagaya ke hm le rha file se so cin ke jaga fin use kia

// 		// Print line (read from file) in Console
// 		cout << line << endl; // line by line
// 	}

// 	// Close the fileq
// 	fin.close();

// 	return 0;
// }

/*Practice Questions:
Question 1: Write to a File
Write a program that prompts the user to enter their name and age, then writes this information to a file named userinfo.txt.

Question 2: Read from a File
Write a program that reads the content of userinfo.txt (from Question 1) and prints it to the console.

Question 3: Count Words in a File
Write a program that reads the content of example.txt and counts the number of words in the file. Print the total number of words to the console.*/
// Q -> 1 and 2

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main () {

// 	ofstream fout;
// 	string line;

// 	fout.open("userinfo.txt");

// 	cout << "\033[1;32mEnter :\033[0m" << " ";
// 	while (fout) {
// 		getline(cin, line);

// 		if (line == "-1") {
// 			break;
// 		}

// 		fout << line << endl; // yaha pe colorful nhi chal rha
// 	}

// 	fout.close();

// 	ifstream fin;

// 	fin.open("userinfo.txt");

// 	while(getline(fin, line)) {
// 		cout << "\033[1;32m" << line << endl;
// 	}

// 	fin.close();

// 	return 0;
// }

// Q -> 3 // agar char kar ke likho ge sameer ko tou har aik word next line mein ai ga matlab count tou kr he de ga lakin likhne ka tareka tou theek nhi na

#include <iostream>
#include <fstream>
using namespace std;

int main () {

	ofstream fout;
	string line;
	int words = 0;

	fout.open("example.txt");

	cout << "\033[1;32mEnter :\033[0m" << " ";
	while(fout) {
		getline(cin, line);

		if (line == "-1") {
			break;
		}

		words = words + 1;

		fout << line << endl;
	}

	fout.close();

	ifstream fin;

	fin.open("example.txt");

	while(getline(fin, line)) {
		cout << "\033[1;32m" << line << endl;
	}

	cout << "\033[1;31mThe total number of words are : " << words << endl;

	fin.close();

	return 0;
}

// fstream

/* File Handling with C++ using fstream class object */
/* To write the Content in File */
/* Then to read the content of file*/
// #include <iostream>

/* fstream header file for ifstream, ofstream,
fstream classes */
// #include <fstream>

// using namespace std;

// // Driver Code
// int main()
// {
// 	// Creation of fstream class object
// 	fstream fio;

// 	string line;

// 	// by default openmode = ios::in|ios::out mode
// 	// Automatically overwrites the content of file, To append
// 	// the content, open in ios:app
// 	// fio.open("sample.txt", ios::in|ios::out|ios::app)
// 	// ios::trunc mode delete all content before open
// 	fio.open("sample.txt", ios::trunc | ios::out | ios::in);

// 	// Execute a loop If file successfully Opened
// 	while (fio) {

// 		// Read a Line from standard input
// 		getline(cin, line);

// 		// Press -1 to exit
// 		if (line == "-1")
// 			break;

// 		// Write line in file
// 		fio << line << endl;
// 	}

// 	// Execute a loop until EOF (End of File)
// 	// point read pointer at beginning of file
// 	fio.seekg(0, ios::beg);

// 	while (fio) {

// 		// Read a Line from File
// 		getline(fio, line);

// 		// Print line in Console
// 		cout << line << endl;
// 	}

// 	// Close the file
// 	fio.close();

// 	return 0;
// }

// #include <iostream>
// #include <fstream>

// using namespace std;
// int main()
// {
// 	int rno[50];
// 	int fee[50];
// 	string name[50];
// 	int row1 = 0;
// 	ofstream fout;
// 	fout.open("student.txt");

// 	while (fout)
// 	{
// 		cout << "Enter the Roll Number:";
// 		cin >> rno[row1];
// 		if (rno[row1] != -1)
// 		{
// 			fout << rno[row1] << "\t";
// 		}
// 		else
// 		{
// 			break;
// 		}

// 		cout << "\nEnter the Name:";
// 		cin >> name[row1];
// 		if (rno[row1] != -1 && name[row1] == "-1")
// 		{
// 			row1 = row1 + 1;
// 			break;
// 		}
// 		else
// 		{
// 			fout << name[row1] << "\t";
// 		}
// 		// else {
// 		// 	break;
// 		// }

// 		cout << "\nEnter the Fee:";
// 		cin >> fee[row1];

// 		if (fee[row1] != -1)
// 		{
// 			fout << fee[row1] << "\t";
// 		}
// 		else
// 		{
// 			break;
// 		}

// 		row1 = row1 + 1;

// 		//   fout<<rno[row]<<"\t"<<name[row]<<"\t"<<fee[row];   //write data to the file student
// 	}
// 	fout.close();

// 	ifstream fin;
// 	fin.open("student.txt");
// 	for (int i = 0; i < row1; i++)
// 	{

// 		fin >> rno[i] >> name[i] >> fee[i]; // read data from the file student
// 		cout << endl << rno[i] << "\t" << name[i] << "\t" << fee[i];
// 	}
// 	fin.close();

// 	return 0;
// }