//  finding largest and second largest digit in given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter the amount ");
    scanf("%d",&n);
    int larg=0;
    int small=0;
    int count=0;
    while(n>0){
        int dig=n%10;
        if(dig>=larg){
            small=larg;
            larg=dig;
        }
        else if (dig<larg && dig>small)
        {
            small=dig;
        }
        n/=10;
        count++;
    }
if (count!=1)
{
    printf("The largest values is %d\n",larg);
    printf("Second largest values is %d\n",small);
}

}