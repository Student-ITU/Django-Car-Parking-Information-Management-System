// #include <iostream>
// using namespace std;

// int main() {
//     // int *ptr = &value; // yaha int he kyun likhte ? is lie ke pata lage ke kis type ka data hai and kitne byte ka data hai. yeh he waja ke hm pointer * ptr = &value; nhi likhte
//     int i = 5;  // agar int type ke value ke corresponding pointer banana hai tou jo neeche line likhe woh likhte
//     int *ptr1 = &i; //agar is type ke value ke correspoding pointer banana tou neche jesa likha us trha likh lena
//     int **ptr2 = &ptr1;
//     cout << " a> " << ptr1 << endl;
//     cout << " a< " << ptr2 << endl;
//     cout << " a< " << &ptr1 << endl;
//     cout << " a! " << *ptr1 << endl;
//     cout << endl;
//     //So, in simpler terms, *ptr2 gives the address of i, and **ptr2 gives the value of i
//     cout << " This prints the address of i, because ptr2 points to ptr1, and ptr1 contains the address of i. " << *ptr2 << endl;
//     cout << " |'<>'| " << **ptr2 << endl;
//     cout << endl;

//     cout << " a^ " << &i << endl;
//     cout << " a& " << i << endl;
//     cout << " a( " << &ptr1 << endl;
//     cout << " a)" << &ptr2 << endl;
    


//     return 0;
// }


// #include<iostream>
//using namespace std;
/*Bhai lakin uper jo sawal dia us mein tou 8 byte change ho raha jab pointer ko inc kar raaha yah 4 kyun

Apologies for the confusion. The size of the change when incrementing a pointer by a certain value is determined by the size of the data type the pointer is pointing to. In your previous example, you are dealing with an int which is likely 4 bytes in size on your system. Therefore, when you increment the pointer t by 1 (t = t + 1;), it moves forward by sizeof(int), which is 4 bytes.

In the earlier discussion, it was mentioned that if you're observing an 8-byte change, it might be due to the fact that you were dealing with pointers to pointers (int**), and the increment affected the size of a pointer (8 bytes on a 64-bit system).

In the specific code you just provided, with int* t, you should indeed observe a 4-byte change because the pointer is pointing to an int. I appreciate your understanding, and I hope this clarifies the discrepancy.*/
// void update(int **p2) { //agar & laga dia tou p2 8 byte age chala jai ga
//     // p2 = p2 + 1; // Change? ANS: NO CHANGE
//     // cout << "Inside " << p2 << endl; // 8 byte change only inside but p2 consistent he rhy ga main mein
//     // *p2 = *p2 + 1; // Change? ANS: 4 byte aage ho jai ga
//     **p2 = **p2 + 1; // Change? ANS: woh he value 5 se 6 ho jai ge
// }
// int main() {
//     int i = 5;
//     int *p = &i;
//     int **p2 = &p;

//     cout << "Before " << i << endl;
//     cout << "Before " << p << endl;
//     cout << "Before " << p2 << endl;
//     cout << endl;
//     update(p2);
//     cout << "After " << i << endl;
//     cout << "After " << p << endl;
//     cout << "After " << p2 << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
 
// int main() {
 
//     int first = 110;
//     int *p = 0;
//     p = &first;
//     cout << *p << endl;
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
 
// int main() {
    
//     char arr[] = "abcde";
//     char *p = &arr[0];
//     cout << p << endl;  //complete abcde print ho ge in case of char data type 
//     return 0;
// }

// #include<iostream>
// using namespace std;
 
// int main() {
    
//     int arr[] = {1, 2};
//     int *p = arr;  // is trha likhna agar & lagana array ke sath idhr warna sirf arr likh sakte & nhi lge ga error a jai ga.
//     cout << arr[0] << " " << p[0] << endl;
//     cout << p << endl; 
//     cout << &arr << endl; 
//     return 0;
// }

// #include<iostream>
// using namespace std;
 
// int main() {
    
//     char arr[] = "abcde";
//     char *p = &arr[0];  // is trha likhna agar & lagana array ke sath idhr warna sirf arr likh sakte & nhi lge ga error a jai ga.
//     cout << arr[0] << " " << p[0] << endl;
//     cout << p << endl; 
//     cout << arr << endl; 
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void update(int *p) {
//     *p = *p * 2;
   
// }
// int main() {
//     int i = 10;
//     int *p = &i;
//     update(p);
//     cout << i << endl;
//     return 0;
// }
👁🔔👁