// #include<stdio.h>
// int main(){
//     char c;
//     printf("Enter the character__");
//     scanf("%c",&c);
//     int a=(int)c;
//     if (a>=65 && a<=90)
//     {
//         printf("is upper case");
//     }
//     else if (a>=97 && a<=122)
//     {
//         printf("it is lower case");
//     }
//     else if (a>=48 && a<=57)
//     {
//         printf("It is number");
//     }

    

//  uppper to lower or upper to lower

#include<stdio.h>
int main(){
    char n;
    printf("Enter the character to convert into lower:: ");
    scanf("%c",&n);
    n=n+32;
    
    printf("\n%c",n);

}