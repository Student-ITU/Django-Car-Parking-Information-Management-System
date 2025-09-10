// #include<iostream>
// using namespace std;
// int main(){
//     // int num = 6;
//     // cout << num << endl;
//     // //ADDRESS OF OPERATOR -> &
//     // cout << "The Address is " << &num << endl;
//     // //Pointer stores Address
//     // int *ptr = &num;
//     // cout << "Address is " << ptr << endl;
//     // cout << "Value is " << *ptr << endl; //* is Dereference  operator

//     // // // 

//     // double d = 5.3;
//     // double *p = &d;  // num ka daba us mein 6 us dabe ke uper num ka address or peeche pointer ka diba us mein address num ka or us dabe ke uper ptr ka address jab *p karein ge tou p ke dabe se aik age dabe mein jai ga or us dabe mein value ho ge num ke jo ke 6 hai.
//     // cout << "Value is " << *p << endl;
//     // cout << "Address is " << p << endl;
//     // cout << "Address is " << &d << endl;
//     // cout << "Size of integer is : " << sizeof(num) << endl;
//     // cout << "Size of double is : " << sizeof(d) << endl;
//     // cout << "Size of 1st pointer is : " << sizeof(ptr) << endl;
//     // cout << "Size of 2nd pointer is : " << sizeof(p) << endl;
//     // // POINTER KA ADDRESS HAMESHA 8 AI GA CHAYE KOI BHE DATA TYPE HO KYUNKE HONE TOU US MEIN BS GARBAGE VALUE HE HAI NA IMP FOR MCQS...

//     // //int *p;        BAD PRACTICE ESE KABHI NHI KRNA

//     // //ONE MORE METHOD TO WRITE INITIALIZE POINTERS WHICH CAN COME IN INTERVIEWS
//     // cout << endl;
//     // int i = 5;
//     // int *pointer = 0;
//     // pointer = &i;
//     // cout << "The Value is " << *pointer << endl;
//     // cout << "The Address is " << pointer << endl;


//     // //ANOTHER THING TO REMEMBER is case mein dono bare 5 raha

//     // int num1 = 5;
//     // int a = num1;
//     // cout << "a before is " << num1 << endl;
//     // a++;
//     // cout << "a after is " << num1 << endl;
//     // // NOW IN CASE OF POINTERS aik bare 5 jo ke pehle tha or chunke woh he value age gai tou woh 6 ho gya us ke koi copy nhi bane

//     // int *po = &num1;
//     // cout << "before " << num1 << endl;
//     // (*po)++;
//     // cout << "after " << num1 << endl;
//     // cout << po << endl;

//     // //AIK POINTER KO DUSRE MEIN COPY KRNAA

//     // int *q = po; //Same address same value
//     // cout << po << " - " << q << endl;
//     // cout << *po << " - " << *q << endl;

//     // //

//     // int z = 3;
//     // int *t = &z;
//     // cout << (*t)++ << endl;

//     // //

//     // int x = 3;
//     // int *y = &x;
//     // *y = *y + 1;
//     // cout << "hi" << *y << endl;

//     //AGR POINTER KO INCREMENT KR DEIN TOU WOH AGLI LOCATION PE CHALA JAI GA FOR INSTANCE AGAR INT HAI TOU AGLE INT LOCATION PAR CHALA JAI GA OR ESE HE AGAR CHAR HAI TOU WOH AGLE CHAR LOCATION PAR CHALA JAI GA JESE INT 4 BYTE KA HAI TOU 4 BYTE AGLE LOCATION PAR CHALA JAI GA MINUS KRTE TOU 4 BYTE PEECHE CHALA JAI GA...
// //     cout << "Before y " << y << endl;
// //     cout << "Before y " << &x << endl;
// //     y = y + 1;
// //     cout << "After y " << y << endl;
 
// //     return 0;
    
// // }
// //********************************************************************************************************************************************
// //POINTERS WITH ARRAYS AND FUNCTIONS
// // ARRAYS SE RELATED HAI KE AGAR ARRAY KE KISI MEMORY BLOCK KA ADDRESS NIKALNA HO TOU
// int arr[10];
// cout << "Address of 1st memory block is " << arr << endl;   //1 and 2 statements ka ans same hai
// cout << "Address of 1st memory block is " << &arr[0] << endl;
// cout << "Address of 2nd memory block is " << &arr[1] << endl;
// cout << "Address of 3rd memory block is " << &arr[2] << endl;
// cout << "Address of is " << *arr << endl;//Value le raha arr ke 
// int arr1[10] = {2, 3, 5};
// cout << "Address of is " << *arr1 << endl;//Value le raha arr ke 
// cout << "Value is " << *arr1 + 1 << endl;
// // cout << "Value is " << *arr1[2] << endl;     THIS CANT BE DONE THIS IS WRONG HAMEIN AGAR IS TRA LIKHNA TOU JIS TRHA IS SE UPER WALE LINE HAI US TRHA LIKHNA 
// cout << "Value at isv " << *(arr1 + 1) << endl;  //SAME SAME 88 90 91 line
// cout << "Value at is " << *(arr1) + 1 << endl;
// //aik chez hai jo mcqs mein ai ge tou kahi gaalt bhe ho sakte
// // arr[i] = *(arr + i)      or      i[arr] = *(i + arr); yeh mcqs a sakta or neeche wala bhe baat bs yh ke error nhi ai ga...
// int arr2[3] = {2, 3, 4};
// cout << arr2[2] << endl;
// cout << *(arr2 + 2) << endl;

// int i = 2;
// cout << *(i + arr2) << endl;
// cout << i[arr2] << endl;//JAHA SQ BRACKET NHI HO GE WAHA PE LAGANA * IN COUT CASE

