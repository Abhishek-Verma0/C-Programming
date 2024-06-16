#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int r=1;
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j] && i!=j)
            {
                r=0;
                break;
            }
            
        }
        if (r==1)
        {
            printf("%d ",arr[i]);
        }
        
        
    }
    
    
}




