//  to code minimum number of notes req for given amount denomination are  100 ,50 ,10,5,2,1
// input should be greater than 100
#include <stdio.h>
    int main(){
    int n;
    scanf("%d",&n);
    int a=n/100;
    int b=n%100/50;
    int c=n%100%50/10;
    int d=n%100%50%10/5;
    int e=n%100%50%10%5/2;
    int f=n%100%50%10%5%2/1;
    int sum= a+b+c+d+e+f;
    printf("%d\n",sum);


    
    printf("%d %d  %d %d  %d %d", a, b, c,d,e,f);

}