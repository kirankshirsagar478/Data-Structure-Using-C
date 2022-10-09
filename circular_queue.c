#include <stdio.h>
#include <conio.h>
#define size 5
struct queue
{
    int que[size];
    int front, rear;
} cq;
void main()
{
    int choice, item;
    char ans;
    // clrscr();
    cq.front = -1;
    cq.rear = -1;

    do
    {
        printf("\n================main menu===============\n");
        printf("\n1.insert\n2.delete\n3.display\n4.Exit");
        printf("\n enter U'R choice::");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (cqfull())
            {
                printf("\n Queue full cant insert ele");
            }
            else
            {
                printf("\n\t enter ele to be inserted::");
                scanf("%d", &item);
                insert(item);
            }
            break;
        case 2:
            if (cqempty())
            {
                printf("\n\t Queue is empty");
            }
            else
                delete ();
            break;
        case 3:
            if (cqempty())
            {
                printf("\n\t Queue is empty");
            }
            else
                display();
            break;
        case 4:
               break;
        default:
            printf("\n Wrong choice");
            break;
        }
        printf("\n do U want to continue::");
        ans = getche();
    } while (ans == 'y' || ans == 'Y');
}
int cqfull()
{
    if ((cq.rear+1)%size==cq.front)
        return 1;
    else
        return 0;
}
int insert(int item)
{
    if (cq.rear == -1)
    {
        cq.front=cq.rear=0;
        cq.que[cq.rear] = item;
        return cq.rear;
    }
    else
        {
            cq.rear=(cq.rear+1)%size;
            cq.que[cq.rear]=item;
        }
}
int cqempty()
{
    if ((cq.front == -1) && (cq.rear==-1))
        return 1;
    else
        return 0;
}
int delete()
{
    int item;
    while(cq.rear!=-1)
    {
        if (cq.front==cq.rear)
        {
            item = cq.que[cq.front];
            //cq.front=cq.rear=-1;
        }
        else
        {
            cq.front=(cq.front+1)%size;
        }
    }
    
    printf("\n deleted item is== %d", item);
    return cq.front;
}
int display()
{
    int i;
    for (i = cq.front; i <= cq.rear; i=(i+1)%size)
        printf("\n\t%d", cq.que[i]);
}