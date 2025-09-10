// // Question -> 1

// #include <iostream>
 
// using namespace std;
 
// int main () {
//     cout << "***** QUESTION 1 *****" << endl;
//     int n, count = 0, result = 0;
//     int array[5];
//     bool exit = true, end = true;
//     cout << "Enter the number" << endl;
//     cin >> n;

//     while ( exit == true ) { 
//         if ( n > 0 ) {  
//             result = n % 10;
//             for ( int i = 0; i <= count; i++ ) {
//                 array[count] = result;
//             }

//             n = n / 10;
//             count = count + 1;

//             if ( n == 0 ) {
//                 exit = false;
//                 break;
//             }
//         }

//         else {
//             cout << "Number is negative" << endl;
//             cout << "Enter again" << endl;
//             cin >> n;
//         }
//     }

//     if ( count == 5 ) {
//         for ( int i = count - 1; i >= 0; i-- ) {
//             cout << array[i] << " ";
//         }
//     }

//     else {
//         cout << "Input has no more then 5 digits" << endl;
//     }
 
//     return 0;
// }

// Question -> 2

// #include <iostream>
 
// using namespace std;
 
// int main () {
    
//     cout << "***** QUESTION 2 *****" << endl;
//     bool exit = true;
//     int KilometersDriven;
//     int liters;

//     while ( exit == true ) {
//         cout << "Enter the kilometer driven, (-1 to quit)" << endl;
//         cin >> KilometersDriven;

//         if ( KilometersDriven == -1 ) {
//             break;
//         }

//         cout << "Enter the liters" << endl;
//         cin >> liters;
//         double result = KilometersDriven / float(liters);
//         cout << "Kilo Meters per liter are : " << result << endl;
//     }
 
//     return 0;
// }

// // Question -> 3

// #include <iostream>
 
// using namespace std;

// double convertUnits( double n, string fromUnit, string toUnit ) {
//     double gal_TO_l = 3.78541;
//     double gal_TO_ml = gal_TO_l * 1000;
//     double oz_TO_g = 28.3495;
//     double lb_TO_kg = 0.453592;
//     double in_TO_cm = 2.54;
//     double ft_TO_m = 0.3048;
//     double mi_TO_km = 1.60934;

//     if ( fromUnit == "gal" && toUnit == "ml" ) {
//         return n * gal_TO_ml;   
//     }
    
//     else if ( fromUnit == "gal" && toUnit == "l" ) {
//         return n * gal_TO_l;
//     }

//     else if ( fromUnit == "oz" && toUnit == "g" ) {
//         return n * oz_TO_g;
//     }
        
//     else if ( fromUnit == "lb" && toUnit == "kg" ) {
//         return n * lb_TO_kg;
//     }
        
//     else if ( fromUnit == "in" && toUnit == "cm" ) {
//         return n * in_TO_cm;
//     }
    
//     else if ( fromUnit == "ft" && toUnit == "m" ) {
//         return n * ft_TO_m;
//     }

//     else if ( fromUnit == "mi" && toUnit == "km" ) {
//         return n * mi_TO_km;
//     }

//     else {
//         cout << "Incompatible conversion from " << fromUnit << " to " << toUnit << endl;
//         return 0;
//     }
// }

// int main () {
    
//     cout << "***** QUESTION 3 *****" << endl;
//     string from_Unit, to_Unit;
//     double n;

//     cout << "Convert from : ";
//     cin >> from_Unit;

//     cout << "Convert to : ";
//     cin >> to_Unit;

//     cout << "Number : ";
//     cin >> n;

//     double result = convertUnits( n, from_Unit, to_Unit );
//     cout << "Result is : " << result << endl;
 
//     return 0;
// }


// Question -> 4

// #include <iostream>

// using namespace std;

// string intToRoman ( int num ) {

//     string thousands[] = {"", "M", "MM", "MMM"};
//     string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
//     string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
//     string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

//     int thou = num / 1000;
//     int hund = ( num % 1000 ) / 100;
//     int ten = ( num % 100 ) / 10;
//     int one = num % 10;

//     string roman = thousands[thou] + hundreds[hund] + tens[ten] + ones[one];
//     return roman;
// }

// int main() {

//     cout << "***** QUESTION 4 *****" << endl;
//     int num;
//     cout << "Enter a number (1-3999): ";
//     cin >> num;

//     if (num < 1 || num > 3999) {
//         cout << "Number out of range";
//         return 1;
//     }
//     cout << "Roman numeral: " << intToRoman( num ) << endl;
//     return 0;
// }

