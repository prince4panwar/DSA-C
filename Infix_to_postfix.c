#include<stdio.h>
#include<string.h>
int top=-1;
char stack[50];
int priority(char exp)
{
    if(exp=='+'||exp=='-')
        return 1;
    else if(exp=='*'||exp=='/')
        return 2;
    else if(exp=='^')
        return 3;
}
char* infixtopostfix(char exp[])
{
    char post[50];
    int j=-1;
    for(int i=0;exp[i];i++)
    {
        if(exp[i]>='a'&&exp[i]<='z'||exp[i]>='1'&&exp[i]<='9'||exp[i]>='A'&&exp[i]<='Z')
        {
           post[++j]=exp[i];
        }
        else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='/'||exp[i]=='*'||exp[i]=='^')
        {
            if(top==-1||stack[top]=='('||priority(exp[i])>priority(stack[top]))
            {
                top++;
                stack[top]=exp[i];
            }
            else if(priority(exp[i])<=priority(stack[top]))
            {
                while(priority(exp[i])<=priority(stack[top]))
                {
                    post[++j]=stack[top];
                    --top;
                    if(top==-1||stack[top]=='(')
                        break;
                }
                top++;
                stack[top]=exp[i];
            }
        }
        else if(exp[i]=='(')
        {
            top++;
            stack[top]=exp[i];
        }
        else if(exp[i]==')')
        {
            if(top!=-1)
            {
                while(stack[top]!='(')
                {
                    post[++j]=stack[top];
                    --top;
                    if(top==-1)
                        break;
                }
                if(top>-1)
                    --top;
            }
        }
        else
        {
            printf("Enter valid expression");
        }
    }
    while(top!=-1)
    {
        if(stack[top]=='+'||stack[top]=='-'||stack[top]=='*'||stack[top]=='/'||stack[top]=='^')
           post[++j]=stack[top];
        --top;
    }
    post[++j]='\0';
    puts(post);
}

int main()
{
    char express[50],*getstring;
    printf("Enter a expression :- ");
    gets(express);
    printf("postfix :- ");
    infixtopostfix(express);
}




