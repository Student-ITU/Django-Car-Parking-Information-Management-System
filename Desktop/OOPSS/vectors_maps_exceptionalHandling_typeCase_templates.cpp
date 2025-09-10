// #include <iostream>
// #include <vector>
 
// using namespace std;

// void display ( vector<int> &vec ) {
//     for ( int i = 0; i < vec.size(); i++) {
//         cout << vec[i] << " ";
//     }
//     cout << endl;
// }

// int main () {
 
//     vector<int>vect1;

//     int size, elements;
//     cin >> size;

//     for ( int i = 0; i < size; i++) {
//         cin >> elements;
//         vect1.push_back(elements);
//     }

//     display (vect1);
 
//     return 0;
// }




// #include <iostream>
// #include <vector>  // Required for using vectors

// using namespace std;

// int main() {
//     // Declare a vector of integers
//     vector<int> numbers;

//     // Add elements to the vector using push_back()
//     numbers.push_back(10);  // Adds 10 to the end of the vector
//     numbers.push_back(20);  // Adds 20
//     numbers.push_back(30);  // Adds 30

//     // Access elements using index
//     cout << "Element at index 0: " << numbers[0] << endl;  // Output: 10

//     // Traverse using for loop
//     cout << "All elements: ";
//     for (int i = 0; i < numbers.size(); ++i) {
//         cout << numbers[i] << " ";  // Outputs each element
//     }
//     cout << endl;

//     // Modify an element
//     numbers[1] = 25;  // Updates second element (index 1) to 25

//     // Remove last element
//     numbers.pop_back();  // Removes 30

//     // Traverse using range-based loop
//     cout << "Updated elements: " << endl;
//     for (int num : numbers) {
//         cout << "Number is : " << " " << num << " ";  // Outputs remaining elements
//     }
//     cout << endl;

//     return 0;
// }


// MAPS

// #include <iostream>
// #include <map>  // Required for using maps

// using namespace std;

// int main() {
//     // Declare a map with string keys and int values
//     map<string, int> ageMap;

//     // Insert values using assignment
//     ageMap["Alice"] = 25;
//     ageMap["Bob"] = 30;

//     // Insert values using insert() method
//     ageMap.insert(make_pair("Charlie", 22));

//     // Access values using keys
//     cout << "Bob's age: " << ageMap["Bob"] << endl;

//     // Traverse the map
//     cout << "All entries -> " << endl;;
//     for (auto it = ageMap.begin(); it != ageMap.end(); ++it) {
//         cout << it->first << " = " << it->second << endl;  // key = value
//     }
//     cout << endl;

//     for (const auto& entry : ageMap) {
//         cout << entry.first << " = " << entry.second << endl;
//     }

//     // Check if a key exists
//     if (ageMap.find("David") == ageMap.end()) {
//         cout << "David not found in map.\n";
//     }

//     // Remove a key-value pair
//     ageMap.erase("Alice");

//     // Print updated map
//     cout << "After removal:\n";
//     for (const auto& entry : ageMap) {
//         cout << entry.first << " = " << entry.second << endl;
//     }

//     return 0;
// }


// Insert
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
    
//     // Creating an empty map
//     map<int, string> m1;

//     // Initialze map with list
//     map<int, string> m2 = {{1, "Geeks"},
//               {2, "For"}, {3, "Geeks"}};

//               // Inserting a key value pair
//     m2.insert({1, "Geeks"});

//     for (auto& p : m2)
//         cout << p.first << " " <<
//         p.second << endl;
//     return 0;
// }



// #include <iostream>
// #include <map>
// using namespace std;

// Map elements can be accessed by using the corresponding key inside operator []. If the key exists, it will return the associated value but if the key doesn’t exist, it will create a new element with the given key and the default value. To avoid this, we can also use at() method for accessing elements with any modification.

// Agar key nahi hoti → new key ban jayegi with default value 
// So, key 2 insert ho jayega with empty string "". So is lie at se bana lo, agar na hua key to error de ga in case of at jo ke acha ha

// Access

// int main() {
//     map<string, int> mapp; // Order matters 
//     mapp["Geeks"] = 1;
//     mapp["For"] = 2;
//     mapp["Geeks"] = 3;

