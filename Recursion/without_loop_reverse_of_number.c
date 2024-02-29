// Here we are finding reverse of a number using recursion without using loops 
#include<stdio.h>

// declare rev as global if we declare inside function each time it's value will be set to zero
//   declare function for reverse
int rev=0;
int r(int x);


int main()
{
    int n;
    printf("Enter a number: ");
    scanf( "%d", &n );
    int re=r(n);
    printf("reversed number is %d",re);
}

//  write sufficient condtiton in function and call at end to keep going recursively till if condition is met
int r(int x){
    if (x>0)
    {
        rev=rev*10 + x%10;
        x/=10;
        
    r(x);
    }
    
    return rev;
    
}