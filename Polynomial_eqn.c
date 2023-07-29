/*Enter a polynomial equation from the user and print that equation through linked list */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coefficient;
    int power;
    struct node *next;
}*start=NULL,*end=NULL;
int count=0;

void insert()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a coefficient :- ");
    scanf("%d",&temp->coefficient);
    printf("Enter its power     :- ");
    scanf("%d",&temp->power);
    temp->next=NULL;
    if(start==NULL)
        start=temp;
    else
        end->next=temp;
    end=temp;
    printf("\nCoefficient and power successfully inserted\n");
}

void display()
{
    if(start==NULL)
    {
        printf("\nEquation is not enter so far");
    }
    else
    {
        struct node *temp=start;
        while(temp)
        {
            if(count==0)
            {
                printf("%dx^%d",temp->coefficient,temp->power);
                count++;
            }
            else if(temp->coefficient>0)
                printf(" + %dx^%d",temp->coefficient,temp->power);
            else
                printf(" - %dx^%d",-(temp->coefficient),temp->power);
            temp=temp->next;
        }
    }
}
void main()
{
    int n;
    printf("**********************POLYNOMIAL EQUATION**********************\n");
    while(1)
    {
        printf("\nEnter 1 for insert\nEnter 2 for Display\nEnter 3 for Exit\n");
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
            display();
            printf("\n-----------------------------------------------\n");
            break;
        case 3:
            break;
        default:
            printf("-----------------------------------------------\n");
            printf("Enter valid input\n");
            printf("\n-----------------------------------------------\n");
        }
        if(n==3)
            break;
    }
}





