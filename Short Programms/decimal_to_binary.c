#include<stdio.h>
int main(){
    int n;
    int rem=0,sum=0,m=1;

    printf("Enter the number :: ");
    scanf("%d",&n);
    
    while (n>0)
    {
        rem=n%2;
        sum=sum+rem*m;
        m=m*10;
        n=n/2;
    }
    printf("%d",sum);
    
}