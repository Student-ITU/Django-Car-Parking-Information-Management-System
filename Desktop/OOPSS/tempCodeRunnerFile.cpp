
#include <iostream>
 
using namespace std;

class Number {
private:
    int x;
    int y;

public:
    Number ( int x1, int y1 ) {
        x = x1;
        y = y1;
    }

    Number ( int x2 ) {
        x = x2;
    }

    Number operator + ( Number& obj ) {
        Number n3 ( 0, 0 );
        n3.x = x + obj.x;
        n3.y = y + obj.y;
        return n3;
        /*In C++, this is a special pointer available within non-static member functions of a class. It points to the object that is calling the function, giving access to that object's members and methods.

        // What Happens When You Return *this
        // When you return *this from a member function, you’re returning the object itself (by value), not just a pointer. Here's what it does:

        // Returning the Current Object: By using *this, you are returning a copy of the current object. This can be useful in methods where you want to chain function calls, like in operator overloading or setter functions.*/
    }

    Number operator - ( Number& obj ) {
        Number n3 ( 0, 0 );
        n3.x = x - obj.x;
        n3.y = y - obj.y;
        return n3;
        /*In C++, this is a special pointer available within non-static member functions of a class. It points to the object that is calling the function, giving access to that object's members and methods.

        // What Happens When You Return *this
        // When you return *this from a member function, you’re returning the object itself (by value), not just a pointer. Here's what it does:

        // Returning the Current Object: By using *this, you are returning a copy of the current object. This can be useful in methods where you want to chain function calls, like in operator overloading or setter functions.*/
    }

    Number operator * ( Number& obj ) {
        Number n3 ( 0, 0 );
        n3.x = x * obj.x;
        n3.y = y * obj.y;
        return n3;
        /*In C++, this is a special pointer available within non-static member functions of a class. It points to the object that is calling the function, giving access to that object's members and methods.

        // What Happens When You Return *this
        // When you return *this from a member function, you’re returning the object itself (by value), not just a pointer. Here's what it does:

        // Returning the Current Object: By using *this, you are returning a copy of the current object. This can be useful in methods where you want to chain function calls, like in operator overloading or setter functions.*/
    }

    Number operator / ( const Number& other ) const {
        // return (x * 1.0 / other.x) + (y * 1.0 / other.y);

        Number n3 ( 0, 0 );
        n3.x = (x * 1.0 / other.x);
        n3.y = (y * 1.0 / other.y);
        return n3;
        /*In C++, this is a special pointer available within non-static member functions of a class. It points to the object that is calling the function, giving access to that object's members and methods.

        // What Happens When You Return *this
        // When you return *this from a member function, you’re returning the object itself (by value), not just a pointer. Here's what it does:

        // Returning the Current Object: By using *this, you are returning a copy of the current object. This can be useful in methods where you want to chain function calls, like in operator overloading or setter functions.*/
    }

    void print () {
        cout << "X is : " << x << endl;
        cout << "Y is : " << y << endl;
    }

    void increment_decrement () {
        cout << "X is : " << x << endl;
    }

    Number getValue () {
        return *this;
    }

    friend Number operator % ( Number& obj, Number& obj1 );

    Number operator ++ ( int ) {
        cout << "Before : " << x << endl;
        // ++x;
        // Number temp = *this;
        // return temp;
        x++;
        return *this;
        /*In C++, the operator--(int) function is used for post-decrement. The int parameter in this operator is a special convention to distinguish between pre-decrement (operator--()) and post-decrement (operator--(int)).

        Why int is used:
        The int parameter does not serve a practical purpose in the function. It simply exists to differentiate between the pre-decrement (operator--()) and post-decrement (operator--(int)) operators.
        This is a dummy parameter that is used to signal that the function is intended for post-decrement, which is a standard convention in C++.
        Key Points:
        Post-decrement: When you use operator--(int), the value of the object is first returned (before decrementing), and then the decrement occurs.

        Pre-decrement: When you use operator--(), the decrement occurs first, and then the updated value is returned.*/
    }

    Number operator -- ( int ) {
        cout << "Before : " << x << endl;
        --x;
        return *this;
    }

};

Number operator % ( Number& obj, Number& obj1 ) {
    Number n7 ( 0, 0 );
    n7.x = obj.x % obj1.x;
    n7.y = obj.y % obj1.y;
    return n7;
}


class Complex : public Number {
private:
    int real;
    int img;

public:
    Complex ( int r ) {
        real = r;
    }

    Complex ( int r, int i ) {
        real = r;
        img = i;
    }
};


int main () {
 
    Number n1 ( 2, 3 );
    Number n2 ( 4, 5 );
    Number n3 = n1 + n2;
    n3.print ();
    Number n4 = n1 - n2;
    n4.print ();
    Number n5 = n1 * n2;
    n5.print ();
    Number n6 = n1 / n2;
    n6.print ();
    Number result = n1.getValue ();
    result.print ();
    Number n7 = n1 % n2;
    n7.print ();
    Number nn ( 3 );
    Number n8 = nn--;
    n8.increment_decrement ();
    Number nnn ( 9 );
    Number n9 = nnn++;
    n9.increment_decrement ();

    // Jo tareka geetsfor geeks ke lie hai woh just 1 (2,3) bs itne ke lie work kare ga agar 2 a gai like (2,3) and (4,5) to nhi kre ga

    Complex c ( 2 );
    Complex c1 ( 12, 4 );
    c1.print ();
 
    return 0;
}