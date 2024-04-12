//  we are going to calculate sum of 2-d array;

#include<stdio.h>
int main(){
    int r,c,sum=0;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
        
    }
    printf("%d",sum);
    
}