// // NOW NEW THING  POINTER MEIN STORE KAR RHY AB 
// cout << endl;
// int arr4[10] = {1, 2, 3};
// cout << sizeof(arr4) << endl;  // arr ka size and pointer ka size difference dekh lia 40 nd 8 ka
// int *ptr = &arr4[0];
// cout << sizeof(ptr) << endl;
// cout << sizeof(*ptr) << endl;// yeh 4 is lie hoa ke yeh *ptr hai tou mtlab jo first value hai us ka size tou is lie 4 aya kyun ke arr mein jo first hai element us ka size bhe tou 4 he hai na
// cout << sizeof(&ptr) << endl;
// cout << endl;
// int arr5[20] = {1, 2, 3, 4, 5};
// cout << &arr5[0] << endl;  //address dete yeh cheez
// cout << &arr5 << endl;
// cout << arr5 << endl;
// cout << endl;
// int *p = &arr5[0];
// cout << p << endl;
// cout << *p << endl;
// cout << &p << endl;

// //NEECHE PRHO SAMJH LG JAI GE

// /* int arr5[20] = {1, 2, 3, 4, 5};
// cout << &arr5[0] << endl;  
// cout << &arr5 << endl;
// cout << arr5 << endl;
// cout << endl;
// int *p = &arr5[0];
// cout << p << endl;
// cout << *p << endl;
// cout << &p << endl;

// OUTPUT
// 0x16f6bb170
// 0x16f6bb170
// 0x16f6bb170

// 0x16f6bb170
// 1
// 0x16d6f3158.     ******mujhe yeh batao ke sab se last wale ka address differennt kyun a rha******

// ChatGPT
// The output you're seeing is related to the memory addresses of the array and the pointer. Let's break down each part:

// &arr5[0]: This is the address of the first element of the array.
// &arr5: This is the address of the entire array.
// arr5: This is treated as the address of the first element of the array.
// Now, when you print these addresses:

// &arr5[0] and &arr5 are the same because the address of the first element and the address of the whole array are the same.

// arr5 is treated as the address of the first element, so it is also the same.

// The difference in the addresses is due to how C++ handles the array and pointer representations.

// Then, when you have a pointer p pointing to the first element:

// p: This is the address stored in the pointer, which is the same as the address of the first element.
// *p: This is the value at the memory location pointed to by p, which is the value of the first element.
// &p: This is the address of the pointer itself.
// Now, addressing your question about the last output (0x16d6f3158), this appears to be the address of the p pointer, not the address of the first element of the array. This is why it is different from the addresses obtained using &arr5[0], &arr5, and arr5. The address of the pointer (&p) and the value stored in the pointer (p) are different.

// In summary, the addresses obtained from &arr5[0], &arr5, and arr5 are the same because they all represent the address of the first element of the array. The address obtained from &p is the address of the pointer itself, and it is different from the array's addresses. The value obtained from p is the address of the first element, which is the same as the array's addresses. */

// // int arr6[10] = {1, 2, 3, 4, 5};
// // // arr6 = arr6 + 1;// CANT BE DONE
// // int *ptr = &arr6[0];
// // cout << ptr << endl;
// // ptr = ptr + 1;  //ADDRESS 4 POINTS AAGE HO GYA
// // cout << ptr << endl;
// // *ptr = *ptr + 1;
// // cout << *ptr << endl;
// // //CHARACTER ARRAYS WITH POINTERS
//     // int arr6[5] = {1, 2, 3, 4, 5};
//     // char ch[6] = "abcde";
//     // // char *c = "abcde"; is trha se nhi krna jis trha uper likha us trha krna 
//     // cout << arr6 << endl;
//     // cout << ch << endl;  //dekho char array ke lie is ka address print nhi hoa jab ke jo is ke andar ha woh print hoa
//     // char *c = &ch[0];
//     // //prints entire array
//     // cout <<" v " << c << endl;
//     // cout << endl;
//     // char temp = 'z';
//     // char *p = &temp;
//     // cout << p << endl;

//     // return 0;
  
// // }

// // POINTERS WITH FUNCTIONS
// // #include<iostream>
// // using namespace std;
// // void print(int *p){
// //     cout << *p << endl;
// // }

// // int main(){

// //     int value = 5;
// //     int *p = &value;
// //     print(p); //PASSING
   
   
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // void update(int *p){
// //     p = p + 1;
// //     cout << "Inside " << p << endl;  
// // }

// // int main(){

// //     int value = 5;
// //     int *p = &value;
// //     cout << "Before " << p << endl;  //BEFORE AND AFTER IS LIE UN KA ADDRESS SAME A RHA BCZ PASS BY VALUE HO RHA YEH SIRF JAB ANDAR PRINT KREIN GE TAB HE ADDRESS CHANGE HO GA  .... HAN BUT VALUE UPDATE KR SAKTE JIS KA CODE NEECHE HAI
// //     update(p);
// //     cout << "After " << p << endl;
// //     return 0;
// // }

// //


// // #include<iostream>
// // using namespace std;

// // void update(int *p){
// //     *p = *p + 1;
// //     // cout << "Inside " << *p << endl;  
// // }
// // int main(){

//     // int value = 5;
//     // int *p = &value;
//     // cout << "Before " << *p << endl;
//     // update(p);  //YAHA HAM DEKH SAKTE KE VALUE CHANGE HO RHA PECHLE CODE KE TRHA INSIDE KE ANDAR NHI LIKHA 
// //     cout << "After " << *p << endl;
// //     return 0;
// // }

