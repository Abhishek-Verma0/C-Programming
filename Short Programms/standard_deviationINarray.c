// we give first length of array in inout then user provide input in float then we calculate standard deviation of array 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    double sum=0;
    double lk=0;
    double arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%lf",&arr[i]);
        sum+=arr[i];
    }
    double mean= sum/n;
    for (int j = 0; j < n; j++)
    {
        lk+=((arr[j]-mean)*(arr[j]-mean))/n;
    }
    double var= sqrt(lk);
    printf("Standard deviation = %.2lf",var);
    printf("sum is : %.2lf\n",sum);
    printf(" mean is :: %.2lf",mean);
    
}