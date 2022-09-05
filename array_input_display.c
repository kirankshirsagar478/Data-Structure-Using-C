#include <stdio.h>
void main()
{
    int a[5], i, n;
    printf("\n Enter number of array elements:");
    scanf("%d", &n);
    printf("\n Enter array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Array Elements are:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}