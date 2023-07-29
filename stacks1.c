//1). Implements the operations, push,pop on integer values using arrays
#include<stdio.h>
#include<conio.h>
int i=-1;
void push(int[],int);
void pop(int[]);
void peek(int[]);
void push(int a[],int size)
{
    if(size<=0)
    {
        printf("Invalid! Size of the stack is %d\n",size);
    }
    else if(i==size-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        i++;
        printf("Enter a number for pushing :- ");
        scanf("%d",&a[i]);
    }
}
void pop(int a[])
{
    if(i==-1)
       printf("Stack is empty\n");
    else
       i--;
}
void peek(int a[])
{
    if(i==-1)
        printf("Stack is empty\n");
    else
        printf("%d\n",a[i]);
}
void main()
{
    int a[5],n,size;
    printf("******IMPLEMENTATION OF STACK*******\n");
    printf("Enter the size of stack :- ");
    scanf("%d",&size);
    while(1)
    {
        printf("\n\nEnter 1 for Push\nEnter 2 for Pop\nEnter 3 for Peek\nEnter 4 for exit\n");
        printf("\nEnter a number :- ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            push(a,size);
            printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
            break;
        case 2:
            pop(a);
            printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
            break;
        case 3:
            peek(a);
            printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
            break;
        case 4:
            exit(0);
        default:
            printf("Enter valid input\n");
            printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
        }
    }
}