// //FUNCTION POINTERS ARRAYS MIX
// // #include<iostream>
// // using namespace std;
// // int getSum(int arr7[], int n){   //*arr bhe likh sakte arr[] ke jaga OR SAB SE BHARE BAAT FUNCTION MEIN ARR AS A POINTER JATA REMEMBER 
// //     cout << endl << "Size " << sizeof(arr7) << endl; //SIZE OF ARR 4*5 = 20 ATA LAKIN 8 A RAHA KYUN KE YAHA PE ARRAY PASS NHI HO RAHA POINTER PASS HO RHA ISE LIA INT ARR[] YAH *ARR LIKHNE MEIN KOI FARAK NHI ******IMPORTANT BAAT******AB AGAR KOI POOCHE KE IS KA FAIDA KYA HA KE AS A POINTER JATA FUNCTION MEIN ARRAY TOU IS KA FAIAA YEH HAI KE HAM PART OF ARR SELECT KR SAKTE 6 INDEX HAI ARR MEIN OR MEIN CHATA KE APNE FUNCTION MEI SIRFF 3 HE BHEJUN INDEX LAST WALE getSome(arr7+3, 3); kar sakte neeche is ke example hai
// //     int sum = 0;
// //     for (int i = 0; i < n; i++){
// //         sum = sum + i[arr7];
// //     }
// //     return sum;
// // }
// // int main(){

// //     int arr7[5] = {1, 2, 3, 4, 5};
// //     cout << "Sum is " << getSum(arr7,5);
// //     return 0;
// // }

// //EXAMPLE SE SAMJHANA  KE POINTERS KYUN JATE FUNCTIONS MEIN AS ARRAY

// // #include<iostream>
// // using namespace std;

// // int getSum(int *arr7, int n){ //AIK MASLA A RAHA KE JAB MEIN INT ARR[] LIKHTA TOU WOH MUJHE WARNING DETA
// //     cout << endl << "Size " << sizeof(arr7) << endl; 
// //     int sum = 0;
// //     for (int i = 0; i < n; i++){
// //         sum = sum + i[arr7];
// //     }
// //     return sum;
// // }
// // int main(){

// //     int arr7[6] = {1, 2, 3, 4, 5, 8};
// //     cout << "Sum is " << getSum(arr7 + 3, 3);
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// //    //*************************************************************
//    //DOUBLE POINTER   
// //    HAM INT *PTR LIKHTE KYUN NHI ESE LIKHTE POINTER PTR = &VALUE; IS LIE KE HAMEIN PATA NHI CHALE GA KE KIS TYPE KA DATA HAI INT HAI DOUBLE HAI KYA HAI AND KITNE BYTE KO CONSIDER KRNA KE INT TYPE KA HAI TOU PATA CHAL JAI GA KE 4 BYTE KO CONSIDER KRNA YEH DO REASONS HAIN
// // int i = 5;
// // int *ptr = &i; 
// // int **ptr2 = &ptr; //AGAR ESE POINTER KE CORRESPONDING AIK OR POINTER CREATE KRNA TOU DOUBLE POINTER KA USE KRTE...
// //OR AGAR US KE CORRESPONDING BANANA TOU int ***ptr3 = &ptr2; OR AGAR IS KE CORRESPONDING BANANA TOU int ****ptr4 = &ptr3; KR DEIN GE AND SO ON...
// // cout << ptr << endl;
// // cout << *ptr << endl;
// // cout << &ptr << endl;
// // cout << i << endl;
// // cout << &i << endl;
// // cout << "S " << ptr2 << endl;
// // cout << "C " << *ptr2 << endl;
// // cout << **ptr2 << endl;
// // cout << &ptr2 << endl;
// // return 0;
// // }


// // DOUBLE POINTERS WITH FUNCTIONS
// // #include<iostream>
// // using namespace std;

// // void update(int **p){
// //     // p = p + 1; // NOTHING WILL CHANGE  //koi frk nhi prta... aik aik kar ke har line ko check krna
// //     // cout << endl;
// //     // *p = *p + 1;  // CHANGE HO GA PTR KA ADDRESS
// //     // cout << endl;
// //     **p = **p + 1;  //i ke value change hone chaye

// // }

// // int main(){

// //     int i = 5;
// //     int *ptr = &i; 
// //     int **ptr2 = &ptr;
// //     // cout << i << endl;
// //     // cout << *ptr << endl;
// //     // cout << **ptr2 << endl;
// //     cout << "Before" << endl;
// //     cout << i << endl;
// //     cout << ptr << endl;
// //     cout << ptr2 << endl;
// //     cout << endl;
// //     update(ptr2);
// //     cout << "After" << endl;
// //     cout << i << endl;
// //     cout << ptr << endl;
// //     cout << ptr2 << endl;
    

// //     return 0;
// // }
// //REFERENCE VARIABLE |STATIC VS DYNAMIC MEMORY ALLOCATION
// // #include<iostream>
// // using namespace std;//WHAT IS REFERENCE VARIABLE ? ANS: FOR EXAMPLE AIK HE BANDA HAI US KE 2 NAME HAIN JESE SAMEER AIK BANDA HAI US KE 2 NAAM HAIN MEEN ND TUTU TOU YEH US BANDE KE REFERENCE VARIABLE HAIN ISE TRHA IN CODING int i = 5; MEIN AIK BOX BANTA JIS MEIN 5 STORE HOTA OR US BLOCK KA NAME I HAI AB USE SAME BLOCK KA NAME J BHE HO JIS MEIN 5 STORE HAI TOU MEMORY BLOCK AIK HE HAI JIS MEIN 5 STORE HAI BUT NAME ALAG ALG BAN GAI...
// // HOW TO CREATE IT ? ANS: int i = 5; NEXT STEP int &j = i; IS TRHA CREATE HO...
// //WHY WE NEED REFERENCE VARIABLE? ANS:
// // int& func(int a){
// // int num = a;
// // int& ans = num;  //yeh farigh cheez hai
// // return ans;
// // }



// // void update2(int &n){
// // n++;
// // } 

// // void update(int n){
// // n++;
// // cout << "H " << n << endl;
// // }
// // int main(){
            
//     // int i = 5;
//     // //ref var
//     // int &j = i;
//     // cout << i << endl;
//     // i++;
//     // cout << i << endl;
//     // j++;
//     // cout << i << endl;
//     // cout << j << endl;
//     //
//     // int i = 5;
//     // cout << "Before" << endl;
//     // cout << i << endl;
//     // update(i);
//     // cout << i << endl;
//     // update2(i);
//     // cout << i << endl;
    
//     //  return 0;
// // }

