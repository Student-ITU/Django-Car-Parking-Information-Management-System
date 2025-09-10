// /*These operators are related to pointers in C++. The address-of operator (&) is used to get the memory address of a variable, and the dereference operator (*) is used to access the value stored at a specific memory address through a pointer.*/
// #include <iostream>

// int* InputArray(int& size) {  // Function InputArray returns a pointer to an integer.

//     int* myArray = new int[size]; // Will store address of 1st element in array

//     std::cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < size; ++i) {
//         std::cout << "Element " << i + 1 << " : ";
//         // std::cin >> *(myArray + i);
//         std::cin >> myArray[i];
//     }

//     return myArray;
// }

// void OutputArray(int* myArray, const int& size) { //Address sirf pehle ka ai ga
//     std::cout << "Array elements: ";
//     for (int i = 0; i < size; ++i) { // 4+
//         // std::cout << *(myArray + i) << " ";
//         std::cout << myArray[i] << " ";
//     }
//     std::cout << std::endl;
// }

// int* AllocateAndCopyArray(int* myArray, int& size, int& count) { //Basically jab 3 = 3 ho gya tou yeh resize kr dete
//     int newSize = size * 2; //6
//     int* newArray = new int[newSize];

//     for (int i = 0; i < size; ++i) {
//         *(newArray + i) = *(myArray + i);  //Value hote
//     }

//     delete[] myArray;

//     // size = newSize;
//     // count = size / 2; //3 ho gya 4th location
//     return newArray; //pehla element 3 he ho ga
// }

// int main() {

//     int size;
//     std::cout << "Enter the size of the array: ";
//     std::cin >> size;
//     int* myArray = InputArray(size); // Jab uper se solve kr ke a jain ge tou is pointer mein store ho jai ga 1st address. Jab return kia myArray

//     OutputArray(myArray, size);

//     int input;
//     int count = size;
//     int* newArray;
//     std::cout << "Enter integers (enter -1 to stop): \n";
//     while (true) {
//         std::cin >> input;

//         if (input == -1) {
//             break;
//         }

//         if (count == size) {
//             newArray = AllocateAndCopyArray(myArray, size, count);  // 1st element ka address
//         }

//         newArray[size] = input;  // Is ka matlab Size 3 hai tou agar hm input lete tou matlab 3rd pe 4 ko rakh do
//         size++;
//     }

//     OutputArray(newArray, size);

//     delete[] newArray;

//     return 0;
// }

// ***** UPER WALA AGAIN *****

// #include<iostream>
// using namespace std;

// int* inputArray(int &size) {
//     int* Array = new int[size];

//     cout << "***** Enter the elements *****" << endl;
//     for (int i = 0; i < size; i++) {
//         cout << "Enter the element " << i << " : " ;
//         cin >> *(Array + i);
//     }
//     return Array;
// }

// void outputArray(int* Array, int& size) {
//     cout << " ***** The elements are ***** " << endl;

//     for (int i = 0; i < size; i++) {
//        cout << *(Array + i) << " " << endl;
//     }
// }

// int* AllocateAndCopyArray(int* Array, int& count, int& size) {
//     int newSize = size * 2;
//     int* AAA = new int[newSize];

//     for (int i = 0; i < newSize; i++) {
//         *(AAA + i) = *(Array + i);
//     }

//     delete[] Array;
//     return AAA;
// }

// int main() {
    
//     int size;
//     cout << "Enter thr size : ";
//     cin >> size;

//     int* Array = inputArray(size);

//     outputArray(Array, size);

//     int count = size;
//     int* AAA;
//     int input;
//     cout << "Enter the Elements" << endl;

//     while(true) {
        
//         cin >> input;

//         if (input == -1) {
//             break;
//         }

//         if (count == size) {
//             AAA = AllocateAndCopyArray(Array, count, size);
//         }

//         AAA[size] = input;
//         size++;
//     }

//     outputArray(AAA, size);
//     delete[] AAA;

