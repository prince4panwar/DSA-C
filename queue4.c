#include<stdio.h>
#include<conio.h>
int rear=-1,front=-1;
void insert(int a[],int ub)
{
    if(rear==ub&&front==0||rear==front-1)
    {
        printf("\nQueue is full! So you can't insert the number\n");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        printf("\nEnter a number for inserting :- ");
        scanf("%d",&a[rear]);
        printf("\nNumber is successfully inserted\n");
    }
    else if(rear==ub&&front>0)
    {
        rear=0;
        printf("\nEnter a number for inserting :- ");
        scanf("%d",&a[rear]);
        printf("\nNumber is successfully inserted\n");
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
        printf("\nQueue is empty! So you can't delete number\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
        printf("\nNumber is successfully deleted\n");
    }
    else if(front==ub&&rear<front)
    {
        front=0;
        printf("\nNumber is successfully deleted\n");
    }
    else
    {
        front++;
        printf("\nNumber is successfully deleted\n");
    }
}
void display(int a[],int ub)
{
    if(front==-1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        //printf("\nfront = %d",front);
        //printf("\nrear  = %d",rear);
        //printf("\na[front] = %d",a[front]);
        //printf("\na[rear]  = %d",a[rear]);
        printf("\n");
        if(front>rear)
        {
            for(int i=front;i<=ub;i++)
            {
                printf("%d, ",a[i]);
            }
            for(int i=0;i<=rear;i++)
            {
                if(i==rear)
                    printf("%d",a[i]);
                else
                    printf("%d, ",a[i]);
            }
        }
        else
        {
            for(int i=front;i<=rear;i++)
            {
                if(i==rear)
                    printf("%d",a[i]);
                else
                    printf("%d, ",a[i]);
            }
        }
        printf("\n");
    }
}
void main()
{
    int a[5],m;
    while(1)
    {
        printf("\n\n***************************************CIRCULAR QUEUE******************************\n");
        printf("Press 1 for insert\nPress 2 for delete\nPress 3 for display\nPress 4 for exit\n\n");
        printf("Enter a number :- ");
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
            display(a,4);
            printf("------------------------------------");
            break;
        case 4:
            printf("------------------------------------");
            break;
        default :
            printf("------------------------------------");
            printf("\nInvalid input! Please enter number 1-4\n");
            printf("------------------------------------");
        }
        if(m==4)
            break;
    }

}

