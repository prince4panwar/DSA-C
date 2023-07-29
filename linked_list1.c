///Write a program for the linked list using arrays (insertion, deletion, traversing, searching, sorting).
#include<stdio.h>
int i=-1,list[5],size=5;
void display()
{
    if(i==-1)
    {
        printf("list is empty");
    }
    else
    {
        int j;
        for(j=0;j<=i;j++)
        {
            printf("%d ",list[j]);
        }
    }
}
void insert_start()
{
    if(i==size-1)
    {
        printf("List is full");
    }
    else
    {
       int num,j;
       printf("Enter a number :- ");
       scanf("%d",&num);
       for(j=i;j>=0;j--)
       {
         list[j+1]=list[j];
       }
       i++;
       list[0]=num;
        printf("\nNumber successfully insert at start\n");
    }
}
void insert_end()
{
    if(i==size-1)
    {
        printf("List is full");
    }
    else
    {
       int num;
       printf("Enter a number :- ");
       scanf("%d",&num);
       i++;
       list[i]=num;
        printf("\nNumber successfully insert at end\n");
    }
}
void insert_position()
{
    if(i==-1)
    {
        printf("list is empty");
    }
    else
    {
       int n;
        printf("Enter a number where you want to insert the number :- ");
        scanf("%d",&n);
        if(n>i+1||n<1)
        {
            printf("\nEnter valid input");
        }
        else if(n==1)
        {
            insert_start();
        }
        else if(n==i+1)
        {
            insert_end();
        }
        else
        {
            int num,j;
           printf("Enter a number :- ");
           scanf("%d",&num);
           //n--;
           for(j=i;j>=n;j--)
           {
             list[j+1]=list[j];
           }
           list[n]=list[n-1];
            list[n-1]=num;
           i++;
            printf("\nNumber successfully insert at given position\n");
        }
    }

}

void delete_start()
{
    if(i==-1)
    {
        printf("list is empty");
    }
    else
    {
        int j;
        for(j=0;j<=i;j++)
        {
            list[j]=list[j+1];
        }
        i--;
        printf("number is successfully deleted at start");
    }
}
void delete_end()
{
    if(i==-1)
    {
        printf("list is empty");
    }
    else
    {
       i--;
    printf("number is successfully deleted at start");
    }
}

void delete_postion()
{
     int n;
    printf("Enter a number where you want to insert the number :- ");
    scanf("%d",&n);
    if(n>i+1||n<1)
    {
        printf("\nEnter valid input");
    }
    else if(n==1)
    {
        delete_start();
    }
    else if(n==i+1)
    {
        delete_end();
    }
    else
    {
        int j;
        for(j=n;j<=i;j++)
        {
            list[j-1]=list[j];
        }
       i--;
        printf("\nNumber successfully insert at start\n");
    }
}

void search()
{
   if(i==-1)
   {
       printf("list is empty");
   }
   else
   {
       int j,num;
       printf("Enter a number of searching :- ");
       scanf("%d",&num);
       for(j=0;j<=i;j++)
       {
           if(num==list[j])
            break;
       }
       if(j>i)
       {
           printf("%d is not present in the list",num);
       }
       else
       {
           printf("%d is present at %d",num,j+1);
       }
   }
}

void sort()
{
    if(i==-1)
    {
        printf("list is empty");
    }
    else
    {
        int j,k,temp;
        for(j=0;j<i;j++)
        {
            for(k=j+1;k<=i;k++)
            {
                if(list[j]>list[k])
                {
                    temp=list[j];
                    list[j]=list[k];
                    list[k]=temp;
                }
            }
        }
    }
}
void main()
{
    int n;
    printf("*********************IMPLEMENTATION OF SINGLY LINKED LIST***********************\n");
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





