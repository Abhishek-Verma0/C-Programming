//  GCD using recursion is calculated using eculidian algorithm  
/*
***** According to eculidian -- we have to find remainder of largest with smallest ---e.g.  a=12,b=8 r=0 
                a%b=4   now b becomes a and remainder becomes b and it goes on till rem is not 0 when remainder is zero 
                the last b is gcd
*/
#include<stdio.h>
int gcd=0;
int rem=0;
int gc(int a,int b);

int main(){
int x,y;
printf("Enter the value of x , y :: ");
scanf("%d %d",&x,&y);
int g=gc(x,y);
printf("GCD is %d",g);



}

int gc(int  a,int b){
    if(a==0){
        return b;

    }
    else{
        return gc(b%a,a);
    }


}