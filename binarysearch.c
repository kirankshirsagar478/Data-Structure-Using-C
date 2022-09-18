#include <stdio.h>
#include <conio.h>
void main()
{
    int bs[10], key, i, n, mid, flag = 0;
    //clrscr();
    printf("\n Enter array size:");
    scanf("%d", &n);
    printf("\n Enter array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bs[i]);
    }
    printf("\n Enter key:");
    scanf("%d", &key);
    int lb = 0, ub = n - 1;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (bs[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (bs[mid] < key)
        {
            lb = mid + 1;
        }
        else
        {
            ub = mid - 1;
        }
    }
    if (flag == 1)
    {
        printf("\n Element found");
    }
    else
    {
        printf("\n Element not found");
    }
    getch();
}