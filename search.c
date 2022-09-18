#include <stdio.h>
#include<conio.h>
void main()
{
    int a[5], i, n, searchkey;
    //clrscr();
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

    // Search program:
    printf("\n Enter element for search:");
    scanf("%d",&searchkey);
    for(i=0;i<n;i++)
    {
        if (a[i]==searchkey)
        {
            printf("\n Element %d is found at location %d",a[i],i);

        }
    }
    getch();
}