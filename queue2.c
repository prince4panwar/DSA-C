#include<stdio.h>
struct node
{
    int data;
    struct node * next;
}*start=NULL,*end=NULL;
void insert()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number for inserting :- ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
        end=temp;
    }
    else
    {
        end->next=temp;
        end=temp;
    }
    printf("Number is successfully inserted\n");
}
void delete()
{
    if(start==NULL)
    {
        printf("Queue is empty");
    }
    else if(start==end)
    {
        free(start);
        start=NULL;
        end=NULL;
    }
    else
    {
        struct node *temp=start;
        start=start->next;
        free(temp);
    }
    printf("Number is successfully deleted");
}
void display()
{
    if(start==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        struct node *temp=start;
        while(temp!=NULL)
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
        printf("\nEnter 1 for inserting\nEnter 2 for deletion\nEnter 3 for displaying\n");
        printf("\nEnter a number :- ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("-----------------------------------------------\n");
            insert();
            printf("-----------------------------------------------\n");
            break;
        case 2:
            printf("-----------------------------------------------\n");
            delete();
            printf("\n-----------------------------------------------\n");
            break;
        case 3:
            printf("-----------------------------------------------\n");
            display();
            printf("\n-----------------------------------------------\n");
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





