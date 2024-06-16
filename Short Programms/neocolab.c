// // #include<stdio.h>
// // int main(){
// //     float n=5.4;
// //     float n1=1.0;
// //     float r=n*n1;
// //     int a=5;
// //     int c;
// //     c=(int)r+5;
// //     printf("The value  is %.2f\n",r);
// //     printf("%d",c);

// // }
// // calcualting Highest comman factor of two number



// // calculating no of tiles req for  covering the entire area when area is given
// // #include<stdio.h>
// // #include<math.h>
// // int main(){
// //     int a;
// //     printf("Enter the area coverd :: ");
// //     scanf("%d",&a);
// //     float n= sqrt(a);
// //     int s=ceil(n);
// //     if(a<4){
// //         printf("%d",1);
// //     }
// //     else {
// //         printf("%d",s);
// //     }
// // }

// // #include<stdio.h>
// // #include<math.h>
// // int main(){
// //     int n;
// //     printf("Enter the area :: ");
// //     scanf("%d",&n);
// //     float a=sqrt(n);
// //     int s= ceil(a);
// //     (n<4)?printf("%d",1) : printf("%d",s);

// // }

// //  #include<stdio.h>
// //  int main(){
// //     int a,b,c;
// //     scanf("%d %d %d",&a,&b,&c);
// //     a-=2;
// //     b+=b;
// //     c*=c;
// //     printf("%d\n%d\n%d",a,b,c);
// //  }

// // #include<stdio.h>
// // int main(){
// //     int m;
// //     float n;
// //     scanf("%d\n",&m);
// //     scanf("%f",&n);
// //     (m>=5 && n>=50.5)? printf("Eligible for next round") :(m>=5 && n<50.5)? printf("try"):  printf("Not eligible");
// // }

// // #include <stdio.h>
// // int main(){
// //     int n;
// //     scanf("%d",&n);
// //     int d=n-((n*1/5)+2);
// //     int h=n-(n/2);
// //     (n>50 && n%3==0)?printf("%d",h) : printf("%d",d);
// // }


// // #include<stdio.h>
// // int main(){
// //     int a;
// //     printf("Enter the number :: ");
// //     scanf( "%d" , &a );
    
// // }

// // #include<stdio.h>
// // int x=1;
// // int func( );
// // int main()
// // {
// //     func();
// // }
// // int func(){
    
// //     if(x<=10){
// //         printf("%d\n",x);
// //         x++;
// //         func();
// //     }
// //     return 0;
// // }


// // #include <stdio.h>
// // int add(double a,double b);
// // int subtract(double a,double b);
// // int multiply(double a,double b);
// // int divide(double a,double b);
// // int main(){
// // double x,y;
// // char c;
// // scanf("%lf %lf\n",&x,&y);
// // scanf("%c",&c);

// // if(c=='+'){
// //     double ad= add(x,y);
// //     printf("%0.2lf + %0.2lf = %0.2lf",x,y,ad);
// // }
// // else if(c=='-'){
// //     double sub =subtract(x,y);
// //     printf("%0.2lf - %0.2lf = %0.2lf",x,y,sub);
// // }
// // else if (c=='*')
// // {
// //     double mul=multiply(x,y);
// //     printf("%0.2lf * %0.2lf = %0.2lf",x,y,mul);
// // }
// // else if (c=='/')
// // {
// //     if (y==0)
// //     {
// //         printf("Division by zero!!");
// //     }
// //     else{
// //         double div=divide(x,y);
// //         printf("%0.2lf / %0.2lf = %0.2lf",x,y,div);
// //     }
    
// // }
// // else{
// //     printf("Invalid operator !!!  ");
// // }



// // }

// // int add(double a,double b){
// //     return a+b;
// // }
// // int subtract(double a,double b){
// //     return a-b;
// // }
// // int multiply(double a,double b){
// //     return a*b;
// // }
// // int divide(double a,double b){
// //     return a/b;
// // }

// // bmi calculator
// // #include<stdio.h>
// // int main(){
// //     int w;
// //     double h;
// //     scanf("%d\n",&w);
// //     scanf("%lf",&h);
// //     double bmi=(w/(h*h));
// //     if(bmi<=18.5){
// //         printf("Underweight\n");
// //     }
// //     else if (bmi>18.5 && bmi < 25.0)
// //     {
// //         printf("Normal");
// //     }
// //     else if (bmi>=25.0 && bmi<30.0)
// //     {
// //         printf("Heavywieght");
// //     }
// //     else{
// //         printf("Obese");
// //     }
    
    
// // }


// // #include <stdio.h>
// // int main(){
// //     int n=5;
// //     int arr[5]= {1,2,3,4,5};
// //     int e=0;
// //     for (int i = 0; i < n; ++i)
// //     {
// //         if (arr[i]%2==0)
// //         {
// //             ++e;
// //         }
        
// //     }
// //     double p= (double)e/n*100;
// //     printf("%.2lf",p);
// //     return 0;
// // }


// //  write code in c for 2d matrix of 3 row and 3 col for sum of arr and sum of single row  then sum of single col ,, sum of primary diagonal elemnt and secondary diagonal elemnet  ,, sum of upper triangle and lower traingle



// // #include<stdint.h>
// // int main(){
// //     int n;
// //     scanf("%d",&n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j <= i; j++)
// //         {
// //             printf("* ");
// //         }
// //         printf(" \n");
// //     }
    
// //     }
    

// // #include<stdio.h>
// // void Rotate(int arr[],int len, int d){
// //     int temp[d];
// //     for (int i = 0; i < d; i++)
// //     {
// //         temp[i]=arr[i];
// //     }
// //     for (int  i = d; i < len; i++)
// //     {
// //         arr[i-d]=arr[i];
// //     }
// //     for (int i = 0; i < d; i++)
// //     {
// //         arr[len-d+i]=temp[i];
// //     }
    
    
    
// // }

// // int main(){
// //     int a[5]={17,12,5,9,15};
// //     int arraySize =5;
// //     int rotationCount=2;
// //     Rotate(a,arraySize,rotationCount);
// //     for (int i = 0; i < arraySize; i++)
// //     {
// //         printf("%d ",a[i]);
// //     }
// //     return 0;
// // }


// #include <stdio.h>
// int main(){
//     char science,maths;
//     printf("pass or fail in science:");
//     scanf("%c",&science);
//     getchar();
//     printf("pass or fail in maths:");
//     scanf("%c",&maths);
//     if (science=='p' && maths=='p')
//     {
//         printf("you will be given 45rs as a prize\n");
//     }
//     else if (maths=='p')
//     {
//         printf("You will br given 15 rs\n");
//     }
//     else{
//         printf("you will be given 15 rs\n");
//     }
// }



#include<stdio.h>
int main(){
    char p[20];
    char *s="string";
    int length =strlen(s);
    int i;
    for (int i = 0; i < length; i++)
    {
        p[i]=s[length-i];
    }
    printf("%s",p);
    

}