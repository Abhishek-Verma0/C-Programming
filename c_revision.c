//  printing hello world

// #include<stdio.h>

// int main(){
//     printf("Hello world\n");
//     printf("Hola ");
//     return 0;
// }




/* dealing with diffent type of datatypes  and with user input too */
/*
#include<stdio.h>

//  c does not has inbuilt string like cpp here we deal with arra
int main(){
    int num =5;
    double fl=10;
    char ch='d';
    char song[]="Jokes on You";
    printf("%d %.1lf %c %s",num,fl,ch,song);
    //  printing size of each data type  here we use format specifer %zu which is specifically desigend for printing size_t value 
    printf(" %zu",sizeof(int));
    
}
*/

// revisiting  type conversion  explicit and implicit 
/*
#include<stdio.h>

int main(){
    int x=5;
    int y=2;
    float div= (float)x/y;
    printf("%f",div);
}
*/


//  operators all we know works same arithmertic assignment comparsion  + - * / ++ -- = == <= >= !=
// logical  || &&  ! 

//  precendenc of operator which one will be done first 
/*
Here are some common operators in C, from highest to lowest priority:

    () - Parentheses
    *, /, % - Multiplication, Division, Modulus
    +, - - Addition, Subtraction
    >, <, >=, <= - Comparison
    ==, != - Equality
    && - Logical AND
    || - Logical OR
    = - Assignment

*/



//  boolean in c to use boolean in c we need to import stdbool.h 

/*
#include<stdbool.h>
#include<stdio.h>

//  boolean gives 0 or 1 for true or false so we use %d to print it's output 
int main(){
    bool good=true;
    printf("%d", good);
}
*/



// Conditional statemtents if else else if switch case;
/*
#include<stdio.h>
int main(){
    if(60>50){
        printf("you clever little minx");
    }else{
        printf("You pretty little devil");
    }
    if(20==50){
        printf("\nYou may sleep when you die");
    }else if(20==120){
        printf("\nYou know what that is \"Simply Lovely\"");
    }else{
        printf("\nMaybe God is with him but he is not God");
    }
    // ternary operator 
    (50 <20) ? printf("\nsend them my regards") : printf("\nBard of avon");
    printf("\n");
    //  switch case 
    
    int thought=1;
    switch(thought){
        case 1:
         printf("If you no longer go for the gap that exists you are no longer a racing driver");
         break;
         case 2:
         printf("Smooth operatorr");
         break;
         case 3:
         printf("I have the seat full of water");
         break;
         case 4:
         printf("No he is just unfair. I'm leading, he wants to pass, he push me, I push him back, and after he push me off the track");
         default:
         printf("Is charles catching him or not..!🥺");
        }
    }
    */


    //  loops while for  do while 
/*
#include<stdio.h>

int main(){
    
int t=5;
while(t--){
    printf("Living was the hardest decision I ever made.\n");
}
int T=2;
do
{
    printf("You wanted a saint who would bleed without screaming. Well, the saint is dead.\n");
} while (T--);

for(int i=0;i<5;i++){
    printf("%d ",i);
    }
    return 0;
}
*/


// break vs continue   --- break statement used to exit loopor can say stop the loop completely while continue statment is used to skip the current iteration of loop



//  Arrays - contiguous memory location 
/*
#include <stdio.h>

int main(){
    int arr[]={1,2,2,4};
    //  array with predifined length
    int arr1[5]; // array of length 5
    // elements are accessed or cahnged using index which starts from 0
    //  here to get size or length of array we do sizeOf(arr)/ size(arr[0]) because first size give total size used by the array and second is sizeof single element of array by dividing we get exact how many elements are in array 
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    //  multidimensionl array 
    int marr[2][3]={{1,2,3},{4,5,8}};
    for(int i=0;i<sizeof(marr)/sizeof(marr[0]);i++){
        for(int j=0;j<sizeof(marr[0])/sizeof(marr[0][0]);j++){
            printf("%d ",marr[i][j]);
        }
    }
}
*/

/*
// string function  from string.h lib
#include<stdio.h>
#include<string.h>

int main(){
    char name[70]="I broke my spine holding up your sky.";
    printf("%zu %s",strlen(name), name);
    //  string concat 
    char sec[]="You took my endurance for immunity.";
    //  strcat does simply concat str1 and str2 into str1 or simply into first param if str1 has enough size to store the  str2
    strcat(name,sec);
    printf("\n%s",name);
    
    //  strcpy copies the value of seconf parameter string to first param string 
    
    char sec1[50];
    strcpy(sec1,sec);
    printf("\n%s",sec1);
    
    //  comparing the string using strcmp - it return 0 if both are equal ignore case i.e upper or lower  positive if 1st str is greater than 2nd else -ve if 2nd is greater ans the value returned is distance btw first two char not matched
    // it simply converts the char to lower and subtracts the ascii if not char not matched and returns whatever +ve or -ve
    // e.g apple  , Egg
    // t compares index 0: 'a' from "apple" and 'E' from "EGG".
    // It converts 'E' to lowercase 'e'.
    // It performs the math:{ASCII\ of a} - {ASCII of e} implies 97-101=-4\)
    // so returns -4
    
    printf("\n%d",strcmp(name,sec));
    
}
*/


/****************User input *************************** */

#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    printf("%d",num);
    //  there is issue for string input with scanf like it treats whitesapce as terminating char so the moment it encounter a whitesapce after that noting is read or stored
    char pt[8];
    printf("\n");
    printf("Enter the  name: ");
    scanf("%s",pt);
    printf("%s",pt);
    //  to overcome whitespace problem we use fgets it takes three params 1st - the string  2nd - size of the string using sizeof 3rd file stream or inout source
    //  input source for keyboard input is stdin - as fget was designed to read lines from file  but giving stdin we say  take keyvoard console exactly like a open file 
    printf("\n");
    while(getchar()!='\n');
    char qt[100];
      printf("Enter lammu or any string : ");
    fgets(qt,sizeof(qt),stdin);

    printf("%s",qt);
}