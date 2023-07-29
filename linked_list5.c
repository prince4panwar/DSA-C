///Write a program for the doubly circular linked list dynamically (insertion, deletion, traversing, searching, sorting).
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
    {
       end=temp;
       end->prev=end;
       end->next=end;
    }
    else
    {
        start->prev=temp;
        temp->prev=end;
        end->next=temp;
        temp->next=start;
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
    {
       start=temp;
       start->prev=start;
       start->next=start;
    }
    else
    {
        start->prev=temp;
        temp->next=start;
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
        start->prev=end;
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
        end->next=start;
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

void search()
{
    struct node *temp=start;
    int num,i=0;
    printf("Enter a number of searching :- ");
    scanf("%d",&num);
    while(temp->next!=start)
    {
        i++;
        if(temp->data==num)
        {
            break;
        }
        temp=temp->next;
    }
    if(temp->next==start)
    {
        i++;
        if(temp->data==num)
        {
            printf("%d is present at %d node",temp->data,i);
        }
        else
        {
            printf("%d is not present in list",num);
        }
    }
    else
    {
        printf("%d is present at %d node",temp->data,i);
    }

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
        while(t1->next!=start)
        {
            t2=t1->next;
            while(t2!=start)
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
    printf("List is successfully sorted");
}
void main()
{
    int n;
    printf("*********************IMPLEMENTATION OF DOUBLY CIRCULAR LINKED LIST***********************\n");
    while(1)
    {
        printf("\nEnter 1 for insert at start\nEnter 2 for insert at end\nEnter 3 for insert at particular position\nEnter 4 for delete at start\nEnter 5 for delete at end\nEnter 6 for delete at particular postion\nEnter 7 for Display\nEnter 8 for sorting\nEnter 9 for searching \nEnter 10 for exit\n");
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
            printf("-----------------------------------------------\n");
            sort();
            printf("\n-----------------------------------------------\n");
            break;
        case 9:
            printf("-----------------------------------------------\n");
            search();
            printf("\n-----------------------------------------------\n");
            break;
        case 10:
            break;
        default:
            printf("-----------------------------------------------\n");
            printf("Enter valid input\n");
            printf("\n-----------------------------------------------\n");
        }
        if(n==10)
            break;
    }
}



