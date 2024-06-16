// user input a integer and we will check all numbers from 1 to n who have exactly 9 factors and print them also how many 
#include<stdio.h>

int factor_9(int n); //decalring a function to check for 9 factors

int main(){
int num;
scanf("%d",&num);
factor_9(num);

}

int factor_9(int n){

int numc=0;
for(int i=1; i<=n;i++){
    int count=0;
    for (int j = 1; j <= i; j++)
    {
        if (i%j==0)
        {
            count++;
            
        }

        
    }
    if (count==9)
    {
        printf("%d ",i);
        numc++;
    }

}
printf("\n%d ",numc);


}