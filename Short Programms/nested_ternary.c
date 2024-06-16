// #include<stdio.h>
// int main(){
//     int n;
//     double t;
//     scanf("%d",&n);
//     (n<250000) ? printf("%.2lf",0) : (n <=500000) ? t=0.025*n : (n<=1000000) ? t=0.1*n : t=0.2*n ;


// }

// #include<stdio.h>
// int main(){
//     int n;
//     double t;
//     scanf("%d",&n);
//     t = (n<250000) ? 0 : (n<=500000) ? 0.025*n : (n<=1000000) ? 0.1*n : 0.2*n;
//     printf("%.2lf",t);
// }

// #include <stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d",&a,&b);
//     c= a++ +  ++b;
//     printf("%d",c);
// }
#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int t;
    t=n>m;
    printf("t is %d",t);
    
    
    
}