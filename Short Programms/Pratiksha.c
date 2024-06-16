// #include<stdio.h>

// int main(){
//     int t,sasha,brenda;
//     scanf("%d",&t);
//     int i=0;
//     while (i<t) 
//     {
//         scanf("%d %d", &sasha, &brenda);
//         if (sasha>brenda)
//         {
//             printf("Sasha\n");
//         }
//         else if (brenda>sasha)
//         {
//             printf("Brenda\n");
//         }
//         else{
//             printf("Tie\n");
//         }
//         i++;
        
        
//     }
    
// }



// digital root of number is adding digits of number ill it give 1 digit number e.g 873597 =8+7+3+5+9+7 =39 ---3+9=12--1+2=3   3 is digital root

// #include <stdio.h>
// int main(){
//     int n,step=0,sum=0;
//     scanf("%d",&n);
//     int num=0;
//     while (n>9)
//     {
//     while (n>=9)
//  {  
//     sum+=n%10;
//     n=n/10;
//  }

//  sum=sum+n;
//  n=sum;
//  sum=0;
//  step+=1;
// }

// printf("Digital root: %d\n",n);
// printf("NUmber of steps: %d\n",step);
    
// }

// skipping zero in reverse of number
// #include<stdio.h>
// int main(){
//     int n,r;
//     scanf("%d",&n);
//     int rev=0;
    
//     while(n>0){
//         while(n>0)
//         {
//         r=n%10;
//         if(r==0){
//             n/=10;
            
//             break;
//          }
//          rev=rev*10+r;
//             n/=10;
            
//         }
//         } 

//         printf("%d",rev);
        
        
//     }


//   we give integer n input and we get odd indexed as fibonacci and even indexed as prime number write a programm to find nth term of sequence

// #include<stdio.h>
// int main(){
// int x;
// printf("Enter a number :: ");
// scanf("%d", &x);
// int a=0,b=0,c=1;
// int y=2;
// int z;
// for (int i=1; i<=x;i++){
//     if (i%2!=0)
//     {
//         z=c;
//         a=b;
//         b=c;
//         c=a+b;
//     }
//     else{
//         for (int i =y;  ;i++)
//         {
//             int a1=0;
//             for (int j =2 ; j< i; j++)
//             {
//                 if (i%j==0)
//                 {
//                     a1=1;
//                 }  
//             }
//             if (a1==0)
//             {
//                 z=i;
//                 y=i+1;
//                 break;
//             }    
//         }   
//     }   
// }
// printf("\nnth term : %d",z);
// return 0;
// }



// finding greatest prime divisor of number
// #include <stdio.h>

// int main() {
//     int num, largest = -1;

//     // Input the integer
//     printf("Enter an integer: ");
//     scanf("%d", &num);

   
//     for (int i = 2; i <= num; ++i) {
//         while (num % i == 0) {
//             largest = i;
//             num /= i;
//         }
//     }

//     // Print the result
//     if (largest == -1 || largest == num) {
//         printf("The number %d not have prime divisor.\n", num);
//     } else {
//         printf("The largest prime divisor is  : %d\n",largest);
//     }

//     return 0;
// }






// finding that given input integer contains digit in increasing order if yes then print yes also if it is of 1 digit the print yes\
//  I assumed number at it's one's place is smallest and is increasing towards ten's hundred and so on.
#include<stdio.h>
int main(){
    long long int n;
    printf("Enter the number :: ");
    scanf("%lld",&n);
    long long int small=0;
    long long int big=0;
    int desc=1;


    while (n>0)
    {
        int digit=n%10;
        if (digit>big)
        {
            small=big;
            big=digit;
        }
        else if(big>digit){
            desc=0;
            break;
        }
        n/=10;
        
    }
    if (desc)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    }