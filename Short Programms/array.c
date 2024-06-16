// // insetion into array;
// // #include<stdio.h>
// // int main()
// // {

// // int a[11]= {10,20,30,40,50,60,70,80,90,100,110};

// // int max=0;
// // for (int i = 0; i < 11; i++)
// // {
// //     if(a[i]>max){
// //         max=a[i];
// //     }
// // }
// // printf("%d",max);







// // }

// #include<stdio.h>
// //#include<stdlib.h>
// int main(){
// int a[50],i,j,k, count = 0, dup[50], number;
// printf("Enter size of the array");
// scanf("%d",&number);
// printf("Enter Elements of the array:");
// for(i=0;i<number;i++){
// {
// scanf("%d",&a[i]);
// dup[i] = -1; }
// }
// printf("Entered element are: ");
// for(i=0;i<number;i++){
// printf("%d\t",a[i]);
// }
// //search for duplicate and remove
// for(i=0;i<number;i++){
// for(j = i+1; j < number; j++){
// if(a[i] == a[j]){
// for(k = j; k <number; k++){
// a[k] = a[k+1];
// }
// j--;
// number--;
// }
// }
// }
// printf("\nAfter deleting the duplicate element the Array is:");
// int total=0;
// for(i=0;i<number;i++){
// printf("%d ",a[i]);
// total=total+a[i];
// }
// printf("\nTotal sum of unique elements are%d",total);
// }



// inserting element in begining of an array
// #include<stdio.h>
// int main(){
//     int n,m;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     n++;
//     scanf("%d",&m);
//     for (int i = n-1; i >0; i--)   // shifting to right
//     {
//         arr[i]=arr[i-1];
//     }
//     arr[0]=m;
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
    
    
    
// }



// ṣwaapin of first and last then second and second last then so on 
// #include <stdio.h>

// int main() {
//     int n;
    
//     // Get the size of the array from the user
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
    
//     // Declare an array of size n
//     int arr[n];
    
//     // Get array elements from the user
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     // Swap elements pairwise
//     for (int i = 0; i < n / 2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[n - 1 - i];
//         arr[n - 1 - i] = temp;
//     }
    
//     // Print the swapped array
//     printf("Swapped array:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     return 0;
// }




//  code to determine a square matrix is symmteric or not

// #include <stdio.h>

// int main() {
//     int n;
    
//     // Get the size of the square matrix from the user
//     printf("Enter the size of the square matrix: ");
//     scanf("%d", &n);
    
//     // Declare a 2D array for the matrix
//     int matrix[n][n];
    
//     // Get matrix elements from the user
//     printf("Enter the elements of the square matrix:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
    
//     // Check if the matrix is symmetric
//     int isSymmetric = 1; // Assume matrix is symmetric initially
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             // Compare element at (i, j) with element at (j, i)
//             if (matrix[i][j] != matrix[j][i]) {
//                 isSymmetric = 0; // If not equal, matrix is not symmetric
//                 break;
//             }
//         }
//         if (!isSymmetric) {
//             break; // No need to continue checking if symmetry is violated
//         }
//     }
    
//     // Print result
//     if (isSymmetric) {
//         printf("The matrix is symmetric.\n");
//     } else {
//         printf("The matrix is not symmetric.\n");
//     }
    
//     return 0;
// }



//  code for merging two array of same size but alternate element in meerged array if first is from array1 and second is from array2


// #include <stdio.h>

// int main() {
//     int n;
    
//     // Get the size of the arrays from the user
//     printf("Enter the size of the arrays: ");
//     scanf("%d", &n);
    
//     // Declare two arrays of size n
//     int arr1[n], arr2[n];
    
//     // Get elements of first array from the user
//     printf("Enter %d elements for array 1:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr1[i]);
//     }
    
//     // Get elements of second array from the user
//     printf("Enter %d elements for array 2:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr2[i]);
//     }
    
//     // Merge arrays with alternating elements
//     int merged[2 * n];
//     int idx1 = 0, idx2 = 0;
//     for (int i = 0; i < 2 * n; i += 2) {
//         merged[i] = arr1[idx1++];
//         merged[i + 1] = arr2[idx2++];
//     }
    
//     // Print the merged array
//     printf("Merged array with alternating elements:\n");
//     for (int i = 0; i < 2 * n; i++) {
//         printf("%d ", merged[i]);
//     }
//     printf("\n");
    
//     return 0;
// } 



//  to find non duplicate elemnets in array 


// #include <stdio.h>

// int main() {
//     int n, i, j, isUnique;

//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("The non-duplicate element is: ");
//     for (i = 0; i < n; i++) {
//         isUnique = 1;  // Assume the element is unique initially

//         for (j = 0; j < n; j++) {
//             if (i != j && arr[i] == arr[j]) {
//                 isUnique = 0;  // Found a duplicate, so not unique
//                 break;
//             }
//         }

//         if (isUnique) {
//             printf("%d ", arr[i]);
//             break;  // Print only the first non-duplicate element
//         }
//     }

//     if (!isUnique) {
//         printf("There are no non-duplicate elements in the array.\n");
//     }

//     return 0;
// }




