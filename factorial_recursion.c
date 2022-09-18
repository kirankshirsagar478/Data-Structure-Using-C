#include<stdio.h>
#include<conio.h>

void main()
{
    int n,fr;
    //clrscr();
    printf("\n Enter positive number:");
    scanf("%d",&n);

    fr=fact(n);
    printf("\n Result=%d",fr);

    getch();
}

int fact(int n)
{
    if(n==0)
    return(1);
    return(n*fact(n-1));
}