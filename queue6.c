#include<stdio.h>
struct node
{
    int data;
    int priority;
    struct node *next;
}*start=NULL;
void insertion()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a number for inserting :- ");
    scanf("%d",&temp->data);
    printf("Enter its priority           :- ");
    scanf("%d",&temp->priority);
    temp->next=NULL;

    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        struct node *t1=start,*t2=NULL;
        while(t1!=NULL)
        {
            if(temp->priority>=t1->priority)
            {
                t2=t1;
                t1=t1->next;
                if(t1==NULL)
                    t2->next=temp;
            }
            else if(t2==NULL&&temp->priority<t1->priority)
            {
                temp->next=start;
                start=temp;
                break;
            }
            else if(temp->priority>=t2->priority&&temp->priority<t1->priority)
            {
                temp->next=t1;
                t2->next=temp;
                break;
            }
        }
    }
    printf("\nNumber successfully inserted");
}
void deletion()
{
    if(start==NULL)
    {
        printf("\nPriority queue is empty! So delete operation failed");
    }
    else
    {
        struct node *temp=start;
        start=start->next;
        free(temp);
        printf("\nNumber successfully deleted");
    }
}
void display()
{
    if(start==NULL)
    {
        printf("Priority queue is empty! So display operation failed");
    }
    else
    {
        struct node *t=start;
        while(t!=NULL)
        {
            printf("%d ",t->data);
            t=t->next;
        }
    }
}
int main()
{
    int num;
    printf("*************PRIORITY QUEUE*************");
    while(1)
    {
        printf("\nEnter 1 for insertion \nEnter 2 for deletion \nEnter 3 for display\n\nEnter a number :- ");
        scanf("%d",&num);
        switch(num)
        {
        case 1:
            printf("-----------------------------------");
            insertion();
            printf("\n-----------------------------------\n");
            break;
        case 2:
            printf("-----------------------------------");
            deletion();
            printf("\n-----------------------------------\n");
            break;
        case 3:
            printf("-----------------------------------\n");
            display();
            printf("\n-----------------------------------\n");
            break;
        default:
            printf("-----------------------------------\n");
            printf("Enter valid number");
            printf("-----------------------------------\n");
        }
    }
}


