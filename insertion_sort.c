#include<stdio.h>
#include<conio.h>

 void main()
 {
    int is[10],i,j,n,temp;
    //clrscr();
    printf("\n How many Elements:");
    scanf("%d",&n);
    printf("\n Enter Array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&is[i]);
    }
    printf("\n Array elements are:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",is[i]);
    }

    // Insertion Sort:
    for(i=1;i<n;i++)
    {
        temp=is[i];
        for(j=i-1;j>=0 && is[j]>=temp;j--)
        {
            if(temp<is[j])
            {   
                is[j+1]=is[j];
                is[j]=temp;
            }
            
        }
    }

    printf("\n Sorted List:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",is[i]);
    }
    getch();
 }