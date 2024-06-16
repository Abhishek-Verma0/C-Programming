// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the course code 0,1,2,3 :: ");
//     scanf("%d",&n);
//     if(n==0){
//         goto x;
//     }
//     else if(n==1){
//         goto y;
//     }
//     else if(n==2){
//         goto z;
//     }
//     else{
//         goto xy;
//     }
//     x:
//         printf("Go to room 1");
//         return 0;
//     y:
//         printf("Go to room 2");
//         return 0;
//     z:
//         printf("Go to room 3");
//         return 0;
//     xy:
//         printf("Go to room 4");
//         return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number for number of terms sum:: ");
    scanf("%d",&n);
    int sum=0;
    int st=0;
    int j=1;
    for (int i = 0; i < n; i++)
    {
        sum=sum*10+j;
        st+=sum;
        printf("%d \n",sum);
    }
    printf("sum is %d",st);
    
}