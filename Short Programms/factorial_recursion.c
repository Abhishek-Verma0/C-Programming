#include<stdio.h>
int factorial(int n); //initiating of function
int main(){
    int num;
    scanf("%d",&num);
    int t=factorial(num);
    printf("%d ",t);
}

// now we write neccessary condition for function to call recursively
int factorial(int n){
    if (n==1)
    {
        return 1;
    }
    else{
        return  n*factorial(n-1); //it calls function again but after updating value as n-1
    }
    
}