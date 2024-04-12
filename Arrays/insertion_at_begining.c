//  here we insert an element in begining of an array

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    n++;
    scanf("%d",&m);
    for (int i = n-1; i >0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=m;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
}