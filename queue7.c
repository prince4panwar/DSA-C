///Print reverse of an array without actually reversing it
#include<stdio.h>
int top=-1, stack[50];
void push(int num)
{
    if(top<50)
    {
        top++;
        stack[top]=num;
    }
    else
    {
        printf("stack is full");
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        top--;
    }
}
void peek()
{
   if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d ",stack[top]);
    }
}
void main()
{
    int a[50],n,i;
    printf("Enter no. of elements :- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a elements :- ");
        scanf("%d",&a[i]);
        push(a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        peek();
        pop();
    }

}
