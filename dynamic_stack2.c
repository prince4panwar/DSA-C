#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL;

void push()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number pushing :-");
    scanf("%d",&temp->data);
    if(start==NULL)
    {
        start=temp;
        start->next=NULL;
    }
    else if(temp==NULL)
    {
        printf("Stack is full");
    }
    else
    {
        temp->next=start;
        start=temp;
    }
}
void poop()
{
    if(start==NULL)
    {
        printf("Stack is empty! So you can't popped number");
    }
    else if(start->next==NULL)
    {
        free(start);
        start=NULL;
        printf("Number successfully poop");
    }
    else
    {
        struct node *temp=start;
        start=start->next;
        free(temp);
        printf("Number successfully poop");
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
        printf("%d",start->data);
    }
}
void display()
{
    if(start==NULL)
    {
        printf("Stack is empty");
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
