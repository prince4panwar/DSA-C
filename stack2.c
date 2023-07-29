//2). Reverse a string using arrays.
#include<stdio.h>
#include<conio.h>
int top=-1;
void push(char[],int);
void pop();
char peek(char[]);
void reverse_string(char a[],int n)
{
    char b[100];
    int i=0;
    while(top!=-1)
    {
        b[i]=peek(a);
        pop();
        i++;
    }
    b[n]='\0';
    puts(b);
}
void pop()
{
    if(top==-1)
       printf("Stack is empty\n");
    else
       top--;
}
char peek(char a[])
{
    if(top==-1)
        printf("Stack is empty\n");
    else
        return a[top];
}

void main()
{
    char a[100];
    int i;
    printf("Enter a string :- ");
    gets(a);
    for(i=0;a[i];i++){}
    top=i-1;
    reverse_string(a,i);
}

