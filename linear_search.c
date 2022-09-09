#include <stdio.h>
void main()
{
    int a[5], i, n, flag=0,key;
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
    // Linear Search:
    printf("\n Enter element to search:");
    scanf("%d",&key);
    for (i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("\n Element %d is found at location  %d",key,i);
    }
    else
    {
        printf("\n Element not found");
    }
}