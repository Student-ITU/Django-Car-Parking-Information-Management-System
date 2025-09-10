// #include <stdio.h>

// int main () {
//     int age = 22;
//     printf ("Age is %d \n", age);
//     scanf ("%d", &age); //   scanf ("Age is : %d", &age); agr ese likha tou same he de ga answer that is 22 even ke input change bhe kro cz yeh input le rhy yaha nhi likhne koi line compiler ko pata nhi chlta
//     printf ("Age is : %d", age);
//     return 0;
// }

//

// #include <stdio.h>

// int main () {

//     // int area;

//     // printf ("Enter the number -> ");
//     // scanf ("%d", &area);

//     // int area1 = area * area;

//     // printf ("Area is -> %d \n", area1);

//     // printf ("%d \n", 4 < 4); // ans = 1

//     while (0) { //true false nhi likh sakte 1 yah 0 likhna hota
//         printf ("hi");
//     }


//     return 0;
// }
// Inbuilt function and user defined function hote 2 types of function like swap, scanf etc inbuilt and palindrome etc yeh user defined
//pointers ke address ko store krne ke lie yah print krne ke lie %p hota like ("%p \n", &a); sir se poochna ke %u bhe dia hoa apna clg ne woh kyun ? unsigned int keh rhy is ke samjh nhi a rhy
// Tou agar multiple values chaye ho hamienreturn mein dusre function mein tou ham pass by reference krte hain tou is thra pointer kaam ate in functions jis code ke photo le woh dekhna sum, prod, avg.

// #include <stdio.h>

// // Drivers code
// int main()
// {
// 	int* arr1[5][5] = { { 0, 1, 2, 3, 4 },
// 					{ 2, 3, 4, 5, 6 },
// 					{ 4, 5, 6, 7, 8 },
// 					{ 5, 4, 3, 2, 6 },
// 					{ 2, 5, 4, 3, 1 } };
// 	int arr2[5][5];

// 	// Initialising each element of the
// 	// pointer array with the address of
// 	// element present in the other array
// 	for (int i = 0; i < 5; i++) {
// 		for (int j = 0; j < 5; j++) {
// 			arr2[i][j] = arr1[i][j];
// 		}
// 	}

// 	// Printing the array using
// 	// the array of pointers
// 	printf("The values are\n");
// 	for (int i = 0; i < 5; i++) {
// 		for (int j = 0; j < 5; j++) {
// 			printf("%d ", arr2[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	return 0;
// }
