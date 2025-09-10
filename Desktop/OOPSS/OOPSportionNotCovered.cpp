//DESTRUCTOR(~ tilda)
// Destrroy krne ke lie hota is ka na tou koi argument hota na return type jab ke constructor mein argument hota tha, class name pe he banta, use ham is lie krte ke jab hm obj banate or constructor mein solve krte tou jab program khatam hota tou woh memory mein tore rehta tou memory free yah clear krne ke lie destructor banate, destructor is used to destroy the object once it goes out of the scope
//SMA KE LIE DESTRUCTOR AUTOMATICALLY CALL HO JATA BUT DMA KE LIE MANUALLY CALL KRNA PARTA FOR SMA HERO A; BS BANAYA TOU CALL HO JAI GA OK BUT DMA KE LIE HERO *B = NEW HERO(); AND NEECHE ***DELETE B;*** LIKHE GE TAB CALL HO GA
// #include<iostream>
// using namespace std;
// int count = 0;
// class ok{
// public:
//     ok() {
//         ::count++;
//         cout << "Constructor called " << ::count << endl;
//     }

//     ~ok() {
//         ::count--;
//         cout << "Destructor called " << ::count << endl;
//     }
// };

// int main() {
//     ok o, p, q, r;
//     return 0;
// }// destructor is used to destroy the object once it goes out of the scope, is ne jab dekha ke out of box chala gya tab ja ke destructor call ho ga ise waja se pehle sare constructor ke statements call ho ge baad mein destructor 
//WORKING of output --->> call hoa 1 2 3 4 or jab use pta laga ke khatam ho gai or woh out of box chala gya yani last curly bracket tou destructor call hoa or us ne PEECHE se shuru kia 4 ko 3 bana dia, 3 ko 2, 2 ko 1 and 1 ko 0.

//Overloading Assignment operator(=) shortened Assignment operator(=)
//Ab hota yeh hai ke for instance = sign hai yeh bs built in data types ke saht he kaam krna yani int wagera int a and int b likha tou  a = b; likha jai ga koi error nhi ai ga but agr aik class banain jo ke uder defined data type hote or agar demo aa, bb; likha tou aa = bb; galat ho jai ga

//STATIC KEYWORD/DATAMEMBER : IS LIE USE KRTE KE JESE TIME DENA TO COMPLETE TOU AIK ENEMY HAI AIK HERO GAME MEIN DONO KA TIME SAME HO GA COMPLETION KA TOU IS IE STATIC LAGATE. WARNA DONO KA ALAG ALAG HO GA TIMETOCOMPLETE
// #include<iostream>
// using namespace std;
// class A{
// public:
//     static int timeToComplete;  //It belongs to class static keyword, matlab jab access krte tou obj banane ke need nhi hote
// };

// int A::timeToComplete = 5;
// int main() {
    
//     cout << A::timeToComplete << endl;//is tareke se krna but obj se bhe kr sakte lakin woh RECOMMENDED NHI HAI... REASON: kyun ke woh object se belong nhi karta
//     A a;
//     cout << a.timeToComplete << endl;

//     A b;
//     b.timeToComplete = 50;
//     cout << b.timeToComplete << endl;  // OK NHI HAI RECOMMENDED


//     return 0;
// }

//STATIC FUNCTION:NO NEED TO CREATE OBJECT, NO THIS(pointer to current object hota this keyword) KEYWORD, OR SIRF STATIC DATA MEMBERS KO HE ACCESS KR SAKTE HAIN STATIC FUNCTION
// #include<iostream>
// using namespace std;
// class A{
// public:
//     static int timeToComplete;  //It belongs to class static keyword, matlab jab access krte tou obj banane ke need nhi hote
//     static int random() {
//         return timeToComplete;  //SIRF STATIC MEMBER KO HE ACCESS KR PAI GA 
//     }
// };

// int A::timeToComplete;
// // cin >> A::timeToComplete;  **MAIN FUNCRION KE ANDAR LENA INPUT
// int main() {
//     cin >> A::timeToComplete;
//     cout << A::random() << endl;
//     cout << A::timeToComplete << endl;//is tareke se krna but obj se bhe kr sakte lakin woh RECOMMENDED NHI HAI... REASON: kyun ke woh object se belong nhi karta
//     A a;
//     cout << a.timeToComplete << endl;

//     A b;
//     b.timeToComplete = 50;
//     cout << b.timeToComplete << endl;  // OK NHI HAI RECOMMENDED


//     return 0;
// }


