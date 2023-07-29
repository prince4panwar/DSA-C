#include<stdio.h>
#include<conio.h>
int rear=-1,front=-1,n;
void insert(int a[],int ub)
{
    if(front>ub)
    {
        printf("\nQueue is empty! So enter 1 for resting the queue :- ");
        scanf("%d",&n);
        if(n)
           reset();
    }
    else if(rear==-1)
    {
        front=rear=0;
        printf("\nEnter a number for inserting :- ");
        scanf("%d",&a[rear]);
        printf("\nNumber is successfully inserted\n");
    }
    else if(rear==ub)
    {
        printf("\nQueue is full! So you can't insert the element\n");
    }
    else
    {
        rear++;
        printf("\nEnter a number for inserting :- ");
        scanf("%d",&a[rear]);
        printf("\nNumber is successfully inserted\n");
    }
}
void Delete(int ub)
{
    if(front==-1)
    {
        printf("\nQueue is empty! So you can't delete the element\n");
    }
    else if(front>ub)
    {
        printf("\nQueue is empty! So enter 1 for reseting the queue :- ");
        scanf("%d",&n);
        if(n)
           reset();

    }
    else if(front>rear)
    {
        printf("\nQueue is empty! So you can't delete the element\n");
    }
    else
    {
        front++;
        printf("\nNumber is successfully deleted\n");
    }
}
void reset()
{
    printf("\nQueue successfully reseted\n");
    front=rear=-1;
}
void display(int a[])
{
    if(front>rear||rear==-1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("\nfront = %d",front);
        printf("\nrear  = %d",rear);
        printf("\n\n");
        for(int i=front;i<=rear;i++)
        {
            if(i==rear)
                printf("%d",a[i]);
            else
                printf("%d, ",a[i]);
        }
        printf("\n");
    }
}
void main()
{
    int a[5],m;
    printf("\n*******************************QUEUE******************************\n");
    while(1)
    {
        printf("\nEnter 1 for insert\nEnter 2 for delete\nEnter 3 for reset\nEnter 4 for display\nEnter 5 for exit\n");
        printf("\nEnter a number :- ");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
            printf("------------------------------------");
            insert(a,4);
            printf("------------------------------------");
            break;
        case 2:
            printf("------------------------------------");
            Delete(4);
            printf("------------------------------------");
            break;
        case 3:
            printf("------------------------------------");
            reset();
            printf("------------------------------------");
            break;
        case 4:
            printf("------------------------------------");
            display(a);
            printf("------------------------------------");
            break;
        case 5:
            printf("------------------------------------");
            break;
        default :
            printf("------------------------------------");
            printf("\nInvalid input! Please enter number 1-5\n");
            printf("------------------------------------");
        }
        if(m==5)
            break;
    }

}
