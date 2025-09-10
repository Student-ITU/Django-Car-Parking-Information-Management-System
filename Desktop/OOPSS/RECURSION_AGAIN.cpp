/*Video 1 code by babbar
Recursion is function calling itself
Jaha rukne ke baat hote recursion mein use base case kehte, base case mein return likhna bhe lazmi*/
// #include <iostream>
 
// using namespace std;

// int factorial ( int n ) {
//     if ( n == 0 ) {    // 4 * fact ( 3 )  
//                        // 3 * fact ( 2 )
//                        // 2 * fact ( 1 )
//                        // 1 * fact ( 0 )  ( fact ( 0 ) == 1 ) so 1 * 1 = 1... 2 * 1 = 2... now 3 * 2 = 6... 4 * 6 = 24...fact ( 3 ) ke andar 3 * fact ( 2 ) hai
//         return 1;
//     }

//     return n * factorial ( n - 1 ); // Recursive Relation

//     /*Base case
//     Processing
//     Recursive relation
//     ESE RECURSION KO KEHTE TAIL RECURSION
//     */

//     /*Base case
//     Recursive relation
//     Processing
//     ESE RECURSION KO KEHTE HEAD RECURSION
//     */
// }
// int main () {
 
//     int n;
//     cin >> n;

//     int ans = factorial ( n );
//     cout << ans << endl;
 
//     return 0;
// }




// //COUNTING

// #include <iostream>
 
// using namespace std;

// void Counting ( int n ) {
//     if ( n == 0 ) {
//         return;
//     }

//     // cout << n << endl; // Agar yeh uper recursive relation se to tail recursion
//     Counting ( n - 1 );
//     cout << n << endl;  // Agar yeh neeche recursive relation se to head recursion

// }
// int main () {
 
//     int n;
//     cin >> n;
    
//     Counting ( n );
 
//     return 0;
// }


//GOING HOME

// #include <iostream>
 
// using namespace std;

// void Home ( int destination, int currentPosition ) {
//     if (currentPosition == destination) {
//         cout << "*****I have taken " << currentPosition << " steps, and I have reached Home*****" << endl;
//         return;
//     }

//     cout << "I have taken " << currentPosition << " steps" << endl;

//     Home ( destination, ++currentPosition );
// /*currentPosition++ krne se infinite loop chal rha ->
// This process repeats indefinitely, causing an infinite loop because currentPosition never gets incremented before the value is passed to the next call. Matlab value pass pehle ho jate jo ke 0 hai or increment woh us ke baad hota
// The output will continuously print "I have taken 0 steps" without ever reaching the destination.*/

// }

// int main () {
 
//     int destination = 10;
//     int currentPosition = 0;

//     Home ( destination, currentPosition );
 
//     return 0;
// }



// #include <iostream>
 
// using namespace std;

// int fibonacciSeries ( int n ) {
//     if ( n == 0 ) {
//         return 0;
//     }

//     if ( n == 1 ) {
//         return 1;
//     }
    
//     int ans = fibonacciSeries ( n - 1 ) + fibonacciSeries ( n - 2 ); 

//     return ans;

// }

// int main () {

//     int n;
//     cin >> n;
    
//     int ans = fibonacciSeries ( n );
//     cout << ans << endl;
 
//     return 0;
// }


//Stairs


// #include <iostream>
 
// using namespace std;

// int stairs ( int n ) {
//     if ( n < 0 ) {
//         return 0;
//     }

//     if ( n == 0 ) {
//         return 1;
//     }

//     int ans = stairs ( n - 1 ) + stairs ( n - 2 ); 

//     return ans;
// }

// int main () {
 
//     int n;
//     cin >> n;
 
//     int ans = stairs ( n );
//     cout << ans << endl;
 
//     return 0;
// }

//With loops

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     // string str[6] = {"S", "a", "m", "e", "e", "r"};
//     string str = "Sameer";

//     for (int row = 6; row >= 0; row--) {
//         cout << str[row] << " ";
//     }
 
//     return 0;
// }

//With recursion

// #include <iostream>
// #include <string>
 
// using namespace std;

// void Back ( string str, int i, int j ) {
//     if ( j < i ) {
//        return;
//     }

//     cout << str[j] << " ";

//     Back ( str, i, --j );
    
// }

// int main () {
 
//     string str = "sameer";
//     int i = 0;
//     int j = str.length () - 1;
//     Back ( str, i, j );
 
//     return 0;
// }


//Palindrome through recursion

#include <iostream>
#include <string>

using namespace std;

void Back(string str, int i, int j) {
    // Base case: if i is greater than or equal to j, all characters have been checked
    if (i >= j) {
        cout << "Yes, it is a palindrome" << endl;
        return;
    }

    // Check if characters at current positions are equal
    if (str[i] != str[j]) {
        cout << "No, it is not a palindrome" << endl;
        return;
    }

    // Recursive case: move towards the middle
    Back(str, i + 1, j - 1);
}

int main() {
    string str = "abba";
    int i = 0;
    int j = str.length() - 1;
    Back(str, i, j);

    return 0;
}