//     return 0;
// }

// #include <iostream>

// int myFunction()
// {
//     int numbers[5];
//     int *p;

//     p = numbers;
//     *p = 10;

//     p++;
//     *p = 20;

//     p = &numbers[2];
//     *p = 30;

//     p = numbers + 3;
//     *p = 40;

//     p = numbers;
//     *(p + 4) = 50;

//     for (int n = 0; n < 4; n++) {
//         std::cout << numbers[n] << " , ";
//     }
//     std::cout << numbers[4];  //Nhi tou last mein comma a jata hai
//     return 0;
// }

// int main()
// {
//     myFunction();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {

//     int num1 = 5;
//     int num2 = 7;
//     int sum = 0;
//     int *xPtr = nullptr;
//     int *yPtr = nullptr;
//     int *sumPtr = nullptr;
//     cout << num1 << endl;
//     cout << num2 << endl;
//     cout << &num1 << endl;
//     cout << &num2 << endl;
//     xPtr = &num1;
//     yPtr = &num2;
//     cout << *xPtr << endl;
//     cout << *yPtr << endl;
//     sumPtr = &sum;
//     sum = num1 + num2;
//     cout << *sumPtr << endl;
//     cout << xPtr << endl;
//     cout << yPtr << endl;
//     cout << "Num1 = " << num1 << endl; // Prints Num1 = 5
//     sum = *xPtr + *yPtr; // Add num1 and num2 using *xPtr and *yPtr and save the result in integer sum
//     cout << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int *AllocateAndCopyArray(int *oldArray, int oldSize, int newSize)
// {

//     int *newArray = new int[newSize];
//     for (int i = 0; i < oldSize; i++)
//     {
//         *(newArray + i) = *(oldArray + i);
//     }
//     delete[] oldArray;

//     return newArray;
// }

// int main()
// {
// //***(GROWING ARRAY)***: KE AAP KE PREVIOUS ARRAY KE SPACE KAM PAR GAI TOU AAP AIK NEW DYNAMIC ARRAY BANATE HO OR PEECHLE ELEMENTS KO IS MEIN COPY KRTE HO OR IS KA SIZE PEHLE SE ZYDA HOTA HAI
//     const int initialSize = 3;
//     int *myArray = new int[initialSize]; //Initial start chaye hota, array is itself an address
//     int size = initialSize;
//     int count = 0;
//     int input;
//     cout << "Enter Integers (enter -1 to stop): ";

//     while (true)
//     {
//         cin >> input;

//         if (input == -1)
//         {
//             break;
//         }

//         if (count == size)
//         {
//             size *= 2;
//             myArray = AllocateAndCopyArray(myArray, count, size);
//         }

//         *(myArray + count) = input;
//         count++;
//     }

//     cout << "Array elements: ";
//     for (int i = count - 1; i >= 0; i--)
//     {
//         cout << *(myArray + i) << " ";
//     }
//     delete[] myArray;

//     return 0;
// }

//COMPRESSED ARRAY LAB 2.2
// #include <iostream>
// using namespace std;

// int *CompressedArray(int *Array, int &compressedSize, int &size) {

//     int *CompressedA = new int[size];
//     compressedSize = 1;
//     CompressedA[0] = Array[0];

//     for (int i = 1; i < size; i++) {
//         if (Array[i] != Array[i - 1]) {
//             CompressedA[compressedSize] = Array[i];
//             ++compressedSize;
//         }
//     }
//     return CompressedA;
// }

// int main() {


//     int size;
//     cout << "Enter the size : ";
//     cin >> size;

//     int *Array = new int[size];

//     cout << "Enter the elements : ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> Array[i];
//     }

//     int compressedSize;
//     int* CompressedA = CompressedArray(Array, compressedSize, size);

//     cout << "The Ouput is : " ;
//     for (int i = 0; i < compressedSize; i++) {
//         cout << CompressedA[i] << " ";
//     }

