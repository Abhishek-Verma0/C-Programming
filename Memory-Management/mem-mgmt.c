#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p = malloc(sizeof(int) * 5);
    if(p==NULL){
        printf("Allocation Failed\n");
        return 1;
    }
    for (int i = 0; i < 5;i++){
        p[i] = i * 2;
    }

    for (int i = 0; i < 5;i++){
        printf("%d ", p[i]);
    }

    free(p);
}