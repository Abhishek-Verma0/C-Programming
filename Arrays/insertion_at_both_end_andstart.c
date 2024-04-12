//  we are writing code to insert two element into an array one at begining and other at end
#include<stdio.h>
int main(){
    int n,m,p;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&m,&p);
    n++;
    arr[n-1]=p;;
    n++;
    for (int i = n-1; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=m;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    

    
}