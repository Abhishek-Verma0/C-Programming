// #include<stdio.h>
// int main(){
//     int n=10;
//     int *po;
//     po=&n;
//     printf("%d\n",po);
//     // derefrencing a pointer to an integer gives the value of that memory location  we print using =" * "
//     printf("%d",*po);
// }

// swapping two  numbers using pointers in c
    // #include <stdio.h>
    // void swap(int *x, int *y) {
    //     int temp = *x;
    //     *x = *y;
    //     *y = temp;
    // }
  
    // int main() {
    //     int x = 5;
    //     int y = 7;
        
    //     printf("Before swapping: x = %d, y = %d\n", x, y);
  
    //     swap(&x, &y);
  
    //     printf("After swapping: x = %d, y = %d\n", x, y);
    
    //     return 0;
    // }

    


    // swapping of two numbers in c
    // #include <stdio.h>
    // void swap(int *x, int *y) {
    //     int temp = *x;
    //     *x = *y;
    //     *y = temp;
    // }

    // int main() {
    //     int x = 1234;
    //     int y = 9876;
        
    //     printf("Before swapping: x = %d, y = %d\n", x, y);
  
    //     swap(&x, &y);
  
    //     printf("After swapping: x = %d, y = %d\n", x, y);
    
    //     return 0;
    // }

// ****************************************************************************************************************************

    //  malloc ---- known as memory allocation used to dynamically allocate single large block of memory at runtime it returns the pointer of void type which can be cast to anyother pointer of any form it initialise with garbage value
    // the syntax of malloc ---------  ptr=(castype*)malloc(n*(size of data type used ))



    //  we use stdlib.h for these tpye of malloc calloc realloc free

    // #include<stdio.h>
    // #include<stdlib.h>
    // int main(){
    //     int n;
    //     float avg;
    //     printf("Enter the number of integers = ");
    //     scanf("%d",&n);
    //     // allocate dynamic memory to store n numner of values using malloc 
    //     int *p;  //initialsing pointer to store address of block of memory
    //     p=(int *)malloc(n * sizeof(int));
    //     int i;
    //     // insert the elements in dynamically allocated block
    //     printf("\nEnter n integers one by one in allocated memory block\n");
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%d",p+i);  //here we use i to denote the address of block number to which current input will belong
    //     }


    //     int sum=0;
    //     // DISPLAY THE SVAED ELEMENT IN DYNAMIC MEMORY BLOCK

    //     printf("\nElements inserted in the dyanmic memory are\n");

    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("\n%d",*(p+i));     // here we use pointer to show real values of the block if we remove * then we will see memory address
    //         sum+=*(p+i);
    //     }

    // avg=(float)sum/n;
    // printf("\nAverage of all elements in the block is %.2f",avg);

    //     printf("\nSum of all elements in the block is %d",sum);
    //     free(p); // memory is deallocated or say it is released         
        
        

    // } 






    /*
    //  CALLOC --- contigious memory allocation -- initilase each block with default value  0   --- has two arguemnets  -- 

    In calloc we have diffrent block for each value

    syntax is  --- p=(cast-type *)calloc(n,sizeof(type));

    */

// #include<stdio.h>
// #include<stdlib.h>
// int main(){

//     int n;
//     printf("Enter the numnber of float to store :: ");
//     scanf("%d",&n);
//     float *p;
//     p=(float *)calloc(n,sizeof(float));
//     int i;
//     printf("\n Insert %d values one by one :: ",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%f",p+i);
//     }
//     float mx;
//     mx=*(p+0);
//     // compare mx with all the inserted values in dynamic memory space

//     for (int i = 0; i < n; i++)
//     {
//         if(mx<*(p+i)){
//             mx=*(p+i);
//         }
//     }

//     // display all the stored values in dyanmic allocated blocks

//     printf("\nSaved decimal values are\n: ");
    

//     for (int i = 0; i < n; i++)
//     {
//         printf("\n%.1f\n",*(p+i));
//     }
//     printf("Largest values is :: %.1f",mx);

//     free(p);
    
    
    

// }






/*
***** to extend size or number of elements stored in  dynamic memory block allocated we use---------- relalloc()**********

syntax of realloc is ---  p=(float *)realloc(pointer,new size);


*/


/*
#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    printf("Enter the numnber of float to store :: ");
    scanf("%d",&n);
    float *p;
    p=(float *)calloc(n,sizeof(float));
    int i;
    printf("\n Insert %d values one by one :: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f",p+i);
    }
    int m=n;
    //  enter the new value 
    printf("Enter the  new values of n= ");
    scanf("%d",&n);
    p=(float *)realloc(p,n*sizeof(float));  // here we use realloc() to extend the memory block 
    printf("\nEnter the next values :: \n");
    for (int i = m; i < n; i++)
    {
        scanf("%f",p+i);
    }
    float mx;
    mx=*(p+0);
    // compare mx with all the inserted values in dynamic memory space

    for (int i = 0; i < n; i++)
    {
        if(mx<*(p+i)){
            mx=*(p+i);
        }
    }

    // display all the stored values in dyanmic allocated blocks

    printf("\nSaved decimal values are\n: ");
    

    for (int i = 0; i < n; i++)
    {
        printf("\n%.1f\n",*(p+i));
    }

    



    printf("Largest values is :: %.1f",mx);

    free(p);
    
    
    

}
*/



// finding smallest number in dynamica allocated memory block

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the  number of values to be stored : ");
    scanf("%d",&n);
    int *p;
    p=(int*)malloc(n*sizeof(int));
    printf("\nEnter the values to be stored\n");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",p+i);
    }
    int mn=*(p+0);
    for (int i = 0; i < n; i++)
    {
        if(*(p+i)<mn){
            mn=*(p+i);
        }
    }

    printf("\nSmallest value is  %d",mn);
    
    

}




#include <stdio.h>
#include<math.h>

int main(){

}