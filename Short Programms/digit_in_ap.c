// we need to find that given number contains digit in AP or not for example 1234 it has digits in ap also 369
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    auto int n;
    scanf("%d",&n);
    int prediff=-1;
    int boo=1;
    while (n>0)
    {
        int prdig=n%10;
        n/=10;
        int ndig=n%10;
        if(prediff!=-1){
            int diff=ndig-prdig;
            if (diff!=prediff)
            {
                boo=0;
                break;
            }
            
        }
        prediff=ndig-prdig;
    }
    if(boo){
        printf("In ap");
    }
    else{
        printf("not in ap");
    }
    
    
}