// strings and char array

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
    // string firstName = "John";
    // string lastName = "Doe";
    // string fullName = firstName + " " + lastName;
    // cout << fullName;
    
    //

    // string firstName = "John ";
    // string lastName = "Doe";
    // string fullName = firstName.append(lastName);
    // cout << fullName;

    //

    // string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // cout << "The length of the txt string is: " << txt.size();

    //

    // string txt = "We are the so-called \"Vikings\" from the north.";
    // cout << txt;
    // cout << endl;
    // // cout << "\n";
    // string txt1 = "It\'s alright.";
    // cout << txt1;
    // cout << endl;
    // string txt2 = "The character \\ is called backslash.";
    // cout << txt2;
    // return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
// 	string str(5, 'g');
// 	cout << str;
// 	return 0;
// }

// C++ Program to demonstrate use of string keyword
// #include <iostream>
// using namespace std;

// int main()
// {

// 	string s = "GeeksforGeeks";
// 	string str("GeeksforGeeks");

// 	cout << "s = " << s << endl;
// 	cout << "str = " << str << endl;

// 	return 0;
// }

//

// C++ Program to demonstrate use of stringstream object
// #include <iostream>
// #include <sstream>
// #include<string>

// using namespace std;

// int main()
// {

// 	string s = " GeeksforGeeks to the Moon ";
// 	stringstream obj(s);
// 	// string to store words individually
// 	string temp;
// 	// >> operator will read from the stringstream object
// 	while (obj >> temp) {
// 		cout << temp << " ";
// 	}
// 	return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
    // char charArray[4] = {'s', 'a', 'm', '\0'}; // Size of the array is 4

    // Printing the array as a string
// int i = 0;

//     while ( charArray[i] != '\0') {
//         cout << charArray[i];
//         i = i + 1;
//     }

    // for ( int i = 0; charArray[i] != '\0'; i++ ) {
    //     cout << charArray[i] <<  " ";

    // }

    // for ( int i = 0; i != 3; i++ ) {
    //     cout << charArray[i] << " ";

    // }

    //

    // char array[7] = "Sameer";

    // int i = 0;

    // while ( array[i] != '\0') {
    //     cout << array[i] << " ";
    //     i = i + 1;
    // }

    // while ( i != 6 ) {
    //     cout << array[i] << " ";
    //     i = i + 1;
    // }

    // for ( int i = 0; array[i] != '\0'; i++ ) {
    //     cout << array[i] <<  " ";

    // }

    //

    // string str = "sameer hi"; // 10 size measn c style string or is me visible nhi lakin agar kabhi bhe array ko declare krna yah kisi ko batana tou is ka size 10 he ho ga yani aik add kr ke
    // int i = 0;
    // // while ( str[i] != '\0' ) {
    // //     cout << str[i];
    // //     i = i + 1;
    // // }

    // while ( i != 9 ) {
    //     cout << str[i];
    //     i = i + 1;
    // }

    // for ( int i = 0; str[i] != '\0'; i++ ) {
    //     cout << str[i] <<  " ";

    // }

    // for ( int i = 0; i != 9; i++ ) {
    //     cout << str[i] <<  " ";

    // }


    //

//     string str[2] = {"Ali", "Sameer"};
//     int i = 0;

//     // while ( i != 2 ) {
//     //     cout << str[i] << endl;
//     //     i = i + 1;
//     // }
//     int size = sizeof(str) / sizeof(str[0]); // yeh string ke andar batao ga ke kitne hain 2 yani ali and sameer
//     int size1 = str[0].length(); // yeh 0 index wale ke batai ga ke kitne elements that is 3
//     int size2 = str[1].size(); //yeh 1st index ke elemnts count kre ga jo ke hian 6
//     // agar hm  chate ke total length nikale jo ke 9 ai ge 6 + 3 tou us ke lie for loop lagana pare ga with str[].length();
//     cout << size2; 
//     cout << endl;
//     cout << size1;
//     cout << endl;
//     cout << size;
//     cout << endl;
//     int total = 0;

//     for ( int i = 0; i < 2; i++ ) {
//         // total = total + str[i].size ();
//         total = total + str[i].length ();
//     }
//     cout << total << endl;

//     while ( str[i] != "\0" ) {
//         cout << str[i];
//         i = i + 1;
//     }

//     // for ( int i = 0; str[i] != '\0'; i++ ) {
//     //     cout << str[i] <<  " ";
//     // }

//     // for ( int i = 0; i != 9; i++ ) {
//     //     cout << str[i] <<  " ";

//     // }


//     // C++ Program to print string using pointers

// 	// string s = "Geeksforgeeks";

// 	// // pointer variable declared to store the starting
// 	// // address of the string
// 	// char* p = &s[0];

