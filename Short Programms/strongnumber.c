// strong number are number whose each digit factorial sum is equal to number
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int org=n;
    int sum=0;
    int f=1;
    while (n>0)
    {
        int digit=n%10;
        for (int i = 1; i<=digit; i++)
    {
        f*=i;    
    }
    n/=10;
    sum+=f;
    }
    printf("sum %d\n",sum);
    if (sum==org)
    {
        printf("Strong number");
    }
    else{
        printf("not strong");
    }
    
    

}