//     delete[] Array;
//     delete[] CompressedA;
//     return 0;
// }

//AGAIN DOING (shrink)

// #include <iostream>
// using namespace std;

// int* compressedArray(int* Array, int& size, int& compressedSize) {
//     int* compressedArray = new int[size];
    // compressedSize = 1;
    // compressedArray[0] = Array[0];

//     for (int i = 1; i < size; i++) {
//         if (Array[i] != Array[i - 1]) {
//             compressedArray[compressedSize] = Array[i];
//             compressedSize++;
//         }
//     }
//     return compressedArray;
// }
// int main() {
    
//     int size;
//     cout << "Enter the size : ";
//     cin >> size;

//     int* Array = new int[size];

//     for (int i = 0; i < size; i++) {
//         cin >> *(Array + i);
//     }

//     int compressedSize;
//     int* AAA = compressedArray(Array, size, compressedSize);

//     cout << "The output is : ";
//     for (int i = 0; i < compressedSize; i++) {  //YAHA PE AGAR <SIZE LIKH DIA TOU 0 AI GE EXTRA COMPRESSEDSIZE LIKHNA TAB NHI AIN GE
//         cout << *(AAA + i) << " ";
//     }

//     delete[] Array;
//     delete[] AAA;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int* Intersection(int* Array1, int* Array2, int &size1, int &size2) {
//     int size3 = size1 + size2;
//     int* Array3 = new int[size3];

//     for (int i = 0; i < size3; i++) {
//         if (Array1[i] == Array2[i]) {
//             Array3[size3] = 
//         }
//     }
//     return Array3;
// }
// int main() {
    
//     int size1;
//     cout << "Enter the size for Array 1: ";
//     cin >> size1; 
//     int* Array1 = new int[size1];

//     for (int i = 0; i < size1; i++) {
//         cin >> Array1[i];
//     }

//     int size2;
//     cout << "Enter the size for Array 2: ";
//     cin >> size2; 
//     int* Array2 = new int[size2];
//     for (int i = 0; i < size1; i++) {
//         cin >> Array1[i];
//     }

//     int* Array3 = Intersection(Array1, Array2, size1, size2);

//     delete[] Array1;
//     delete[] Array2;
//     delete[] Array3;
//     return 0;
// }
// array1 = {1, 3, 5, 7, 9}
// array2 = {3, 6, 7, 8, 9}

// #include <iostream>

// int* FindCommonElements(int* array1, int size1, int* array2, int size2, int& commonSize) {

//     int* commonArray = new int[size1 + size2];  // Allocate space for the commonArray

//     int i = 0, j = 0, k = 0;  // Pointers for array1, array2, and commonArray

//     while (i < size1 && j < size2) {
//         if (array1[i] < array2[j]) {
//             i++;
//         } else if (array2[j] < array1[i]) {
//             j++;
//         } else {  // Found a common element
//             commonArray[k] = array1[i];
//             i++;
//             j++;
//             k++;
//         }
//     }

//     commonSize = k;  // Set the actual size of the commonArray
    
//     return commonArray;
// }

// int main() {
//     int size1, size2;

//     // Input the size of the first array
//     std::cout << "Enter the size of the first array: ";
//     std::cin >> size1;

//     // Input the elements of the first array
//     int* array1 = new int[size1];
//     std::cout << "Enter the elements of the first array (sorted): ";
//     for (int i = 0; i < size1; ++i) {
//         std::cin >> array1[i];
//     }

//     // Input the size of the second array
//     std::cout << "Enter the size of the second array: ";
//     std::cin >> size2;

//     // Input the elements of the second array
//     int* array2 = new int[size2];
//     std::cout << "Enter the elements of the second array (sorted): ";
//     for (int i = 0; i < size2; ++i) {
//         std::cin >> array2[i];
//     }

//     int commonSize;
//     // Call the function to find common elements
//     int* commonArray = FindCommonElements(array1, size1, array2, size2, commonSize);