//  to find second occurence index


// #include <stdio.h>

// int main() {
//     int n, i, element, found = 0;

//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the element to find its occurrence: ");
//     scanf("%d", &element);

//     for (i = 0; i < n; i++) {
//         if (arr[i] == element) {
//             found++;
//             if (found == 2) {
//                 printf("Second occurrence found at index %d\n", i);
//                 break; // Exit after finding second occurrence
//             }
//         }
//     }

//     if (found == 1) {
//         printf("One occurrence found.\n");
//     } else if (found == 0) {
//         printf("Element %d not found.\n", element);
//     } else { // found > 2 (more than two occurrences)
//         printf("More than two occurrences of element %d found.\n", element);
//     }

//     return 0;
// }



//  second smallest

//  needs some changes


// #include <stdio.h>

// int main() {
//   int arr[] = {5, 3, 2, 1, 4};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   if (n < 2) {
//     printf("Array size must be at least 2\n");
//     return 1; // Indicate error
//   }

//   // Initialize variables for smallest and second smallest elements
//   int smallest = arr[0], secondSmallest = arr[1];

//   // Find the smallest and second smallest elements
//   for (int i = 1; i < n; i++) {
//     if (arr[i] < smallest) {
//       // Update both smallest and secondSmallest if a new smallest is found
//       secondSmallest = smallest;
//       smallest = arr[i];
//     } else if (arr[i] < secondSmallest && arr[i] != smallest) {
//       // Update secondSmallest only if a new element is smaller than it but not the smallest
//       secondSmallest = arr[i];
//     }
//   }

//   // Check if second smallest was found
//   if (secondSmallest == smallest) {
//     printf("All elements are equal or there is no second smallest element\n");
//     return 1; // Indicate no second smallest
//   }

//   printf("Second smallest element is %d\n", secondSmallest);

//   return 0;
// }



//  sorting char in array


// #include <stdio.h>

// int main() {
//   int size;

//   // Get array size from user
//   printf("Enter the size of the character array: ");
//   scanf("%d", &size);

//   if (size <= 0) {
//     printf("Array size must be positive\n");
//     return 1; // Indicate error
//   }

//   char arr[size];

//   // Get characters from user
//   printf("Enter %d characters (including spaces and special characters):\n", size);
//   for (int i = 0; i < size; i++) {
//     scanf(" %c", &arr[i]); // Use space before %c to handle spaces
//   }

//   // Sort the array using bubble sort (without functions)
//   for (int i = 0; i < size - 1; i++) {
//     for (int j = 0; j < size - i - 1; j++) {
//       if (arr[j] > arr[j + 1]) {
//         char temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//       }
//     }
//   }

//   // Print the sorted array
//   printf("Sorted array (based on ASCII values):\n");
//   for (int i = 0; i < size; i++) {
//     printf("%c ", arr[i]);
//   }
//   printf("\n");

//   return 0;
// }


//  insertion at any index;


// #include <stdio.h>

// int main() {
//   int size, pos, element;

//   // Get array size from user
//   printf("Enter the size of the array: ");
//   scanf("%d", &size);

//   if (size <= 0) {
//     printf("Array size must be positive\n");
//     return 1; // Indicate error
//   }

//   int arr[size];

//   // Get elements from user
//   printf("Enter %d elements for the array:\n", size);
//   for (int i = 0; i < size; i++) {
//     scanf("%d", &arr[i]);
//   }

//   // Get element to insert and position
//   printf("Enter the element to insert: ");
//   scanf("%d", &element);

//   printf("Enter the position (0 to %d) where you want to insert: ", size - 1);
//   scanf("%d", &pos);

//   // Check for valid position
//   if (pos < 0 || pos > size) {
//     printf("Invalid position. Please enter a value between 0 and %d\n", size - 1);
//     return 1; // Indicate error
//   }

//   // Handle insertion logic directly within main
//   if (pos >= size) {
//     // If position is at the end (or beyond), simply append the element
//     arr[size] = element;
//   } else {
//     // Shift elements one position to the right starting from the given position
//     for (int i = size - 1; i >= pos; i--) {
//       arr[i + 1] = arr[i];
//     }
//     // Insert the element at the desired position
//     arr[pos] = element;
//   }

//   // Print the modified array
//   printf("Array after insertion:\n");
//   for (int i = 0; i <= size; i++) { // Print size+1 elements including the new one
//     printf("%d ", arr[i]);
//   }
//   printf("\n");

//   return 0;
// }


//  sorting array of number in asc



// 
// #include<stdio.h>
// int main(){
//   int n;
//  int m;
// scanf("%d%n",&n,&m);
// printf("%d %d",m,n);
// }





// *****************number frequency from 0-9 ***************************

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

// int no[10]={0,0,0,0,0,0,0,0,0,0};
// char str[1000];
// scanf("%s",str);
// for(int i=0;i<1+strlen(str);++i)
// {
//     if(str[i]>47 && str[i]<58)
//     {
//         no[str[i]-48] +=1;
//     }
// }
// for(int i=0;i<10;++i)
// printf("%d ",no[i]);
//    return 0;
// }


