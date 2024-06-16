//  We are going to find prime numbers upto n 
#include<stdio.h>
int count =0;
int Isprime(int n); 
int main(){
    int num;
    printf("Enter the number :: ");
    scanf("%d",&num);
    Isprime(num);
    
}
int Isprime(int n){
    for (int i = 2; i <= n; i++)
    {
    int check=1;
    
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                check=0;
                break;
            }   
        }
        if(check){
            printf("%d ",i);
            count++;
        }
        
    }
            printf("\nTotal prime numbers:: %d",count);
    
}




