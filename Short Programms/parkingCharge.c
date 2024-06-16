#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int no[n];
    int hrs[n];
    double cost[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&no[i]);
        scanf("%d\n",&hrs[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if (hrs[j]==3)
        {

            cost[j]=30.0;
        }
        else if (hrs[j]>3 && hrs[j]<24)
        {
            cost[j]=30.0+(hrs[j]-3)*5;
        }
        else if(hrs[j]==24){
            cost[j]=80.0;
        }
        
        
    }
    for (int  k = 0; k < n; k++)
    {
        printf("%d %d %.2lf\n",no[k],hrs[k],cost[k]);
    }
    
    
}