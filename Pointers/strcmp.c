//  writing own string comparsion function
#include<stdio.h>

//  let's try to do without stdbool.h 

int strcmp(char* str1, char* str2){
    
    while (*str1 && *str2 && (*str1==*str2))
    {
        
            str1++;
            str2++;
    }
    return *str1 - *str2;
}
//  so basically strcmp work like  if all char are same we get 0 and if not same then we get diff of ascci(char1)- ascci(char 2) respectively from str1 and str2 which tell by how much they differ
int main(){
    char st[] = "khushi";
    char pt[] = "pratiksha";
    printf("%d\n", strcmp(st, pt));
}