#include <iostream>
using namespace std;

int main()
{

// int num = 5;
// cout << num << endl;
// cout << "Address " << &num << endl;
// // To store address Pointer is used
// int *ptr = &num;  //ptr is a pointer to int -> for reading
// cout << num << endl;
// cout << &num << endl;
// cout << ptr << endl;
// cout << &ptr << endl;
// cout << *ptr << endl;  //* is a dereference operator
// cout << sizeof(num) << endl;
// cout << sizeof(ptr) << endl;

//     int *p; // agar ese likha tou yeh galat practice hai yeh kisi garbage value ko represnt kr raha
//     cout << *p << endl;

//     // is thra kar sakte

// int *p = 0;  //null ko kabhi bhe point kre ga tou seg fault ai ga
// cout << *p << endl;

//     // ANOTHER WAY OF WRITING

// int i = 5;
// int *p = 0;
// p = &i;
// cout << p << endl;
// cout << &i << endl;
// cout << *p << endl;

// int num = 5;
// int a = num;
// cout << num << endl;
// a++;
// cout << num << endl;

// int num = 5;
// int *p = &num;
// cout << &p << endl;
// cout << p << endl;
// cout << &num << endl;
// cout << num << endl;
// (*p)++; // means copy ni bante num se bhe 5 indicate ho raha and p se bhe tou thats why copy nhi bande and p mein change tou num mein change and vice versa
// cout << num << endl;

// // // // // Copy Pointer

//     int *q = p;
//     cout << p << " " << q << endl;
//     cout << *p << " " << *q << endl;
//     cout << &p << " " << &q << endl;

    // int i = 3;
    // int *t = &i;
    // cout << (*t)++ << endl;
    // cout << ++(*t) << endl;
    // cout << *t << endl;
    // *t = *t + 1;
    // cout << *t << endl;
    // cout << t << endl;
    // cout << &i << endl;
    // t = t + 1; // 4 byte bhara rha cz int 4 bytee bhrata
    // cout << t << endl;
// /*Bhai lakin uper jo sawal dia us mein tou 8 byte change ho raha jab pointer ko inc kar raaha yah 4 kyun

/*Apologies for the confusion. The size of the change when incrementing a pointer by a certain value is determined by the size of the data type the pointer is pointing to. In your previous example, you are dealing with an int which is likely 4 bytes in size on your system. Therefore, when you increment the pointer t by 1 (t = t + 1;), it moves forward by sizeof(int), which is 4 bytes.

In the earlier discussion, it was mentioned that if you're observing an 8-byte change, it might be due to the fact that you were dealing with pointers to pointers (int**), and the increment affected the size of a pointer (8 bytes on a 64-bit system).


In the specific code you just provided, with int* t, you should indeed observe a 4-byte change because the pointer is pointing to an int. I appreciate your understanding, and I hope this clarifies the discrepancy.*/
// double i = 5;
// double *p = &i;
// cout << p << endl;
// p = p + 1;
// cout << sizeof(p) << endl;
// cout << p << endl;

return 0;
}

// #include<iostream>
// using namespace std;

// class Polynomial {
// private:
//     int totalTerms;
//     int* coeff;
//     int* exp;
// public:
//     Polynomial() {
//         totalTerms = 0;
//         coeff = nullptr;
//         exp = nullptr;
//     }

//     Polynomial(int size, int* coeff, int* exp)  {
//         totalTerms = size;
//         this->coeff = new int[size];
//         this->exp = new int[size];
//         for (int i = 0; i < size; ++i) {
//             this->coeff[i] = coeff[i];
//             this->exp[i] = exp[i];
//         }
//     }

//     ~Polynomial() {
//         delete[] coeff;
//         delete[] exp;
//     }

//     friend ostream& operator<<(ostream& os, const Polynomial& poly) {
//         for (int i = 0; i < poly.totalTerms; i++) {
//             os << poly.coeff[i] << "x^" << poly.exp[i];
//             if (i < poly.totalTerms - 1) {
//                 os << "+";
//             }
//         }
//         return os;
//     }

//     Polynomial operator+(const Polynomial& other) const {
//         Polynomial result;
//         int maxSize = totalTerms + other.totalTerms;
//         result.totalTerms = 0;
//         result.coeff = new int[maxSize];
//         result.exp = new int[maxSize];

//         int i = 0, j = 0, k = 0;
//         while (i < totalTerms && j < other.totalTerms) {
//             if (exp[i] > other.exp[j]) {
//                 result.coeff[k] = coeff[i];
//                 result.exp[k] = exp[i];
//                 ++i;
//             } else if (exp[i] < other.exp[j]) {
//                 result.coeff[k] = other.coeff[j];
//                 result.exp[k] = other.exp[j];
//                 ++j;
//             } else {
//                 result.coeff[k] = coeff[i] + other.coeff[j];
//                 result.exp[k] = exp[i];
//                 ++i;
//                 ++j;
//             }
//             ++k;
//             ++result.totalTerms;
//         }

//         while (i < totalTerms) {
//             result.coeff[k] = coeff[i];
//             result.exp[k] = exp[i];
//             ++i;
//             ++k;
//             ++result.totalTerms;
//         }
//         while (j < other.totalTerms) {
//             result.coeff[k] = other.coeff[j];
//             result.exp[k] = other.exp[j];
//             ++j;
//             ++k;
//             ++result.totalTerms;
//         }

//         return result;
//     }

