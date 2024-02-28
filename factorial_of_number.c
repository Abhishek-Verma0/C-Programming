// here we are going to calcualte factorial of a number upto n and also sum of of all factorial upto n
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int f=1;
    printf("Enter the number to calculate factorial:: ");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++)  //this loops works like 1*2*3*4*5...upto n here i is incremented then again multiplied into f
    {
        f*=i;
        sum+=f;
        printf("\nFactorial of %d is %d\n",i,f); //if you want to print factorial of only given input number removem or comment this line
        
    }
    printf("\nFactorial of %d is %d.",n,f);              //this prints factorial of given 'n' number as input
    printf("\nSum of all factorial upto %d is %d.",n,sum);
    
}