// //AGAIN POINTER 1ST 4 VIDEOS
// // #include<iostream>
// // using namespace std;

// // int main(){
    
// //     int num = 5;
// //     int *ptr = &num;  //is ko prthte hain (ptr is a pointer to int)...aik or baat ke agar int data type hai tou reference & bhe use data type ke he mutabik variable ka ho yeh nhi ke &ch likh dein int *ptr ke aage...* is dereference operator
// //     cout << num << endl;
// //     cout << ptr << endl;
// //     cout << &ptr << endl;
// //     cout << &num << endl;
// //     cout << *ptr << endl;
// //     cout << sizeof(num) << endl;
// //     cout << sizeof(ptr) << endl;  //hamesha 8 he ai ga pointer ka size
// //     //int *ptr; kabhi ese initialize nhi krna int *ptr = 0 likh ke null pointer bana do lakin ese nhi likhna
// //     int i = 5; //another way of writing pointer
// //     int *pp = 0;
// //     pp =&i; 
// //     int num1 = 5;
// //     int a = num1;
// //     cout << num1 << endl;
// //     a++;
// //     cout << num1 << endl;
// //     //in case of pointers
// //     int *ptr1 = &num1;
// //     cout << &num1 << endl;
// //     cout << ptr1 << endl;
// //     (*ptr1)++;
// //     cout << num1 << endl;
// //     cout << &ptr1 << endl;
// //     cout << endl;
// //     //copy pointer;
// //     int *q = ptr1;
// //     cout << ptr1 << " - " << q << endl;
// //     cout << *ptr1 << " - " << *q << endl;
// //     cout << endl;
// //     int z = 3;
// //     int *t = &z;
// //     cout << (*t)++ << endl;
// //     *t = *t + 1;
// //     cout << *t << endl;
// //     cout << z << " .. " << endl;
// //     cout << t << endl;
// //     cout << &t << endl;
// //     cout << &z << endl;
// //     cout << "Before " << t << endl; 
// //     t = t + 1; 
// //     cout << "After " << t << endl;
    
// // }
//     //pointers with arr and function


//     // int arr[10] = {53, 73, 43, 54, 61, 71};
//     // cout << "Address of first memory block is " << arr << endl;
//     // cout << arr[0] << endl;
//     // cout << "Address of first memory block is " << &arr[0] << endl;
//     // cout << "Address of entire array " << &arr << endl;
//     // cout << *arr << endl;
//     // cout << "Yeh bs add krne ke lie hai " << *arr + 11 << endl;
//     // cout << "Value at first location " << *(arr + 5) << endl;//arr means 0 index + 1 mein 1st index and then * print kr de ga
//     // cout << "Line no. 446 same hai " << *(arr)+ 5 << endl;//chaye *arr + 11 likh lo yah *(arr) + 11 answer same ai ga
//     // cout << arr[0] + 12 << endl;


//     // cout << endl;

//     // //new method index ko bahir likhne ka
//     // int i = 2;
//     // cout << i[arr] << endl;
//     // cout << *(4 + arr);

//     // cout << endl;
// // }

//     // int temp[10];
//     // cout << sizeof(temp) << endl;
//     // cout << sizeof(*temp) << endl;
//     // cout << sizeof(&temp) << endl;
//     // int *ptr = &temp[0];
//     // cout << sizeof(ptr) << endl;
//     // cout << sizeof(*ptr) << endl;
//     // cout << sizeof(&ptr) << endl;
//     // cout << sizeof(&temp) << endl;

//     // cout << endl;
// // }
//     // int temp[10] = {1, 23, 3, 4, 5};
//     // cout << sizeof(temp) << endl;
//     // cout << sizeof(*temp) << endl;
//     // cout << sizeof(&temp) << endl;
//     // int *ptr = &temp[0];
//     // cout << sizeof(ptr) << endl;
//     // cout << sizeof(*ptr) << endl;
//     // cout << sizeof(&ptr) << endl;
//     // cout << sizeof(&temp) << endl;
// // }
//     // cout << endl;

//     // int arr6[10] = {11, 216, 71, 41, 51};
//     // // arr6 = arr6 + 1;// CAN'T BE DONE
//     // int *ptr = &arr6[0];
//     // cout << ptr << endl;
//     // ptr = ptr + 1;  //ADDRESS 4 POINTS AAGE HO GYA
//     // cout << ptr << endl;
//     // *ptr = *ptr + 1;//jab *(ptr + 1) krte tou 71 deta 216 nhi deta woh jo uper kia hoa ptr = ptr + 1 us ka ko masla agar use comment kr ke krein tou 216 he ata
//     // cout << *ptr << endl;
// // }
//     // cout << endl;

//     // // CHARACTER ARRAYS WITH POINTERS
//     // int arr6[5] = {1, 2, 3, 4, 5};
//     // char ch[6] = "abcde";
//     // // char *c = "abcde"; //is trha se nhi krna jis trha uper likha us trha krna 
//     // // cout << arr6 << endl;
//     // // cout << ch << endl;  //dekho char array ke lie is ka address print nhi hoa jab ke jo is ke andar ha woh print hoa
//     // char *c = &ch[0];
//     // // prints entire array
//     // cout <<" v " << c << endl;
//     // cout << endl;
//     // char temp = 'r';
//     // char *p = &temp;
//     // cout << p << endl;// is ka sirf r ise lie print nhi ho raha kyun ke yeh aik char data type hai jo nhi ruke ga tab tak jab tak ise aik null character nhi mil jata
// // }
//     // cout << endl;
//     // POINTERS WITH FUNCTIONS(pass by value hai yeh pointer case mein, yeh pass by reference nhi hai)
// //     #include<iostream>
// //     using namespace std;

// //     void print(int *p) {
// //         cout << *p << endl;
// //     }

// //     void update(int *p) {
// //         p = p + 1;
// //         cout << "Inside " << p << endl;  //inside he ho ga change bahir nhi is se address is ka
// //     }

