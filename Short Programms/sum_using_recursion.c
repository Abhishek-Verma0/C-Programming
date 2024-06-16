#include<stdio.h>
int sum=0;
int r=0;
int su(int n);
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    int c=su(x);
    printf("Sum of digit of number :: %d",c);
}
int su(int n){
    if(n>0){
        r=n%10;
        sum+=r;
        n/=10;
         su(n);
    }
    return sum;
}