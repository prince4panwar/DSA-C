#include<stdio.h>
int rear=-1,front=-1;
void insert(int **a,int ub)
{
    if(rear<=ub)
    {
        int num,priority,i,j;
        printf("Enter a number   :- ");
        scanf("%d",&a[0][++rear]);
        printf("Enter its priority :- ");
        scanf("%d",&a[1][++rear]);
    }
}
void delete()
{
    int i,num=a[1][0];
    for(i=0;i<=rear;i++)
    {
       if(a[1][i]<num)
       {
            num=a[1][i];
            j=i;
       }
    }
    front=j;

}
void display(int **a)
{
    int i,j,num=a[1][0];
    for(i=0;i<=rear;i++)
    {
       if(a[1][i]<num)
       {
            num=a[1][i];
            j=i;
       }
    }
    front=j;
    printf(" %d ",num);
}
void main()
{
    int a[2][5],m;
    printf("\n*******************************QUEUE******************************\n");
    while(1)
    {
        printf("\nEnter 1 for insert\nEnter 2 for display\n");
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
            display(a);
            printf("------------------------------------");
            break;
        case 3:
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