// //     void update1(int *p) {
// //         *p = *p + 1;
// //         cout << "Inside " << *p << endl;
// //     }

// //     int main() {

// //     int value = 5;
// //     int *p = &value;
// //     //print(p); //PASSING
// //     cout << "Before " << p << value << endl;
// //     update(p);
// //     cout << "After " << p << value << endl;
// //     cout << endl;
// //     cout << "Before " << *p << endl;
// //     update1(p);
// //     cout << "After " << *p << endl;

// //  return 0;

    
// // }
// //    cout << endl;

// //FUNCTION POINTERS ARRAYS MIX
// // #include<iostream>
// // using namespace std;

// // int getSum(int arr7[], int n){   //*arr bhe likh sakte arr[] ke jaga OR SAB SE BHARE BAAT FUNCTION MEIN ARR AS A POINTER JATA REMEMBER 
// // cout << endl << "Size " << sizeof(arr7) << endl; //SIZE OF ARR 4*5 = 20 ATA LAKIN 8 A RAHA KYUN KE YAHA PE ARRAY PASS NHI HO RAHA POINTER PASS HO RHA ISE LIA INT ARR[] YAH *ARR LIKHNE MEIN KOI FARAK NHI ******IMPORTANT BAAT******AB AGAR KOI POOCHE KE IS KA FAIDA KYA HA KE AS A POINTER JATA FUNCTION MEIN ARRAY TOU IS KA FAIAA YEH HAI KE HAM PART OF ARR SELECT KR SAKTE 6 INDEX HAI ARR MEIN OR MEIN CHATA KE APNE FUNCTION MEI SIRFF 3 HE BHEJUN INDEX LAST WALE getSome(arr7+3, 3); kar sakte neeche is ke example hai
// // int sum = 0;
// // for (int i = 0; i < n; i++){
// //         sum = sum + i[arr7];
// //     }
// //     return sum;
// // }

// // int main(){

// //     int arr7[5] = {1, 2, 3, 4, 5};
// //     cout << "Sum is " << getSum(arr7,5);
// //     return 0;
// // }
// //********************  Neeche Double Pointers  ********************

// //DOUBLE POINTERS
// // #include<iostream>
// // using namespace std;


// // int main(){
         
//     //    HAM INT *PTR LIKHTE KYUN NHI ESE LIKHTE POINTER PTR = &VALUE; IS LIE KE HAMEIN PATA NHI CHALE GA KE KIS TYPE KA DATA HAI INT HAI DOUBLE HAI KYA HAI AND KITNE BYTE KO CONSIDER KRNA KE INT TYPE KA HAI TOU PATA CHAL JAI GA KE 4 BYTE KO CONSIDER KRNA YEH DO REASONS HAIN
//     // int i = 5;
//     // int *ptr = &i; 
//     // int **ptr2 = &ptr; //AGAR ESE POINTER KE CORRESPONDING AIK OR    POINTER CREATE KRNA TOU DOUBLE POINTER KA USE KRTE...
//     // // OR AGAR US KE CORRESPONDING BANANA TOU int ***ptr3 = &ptr2; OR AGAR   IS KE CORRESPONDING BANANA TOU int ****ptr4 = &ptr3; KR DEIN GE AND   SO ON...
//     // cout << "D " << ptr << endl;  //p pe jo content para us ka address
//     // cout << *ptr << endl;
//     // cout << &ptr << endl;
//     // cout << i << endl;
//     // cout << "E " << &i << endl;
//     // cout << "S " << ptr2 << endl;  //dobara se phans gya s and c wale mein
//     // cout << "C " << *ptr2 << endl; //ptr ka content print ho rha yani us ka address
//     // cout << **ptr2 << endl;
//     // cout << &ptr2 << endl;
//     // return 0;
//     // }

//     //

//                 //****DOUBLE POINTERS WITH FUNCTIONS****
// // #include<iostream>
// // using namespace std;

// // void update(int **p2){
// //     p2 = p2 + 1; // NOTHING WILL CHANGE  //koi frk nhi prta... aik aik kar ke har line ko check krna
// //     cout << p2 << endl;
// //     // cout << endl;
// //     // *p2 = *p2 + 1;  // CHANGE HO GA PTR KA ADDRESS
// //     // cout << endl;
// //     // **p2 = **p2 + 1;  //i ke value change hone chaye
    
    

// // }

// // int main(){

// //     int i = 5;
// //     int *ptr = &i; 
// //     int **ptr2 = &ptr;
// //     // cout << i << endl;
// //     // cout << *ptr << endl;
// //     // cout << **ptr2 << endl;
// //     cout << "Before" << endl;
// //     cout << i << endl;
// //     cout << ptr << endl;
// //     cout << ptr2 << endl;
// //     cout << endl;
// //     update(ptr2);//pass by value se ja rha
// //     cout << "After" << endl;
// //     cout << i << endl;
// //     cout << ptr << endl;
// //     cout << ptr2 << endl;
    

// //     return 0;
// // }

   

//    //Dynamic vs Static memory allocation

// // #include<iostream>
// // using namespace std; //WHAT IS REFERENCE VARIABLE ? ANS: FOR EXAMPLE AIK HE BANDA HAI US KE 2 NAME HAIN JESE SAMEER AIK BANDA HAI US KE 2 NAAM HAIN MEEN ND TUTU TOU YEH US BANDE KE REFERENCE VARIABLE HAIN ISE TRHA IN CODING int i = 5; MEIN AIK BOX BANTA JIS MEIN 5 STORE HOTA OR US BLOCK KA NAME I HAI AB USE SAME BLOCK KA NAME J BHE HO JIS MEIN 5 STORE HAI TOU MEMORY BLOCK AIK HE HAI JIS MEIN 5 STORE HAI BUT NAME ALAG ALG BAN GAI...
// // // HOW TO CREATE IT ? ANS: int i = 5; NEXT STEP int &j = i; IS TRHA CREATE HO...
// // // // WHY WE NEED REFERENCE VARIABLE? ANS:
// // int& func(int a) {
// // int num = a;
// // int& ans = num;  //yeh farigh cheez hai bad practice hai ho sakta hai hm memory access he na kar pain. Yeh local variable mein hai is block se bahir nikle ga tou yh dead ho jai ga
// // return ans;
// // }

