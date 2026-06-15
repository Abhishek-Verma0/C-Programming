//  writing own strlen funciton using pointer to implement what has been learned
// In C  string are array of char ther is no inbuilt string data type as in Cpp
// there is  one rule in C that array always become pointer to the first element of array in most expression even in function calls - printf(str[i]) compiler does printf(&str[i]);
#include <stdio.h>

int str_len(char *str){
    int len = 0;
    /**
     * it could be confusing like here we used direclty str[len] no dereferencing so let me be clear when we call str_len(ch) it is like str_len(&ch[0]) this is done by 
     * compiler automatically so if str[0] is at 100 memory address it is passed and later on when we do str[len] which we know c process as *(str+len) so next pointer 
     * value is derefrenced and checked 
     */
    //  most cool thing of C here it process str[len] as  *(str+len)  which explains how below line works 
    while(str[len]!='\0'){
        len++;
        
    }
    return len;
}

/**
 so some could think we can pass array like &ch  but will fail because it passes the address of whole array which is  int(*)[5] -for now suppose array has 5 elem could be int or char as we know in c strings are array of char so we willger like type not match type of error as fucniton expects str_len(char *) and gets str_len(char(*)[5]) 
 both are pointer but  point to diffrent type of object 
 ******* In simple line we can say function expects a pointer to char but gets pointer to array of char 
 */
int main(){
    char ch[] = "must be the water";
    printf("%d\n", str_len(ch));
}

/*
    while(*str){
        str++;
        len++;
        
    }
    return len;
    this will also work as \0 - has value 0 so for any non zero value loop will run which is any char but not  null character (\0)
*/