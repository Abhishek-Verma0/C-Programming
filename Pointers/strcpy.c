#include<stdio.h>


void str_cpy(char *str1, char *str2){
    while(*str2){
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0'; // because we never copy the null character that means we will never know when string ended
}

int main(void) {
    char buffer[100];           
    str_cpy(buffer, "minx");
    printf("%s\n", buffer);     // hello

    char buf2[100];
    str_cpy(buf2, "");          
    printf("[%s]\n", buf2);     // []
    return 0;
}