// // int* fun(int n) {
// // int* ptr = &n;
// //  //yeh farigh cheez hai bad practice hai ho sakta hai hm memory access he na kar pain. Yeh local variable mein hai is block se bahir nikle ga tou yh dead ho jai ga
// // return ptr;
// // }



// // void update2(int &n){
// // n++;
// // } 

// // void update(int n){
// // n++;
// // // cout << "H " << n << endl;
// // }

// // int main() {
            
//     // int i = 5;
//     // //ref var
//     // int &j = i;
//     // cout << i << endl;
//     // i++;
//     // cout << i << endl;   //yeh bs akele chez hai baki jo likha woh function ka hisa neeche wala para us mein reference variable pas by ref samjhaya. 
//     // j++;
//     // cout << i << endl;
//     // cout << j << endl;
//     // int i = 5;
//     // cout << "Before" << endl;
//     // cout << i << endl;
//     // update (i);
//     // cout << i << endl;
//     // update2(i);
//     // cout << i << endl;
//     // int ans = func(i);
//     // cout << "x " << ans << endl;
//     // cout << endl;     
//     // int ans1 = fun(i);
//     // cout << "x " << ans1 << endl;
//     // int n;
//     // cin >> n;
//     // int sum2 = 0;
//     // // cout << n % 10 << endl;
//     // while(n > 0) {

//     // int digit = n % 10;
//     // n = n / 10;
//     // sum2 = sum2 + digit;

//     // }

//     // cout << sum2 << endl;

   
    
//     return 0;
// }

// Pointers video 1 2nd time

// #include <iostream>
 
// using namespace std;
 
// int main () {
 
//     int num = 5;
//     cout << num << endl;
//     // Address of 
//     cout << &num << endl;

//     int* ptr = &num; // -> 5 para aik dabe me or us dibe ke uper address hai then pointer me store krwaya num ka address tou hoa yeh ke ptr wale dabe ke uper tou apna address hai lakin andar num ka address means jo dibbe ke uper tha woh us ptr ke dabe ke andar ho ga
//     cout << *ptr << endl;
//     cout << ptr << endl;
//     cout << sizeof(ptr) << endl; // size hamesha pointer ka 8 ata chaye kisi bhe data type ka ho cz sae tou us ne address he krna hai

//     // int* ptr; -> risky and gandi practice hai is ka matlab aap ne unknown memory me pointer point krwa dia, int* ptr means ptr is a pointer to int
//     // Another method of declaring
//     int i = 5;
//     int* p = 0;
//     p = &i;

//     cout << p << endl;
//     cout << *p << endl;
//     cout << i << endl;
//     cout << &i << endl;

//     // Won't increment;
//     int a = 5;
//     int b = a;
//     a++;
//     cout << b << endl;

//     // Increment ho jai ga, so means dono use ko point kr rhy 5 pe 
//     int abc = 5;
//     int* pointer = &abc;
//     cout << abc << endl;
//     cout << &abc << endl;
//     ( *pointer )++;
//     cout << abc << endl << endl;

//     //Copying 1 pointer to other

//     /*int *q = &pointer;
//     int *q = *pointer; ese nhi kr sakte copy me */
//     int *q = pointer; // q is now a copy of pointer, so q also holds the address of abc
//     cout << pointer << " - " << q << endl;
//     cout << *pointer << " - " << *q << endl;

//     // t = t + 1;

//     int j = 3;
//     int* point = &j;
//     cout << "Before : ";
//     cout << *point << endl;
//     cout << "After : ";
//     *point = *point + 1;
//     cout << *point << endl;
//     cout << "Before : ";
//     cout << point << endl;
//     point = point + 1; // Agli location par chala jai ga or agar int hai tou 4 increment agle location me                                  
//     cout << "After : ";
//     cout << point << endl;

//     return 0;
// }

// // Pointers video 2

// #include <iostream>
 
// using namespace std;

// void print ( int* p ) {
//     cout << "Inside print : " << *p << endl;
// }


// void update ( int* p ) { // Ke diba alag ban rha *p ka yani dabe ke uper alag address hai lakin andar wala jo address hai woh same hai yani &value wala
//     p = p + 1; // main me change nhi ho ga 
//     cout << "Inside : " << p << endl;
//     cout << "Inside : " << &p << endl;
//     *p = *p + 1;
//     cout << "Insidee : " << *p << endl; // Changed here and after
// }



// int main () {
 
//     int arr[10] = {2, 5, 6};

//     cout << "Address of 1st memory block is : " << arr << endl;
//     cout << "Address of 1st memory block is : " << &arr[0] << endl;
//     cout << "Address of full array is : " << &arr << endl;
//     cout << "4th : " << *arr << endl;
//     cout << "5th : " << *arr + 1 << endl;
//     cout << "6th : " << *(arr + 1) << endl;
//     cout << "6th : " << *(arr) + 1 << endl;
//     // arr[i] = *(arr + i); or i[arr] = *(i + arr);

//     int temp[10] = {1, 2};
//     cout << sizeof(temp) << endl;
//     cout << sizeof(*temp) << endl;
//     cout << sizeof(&temp) << endl; // &temp gives the address of the array temp. The type of &temp is int (*)[10], a pointer to an array of 10 integers.On most systems, the size of any pointer is 8 bytes (for a 64-bit system).

//     cout << endl;

//     int* pointerr = &temp[0];
//     cout << sizeof(pointerr) << endl; // -> Yeh 8 deta 
//     cout << sizeof(*pointerr) << endl; // -> Yeh value de ga tou woh tou 4 byte ke hai na
//     cout << sizeof(&pointerr) << endl; // &pointerr gives the address of the pointer pointerr.The type of &pointerr is int**, a pointer to an int*. On most systems, the size of any pointer is 8 bytes (for a 64-bit system).

