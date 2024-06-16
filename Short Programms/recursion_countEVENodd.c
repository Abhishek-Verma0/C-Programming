#include<stdio.h>
int eve=0;
int odd=0;
int even_odd(int n);
int main(){
    int x;
    printf("Enter the number :: ");
    scanf("%d",&x);
    even_odd(x);
    printf("even %d\n",eve);
    printf( "odd  %d\n",odd);

}

int even_odd(int  n){
    if(n>0){
    int dig=n%10;
    if (dig%2==0)
    {
        eve++;
        n/=10;
        even_odd( n);
    }
    else{
        odd++;
        n/=10;
        even_odd(n);
    }
    

    }
}