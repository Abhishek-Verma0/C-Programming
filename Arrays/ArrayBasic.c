// declaring an array with number of elements given by user and also that values by user and which index value to be printed is also given by user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    int d;
    scanf("%d", &d);
    printf("%d",a[d]);
    return 0;

}