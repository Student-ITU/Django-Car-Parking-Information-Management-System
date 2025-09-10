//SHALLOW COPY, ASSIGNMENT OPERATOR, COPY CONSTRUCTOR
#include <iostream>
 
using namespace std;

class dummy {
    private:
    int a, b;

    public:
    void setdata (int x, int y) {
        a = x;
        b = y;
    }
    void showdata () {
        cout << a << endl;
        cout << b << endl;
    }

    //((
        dummy (dummy& d) {
            a = d.a;
            b = d.b;
        }//Shallow copy ho rhy yeh copy constructor banaya, Yeh ho gai shallow copy, creating copy of obj by copying data of all member variables as it is.
    //))
};

int main () {
 
    dummy dummy1;
    dummy1.setdata(3,4);
    //((
        dummy dummy2 = dummy1; // agar aik obj banaya use class ka aik or obj bana ke ese initialize kia tou yaha ban gaya copy constructor
        // dummy dummy2(dummy1) same cheez yeh bhe copy constructor
    //))

    //((
    dummy dummy2;
    dummy2 = dummy1; // is case me constructor nhi chalta is case me assignment operator call hota, or dono copy constructor and assignment operator by default compiler banata
    //))
    dummy2.showdata ();
 
    return 0;
}
// when we create a copy of obj to yah to copy constructor call hota yah default assignment operator




// DEEP COPY

#include <iostream>
 
using namespace std;

class dummy {
    private:
    int a, b;
    // Aik pointer banain ge sab se pehle 
    int* p;

public:

    dummy () {
        p = new int; // 2nd step ham ne p ko aik new block ko point krwaya pehle p ka aik box tha a and b ke sath but ab woh box new box ko point kr rha or us ke baad *p = z; jo kia tou *p point kr rha tha new box ko tou *p = 5; new box me 5 chala gaya, ab masla yeh ata jab copy constructor call hota to sab ka data copy ho jata or dummy2 obj ka jo p hai woh bhe new wale location ko point kre ga cz us me addrss copy hoa ho ga p ka or p ka address point kr rha tha new ko jis me 5 hai tou dummy2 ke p me bhe 5 a gaya ab masla ye ke agar change krte ham dummy2 ke p me tou 5 ko woh change kr de ga or woh change d1 ke *p me bhe ho jaye ga cz point to aik ko he r rhy is time tak shallow copy ho rhy deep copy dummy constructor me 2 lines likhne us se ho ge, us se ho ga yeh ke dummy2 ka p = new int kr dein ge ta ke woh apna alag box bana le or us me *(d.p) kr de de ke dummy1 ka p new wale box ka 5 use de de jise dummy2 ka p point kr rha, shallow copy tab nhi hone chaye agar obj me pointer ho, or jab release krne ke bare ate tou agar ham ne wo 2 steps na kie hote or dono p aik he new ko point kr rhy hote to aik obj delete hone pe woh new wala memory resource be del ho jata lakin dusra obj to us ko point kr rha hota tou yeh khelata dangling pointer yeh masla bhe tha 
    }

    void setdata (int x, int y, int z) {
        a = x;
        b = y;
        *p = z;
    }

    //Yeh na bhe likha hota tab bhe compiler create kr deta, lakin deep copy ke lie yeh kaam krna parta tab krna parta agar shallow copy hote to na banate
    dummy (dummy& d) {
        a = d.a;
        b = d.b;
        // p = d.p; yeh nhi likhe ge
        p = new int;
        *p = *(d.p); // sp pbj jis resource ko point kr rha us ka data bhe copy hoa is lie ese deep copy kehte cz deep me copy hoa 
    }

    void showdata () {
        cout << a << endl;
        cout << b << endl;
    }

    ~dummy () {
        delete p;
    }
};

int main () {
 
    dummy dummy1;
    dummy1.setdata(3,4,5);
    dummy dummy2 = dummy1; // agar aik obj banaya use class ka aik or obj bana ke ese initialize kia tou yaha ban gaya copy constructor
    dummy2.showdata ();
 
    return 0;
}