//     cout << "Hi" << endl;
//     int arrr[10] = {11, 22, 33};
//     // arr = arr + 1; Yeh kaam nhikar sakte 
//     int* pt = &arrr[0];
//     cout << *pt << endl;
//     pt = pt + 1; // Agle block chala jai ga pehle 710 the tou 714 ho gya int case me 
//     cout << *pt << endl;

//     // Char arrays 

//     int a[5] = {1, 2, 3, 4, 5};
//     char a1[6] = "abcde";
//     cout << a << endl;
//     cout << a1 << endl; // Full abcde print ho ga 

//     char *poinn = &a1[0];
//     cout << poinn << endl; // Full abcde print ho ga 
//     cout << *poinn << endl;

//     char temp1 = 'z';
//     char* po = &temp1;
//     cout << po << endl; // z��Go kaam norma tareke se k=he kr rha lakin jb z ka address mile ga tou age jai ga tab tak jab tak null character nhi mil jata 
//     cout << *po << endl;
    
//     // char* cc = "abcde"; not needed

//     // FUNCTIONS 

//     int value = 5;
//     int* ppp = &value;

//     print ( ppp );
//     cout << "Before : " << ppp << endl; // Same address as after but diff inside
//     cout << "Before : " << *ppp << endl; 
//     update ( ppp );
//     cout << "After : " << ppp << endl; // Same address as before but diff inside
//     cout << "After : " << *ppp << endl; 

//     // DMA AND REFERENCE VARIABLE

//     int j = 5;
//     int &i = j; // Same memory hai but name different 

//     cout << i << endl;
//     i++;
//     cout << j << endl;
//     j++;
//     cout << i << endl;

//     // DMA

//     // int n;
//     // cin >> n;
//     // int arr[n]; Not a good practice run time pe pata chale ga memory chote le ke ai ga program agar new lagain tou heap me ho ge warna crash kar jai ga 

//     int n;
//     cin >> n;

//     int* pppp = new int[n]; // New wale heap me hai L.H.S wale stack me hai agar new nhi lagain ge tou static memory allocation hota SMA

//     // Variable me input 

//     int* pr = new int; // Dynamically allocate an integer, LHS wale 8 byte ke hai and RHS wale 4 byte hai

//     cout << "Enter a value: ";
//     cin >> *pr; // Take input from the user

//     cout << "You entered: " << *pr << endl;

//     delete pr; // Free the dynamically allocated memory
//     pr = nullptr; // Good practice to set the pointer to null after deletion

//     // Difference between DMA and SMA

//     // DMA is manual is ko delete krna parta take memory erase ho jai esa SMA me nhi hota us me memory stack me hote jo automatically delete ho jate

//     return 0;
// }

// #include <iostream>
 
// using namespace std;

// void update ( int** punter ) { // PASS BY VALUE KE TAREKE SE ATA YANI NEW BOX CREATE HOTA 
//     punter = punter + 1; // No change in main but is function me hoye hai, yeh punter ke andar &p hai
//     cout << "Inside : " << punter << endl;
//     // *punter = *punter + 1; // Yeh dereference hai jo ke ppppp ke dabe me jo para yani &k ka address us ko aage kr deta and change hota main and inside dono me, hota pass by value he hai lakin change hota
//     // cout << "Inside : " << *punter << endl;
//     // **punter = **punter + 1; // Value changed from 5 to 6, yeh bhe pass by value ho rha punter jo dia parameter me us ka alag address ho ga us ke dibe ka 
//     // Yeh dekho
//     // cout << "Inside : " << **punter << endl;
//     // cout << "Punter address inside update : " << &punter << endl;
//     /* Punter address before update : 0x16f753268
//     Punter address inside update : 0x16f753228
//     Punter address after update : 0x16f753268*/
// }


// int main () {
 
//     // Double pointer 

//     // int* p kyun likhte pointer* p kyun nhi likhte tou kis type ka data and kitne byte le rha is lie likhta 

//     int k = 5;
//     int* ppppp = &k;

//     int** punter  = &ppppp;
//     // cout << k << endl;
//     // cout << ppppp << endl;
//     // cout << &ppppp << endl;
//     // cout << *ppppp << endl;
//     // cout << punter << endl;
//     // cout << *punter << endl;
//     // cout << **punter << endl;
//     // cout << "Punter address before update : " << &punter << endl;
//     //Sare complete ho gai
//     // k ke dabe ke uper jo address hai woh pppp me hai and pppp ke dabe ke uper jo address hai woh punter me hai or phir punter ke apne dabe pe bhe address hai 

//     // Function pointers
//     // cout << endl;
//     cout << k << endl;
//     cout << ppppp << endl;
//     cout << "Address of ppppp : " << &ppppp << endl;
//     cout << punter << endl;
//     cout << endl;
//     update ( punter );
//     // cout << "Punter address after update : " << &punter << endl;
//     cout << endl;
//     cout << k << endl;
//     cout << ppppp << endl;
//     cout << punter << endl;
 
//     return 0;
// }


// DMA 2d Arrays

// #include <iostream>
 
// using namespace std;
 
// int main () {
    
//     int n;
//     cin >> n;
//     int** arr = new int*[n]; // Arrays basically pointers ko he dirshate hain

//     //L.H.S me int* is lie lagaya ke heap pe rows int* se darshai jate tou woh likh dia
//     // Ab para yeh ese hai ke aik horizontal block ke line hai us me int* pare or us har int* ke apni array hai jise ham loop se banain ge L.H.S pe.

//     // Yeh ham creation kr rhy jo me ne uper likha ke har horizontal line ko aik array mil jate
//     for ( int i = 0; i < n; i++ ) {
//         arr[i] = new int[n];
//     }

//     // Input time

