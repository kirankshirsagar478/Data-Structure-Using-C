#include <stdio.h>
void main()
{
    int a[5], i, n, value, loc;
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
    // Delete code:
    printf("\n Enter Location for delete element:");
    scanf("%d",&loc);
    value=a[loc];
    for (i=loc;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    //n--

    //Display elements:
    printf("\n array elements are:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}