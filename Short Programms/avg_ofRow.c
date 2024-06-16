//  here we will find average of each row in a 2d array

#include<stdio.h>

int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    double arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%lf",&arr[i][j]);
        }
        
    }
    printf("Average of each row:\n");
    for (int i = 0; i < r; i++)
    {
        double sum=0;
        double avg=0;
        for (int j = 0; j < c; j++)
        {
            sum+=arr[i][j];
        }
        avg=sum/c;
        printf("Row %d: %.2lf",i+1,avg);
        printf("\n");
        
    }
    
    
}