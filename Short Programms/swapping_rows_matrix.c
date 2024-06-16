// here we are swapping the two rows provide by the user  in a 2-d array
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int o,p;
    scanf("%d %d",&o,&p);
    if (o>n || p>m)
    {
        printf("Invaild number of rows");
    }
    // else if (o>m || p>n)
    // {
    //     printf("Invalid number of rows");
    // }
    else{
        o--;
        p--;
        for (int b = 0; b <n ; b++)
        {
            int temp= arr[o][b];
            arr[o][b]=arr[p][b];
            arr[p][b]=temp;
        }
        
    for (int q = 0; q < n; q++)
    {
        for (int w = 0; w < m; w++)
        {
            printf("%d ",arr[q][w]);
        }
        printf("\n");
        
    }
    
    }
    
    

    
}