// printing number of digit in number and sum of first and last digits in number using for loop

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    int d=0;
    int sum1=0;
    scanf("%d",&n);
    int org=n;
    for(i=0;n>0;i++)
    {
        int dig=n%10;
        d=d*10+dig;
        n/=10;
    }
    printf("Number of digits = %d\n",i);
     sum=org%10;
     sum1=d%10;
     
    int t=sum+sum1;
    printf("Sum = %d",t);
    return 0;
}