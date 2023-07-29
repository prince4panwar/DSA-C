///Find the middle element of the linked list.
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL,*end=NULL;

void insert_end()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number for inserting :-");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
        start=temp;
    else
        end->next=temp;
    end=temp;
    printf("\nNumber successfully insert at end\n");
}

void middle()
{
  if(start==NULL)
  {
      printf("List is empty");
  }
  else
  {
      int count=0;
      struct node *temp=start;
      while(temp!=NULL)
      {
          count++;
          temp=temp->next;
      }
      temp=start;
      for(int m=0;m<count/2;m++)
      {
          temp=temp->next;
      }
      printf("%d",temp->data);
  }
}

void display()
{
    if(start==NULL)
    {
        printf("\nList is empty! Display operation failed");
    }
    else
    {
        struct node *temp=start;
        while(temp)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}


void main()
{
    int n;
    printf("*********************IMPLEMENTATION OF SINGLY LINKED LIST***********************\n");
    while(1)
    {
        printf("\nEnter 1 for insert at start\nEnter 2 for find middle element\nEnter 3 for display");
            printf("\nEnter a number :- ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("-----------------------------------------------\n");
            insert_end();
            printf("-----------------------------------------------\n");
            break;
        case 2:
            printf("-----------------------------------------------\n");
            middle();
            printf("-----------------------------------------------\n");
            break;
        case 3:
            printf("-----------------------------------------------\n");
            display();
            printf("-----------------------------------------------\n");
            break;
        case 4:
            break;
        default:
            printf("-----------------------------------------------\n");
            printf("Enter valid input\n");
            printf("\n-----------------------------------------------\n");
        }
        if(n==5)
            break;
    }
}




