//  here we find number of even and odd elements in array
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    int ev=0,od=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<n;i++){
        if(arr[i]%2==0){
            ev++;
        }
        else{
            od++;
        }
    }
    printf("Even: %d\nOdd: %d",ev,od);
}