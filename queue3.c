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
    temp->next=start;
    if(start==NULL)
    {
        start=temp;
        end=temp;
        end->next=start;
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
        end->next=start->next;
        free(start);
        start=end->next;
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
        while(temp->next!=start)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
    }
}
void main()
{
    int n;
    printf("*********************IMPLEMENTATION OF cicular queue ***********************\n");
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






