// /find the stopping criteria else it may go for infinite loop never ending

// recursion when function call itself again and again

// #include<stdio.h>
// int factorial(int n);


// int main(){
// int a;
// printf( "Enter a number : ");
// scanf("%d",a);
// int res= factorial(a);
// printf("Factorial id %d",res);
// }
// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }

// using recursion sum upto n numbers
#include <stdio.h>
int sum(int a);
int main(){
    int n;
    printf("enter the number:: ");
    scanf("%d",&n);
    int res= sum(n);
    printf("%d",res);
    
}
int sum(int a){
    if  (a == 1) {
        return 1;
    }
    else {
        return (a + sum(a - 1));
    }
}