#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data;
    struct node *next;
};
struct node *start=NULL,*end=NULL;
int comp(char data)
{
    switch(data)
    {
    case '+' :
        return 1;
        break;
    case '-' :
        return 1;
    case '*' :
        return 2;
        break;
    case '/':
        return 2;
        break;
    case  '^' :
        return 3;
        break;
    default:
        return 0;
    }
}
void push(char value)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("\n*****%c push value is pushed in the stack*****\n",value);
    temp->data=value;
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
        end=temp;
    }
    else
    {
        end->next=temp;
        end=end->next;
    }
}
void pop()
{

    if(start==NULL)
    {
        printf("\n*****operation is failed :- Stack is empty*****\n");
    }
    else if(start->next==NULL)
    {
        printf("\n%c value is deleted from the stack\n",start->data);
        free(start);
        start=NULL;
        end=NULL;
    }
    else
    {
        struct node *t1;
        struct node *t2;
        t1=start;
        t2=NULL;
        while(t1->next!=NULL)
        {
            t2=t1;
            t1=t1->next;
        }
        printf("\n%c value is deleted from the stack\n",t1->data);
        t2->next=NULL;
        free(t1);
        end=t2;
    }
}
char peek()
{
    if(start==NULL)
    {
        printf("\n*****operational is failed :- Stack is empty*****\n");
    }
    else
        return(end->data);
}
void main()
{
    char arr[25],brr[25],temp,ch;
    int length,comp1,comp2,i,j=0;
    printf("\nEnter your expression :- ");
    gets(arr);
    /*
    gets(brr);
    puts(brr);
    length=strlen(brr);
    for(i=length-1;i>=0;i--)
    {
        if(brr[i]=='(')
            arr[j]=')';
        else if(brr[i]==')')
            arr[j]='(';
        else
            arr[j]=brr[i];
            j++;
    }
    arr[j]='\0';
    puts(arr);
    j=0;*/
    char  rev[length+1];
    for(i=0; arr[i]; i++)
    {
        if(arr[i]>='a'&&arr[i]<='z'||arr[i]<='A'&&arr[i]>='Z'||arr[i]>=0&&arr[i]<=9)
        {
            rev[j]=arr[i];
            j++;
        }
        else if(arr[i]=='(')
        {
            ch=arr[i];
            push(ch);
        }
        else if(arr[i]==')')
        {
            temp=peek();
            while(temp!='(')
            {
                rev[j]=temp;
                j++;
                pop();
                temp=peek();
            }
            pop();
        }
        else
        {
            if(start==NULL)
            {
                ch=arr[i];
                push(ch);
            }
            else
            {
                ch=arr[i];
                comp1=comp(ch);
                temp=peek();
                if(temp!='(')
                {
                    comp2=comp(temp);
                }
                else
                    comp2=0;
                if(comp2)
                {
                    if(comp1<=comp2)
                    {
                        while(comp1<=comp2)
                        {
                            rev[j]=temp;
                            j++;
                            pop();
                            if(start!=NULL)
                            {
                                temp=peek();
                                comp2=comp(temp);
                            }
                            else
                                break;
                        }

                    }
                }
                push(ch);
            }

        }


    }
    while(start!=NULL)
    {
        if(peek()!='('||peek()!=')')
        {
            rev[j]=peek();
            j++;
        }
        pop();
    }

    rev[j]='\0';
    printf("\n\n");
    /*
    length=strlen(rev);
    j=0;
    for(i=length-1;i>=0;i--)
    {
            arr[j]=rev[i];
            j++;
    }
    arr[j]='\0';
    puts(arr);*/
    puts(rev);
}
