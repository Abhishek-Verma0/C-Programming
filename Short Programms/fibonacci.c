#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms req : ");
    scanf("%d",&n);
    int n1=0;
    int n2=1;
    int n3=0;
    for (int i = 0; i <n; i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf(" %d",n3);
    }
    
}