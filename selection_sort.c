#include<stdio.h>
#include<conio.h>
 void main()
 {
    int ss[10],n,i,j,min,temp;
    printf("\n Enter No of elements:");
    scanf("%d",&n);
    printf("\n Enter Array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ss[i]);
    }
    printf("\n Array elements are:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",ss[i]);
    }

    // Selection sort
    for(i=0;i<n;i++)
    {
    min=i;
    for(j=i+1;j<n;j++)
    {
        if (ss[j]<ss[min])
        {
            min=j;
        }
    }
    {
    temp=ss[i];
    ss[i]=ss[min];
    ss[min]=temp;
    }
 }

 //Output:
  printf("\n Sorted Elements are:");
  for(i=0;i<n;i++)
  {
    printf("\t%d",ss[i]);
  }
 }