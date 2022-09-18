#include<stdio.h>
#include<conio.h>

void main()
{
    int n,fs,i;
    //clrscr();
    printf("\n Enter Positive Number:");
    scanf("%d",&n);
    printf("\n Result=\n");
    for(i=0;i<=n;i++)
    {
        fs=fib(i);
        printf("\t%d",fs);
    }

    getch();
}
int fib(int n)
{
    if(n==0)
    return (0);
    else if(n==1)
    return (1);
    return(fib(n-1)+fib(n-2));
}