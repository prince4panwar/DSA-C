///Remove the duplicates from a sorted linked list
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
//    count++;
    printf("\nNumber successfully insert at end\n");
}

void sort()
{
    if(start==NULL)
    {
        printf("Queue is empty");
    }
    else if(start->next!=NULL)
    {
        struct node *t1=start,*t2=t1->next;
        int temp;
        while(t1->next!=NULL)
        {
            t2=t1->next;
            while(t2!=NULL)
            {
                if(t2->data<t1->data)
                {
                    temp=t2->data;
                    t2->data=t1->data;
                    t1->data=temp;
                }
                t2=t2->next;
            }
            t1=t1->next;
        }
    }
}

void duplicates()
{
    if(start==NULL)
    {
        printf("list is empty");
    }
    else
    {
        sort();
        struct node *t1=start,*t2=t1->next;
        while(t1!=NULL)
        {
            t2=t1->next;
            while(t2!=NULL)
            {
                if(t1->data==t2->data)
                    t1->next=t2->next;
                t2=t2->next;
            }
            t1=t1->next;
        }
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
            duplicates();
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
        if(n==4)
            break;
    }
}





