#include<stdio.h>
#include<conio.h>

struct ss
{
    char stack[5];
    int top;
}s;
void initialize ()
{
    s.top=-1;
}
int empty ()
{
    if(s.top==1)
    return 1;
    return 0;
}
int full ()
{
    int size;
    if(s.top==size-1)
    return 1;
    return 0;
}
void main()
{
    getch();
    
}