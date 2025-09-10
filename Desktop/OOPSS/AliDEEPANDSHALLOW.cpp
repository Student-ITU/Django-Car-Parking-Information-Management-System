#include <iostream>
using namespace std;
int main(){
    // **************************Deep Copy*******************************
    // In this code example if you delete either myString or temp you can
    // access the char array from the other pointer one because it
    // independent of other pointer
    char* myString = new char[50]; // Dynamic char Array
    char* temp  = new char[50]; // Char pointer to perform deep copy
    int size = 0, i = 0;
    cout<<"Enter string: ";
    cin.getline(myString, 50);// Assigning value to myString
    while(myString[i] != '\0'){
        size++;
        i++;
    }
    // Deep Copy into temp from myString
    for(int i = 0; i < size; i++){
        temp[i] = myString[i];
    }
    for(int i = 0; i < 50;i++){
        cout<<myString[i];
    }
    cout<<endl;
    delete[] myString; // Deleting myString
    myString = nullptr;
    // Trying to access temp and getting valid values
    for(int i = 0; i < 50;i++){
        cout<<temp[i];
    }
    delete[] temp;
    temp = nullptr;
    return 0;
}
