#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*start=NULL,*end=NULL;
int count=0;

void insert_start()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number for inserting :- ");
    scanf("%d",&temp->data);
    temp->prev=NULL;
    temp->next=NULL;
    if(start==NULL)
       end=temp;
    else
    {
        temp->next=start;
        start->prev=temp;
    }
    start=temp;
    count++;
    printf("\nNumber successfully insert at start\n");
}
void insert_end()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number for inserting :- ");
    scanf("%d",&temp->data);
    temp->prev=NULL;
    temp->next=NULL;
    if(start==NULL)
       start=temp;
    else
    {
        temp->prev=end;
        end->next=temp;
    }
    end=temp;
    count++;
    printf("\nNumber successfully insert at end\n");
}
void insert_position()
{
    int n;
    printf("Enter a number where you want to insert the number :- ");
    scanf("%d",&n);
    if(n>count+1||n<1)
    {
        printf("\nEnter valid input");
    }
    else if(n==1)
    {
        insert_start();
    }
    else if(n==count+1)
    {
        insert_end();
    }
    else
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter a number for inserting in the list :- ");
        scanf("%d",&temp->data);
        temp->prev=NULL;
        temp->next=NULL;

        struct node *t1=start;
        for(int m=2;m<n;m++)
           t1=t1->next;

        temp->next=t1->next;
        temp->prev=t1;
        t1->next=temp;
        temp->next->prev=temp;
        count++;
        printf("\nNumber successfully inserted at given position");
    }
}

void delete_start()
{
    if(start==NULL)
    {
        printf("List is empty! So you can't delete the number from start");
    }
    else if(start==end)
    {
        free(start);
        start=end=NULL;
        count--;
        printf("Number successfully deleted from start");
    }
    else
    {
        struct node *temp=start;
        start=start->next;
        start->prev=NULL;
        free(temp);
        count--;
        printf("Number successfully deleted from start");
    }
}
void delete_end()
{
    if(start==NULL)
    {
        printf("List is empty! So you can't delete the number from end");
    }
    else if(start==end)
    {
        free(end);
        start=end=NULL;
        count--;
        printf("Number successfully deleted from end");
    }
    else
    {
        struct node *temp=end;
        end=end->prev;
        end->next=NULL;
        free(temp);
        count--;
        printf("Number successfully deleted from end");
    }
}

void delete_postion()
{
     if(start==NULL)
     {
         printf("List is empty! So you can't delete number");
     }
     else
     {
         int n;
        printf("Enter a number where you want to delete the number :- ");
        scanf("%d",&n);
        if(n>=count+1||n<1)
        {
            printf("\nEnter valid input");
        }
        else if(n==1)
        {
            delete_start();
        }
        else if(n==count)
        {
            delete_end();
        }
        else
        {
            struct node *t1=start;
            struct node *t2=NULL;
            for(int m=2;m<=n;m++)
            {
                t2=t1;
                t1=t1->next;
            }
            t2->next=t1->next;
            t1->next->prev=t2;
            free(t1);
            count--;
            printf("\nNumber successfully deleted from given position");
        }
     }
}

void display()
{
    if(start==NULL)
    {
        printf("List is empty! Display operation failed");
    }
    else
    {
        struct node *temp=start;
        while(temp!=end)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d",end->data);
    }
}
void main()
{
    int n;
    printf("*********************IMPLEMENTATION OF DOUBLY LINKED LIST***********************\n");
    while(1)
    {
        printf("\nEnter 1 for insert at start\nEnter 2 for insert at end\nEnter 3 for insert at particular position\nEnter 4 for delete at start\nEnter 5 for delete at end\nEnter 6 for delete at particular postion\nEnter 7 for Display\nEnter 8 for Exit\n");
        printf("\nEnter a number :- ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("-----------------------------------------------\n");
            insert_start();
            printf("-----------------------------------------------\n");
            break;
        case 2:
            printf("-----------------------------------------------\n");
            insert_end();
            printf("\n-----------------------------------------------\n");
            break;
        case 3:
            printf("-----------------------------------------------\n");
            insert_position();
            printf("\n-----------------------------------------------\n");
            break;
        case 4:
            printf("-----------------------------------------------\n");
            delete_start();
            printf("\n-----------------------------------------------\n");
            break;
        case 5:
            printf("-----------------------------------------------\n");
            delete_end();
            printf("\n-----------------------------------------------\n");
            break;
        case 6:
            printf("-----------------------------------------------\n");
            delete_postion();
            printf("\n-----------------------------------------------\n");
            break;
        case 7:
            printf("-----------------------------------------------\n");
            display();
            printf("\n-----------------------------------------------\n");
            break;
        case 8:
            break;
        default:
            printf("-----------------------------------------------\n");
            printf("Enter valid input\n");
            printf("\n-----------------------------------------------\n");
        }
        if(n==8)
            break;
    }
}

