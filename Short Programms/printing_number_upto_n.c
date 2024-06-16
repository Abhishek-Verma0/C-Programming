#include<stdio.h>
int x=1;
int func( );
int main()
{
    func();
}
int func(){
    
    if(x<=10){
        printf("%d\n",x);
        x++;
        func();
    }
    return 0;
}