//     // Output the common elements
//     std::cout << "Common Elements: ";
//     for (int i = 0; i < commonSize; ++i) {
//         std::cout << commonArray[i] << " ";
//     }
//     std::cout << std::endl;

//     delete[] array1;
//     delete[] array2;
//     delete[] commonArray;

//     return 0;
// }

//YEH UPER WALA KHUD LIKH RAHA

// #include<iostream>
// using namespace std;

// int* FindCommonElements(int* array1, int size1, int* array2, int size2, int& commonSize) {
//     int* commonArray = new int[size1 + size2];
//     int i = 0, j = 0, k = 0;

//     while(i < size1 && j < size2) {

//     if (array1[i] < array2[i]) {
//         i++;
//     } else if (array2[i] < array1[i]) {
//         j++;
//     } else {
//         commonArray[k] = array1[i];
//         i++;
//         j++;
//         k++;
//     }
//     commonSize = k;
    
// }
//     return commonArray;
// }

// int main() {
    
//     int size1, size2;
//     cout << "Enter the size of the first array: ";
//     cin >> size1;

//     int* array1 = new int[size1];
//     cout << "Enter the elements of the first array (sorted): ";
//     for (int i = 0; i < size1; ++i) {
//         cin >> array1[i];
//     }

//     std::cout << "Enter the size of the second array: ";
//     cin >> size2;

//     int* array2 = new int[size2];
//     cout << "Enter the elements of the second array (sorted): ";
//     for (int i = 0; i < size2; ++i) {
//         cin >> array2[i];
//     }

//     int CommonSize;

//    int* commonArray = FindCommonElements(array1, size1, array2, size2, CommonSize);

//     std::cout << "Common Elements: ";
//     for (int i = 0; i < CommonSize; ++i) {
//         std::cout << commonArray[i] << " ";
//     }
//     std::cout << std::endl;

//     delete[] array1;
//     delete[] array2;
//     delete[] commonArray;

//     return 0;
// }


//LAB 2.2 Fast Questions Q -> 1

// #include<iostream>
// using namespace std;

// int* InputArray(int& size) {
//     cout << "Enter the size : ";  
//     cin >> size; 
// // In summary, placing cin >> size inside the InputArray function is a design decision that enhances encapsulation, modularity, reusability, and maintains a logical flow within the function. So, in simpler terms, putting cin >> size inside InputArray makes it easier to use the function, ensures the right amount of memory is allocated on the heap, and follows a logical sequence of actions.

//     int* function = new int[size];
    
//     cout << "Enter the numbers : " ;
//     for (int i = 0; i < size; i++) {
//         cin >> *(function + i);
//     }

//     cout << "The Numbers are : ";
//     for (int i = 0; i < size; i++) {
//         cout << *(function + i) << " ";
//     }

//     return function;
// }

// int main() {
    
//     int size;

//     int* function = InputArray(size);

//     delete[] function;
//     return 0;
// }

//QUESTION 2
// #include<iostream>
// using namespace std;

// int* InputArray(int& size) {
//     cout << "Enter the size : ";  
//     cin >> size; 
// // In summary, placing cin >> size inside the InputArray function is a design decision that enhances encapsulation, modularity, reusability, and maintains a logical flow within the function. So, in simpler terms, putting cin >> size inside InputArray makes it easier to use the function, ensures the right amount of memory is allocated on the heap, and follows a logical sequence of actions.

//     int* function = new int[size];
    
//     cout << "Enter the numbers : " ;
//     for (int i = 0; i < size; i++) {
//         cin >> *(function + i);
//     }

//     return function;
// }

// void outputArray(int* InputArray, const int& size) {
//     cout << "The numbers are : " ;
//     for (int i = 0; i < size; i++) {
//         cout << *(InputArray + i) << " ";
//     }
// }

// int main() {
    
//     int size;

//     int* function = InputArray(size);

//     outputArray(function, size);
//     delete[] function;
//     return 0;
// }

