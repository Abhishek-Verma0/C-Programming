//  we will find the predecessor of given input alphabet if input is 'a' or 'A' then output 'z' or 'Z' else print the previous alphabet

#include<stdio.h>

int processInput(char ch){
    if (ch=='a')
    {
        printf("z");
    }
    else if (ch=='A')
    {
        printf("Z");
    }
    else
    {
        printf("%c",ch-1);
    }
    
    
    
}
int main(){
    char ch;
    scanf(" %c",&ch);
    processInput(ch);
}