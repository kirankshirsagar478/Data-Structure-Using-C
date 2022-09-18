#include<stdio.h>
#include<conio.h>
 void main()
 {
    int a[5],i,n,j,temp;
    //clrscr();
    printf("\n Enter Array size:");
    scanf("%d",&n);
    printf("\n Enter arrray elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Array elements are:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    // Bubble sort 
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    // Display output
    printf("\n Sorted List:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    getch();

 }