#include<stdio.h>
#include<stdlib.h>
 struct node
  {
   int data;
   struct node *next;
  };
 struct node *head;
 struct node *ptr;


 void beginsert();
 void lastinsert();
 void randominsert();
 void begin_delete();
 void last_delete();
 void random_delete();
 void display();
 void search();
 int main()
 {
  int choice=0;
  while(choice!=9)
  {
   printf("\n\n **** Main Menu ****");
   printf("\n Choose one option from the following list");
   printf("\n1.Insert in begining \n2.Insert at last \n3.Insert at anyrandom location \n4.Delete from begining \n5.Delete from last \n6.Delete node after specified location \n7. Search for an element \n8.Show \n9. Exit \n");
   printf("\n Enter your choice:");
   scanf("%d",&choice);
   switch (choice)
   {
    case 1:
	   beginsert();
	   break;
    case 2:
	   lastinsert();
	   break;
    case 3:
	   randominsert();
	   break;
    case 4:
	   begin_delete();
	   break;
    case 5:
	   last_delete();
	   break;
    case 6:
	   random_delete();
	   break;
    case 7:
	   search();
	   break;
    case 8:
	   display();
	   break;
    case 9:
	   exit(0);
	   break;
    default:
	    printf("\n Invalid Choice \n Please Enter Valid Choice:");
    }
   }
  }
  void beginsert()
  {
   struct node *ptr;
   int item;
   ptr=(struct node *) malloc(sizeof(struct node*));
   if(ptr==NULL)
   {
    printf("\n Overflow ");
   }
   else
   {
    printf("\n Enter Value:");
    scanf("%d",&item);
    ptr->data=item;
    ptr->next=head;
    head=ptr;
    printf("\n Node Inserted");
   }
  }
  void lastinsert()
  {
   struct node *ptr, *temp;
   int item;
   ptr=(struct node*)malloc(sizeof(struct node));
   if(ptr==NULL)
   {
    printf("\n Overflow");
   }
   else
   {
    printf("\n Enter Value: \n");
    scanf("%d",&item);
    ptr->data=item;
    if(head==NULL)
    {
     ptr->next=NULL;
     head=ptr;
     printf("\n Node is inserted");
    }
    else
     {
      temp=head;
      while(temp->next!=NULL)
      {
       temp=temp->next;
      }
      temp->next=ptr;
      ptr->next=NULL;
      printf("\n Node Inserted");
     }
    }
   }
  void randominsert()
  {
   int i,loc,item;
   struct node *ptr, *temp;
   ptr=(struct node *) malloc(sizeof(struct node));
   if(ptr==NULL)
   {
    printf("\n Overflow");
   }
   else
   {
    printf("\n Enter element value:");
    scanf("%d",&item);
    ptr->data=item;
    printf("\n Eneter the location after which you want to insert:");
    scanf("%d",&loc);
    temp=head;
    for(i=0;i<loc;i++)
    {
     temp=temp->next;
     if(temp==NULL)
     {
      printf("\n can't insert \n");
      return;
     }
    }
    ptr->next=temp->next;
    temp->next=ptr;
    printf("\n Node Inserted");
   }
   }
   void begin_delete()
   {
    struct node *ptr;
    if(head ==NULL)
    {
     printf("\n List is emptpy");
    }
    else
    {
     ptr=head;
     head=ptr->next;
     free(ptr);
     printf("\n Node deleted fromthe begining ");
    }
   }
   void last_delete()
   {
    struct node *node,*ptr1;
    if(head==NULL)
    {
     printf("\n list is empty");
    }
    else if (head->next==NULL)
    {
     head=NULL;
     free(head);
     printf("\n Only node of the list deleted ");
    }
    else
    {
     ptr=head;
     while(ptr->next!=NULL)
     {
      ptr1=ptr;
      ptr=ptr->next;
     }
     ptr1->next=NULL;
     free(ptr);
     printf("\n Deleted Node from the last");
    }
   }
  void random_delete()
  {
   struct node *ptr,*ptr1;
   int loc,i;
   printf("\n Enter the location of the node after which you want to perform deleterion: ");
   scanf("%d",&loc);
   ptr=head;
   for(i=0;i<loc;i++)
   {
    ptr1=ptr;
    ptr=ptr->next;
    if(ptr==NULL)
    {
     printf("\n can't delete");
     return;
    }
   }
   ptr1->next=ptr->next;
   free(ptr);
   printf("\n Deleted node %d",loc+1);
  }
  void search()
  {
   struct node *ptr;
   int item,i=0,flag;
   ptr=head;
   if(ptr==NULL)
   {
    printf("\n Empty List");
   }
   else
   {
    printf("\nEnter irem which you want to search:");
    scanf("%d",&item);
    while(ptr!=NULL)
    {
     if(ptr->data==item)
     {
      printf("\n Item found at location %d",i+1);
      flag=0;
     }
     else
     {
      flag=1;
     }
     i++;
     ptr=ptr->next;
    }
    if(flag==1)
    {
     printf("\n Item not found\n");
    }
   }
  }
 void display()
 {
  struct node *ptr;
  ptr=head;
  if(ptr==NULL)
  {
   printf(" Nothing to print");
  }
  else
  {
   printf("\n printing values ....");
   while (ptr!=NULL)
   {
    printf("\n%d",ptr->data);
    ptr=ptr->next;
   }
  }
 }