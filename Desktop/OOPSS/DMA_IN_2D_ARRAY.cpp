// #include<iostream>
// using namespace std;
 
// int main() {
    
//     int n;
//     cin >> n;
//     int **arr = new int *[n];  //Is trha double pointer create kr lia yani array create kr lia int * ka.
//     for(int i = 0; i < n; i++) {
//         arr[i] = new int[n];  //Har pointer ke coresponding array create kr dia loop se. Means ke arr[i] mein aik array daal do
//     }

//     for(int i = 0; i < n; i++) {
//        for(int j = 0; j < n; j++) {
//         cin >> arr[i][j];
//        }
//     }

//     for(int i = 0; i < n; i++) {
//        for(int j = 0; j < n; j++) {
//         cout << arr[i][j] << " ";
//        }
//        cout << endl;
//     }

//     return 0;
// }

//If number of rows and colomns are different

#include<iostream>
using namespace std;
 
int main() {
    
    int n;
    cin >> n;
    int m;
    cin >> m;
    int **arr = new int *[n];  //Is trha double pointer create kr lia yani array create kr lia int * type ka.
    for(int i = 0; i < n; i++) {  //int * = [[[[[[[[]]]]]]]] ab yeh dono part dynamically created hain ab free kaha se krein? agar int * wale ko pehle free kr dein ge tou sare memory jo = ke dusre trf hai woh leak ho jai ge, thats why pehle [[[[[[[[]]]]]]]] is part ko release krwain ge for loop se jese ese create kia for loop se
        arr[i] = new int[m];  //Har pointer ke coresponding array create kr dia loop se. Means ke arr[i] mein aik array daal do. Har row ke lie kuch column daal rhy.Jab aap 2D array banate hain, to har row ka length alag ho sakta hai. Isliye har bar new int[m] likhna zaroori hai taaki aap har row ke liye alag length specify kar sakein. Agar aap har row ki length alag nahi lena chahte, to aap ek fixed length ka 2D array bana sakte hain, jisme har row ka length same hoga.
    }

    for(int i = 0; i < n; i++) {
       for(int j = 0; j < m; j++) {
        cin >> arr[i][j];
       }
    }

    for(int i = 0; i < n; i++) {
       for(int j = 0; j < m; j++) {
        cout << arr[i][j] << " ";
       }
       cout << endl;
    }

    //Releasing memory

    for(int i = 0; i < n; i++) {
       
       delete [] arr[i];  // [[[[[[[[]]]]]]]] this part release 
    }
    delete []arr; //int * ese release krwa dia

    return 0;
}

// H.W : JAGGERED ARRAY CREATE KRNA