// IS CODE MEIN * KA ALI SE POOCHNA SUBHA
// #include<iostream>
// using namespace std;

// int* InputArray(int* size) {  //matlab ke adress receive kre ga , referecne ho raha uper
//     cout << "Enter the size : ";  
//     cin >> *size;  // Input is now stored in the memory location pointed by size
//     //dereferenne kr rhy jis ko point kr rahaa tha us ka size 3 ho jai ga jo bhe put krein ge idhr dereference hor aha

//     int* function = new int[*size];  // Allocate memory based on the size

//     cout << "Enter the numbers : ";
//     for (int i = 0; i < *size; i++) { //jaha jaha values chaye waha waha dereference krna
//         cin >> *(function + i);
//     }//memory jaha a jai waha pointer a ajte
//     cout << "The Numbers are : ";
//     for (int i = 0; i < *size; i++) {
//         cout << *(function + i) << " ";
//     }

//     return function;
// }

// int main() {
//     int size;

//     int* function = InputArray(&size);  // Pass the address of size
//    //agar uper likha hota  tou & ka matlab pas by reference hota 
//     delete[] function;
//     function = nullptr; // kisi ko point tou krta hai chaye del bhe ho jai tou mein ne nullptt kr dia ke nullptr ko point kre bs, achi practice hai krna
//     return 0;
// }

//Question 3

// #include<iostream>
// using namespace std;
 
// int main() {
    
//     return 0;
// }



// #include <iostream>

// int* Intersection(int* setA, int& size1, int* setB, int& size2, int& size3) {
//     // Allocate memory for the intersection array
//     int* intersectionArray = new int[size1 + size2];
//     size3 = 0;  // Initialize the size of the intersection array

//     // Iterate through setA to find common elements with setB
//     for (int i = 0; i < size1; ++i) {
//         for (int j = 0; j < size2; ++j) {
//             if (setA[i] == setB[j]) {
//                 // Check if the element is already in the intersection array
//                 bool alreadyExists = false;
//                 for (int k = 0; k < size3; ++k) {
//                     if (intersectionArray[k] == setA[i]) {
//                         alreadyExists = true;
//                         break;
//                     }
//                 }
//                 // If not, add it to the intersection array
//                 if (!alreadyExists) {
//                     intersectionArray[size3] = setA[i];
//                     ++size3;
//                 }
//                 break;  // Move to the next element in setA
//             }
//         }
//     }

//     return intersectionArray;
// }

// int main() {
//     int size1, size2, size3;

//     // Input the size and elements of setA
//     std::cout << "Enter Size of setA: ";
//     std::cin >> size1;
//     int* setA = new int[size1];
//     std::cout << "Enter " << size1 << " elements for setA: ";
//     for (int i = 0; i < size1; ++i) {
//         std::cin >> setA[i];
//     }

//     // Input the size and elements of setB
//     std::cout << "Enter Size of setB: ";
//     std::cin >> size2;
//     int* setB = new int[size2];
//     std::cout << "Enter " << size2 << " elements for setB: ";
//     for (int i = 0; i < size2; ++i) {
//         std::cin >> setB[i];
//     }

//     // Call the Intersection function
//     int* intersectionArray = Intersection(setA, size1, setB, size2, size3);

//     // Output the intersection array
//     std::cout << "Intersection of setA and setB: ";
//     for (int i = 0; i < size3; ++i) {
//         std::cout << intersectionArray[i] << " ";
//     }
//     std::cout << std::endl;

//     // Clean up memory
//     delete[] setA;
//     delete[] setB;
//     delete[] intersectionArray;

//     return 0;
// }

#include <iostream>
using namespace std;
 
int main() {
   
    int mySize = 5;
    int* myArray = new int[size];
    for (int i = 0; i < 5 i++) {
       mySize[i] = 3;
    }

    for (int i = 0; i < 5 i++) {
       cout << mySize[i] << endl;
    }
    return 0;
}