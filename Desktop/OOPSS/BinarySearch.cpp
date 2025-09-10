//linear search vs binary seacrh ab in LN jab hm 1000 ko sort krein ge tou woh 1000 ko dekhe ga un sab mein compae kre ga wahi BN mein half half ho jata 1000 the pehle 500 ho jai ge us ke baad 250 is trha 10 steps lage ge is mein till no. found tak us mein 1000 dafa compare kare ga  

//Binary search -> 3  5  9  13  27...
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end) {
      
        if (arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid]) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;

}

int main() {
    
    int array[6] = {1, 2, 3, 4, 5};
    int key;
    cout << "Enter the key" << endl;
    cin >> key;
    int index = binarySearch(array, 6, key);
    cout << "Index of " << key << " is : " << index << endl;
    return 0;
}