//     for ( int i = 0; i < n; i++ ) {
//         for ( int j = 0; j < n; j++ ) {
//             cin >> arr[i][j];
//         }
//     }

//     //Output

//     for ( int i = 0; i < n; i++ ) {
//         for ( int j = 0; j < n; j++ ) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Delete

    //  Delete ke lie pehle R.H.S wala part jo ke lambe vertical me pare hain arrays woh karwain ge cz agar L.H.S wale karwa de int* jidhr para horizontal box me tou R.H.S wale tou del ho ge he nhi memory leak ho jai ge 

    // for ( int i = 0; i < Row; i++ ) {
    //     delete[] arr[i]; // is se R.H.S wala del ho gya
    // }

    // delete[] arr; // Is se L.H.S int* wala delete

// ***************************************************************************************************************************************************

//     // For different number of rows and cols

//     int Row;
//     cin >> Row;

//     int Col;
//     cin >> Col;

//     int** arr = new int*[Row]; // Arrays basically pointers ko he dirshate hain

//     //R.H.S me int* is lie lagaya ke heap pe rows int8 se darshai jate tou woh likh dia
//     // Ab para yeh ese hai ke aik horizontal block ke line hai us me int* pare or us har int* ke apni array hai jise ham loop se banain ge

//     // Yeh ham creation kr rhy jo me ne uper likha ke har horizontal line ko aik array mil jate
//     for ( int i = 0; i < Row; i++ ) {
//         arr[i] = new int[Col]; // Har row ke lie kuch column daal rhy
//     }

//     // Input time

//     for ( int i = 0; i < Row; i++ ) {
//         for ( int j = 0; j < Col; j++ ) {
//             cin >> arr[i][j];
//         }
//     }

//     //Output

//     for ( int i = 0; i < Row; i++ ) {
//         for ( int j = 0; j < Col; j++ ) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Delete ke lie pehle R.H.S wala part jo ke lambe vertical me pare hain arrays woh karwain ge cz agar L.H.S wale karwa de int* jidhr para horizontal box me tou R.H.S wale tou del ho ge he nhi memory leak ho jai ge 

//     for ( int i = 0; i < Row; i++ ) {
//         delete[] arr[i]; // is se R.H.S wala del ho gya
//     }

//      delete[] arr; // Is se L.H.S int* wala delete
 
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void modify(int* p) {
//     cout << "Address stored in p inside function: " << p << endl;
//     cout << "Address of p inside function: " << &p << endl;
//     *p = 10;
// }


// int main() {
//     int n = 5;
//     int* q = &n;

//     cout << "Address of n: " << q << endl;
//     cout << "Address of q in main: " << &q << endl;

//     modify(q);

//     cout << "Value of n after modify: " << n << endl;
// }


// int*

// #include <iostream>
// using namespace std;

// int* getPointer(int *x) {
//     return &x;
// }

// int main() {
//     int n = 5;
//     int* ptr = getPointer(n);
//     *ptr = 10;  // Modifies the value of n
//     cout << n;  // Output: 10
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int* getPointer(int &x) {
//     return &x;
// }

// int main() {
//     int n = 5;
//     getPointer(n);  // Call the function to get the pointer
//     int* ptr = &n;  // Directly assign the address of n to ptr
//     *ptr = 10;  // Modifies the value of n
//     cout << n;  // Output: 10
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int* getArrayPointer(int arr[], int index) {
//     return &arr[index];
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int* ptr = getArrayPointer(arr, 2);  // Get a pointer to the 3rd element (index 2)
//     *ptr = 10;  // Modify the value of the 3rd element
//     cout << arr[2];  // Output: 10
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int* getArrayPointer(int arr[], int index) {
//     return &arr[index];
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     // getArrayPointer(arr, 2);  // Call the function to get the pointer
//     int* ptr = &arr[2];  // Directly assign the address of the 3rd element to ptr
//     *ptr = 10;  // Modify the value of the 3rd element
//     cout << arr[2];  // Output: 10
//     return 0;
// }
// int* returnPointer(int& x) {
//     return &x;  // Returning the address of x
// }

// int main() {
//     int n = 5;
//     int* ptr = returnPointer(n);  // ptr holds the address of n
//     *ptr = 10;  // Modifies the value of n through the pointer
//     cout << n << endl;  // Output: 10
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // int& getReference(int &x) {  // Returns a reference to x
// //     return x;
// // }

// int main() {
//     int n = 5;
//     // getReference(n);  // Call the function, returning a reference to n
//     int &ref = n;     // Create a reference to n
//     ref = 11;         // Modify n through the reference
//     cout << n;        // Output: 10
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int& getArrayElement(int arr[], int index) {
//     return arr[index];  // Return a reference to the element at the given index
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     getArrayElement(arr, 2) = 10;  // Modify the third element (index 2)
//     cout << arr[2];  // Output: 10
//     return 0;
// }


/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
// #include <iostream>

// /* fstream header file for ifstream, ofstream, 
//   fstream classes */
// #include <fstream>

// using namespace std;

// // Driver Code
// int main()
// {
//     // Creation of ofstream class object
//     ofstream fout;

//     string line;

//     // by default ios::out mode, automatically deletes
//     // the content of file. To append the content, open in ios:app
//     // fout.open("sample.txt", ios::app)
//     fout.open("sample.txt");

//     // Execute a loop If file successfully opened
//     while (fout) {

//         // Read a Line from standard input
//         getline(cin, line);

//         // Press -1 to exit
//         if (line == "-1")
//             break;

//         // Write line in file
//         fout << line << endl;
//     }

//     // Close the File
//     fout.close();

//     // Creation of ifstream class object to read the file
//     ifstream fin;

//     // by default open mode = ios::in mode
//     fin.open("sample.txt");

//     // Execute a loop until EOF (End of File)
//     while (getline(fin, line)) {
      
//         // Print line (read from file) in Console
//         cout << line << endl;
//     }

//     // Close the file
//     fin.close();

//     return 0;
// }

 