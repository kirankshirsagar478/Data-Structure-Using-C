#include <stdio.h>
void main()
{
    int a[5], i, n, new, loc;
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
    // Insert program
    printf("\n Enter new array element:");
    scanf("%d", &new);
    printf("\n Enter Location:");
    scanf("%d", &loc);
    for (i = n - 1; i >= loc; i--)
    {
        a[i + 1] = a[i];
    }
    a[loc] = new;
    n = n + 1;
    //  n++;
   // Display program
    printf("Array Elements are:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}