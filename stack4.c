//4). Implements the operations, push,pop on integer values using dynamically.
#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *ptr;
}*start=NULL,*end=NULL;

void push()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number for pushing :-");
    scanf("%d",&temp->data);
    temp->ptr=NULL;
    if(start==NULL)
       start=temp;
    else
      end->ptr=temp;
    end=temp ;
    printf("\nNumber successfully pushed\n");
}
void display()
{
    if(start==NULL)
    {
        printf("Stack is empty! Display operation failed");
    }
    else
    {
        struct node *temp=start;
        while(temp)
        {
          printf("%d  ",temp->data);
          temp=temp->ptr;
        }
    }
}
void poop()
{
    struct node *temp=start;
    if(start==NULL)
    {
        printf("Stack is empty! So you can't pooped number");
    }
    else
    {
        if(temp->ptr==NULL)
        {
            free(end);
            start=NULL;
            end=NULL;
        }
        else
        {
            while(temp->ptr!=end)
                temp=temp->ptr;
            free(end);
            end=temp;
            end->ptr=NULL;
        }
        printf("Number successfully pooped");
    }

}

void peek()
{
    if(start==NULL)
    {
        printf("Stack is empty! Peek operation failed");
    }
    else
    {
        printf("%d  ",end->data);
    }
}
void main()
{
    int n;
    printf("*********************IMPLEMENTATION OF DYNAMIC STACK***********************\n");
    while(1)
    {
        printf("\nEnter 1 for Push\nEnter 2 for Poop\nEnter 3 for Peek\nEnter 4 for Display\nEnter 5 for Exit\n");
        printf("\nEnter a number :- ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("-----------------------------------------------\n");
            push();
            printf("-----------------------------------------------\n");
            break;
        case 2:
            printf("-----------------------------------------------\n");
            poop();
            printf("\n-----------------------------------------------\n");
            break;
        case 3:
            printf("-----------------------------------------------\n");
            peek();
            printf("\n-----------------------------------------------\n");
            break;
        case 4:
            printf("-----------------------------------------------\n");
            display();
            printf("\n-----------------------------------------------\n");
            break;
        case 5:
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

