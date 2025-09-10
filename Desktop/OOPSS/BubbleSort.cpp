//Bubble Sort -> Sort krna 10  1  7  6  14  9 = 1  6  7  9  10  14 -> krne ka treka hai ke 10 ko 1 se swap krwa do it will become 1  10  7  6  14  9 then 10 and 7 ko swap krwa do it will become  1  7  10  6  14  9 then 10 and 6 ko tou ban jai ga 1  7  6  10  14  9 then 10 with 14 so it will become  1  7  6  10  14  9 and then 14 and 9 ko swap then it will become 1  7  6  10  9  14. So it means 1st largest element apne right place mein a jai ga u can c ke 14 bhara tha 10 se tou swap nhi hoa jo bhara ho ga woh right pe jata rhy ga swap hota rhy ga. So 14 is sorted now ab hamein  1  7  6  10  9 in ke bare mein sochna 1 and 7 ko compare result is 1  7  6  10  9 ignore ho gya cz 7 bhara then 7 compare 6 and result is swapping 1  6  7  10  9 then 7 with 10 ignore then 1  6  7  10  9 now 10 with 9 so 1  6  7  9  10 is swapped.(1  6  7  9  10  14) <- yaha tak round 2 hoa 1st round 14 ke sort hone tak tha 2nd round 10 ke sort hone tak and 3rd ab age  1  6  7  9 in mein ho ga so 1 and 6 ignore 6 and 7 ignore then 7 an 9 ignore. So 9 bhe sort ho gya in 3rd round, now round 4 -> 1  6  7 1 and 6 ignore and 6 and 7 ignore so 7 is sorted. Now 1  6 remianing and round 5 ->  1  6 so ignore and 6 is sorted, and last apni sahi jaga pe he ho ga.................

#include <iostream>
using namespace std;
//ask from sir size and size - 1
int bubbleSort(int array[6], int size) {
    for (int i = 0; i < size - i; i++) { 
        bool swapped = false;
        if (array[i] > array[i + 1]) {
            swap(array[i], array[i + 1]);
            swapped = true;
        }

    }

    if (swapped == false) {
        break;
    }
}

int main() {
    
    int array[6] = {9, 1, 6, 5, 2, 3};
    int size = 6;

    int bubbleSort = (array, size);
    cout << 
    return 0;
}