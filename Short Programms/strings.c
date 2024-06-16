// how to declare strings and  calculating the length without using builtin functions also reverse of string
// #include<stdio.h>
// int main(){
//     int l=0;
//     char str[60];
//     printf("Enter a string: ");
//     scanf("%s",str);

//     for(int i=0;str[i]!='\0';i++){
//         l++;
//     }

//     printf("The length of the string is: %d",l);

// int j=0;

//     char rev[60];
//     for (int i = l-1; i>=0; i--,j++)
//     {
//         rev[j]=str[i];
//     }
//     rev[j]='\0';
//     //  printing the reversed dtring
//     printf("\nThe reversed string is: %s",rev);
//     return 0;
    
// }
// strcmp is used for  comparing two strrings




//  ***********************************************checking the palindrome string
// #include<stdio.h>
// int main(){
//     int l=0;
//     char str[60];
//     char rev[60];
//     printf("enter the string: ");
//     scanf("%s",str);
//     int j=0;
//     for(int i=0;str[i]!='\0';i++){
//         l++;
//     }
//     printf("\nThe string length %d",l);
//     for (int i = l-1; i>=0; i--)
//     {
//         rev[j]=str[i];
//         j++;
        
//     }
//     rev[j]='\0';
//     printf("\n%s",rev);

//     int res=1;
//     for (int i = 0; i < l; i++)
//     {
//         if (str[i]!=rev[i])
//         {
//             res=0;
//             break;
//         }
        
//     }
//     if (res){
//         printf("\nPalindrome");
//     }
//     else{
//         printf("\nNot a palindrome");
//     }
    
    
//     return 0;
    
// }




// ************************ Making copy of strings  to other strings ****************

// #include<stdio.h>
// int main(){
//     int l=0;
//     char str[60];
//     char copy[60];
//     printf("enter the string: ");
//     scanf("%s",str);
//     int v=0;
// while(str[v]!='\0'){
//     l++;
//     v++;
// }
// printf("\nLength is= %d\n",l);

// for (int i = 0; i < l; i++){
//     copy[i]=str[i];
// }
// copy[l]='\0';

// printf("\nThe copied string is: %s",copy);
    
// }




// **************************Concatenate two strings ****************
// #include<stdio.h>
// int main(){
//     int l1=0;
//     int l2=0;
//     char str1[60];
//     char str2[60];
//     char concat[120];
//     printf("enter the first string: \n");
//     fgets(str1,60,stdin);
//     printf("%s\n",str1);
    
//     for(int i=0;str1[i]!='\0' && str1[i]!='\n';i++){
//         l1++;
//     }
//     printf("enter the second string: \n");
//     fgets(str2,60,stdin);
//     printf("%s\n",str2);
//     printf("\nLength is= %d\n",l1);
//     for (int i = 0; str2[i]!='\0' && str2[i]!='\n'; i++)
//     {
//         l2++;
//     }
//     printf("second length :: %d",l2);
    
//     l2=l1+l2;
//     for(int i=l1; i<l2;i++){

//     }
// }




/*             97-122  captial alphabets
                65-90 --- small letters
                32 == space
                48-57 -- digits
                other than theese are special characters
*/



    //  fgets(st,50,stdin);
    // scanf("%[^\n]s",st); this is a way to 

// *********************************************Number of names input ***************************** usng loops
/*
#include<stdio.h>
int main(){
    
    int n;
    printf("enter the number  names \n");
    scanf("%d",&n);
    getchar();
    
    char st[n][50];
    for(int i=0;i<n;i++){
        if (st[i]=='\0')
        {
            break;
        }
        else{

        fgets(st[i],49,stdin);
        }
        
    }
    for(int i=0;i<n;i++){
        printf("%s",st[i]);
    }
}
*/



// You are using GCC
// #include<stdio.h>
// #include<ctype.h>
// int main(){
//     char vow[]="aeiouAEIOU";
//     char st[150];
//     char st1[50];
//     char st2[50];
//     fgets(st,50,stdin);
//     fgets(st1,50,stdin);
//     fgets(st2,50,stdin);
//     int le=0;
//     for(int i=0;st[i]!='\n';i++){
//         le++;
//     }
//     int len=0;
//     int len1=0;
//     for(int i=0;st[i]!='\n';i++){
//         for(int j=0;j<10;j++){
//             if(st[i]==vow[j]){
//                 st[i]='$';
//                 break;
//             }
//         }
//     }
//     for(int i=0;st1[i]!='\n';i++){
//         for(int j=0;j<10;j++){
//             if(st1[i]!=vow[j]){
//                 st1[i]='#';
//                 break;
//             }
//         }
//         len++;
//     }
//     for(int i=0;st2[i]!='\n';i++){
//         st2[i]=st2[i]+32;
//         len1++;
//     }
    
    
//     for(int i=0;st1[i]!='\n';i++){
//         st[le +i]=st1[i];
//     }
//     le+=len;
//     for(int i=0;st2[i]!='\n';i++){
//         st[le + i]=st2[i];
//     }
//    puts(st);
    
    
    
    
// }



