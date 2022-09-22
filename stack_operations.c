//  prog on implementation of stack using array//

#include <stdio.h>
#include <conio.h>
//#include<cruses.h>
#define SIZE 10
struct stack
{
  int s[SIZE];
  int top;
} st;
int stfull()
{
  if (st.top >= SIZE - 1)
    return 1;
  else
    return 0;
}
void push(int item)
{
  st.top++;
  st.s[st.top] = item;
}
int stempty()
{
  if (st.top == -1)
    return 1;
  else
    return 0;
}
int pop()
{
  int item;
  item = st.s[st.top];
  st.top--;
  return (item);
}
void display()
{
  int i;
  if (stempty())
    printf("\tstack empty");
  else
  {
    for (i = st.top; i >= 0; i--)
      printf("\n %d", st.s[i]);
  }
}
//void main()
int main()
{

  int item, choice;
  char ans;
  //clrscr();
  st.top = -1;

  do
  {

    printf("\n1.push\n2.pop\n3.display\n4.exit");
    printf("\nEnter choice::");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("\n Enter element to be push::");
      scanf("%d", &item);
      if (stfull())
        printf("\t stack is full");
      else
        push(item);
      break;
    case 2:
      printf("poped element::");
      if (stempty())
        printf("\t\t stack is empty");
      else
      {
        item = pop();
        printf("element is %d", item);
      }
      break;
    case 3:
      display();
      break;
    case 4:
      //exit(0);
      break;
    }
    printf("\n\n Do U want to continue::");
    ans = getche();
  } while (ans == 'y' || ans == 'Y');

  printf("\n Enter choice::");
  scanf("%d", &choice);
  //getch();
}
