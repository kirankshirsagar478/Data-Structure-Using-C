#include <stdio.h>
#include <conio.h>
#define size 5
struct queue
{
    int que[size];
    int front, rear;
} q;
void main()
{
    int choice, item;
    char ans;
    // clrscr();
    q.front = -1;
    q.rear = -1;

    do
    {
        printf("\n================main menu===============\n");
        printf("\n1.insert\n2.delete\n3.display\n4.Exit");
        printf("\n enter U'R choice::");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (qfull())
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
            if (qempty())
            {
                printf("\n\t Queue is empty");
            }
            else
                delete ();
            break;
        case 3:
            if (qempty())
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
int qfull()
{
    if (q.rear >= size - 1)
        return 1;
    else
        return 0;
}
int insert(int item)
{
    if (q.front == -1)
        q.front++;
    q.que[++q.rear] = item;
    return q.rear;
}
int qempty()
{
    if ((q.front == -1) || (q.front > q.rear))
        return 1;
    else
        return 0;
}
int delete()
{
    int item;
    item = q.que[q.front];
    q.front++;
    printf("\n deleted item is== %d", item);
    return q.front;
}
int display()
{
    int i;
    for (i = q.front; i <= q.rear; i++)
        printf("\n\t%d", q.que[i]);
}