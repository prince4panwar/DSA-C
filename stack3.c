#include<conio.h>
int top=-1;
char stack[100];
void push(char a)
{
    if(top==99)
    {
        printf("stack is full");
    }
    else
    {
        top++;
        stack[top]=a;
    }
}
int pop()
{
    if(top==-1)
    {
       printf("\nBracket is not balanced");
       return 0;
    }
    else
    {
       top--;
       return 1;
    }
}
void main()
{
   char exp[100];
   int i,num=1;
   printf("Enter a string :- ");
   scanf("%s",exp);
   for(i=0;num&&exp[i];i++)
   {
       if(exp[i]=='(')
            push(exp[i]);
       else if(exp[i]==')')
            num=pop();
   }
   if(exp[i]=='\0'&&top==-1&&num)
   {
       printf("\nBracket is balanced");
   }
   else if(exp[i]=='\0'&&top>-1&&num)
   {
       printf("\nBracket is not balanced");
   }
}

