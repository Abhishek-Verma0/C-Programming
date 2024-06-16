//  we are going to print  using star a arrow form

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for (int j = 1; j <= i; j++) {
            if(i>j){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}