//     Polynomial operator+(int value) const {
//         Polynomial result(*this);
//         result.coeff[totalTerms - 1] += value;
//         return result;
//     }

//     Polynomial& operator++() {
//         for (int i = 0; i < totalTerms; ++i) {
//             ++coeff[i];
//         }
//         return *this;
//     }

//     Polynomial operator++(int) {
//         Polynomial temp(*this);
//         operator++();
//         return temp;
//     }

//     bool operator!() const {
//         for (int i = 0; i < totalTerms; ++i) {
//             if (coeff[i] != 0) {
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool operator!=(const Polynomial& other) const {
//         if (totalTerms != other.totalTerms) {
//             return true;
//         }
//         for (int i = 0; i < totalTerms; ++i) {
//             if (coeff[i] != other.coeff[i] || exp[i] != other.exp[i]) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };

// int main() {
//     int coeff_P1[] = {1, 2, 5};
//     int exp_P1[] = {4, 2, 0};

//     int coeff_P2[] = {4, 3};
//     int exp_P2[] = {6, 2};

//     Polynomial P1(3, coeff_P1, exp_P1);
//     Polynomial P2(2, coeff_P2, exp_P2);
//     cout << "P1 = " << P1 << endl;
//     cout << "P2 = " << P2 << endl;

//     if (!P1)
//         cout << "P1 is zero" << endl;

//     if (P1 != P2)
//         cout << "P1 is Not Equal to P2" << endl;

//     Polynomial P3 = P1 + P2;
//     cout << "P3 = " << P3 << endl;

//     P3 = P1 + 2;
//     cout << "P3 = " << P3 << endl;

//     cout << ++P1 << endl;
//     cout << P1 << endl;

//     cout << P1++ << endl;
//     cout << P1 << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Date
// {
// private:
//     int Day;
//     int Month;
//     int Year;

// public:
//     Date()
//     {
//         cout << "Default Constructor called!" << endl;
//         Day = 1;
//         Month = 1;
//         Year = 1926;
//     }
//     void getdata(int day, int month, int year)
//     {
//         cout << "Overloaded function called!" << endl;
//         Day = day;
//         Month = month;
//         Year = year;
//     }
//     void printdata()
//     {
//         cout << Day << "/" << Month << "/" << Year << endl;
//     }
//     ~Date()
//     {
//         cout << "Destructor called!" << endl;
//     }
//     void Input()
//     {
//         cout << "Enter your details for your birthday:" << endl;
//         cout << "Day:";
//         cin >> Day;
//         cout << "Month:";
//         cin >> Month;
//         cout << "Year:";
//         cin >> Year;
//     }
//     void Output()
//     {
//         cout << Day << "/" << Month << "/" << Year << endl;
//     }
//     void setDay(int day)
//     {
//         Day = day;
//     }
//     void setMonth(int month)
//     {
//         Month = month;
//     }
//     void setYear(int year)
//     {
//         Year = year;
//     }
//     int getDay()
//     {
//         return Day;
//     }
//     int getMonth()
//     {
//         return Month;
//     }
//     int getYear()
//     {
//         return Year;
//     }
//     int CompareData(int day1, int day2, int month1, int month2, int year1, int year2)
//     {
//         if (year1 == year2)
//         {
//             if (month1 > month2)
//             {
//                 return -1;
//             }
//             if (month1 == month2)
//             {
//                 if (day1 > day2)
//                 {
//                     return -1;
//                 }
//                 if (day1 == day2)
//                 {
//                     cout << "The dates are same!" << endl;
//                 }
//                 else
//                 {
//                     return 0;
//                 }
//             }
//             else
//             {
//                 return 0;
//             }
//         }
//         if (year1 > year2)
//         {
//             return -1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     void DateIncrement(int day, int month, int year)
//     {
//         if (month == 12)
//         {
//             month = 1;
//         }
//         else
//         {
//             month++;
//         }
//         cout << day << "/" << month << "/" << year << endl;
//     }
// };

// int main()
// {
//     int day, month, year, compare;
//     Date Date1;
//     Date independenceDay;
//     Date Birth;
//     Date Xmasday;
//     Date temp;
//     Date Compare;
//     Date IncrementMonth;
//     Date1.printdata();
//     cout << "Independence Day:";
//     independenceDay.getdata(14, 8, 1947);
//     independenceDay.printdata();
//     cout << endl;
//     Birth.Input();
//     cout << "BirthDay:";
//     Birth.Output();
//     cout << endl;
//     Xmasday.setDay(25);
//     Xmasday.setMonth(12);
//     Xmasday.setYear(2018);
//     cout << "XmasDay:";
//     day = Xmasday.getDay();
//     cout << day << "/";
//     month = Xmasday.getMonth();
//     cout << month << "/";
//     year = Xmasday.getYear();
//     cout << year << endl;
//     temp.setDay(Xmasday.getDay());
//     temp.setMonth(Xmasday.getMonth());
//     temp.setYear(Xmasday.getYear());
//     cout << "Temp (Xmasday): ";
//     temp.Output();
//     compare = Compare.CompareData(16, 25, 5, 12, 2005, 2018);
//     if (compare == 0)
//     {
//         cout << "Date 1 is smaller!" << endl;
//     }
//     else
//     {
//         cout << "Date 1 is larger!" << endl;
//     }
//     IncrementMonth.DateIncrement(2, 1, 2016);
//     return 0;
// }