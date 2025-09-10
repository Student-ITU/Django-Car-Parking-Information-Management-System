#include<iostream>
using namespace std;

class Date{
private:
    int Day;
    int Month;
    int Year;
public: 
    Date() {
        Day = 1;
        Month = 1;
        Year = 1926;
        cout << "Default Constructors Called" << endl;
    }  

// An overloaded constructor is a constructor within a class that shares the same name as another constructor but has a different parameter list. This allows multiple constructors to be defined within a class, each taking different arguments.

// In C++, when you create multiple constructors with different parameter lists, the compiler determines which constructor to call based on the arguments passed during object creation. This is known as constructor overloading.

    Date(int x, int y, int z) {
        this -> Day = x;
        this -> Month = y;
        this -> Year = z;
        cout << "Overloaded Function Called" << endl;
    }

    ~Date() {
        cout << "Destructor called" << endl;  //The reason you see "Destructor called" twice is because the date1 and independenceDay objects are both being destroyed when the main function exits.
    }

    void Input() {
        int Day;  //Yaha int likhna zaruri nhi is trha mein local variable create kr doon ga agar this na lagaya hota tou abhi tou laga dia is lie woh yeh samjh raha ke  member function he hai
        cout << "Enter Day " << endl;
        cin >> this -> Day;
        int Month;
        cout << "Enter Month " << endl;
        cin >> this -> Month;
        int Year;
        cout << "Enter Year " << endl;
        cin >> this -> Year;
       
    }
    
    void print() {
        cout << Day << " / " << Month << " / " << Year << endl;
       
    }

    int getDay() {
        return this -> Day;
    }

    int getMonth() {
        return this -> Month;
    }

    int getYear() {
        return this -> Year;
    }

    void setDay(int a) {  //Agr yaha int Day; wagera likh deta tab us ko pata na lagta ke yeh local hai yah member tou is waja se abhi this keyword laagain yah na koi farka nhi parta, ese he uper sawal mein hoa tha int laga dia tha mein ne 
        this -> Day = a;
    }

    void setMonth(int b) {
        this -> Month = b;
    }

    void setYear(int c) {
        this -> Year = c;
    }

    int Compare(Date d) {
        if (this -> Year > d.Year) {
            return 1;
        }

        else if (Year < d.Year) {
            return -1;
        }

        else {

            if (Month > d.Month) {
                return 1;
            }

            else if (Month < d.Month) {
                return -1;
            }

            else {

                if (Day > d.Day) {
                    return 1;
                }

                else if (Day < d.Day) {
                    return -1;
                }

                else {

                    return 0;
                }
            }
        }
    }

   Date IncrementMonth() {
        // Date newDate(1, 12, 2016); 
        Date newDate(*this); //Uper wala bhe same kaam kre ga
// Exactly, if the Date object date2 has the values 1, 12, 2016 for day, month, and year respectively, then those values will be stored in *this when the IncrementMonth function is called on date2.
        newDate.Month++;
        // if (newDate.Month > 12) { YE KAM KE CHEEZ NHI BS YEH HAI KE AGAR MONTH DEC SE ZYADA HO GYA TOU DUBARA JAN KAR DENA OR YEAR ZYDA KAR DENA IS KA QUESTION MEIN KAHA NHI THA
        //     newDate.Month = 1;//1 KR RAHA WPIS
        //     newDate.Year++;
        // }
        return newDate;
    }

};

int main() {
    
    Date date1;
    date1.print();
    Date independenceDay(14, 8, 1947);
    independenceDay.print();
    date1.Input();
    date1.print();
    Date xmasDay;
    xmasDay.print();
    cout << "Exercise 7" << endl;
    xmasDay.setDay(25);
    xmasDay.setMonth(12);
    xmasDay.setYear(2018);
    cout << "The Day is " << xmasDay.getDay() << endl;
    cout << "The Month is " << xmasDay.getMonth() << endl;
    cout << "The Year is " << xmasDay.getYear() << endl;
    xmasDay.print();
    Date temp; //Q -> 9
    temp = xmasDay;
    temp.print(); // xmasDay ke cheze ka jai ge us me
    Date d1(11, 10, 2024);
    Date d2(11, 10, 2024);
//Month > d.Month agar yh cheez hai tou matlab Month wale me d1 ke value store or d.Monh mein d2 ke month ke value store....?
// Ans:- Ji haan, aap sahi samjhe. Jab aap Month > d.Month likhte hain, yeh MATLAB hai ki aap Month variable mein d1 ke month ki value rakhte hain aur d.Month variable mein d2 ke month ki value rakhte hain. Is tarah se Compare function ke andar d variable ke zariye aap d2 ke values ko access kar rahe hain.

    int result = d1.Compare(d2);

    if (result == 1)
        cout << "***Date 1 is greater than Date 2***" << endl;
    else if (result == -1)
        cout << "***Date 1 is smaller than Date 2***" << endl;
    else {
        cout << "***Date 1 is equal to Date 2***" << endl;
    }
    //YEH BS WESE HE LIKHA
    // Date IncrementMonth(2, 01, 2016);
    // IncrementMonth.print(); //DEHAN RAKHNA YAHA IncrementMonth.print() likhna agar sahi output chaate, galte se date1. kr dia jis ke waja se uper wale ka answer he ai ja raha tha

    Date date2(1, 12, 2016);
    cout << "Original Date: ";
    date2.print();

    Date nextMonth = date2.IncrementMonth();
    cout << "Next Month: ";
    nextMonth.print();

    cout << "Original Date (unchanged): ";
    date2.print();

    return 0;
}


