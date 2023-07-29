#include<stdio.h>
#include<conio.h>
int i=-1,stack[20],j;
char b[20];

void IntoPre()
{
    char pre[20];
    for(int t=0;t<=j;t++)
    {
        if(b[t]>='0'&&b[t]<='9'||b[t]>='a'&&b[t]<='z'||b[t]>='A'&&b[t]<='Z')
        {
            printf("%c",b[t]);
            pre[t]=b[t];
        }
        else if(i==-1||stack[i]=='(')
            stack[i]=b[t];
        else if(b[t]==stack[i]||(b[t]=='*'||b[t]=='/'||b[t]=='^')&&(stack[i]=='*'||stack[i]=='/'||stack[i]=='+'||stack[i]=='-'))
            stack[i]=b[i];
        else if(((b[t]=='+'||b[t]=='-')&&stack[i]!=b[t])||((b[t]=='*'||b[t]=='/')&&stack[i]=='^'))
        {
            while(1)
            {
                if(b[t]==stack[i]||(b[t]=='*'||b[t]=='/'||b[t]=='^')&&(stack[i]=='*'||stack[i]=='/'||stack[i]=='+'||stack[i]=='-'))
                  {
                     stack[i]=b[t];
                     break;
                  }
                printf("%c",stack[i]);
                pre[t]=stack[i];
                i--;
            }
        }
        else if(b[t]=='(')
            stack[t]=b[t];
        else if(b[t]==')')
        {
            while(1)
            {
                if(b[t]=='(')
                {
                    i--;
                    break;
                }
                printf("%c",stack[i]);
                pre[t]=stack[i];
                i--;
            }
        }
    }
        printf("\n\n\n");
    for(int i=0;i<20;i++)
    {
        printf("%c",pre[i]);
    }
}
void main()
{
    printf("\nEnter the expression and Enter 0 if the equation is endered");
    for(j=0;j<20;j++)
    {
        printf("\nEnter the number :- ");
        scanf("%c",&b[j]);
        if(b[j]=='0')
            break;
    }
    IntoPre();

}
