 ///Implementation of bracket matching using dynamically.
 #include<stdio.h>
 struct node
 {
     char data;
     struct node *ptr;
 }*start=NULL,*end=NULL;
 void push(char num)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->ptr=NULL;
    if(start==NULL)
       start=temp;
    else
      end->ptr=temp;
    end=temp ;
}
void poop()
{
    if(start==NULL)
    {
       printf("\nBracket is not balanced");
    }
    else
    {
        struct node *temp=start;
        if(temp->ptr==NULL)
        {
            free(end);
            start=NULL;
            end=NULL;
        }
        else
        {
            while(temp->ptr!=end)
                temp=temp->ptr;
            free(end);
            end=temp;
            end->ptr=NULL;
        }
    }
}
void main()
{
   int i,num=1;
   char exp[100];
   printf("Enter a string :- ");
   gets(exp);
   for(i=0;exp[i];i++)
   {
       if(exp[i]=='(')
            push(exp[i]);
       else if(exp[i]==')')
       {
           if(start==NULL)
           {
               printf("Bracket is not balanced");
               num=0;
               break;
           }
           else
                poop();
       }
   }
   if(exp[i]=='\0'&&start==NULL&&num)
   {
       printf("Bracket is balanced");
   }
   else if(exp[i]=='\0'&&start!=NULL&&num)
   {
       printf("Bracket is not balanced");
   }
}