// 	// // this loop will execute and print the character till
// 	// // the character value is null this loop will execute and
// 	// // print the characters

// 	// // while (*p != '\0') {
// 	// // 	cout << *p;
// 	// // 	p++;
// 	// // }
// 	// // cout << endl;

//     // // for ( int i = 0; s[i] != '\0'; i++ ) {
//     // //     cout << *p;
//     // //     p = p + 1;
//     // // }
    
//     // // for ( int i = 0; s[i] != '\0'; i++ ) {
//     // //     cout << s[i];
//     // // }

//     // for ( int i = 0; *p != '\0'; p++ ) {
//     //     cout << *p;
//     //     // p = p + 1;
//     // }

//     return 0;
// }


// Stock buy and sell

// #include <iostream>
 
// using namespace std;

// int buy ( int array[], int &index ) {
//     int min = INT_MAX;
//     for ( int i = 0; i < 5; i++ ) {
//         if ( array[i] < min ) {
//             min = array[i];
//             index = i;
//         }
//     }

//     cout << "Value minimun : " << min << endl;
//     return index;
    
// }


// int sell ( int array[], int index1, int index ) {
//     int max = INT_MIN;
//     for ( int i = 1 + index; i < 5; i++ ) {
//         if ( array[i] > max ) {
//             max = array[i];
//             index1 = i;
//         }
//     }

//     cout << "Value minimun : " << max << endl;
//     return index1;
// }


// int main () {
 
//     int array[5] = {30, 5600, 20, 220, 100};

//     int index = 0, index1 = 0;

//     int ans = buy ( array, index );
//     cout << "Index to buy : ";
//     cout << ans << endl;

//     int ans1 = sell ( array, index1, index );
//     cout << "Index to sell : ";
//     cout << ans1 << endl;


//     int ans3 = array[ans1] - array[ans]; 
//     cout << "The profit is : " << ans3 << endl;
 
//     return 0;
// }

// Matrix Multiplication

// #include <iostream>
 
// using namespace std;
 
// int main () {
    
//     int C1st = 3;
//     int R2nd = 3;
//     int countRow = 0, countCol = 0;

//     int MultipliedArray[3][3] = {0};
//     int array[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int array1[3][3] = {{7, 8, 9}, {4, 5, 6}, {1, 2, 3}};

//     if ( C1st == R2nd ) {
//         cout << "Matrix 1" << endl;
//         for ( int  i = 0; i < 3; i++ ) {
//             for ( int j = 0; j < 3; j++ ) {
//                 cout << array[i][j] << " ";
//             }
//             cout << endl;
//         }

//         cout << endl;

//         cout << "Matrix 2" << endl;
//         for ( int  i = 0; i < 3; i++ ) {
//             for ( int j = 0; j < 3; j++ ) {
//                 cout << array1[i][j] << " ";
//             }
//             cout << endl;
//         }

//         cout << endl;

//         cout << "Multiplication of both Matrices" << endl;

//         for ( int i = 0; i < 3; i++ ) {
//             for ( int j = 0; j < 3; j++ ) {
//                 for ( int k = 0; k < 3; k++ ) { 
//                     MultipliedArray[i][countCol] = MultipliedArray[i][countCol] + ( array[countRow][k] * array1[k][j] );
//                 }
//                 countCol = countCol + 1;
//                 if ( countCol == C1st ) {
//                     countCol = 0;
//                     countRow = countRow + 1;
//                 }
//             }
//         }

//         for ( int i = 0; i < 3; i++ ) {
//             for ( int j = 0; j < 3; j++ ) {
//                 cout << MultipliedArray[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     else {
//         cout << "Number of columns of 1st matrix is not equal to number of rows of 2nd matrix" << endl;
//     }

//     return 0;
// }


// Students data

#include <iostream>
 
using namespace std;
 
int main () {
 
    string array[3][3];
    int marks[3][3];
    int k = 0;

    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            if ( j < 2 ) {
                cin >> array[i][j];
            }
            cin >> marks[i][j];
        }
    }

    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 2; j++ ) {
            cout << array[i][j] << " ";
            if ( j == 1 ) {
                for ( int i = 0; i < 1; i++ ) {
                    for ( int j = 0; j < 3; j++ ) {
                        cout << marks[k][j] << " ";
                    }
                    cout << endl;
                }
                k = k + 1;
            }
        }
        cout << endl;
    }

    // for ( int i = 0; i < 3; i++ ) {
    //     for ( int j = 0; j < 3; j++ ) {
    //         cout << marks[i][j] << " ";
    //     }
    //     cout << endl;
    // }
 
    return 0;
}

