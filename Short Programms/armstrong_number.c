// *** armstrong number are like if number is 3 digits then cube of each didgit and sum must be equal to the number  means number of digit in number equals to power of each digit and their sum

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number to check for armstrong: ");
    scanf("%d\n",&n);
    int sum=0;  
    int org=n;
    
    int count=log10(n); //log10(123) --will give 2  so it always gives one less than number of digit in a number
    count+=1;
    while (n>0) 
    {
        int rem=n%10;
        sum=sum+(pow(rem,count)); //power function returns answer in double so we need to decalre as double 
        n/=10;                     //to remove last digit from number
    }
    if (org==sum)
    {
        printf("Number is armstrong number");
    }
    else
    {
        printf("Number is not armstrong number");
    }
    
    
    
    
}