// #include <stdio.h>

// int main() {
//     char vow[] = "aeiouAEIOU";
//     char st[100];  // Increased size to avoid potential buffer overflow
//     char st1[50];
//     char st2[50];

//     // Input using fgets with size limit for safer string handling
//     printf("Enter the first string: ");
//     fgets(st, sizeof(st), stdin);

//     printf("Enter the second string: ");
//     fgets(st1, sizeof(st1), stdin);

//     printf("Enter the third string: ");
//     fgets(st2, sizeof(st2), stdin);

//     // Remove trailing newline from each string (if present)
//     int i = 0;
//     while (st[i] != '\0' && st[i] != '\n') {
//         i++;
//     }
//     if (st[i] == '\n') {
//         st[i] = '\0';
//     }

//     i = 0;
//     while (st1[i] != '\0' && st1[i] != '\n') {
//         i++;
//     }
//     if (st1[i] == '\n') {
//         st1[i] = '\0';
//     }

//     i = 0;
//     while (st2[i] != '\0' && st2[i] != '\n') {
//         i++;
//     }
//     if (st2[i] == '\n') {
//         st2[i] = '\0';
//     }

//     int len = 0;
//     // Find length of first string (excluding null terminator)
//     i = 0;
//     while (st[i] != '\0') {
//         len++;
//         i++;
//     }

//     // Modify first string (replace vowels with '$')
//     for (i = 0; st[i] != '\0'; i++) {
//         int isVowel = 0;
//         for (int j = 0; vow[j] != '\0'; j++) {
//             if (st[i] == vow[j]) {
//                 isVowel = 1;
//                 break;
//             }
//         }
//         if (isVowel) {
//             st[i] = '$';
//         }
//     }
// int len1=0;
//     // Modify second string (replace consonants with '#') - similar logic as before
//     for (i = 0; st1[i] != '\0'; i++) {
//         int isVowel = 0;
//         for (int j = 0; vow[j] != '\0'; j++) {
//             if (st1[i] == vow[j]) {
//                 isVowel = 1;
//                 break;
//             }
//         }
//         len1++;
//         if (!isVowel && st1[i] != ' ') {
//             st1[i] = '#';
//         }
//     }

//     // Modify third string (convert to lowercase)
//     int str2_len = 0;
//     for (i = 0; st2[i] != '\0'; i++) {
//         str2_len++;
//         if (st2[i] >= 'a' && st2[i] <= 'z') {
//             st2[i] = st2[i] -32 ;
//         }
//     }

//     // Concatenate modified strings (assuming enough space in st)
//     int combined_len = len + str2_len + len1;  // Corrected length calculation
//     if (combined_len >= sizeof(st)) {
//         printf("Error: Combined string length exceeds available space!\n");
//         return 1;
//     }

//     i = 0;
//     int j = len;
//     while (st1[i] != '\0') {
//         st[j] = st1[i];
//         i++;
//         j++;
//     }

//     i = 0;
//     while (st2[i] != '\0') {
//         st[j] = st2[i];
//         i++;
//         j++;
//     }
//     st[j] = '\0';  // Add null terminator after concatenation in order to prevent extra output for your output str 

//     printf("Modified string: %s\n", st);

//     return 0;
// }




// *******************Simple input of names using strings and printing them using puts and input using fgets and validating the new line and null charachter

// #include<stdio.h>
// int main(){
//     char st[50];
//     char st1[50];
//     char st2[50];
//     fgets(st,50,stdin);
//     fgets(st1,50,stdin);
//     fgets(st2,50,stdin);
//     int i=0;
//     while (st[i]!='\0' && st[i]!='\n')
//     {
//         i++;
//     }
//     if(st[i]=='\n'){
//         st[i]='\0';
//     }
//      i=0;
//     while (st1[i]!='\0' && st1[i]!='\n')
//     {
//         i++;
//     }
//     if(st1[i]=='\n'){
//         st1[i]='\0';
//     }

//      i=0;
//     while (st2[i]!='\0' && st2[i]!='\n')
//     {
//         i++;
//     }
//     if(st2[i]=='\n'){
//         st2[i]='\0';
//     }
//     puts(st);
//     puts(st1);
//     puts(st2);
// }




/*   Now we are going to make array of strings */
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of names you want to enter\n");
    scanf("%d",&n);
    char st[n][50];
    for(int i=0;i<n;i++){
        fgets(st[i],50*sizeof(char),stdin);
        int len=0;
        while(st[i][len]!='\0' && st[i][len]!='\n'){
            len++;
        }
        if(st[i][len -1]=='\n'){
            st[i][len-1]='\0';
        }
    }
    for(int i=0;i<n;i++){
        printf("%s ",st[i]);
    }
    
}







