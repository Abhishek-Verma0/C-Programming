/*Memory address is location of the variable in memory where it is stored 
 Do not mistake if pt is array then &pt will give the memory address of the whole array which is mostly returns address of first element of array 
 same as pt return the address of first element of array 
 


 Keep in mind &pt is not pointer it simply gives the address of the variable in memory 
 If we need to store the address then we need pointer so we can have var like int *pt;  but never int &pt;

 Later on we will learn about pointers more ...
*/

//  also we print pointer with format specifer %p or can say address

#include<stdio.h>
int main(){
    int pt=10;
    printf("%d",pt);
    //  printing address of var
    printf("\n%p",&pt);
    
    int *pts=&pt;
    printf("\n%p",pts);
    printf("\n");

    int arr[5]={1,4,3,5,8};
    printf("%p\n",arr);
    printf("%p\n",&arr);
  
}