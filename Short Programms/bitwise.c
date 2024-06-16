#include<stdio.h>
int main(){
    int n=18;
    int b;
    scanf("%d",&b);
    int x=1<<b-1;
    printf("%d",n|x);
}