//     mapp["Geeks"] = 9; // Same name na bhe hota error na ata
//     mapp.at("For") = 5; // Yeh chale ga cz For waha likha hua then change ho jata 

//     // Accessing elements
//     cout << mapp["Geeks"] << endl; 
//     cout << mapp["Geekss"] << endl; // Geekss likh dia agar to khud se element add ho jaye ga 
//     cout << mapp.at("For");

//     return 0;
// }


// Update 

// #include <iostream>
// #include<map>
// using namespace std;

// int main() {
//     map<int, string> m = {{1, "Geeks"},
//              {2, "For"}, {3, "Geeks"}};

//     // Updating value
//     m[0] = "Tweaks";
//     m.at(1) = "By";
    
//     cout << m[0] << endl;
//     cout << m.at(1);
//     return 0;
// }

// initializtion lsit se errror a rha manually kr lo

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     // Empty map declaration
//     map<int, string> m;

//     // Manually inserting key-value pairs
//     m.insert(make_pair(1, "Geeks")); 
//     m.insert(make_pair(2, "For"));
//     m.insert(make_pair(3, "Geeks"));

//     // Updating value using operator[]
//     m[0] = "Tweaks";
    
//     // Updating value using at()
//     // m.at(1) = "By";
    
//     // Printing values
//     cout << m[0] << endl;  // Outputs "Tweaks"
//     cout << m.at(1);       // Outputs "By"



//     return 0;
// }


// IN CASE OF INPUT IN VECTORS AND MAPS


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v; // Empty vector

//     // Taking run-time input and inserting it into vector
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     // Taking 'n' elements as input and inserting them
//     cout << "Enter " << n << " elements:" << endl;
//     for(int i = 0; i < n; i++) {
//         int x;
//         cin >> x; // Taking input
//         v.push_back(x); // Inserting into vector
//     }

//     // Display the vector elements
//     cout << "Vector elements are: ";
//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// TURN OF MAPS


// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> m; // Empty map

//     // Taking run-time input and inserting it into map
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     // Taking 'n' key-value pairs as input
//     cout << "Enter " << n << " key-value pairs:" << endl;
//     for(int i = 0; i < n; i++) {
//         int key;
//         string value;
//         cout << "Enter key: ";
//         cin >> key;  // Taking key input
//         cout << "Enter value: ";
//         cin >> value; // Taking value input
//         m[key] = value;  // Inserting key-value pair into map
//     }

//     // Display the map elements
//     cout << "Map elements are:" << endl;
//     for(const auto& p : m) {
//         cout << p.first << " -> " << p.second << endl; // Print key and value
//     }

//     return 0;
// }



// #include <iostream>
// #include <fstream>           // For file reading/writing
// #include "json.hpp"          // Include nlohmann JSON library

// using json = nlohmann::json; // Simplify namespace for easier access
// using namespace std;


// int main() {
//     // Declare a JSON array
//     json students = json::array();  // JSON array to hold student objects

//     // Create first student object
//     json student1;
//     student1["id"] = 1;                 // Key: "id", Value: 1
//     student1["name"] = "Alice";        // Key: "name", Value: "Alice"
//     student1["marks"] = 88;            // Key: "marks", Value: 88

//     // Create second student object
//     json student2;
//     student2["id"] = 2;
//     student2["name"] = "Bob";
//     student2["marks"] = 92;

//     // Push objects into the array
//     students.push_back(student1);      // Add student1 to the array
//     students.push_back(student2);      // Add student2 to the array

//     // Write to file
//     ofstream outFile("students.json"); // Open file to write JSON
//     outFile << students.dump(4);       // dump(4): pretty print with 4-space indentation
//     outFile.close();

//     cout << "Data written to students.json\n";
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    // Creating an empty map
    // vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    vector<char> v;
    v.push_back('a');
    v.push_back('c');
    v.push_back('f');
    v.push_back('d');
    v.push_back('z');


    // Deleting last element 'z'
  	v.pop_back();
  
  	// Deleting element 'f'
  	
    for (char p : v)
       cout << p << endl;
    return 0;
}