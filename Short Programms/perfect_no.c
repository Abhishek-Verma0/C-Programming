// // to check for single number perfect number
// #include<stdio.h>
// int main(){
//     int n;
//     int s=0;
//     printf("Enter the number to check perfecet number  :");
//     scanf("%d",&n);
//     for (int i = 1; i < n; i++)
//     {
//         if(n%i==0){
//             s=s+i;
//         }
//     }
//     if (s==n)
//     {
//         printf("Perfect number");
//     }
//     else{
//         printf("not perfecet number");
//     }
    
// }


// **********************************************************************now perfect numbers in a range***************************************************************
#include<stdio.h>
int main(){
    int n1, n2;
    printf("Enter the number with single space n1 n2 :: \n");
    scanf("%d %d", &n1, &n2);
    printf("Perfect numbers are :: ");
    for (int i = n1; i < n2; i++)
    {
        int sum=0;
        for (int j = 1; j < i; j++)
        {
            if (i%j==0)
            {
                sum+=j;
            }
            
            
            
        }
        if (sum==i)
            {
                printf("%d ",i);
            }
        
    }
    
    return 0;
}