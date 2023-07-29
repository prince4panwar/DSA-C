#include<stdio.h>
#include<string.h>
int top=-1;
char stack[50];
float stack1[50];
int priority(char exp)
{
    if(exp=='+'||exp=='-')
        return 1;
    else if(exp=='*'||exp=='/')
        return 2;
    else if(exp=='^')
        return 3;
}
void infixtoprefix(char express[])
{
    char pre[50],exp[50];
    int j=-1,i;
    for(i=0;express[i];i++)
    {
        if(express[strlen(express)-1-i]=='(')
            exp[i]=')';
        else if(express[strlen(express)-1-i]==')')
            exp[i]='(';
        else
            exp[i]=express[strlen(express)-1-i];
    }
    exp[i]='\0';

    for(int i=0;exp[i];i++)
    {
        if(exp[i]>='a'&&exp[i]<='z'||exp[i]>='1'&&exp[i]<='9'||exp[i]>='A'&&exp[i]<='Z')
        {
           pre[++j]=exp[i];
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
                    pre[++j]=stack[top];
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
                    pre[++j]=stack[top];
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
           pre[++j]=stack[top];
        --top;
    }
    pre[++j]='\0';
    for(int i=0;pre[i];i++)
    {
        if(pre[strlen(pre)-1-i]=='(')
            exp[i]=')';
        else if(pre[strlen(pre)-1-i]==')')
            exp[i]='(';
        else
            exp[i]=pre[strlen(pre)-1-i];
    }
    exp[j]='\0';
    puts(exp);
    top=-1;
    float num;
    for(int i=j-1;i>=0;i--)
    {
        if(exp[i]>='0'&&exp[i]<='9')
        {
            top++;
            stack[top]=exp[i];
        }
        else if(exp[i]=='+')
        {
            int temp;
            temp=(stack[top]-48)+(stack[--top]-48);
            stack[top]=temp+48;
        }
        else if(exp[i]=='-')
        {
            int temp;
            temp=(stack[top]-48)-(stack[--top]-48);
            stack[top]=temp+48;
        }
        else if(exp[i]=='*')
        {
            int temp;
            temp=(stack[top]-48)*(stack[--top]-48);
            stack[top]=temp+48;
        }
        else if(exp[i]=='/')
        {
            float temp;
            temp=(stack[top]-48.00)/(stack[--top]-48.00);
            stack[top]=temp+48.00;
        }
        else if(exp[i]=='^')
        {
            int temp=0,j=stack[top-1]-48;
            for(int i=0;i<j-1;i++)
            temp=temp+(stack[top]-48)*(stack[top]-48);
            stack[top]=temp+48;
        }
        else
        {
            printf("\nPlease enter numbers");
        }
    }
    int digit;
    float sum=0.0;
    j=1;
    while(top>=0)
    {
        digit=stack[top];
        digit=digit-48;
        sum=sum+digit*j;
        j=j*10;
        top--;
    }
    printf("After evaluating :- %f",sum);
}
int main()
{
    char express[50];
    printf("Enter a expression :- ");
    gets(express);
    printf("prefix  :- ");
    infixtoprefix(express);
}

