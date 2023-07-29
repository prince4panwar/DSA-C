///Write a program to add two polynomial equations using linked lists.
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coefficient;
    int power;
    struct node *next;
}*start1=NULL,*end1=NULL,*start2=NULL,*end2=NULL,*start3=NULL,*end3=NULL;
int count=0,count1=0,count2=0;
int isMatch(struct node *startp,int power)
{
    struct node *temp=startp;
    while(temp)
    {
        if(power==temp->power)
            return 0;
        else if(power>temp->power)
            return 0;
        temp=temp->next;
    }
    return 1;
}
void insert_1()
{
    if(start3!=NULL)
    {
        printf("Equation already entered");
    }
    else
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter a coefficient  :- ");
        scanf("%d",&temp->coefficient);
        printf("Enter its power      :- ");
        scanf("%d",&temp->power);
        temp->next=NULL;
        if(temp->power<0)
        {
            printf("power is negative");
        }
        else if(start1==NULL)
        {
            start1=temp;
            end1=temp;
            count1++;
            printf("\nCoefficient and power successfully inserted\n");
        }
        else
        {
            if(isMatch(start1,temp->power))
            {
                end1->next=temp;
                end1=temp;
                count1++;
                printf("\nCoefficient and power successfully inserted\n");
            }
            else
            {
                printf("Power match or greater than other in the equation");
            }
        }
    }
}
void insert_2()
{

    if(start3!=NULL)
    {
        printf("Equation already entered");
    }
    else
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter a coefficient  :- ");
        scanf("%d",&temp->coefficient);
        printf("Enter its power      :- ");
        scanf("%d",&temp->power);
        temp->next=NULL;
        if(temp->power<0)
        {
            printf("power is negative");
        }
        else if(start2==NULL)
        {
            start2=temp;
            end2=temp;
            count2++;
        }
        else
        {
            if(isMatch(start2,temp->power))
            {
                end2->next=temp;
                end2=temp;
                count2++;
                printf("\nCoefficient and power successfully inserted\n");
            }
            else
            {
                printf("Power match or greater than other in the equation");
            }
        }
    }
}

void display_1()
{
    if(start1==NULL)
    {
        printf("Equation is not enter so far");
    }
    else
    {
        struct node *temp=start1;
        while(temp)
        {
            if(count==0)
            {
                printf("%dx^%d",temp->coefficient,temp->power);
                count++;
            }
            else if(temp->coefficient>0)
                printf(" + %dx^%d",temp->coefficient,temp->power);
            else
                printf(" - %dx^%d",-(temp->coefficient),temp->power);
            temp=temp->next;
        }
    }
}

void display_2()
{
    if(start2==NULL)
    {
        printf("Equation is not enter so far");
    }
    else
    {
        struct node *temp=start2;
        while(temp)
        {
            if(count==0)
            {
                printf("%dx^%d",temp->coefficient,temp->power);
                count++;
            }
            else if(temp->coefficient>0)
                printf(" + %dx^%d",temp->coefficient,temp->power);
            else
                printf(" - %dx^%d",-(temp->coefficient),temp->power);
            temp=temp->next;
        }
    }
}

void add()
{
    //start3=end3=NULL;
    if(start3!=NULL)
    {
        printf("Addition already occured");
    }
    else if(start1==NULL||start2==NULL)
    {
        printf("Equation is not enter so far");
    }
    else
    {
        struct node *temp1=start1;
        struct node *temp2=start2;
        if(count1>=count2)
            while(temp1)
            {
                struct node *temp=(struct node*)malloc(sizeof(struct node));
                temp->next=NULL;
                if(temp1->next==NULL&&temp2==NULL)
                {
                    temp->coefficient=temp1->coefficient;
                    temp->power=temp1->power;
                    temp1=temp1->next;
                }
                else if(temp1->power>temp2->power)
                {
                    temp->coefficient=temp1->coefficient;
                    temp->power=temp1->power;
                    temp1=temp1->next;
                }
                else if(temp1->power<temp2->power)
                {
                    temp->coefficient=temp2->coefficient;
                    temp->power=temp2->power;
                    temp2=temp2->next;
                }
                else
                {
                    temp->coefficient=temp1->coefficient+temp2->coefficient;
                    temp->power=temp1->power;
                    temp1=temp1->next;
                    temp2=temp2->next;
                }

                if(start3==NULL)
                    start3=temp;
                else
                    end3->next=temp;
                end3=temp;
            }
        else
            while(temp2)
            {
                struct node *temp=(struct node*)malloc(sizeof(struct node));
                temp->next=NULL;
                if(temp2->next==NULL&&temp1==NULL)
                {
                    temp->coefficient=temp2->coefficient;
                    temp->power=temp2->power;
                    temp2=temp2->next;
                }
                else if(temp1->power>temp2->power)
                {
                    temp->coefficient=temp1->coefficient;
                    temp->power=temp1->power;
                    temp1=temp1->next;
                }
                else if(temp1->power<temp2->power)
                {
                    temp->coefficient=temp2->coefficient;
                    temp->power=temp2->power;
                    temp2=temp2->next;
                }
                else
                {
                    temp->coefficient=temp1->coefficient+temp2->coefficient;
                    temp->power=temp1->power;
                    temp1=temp1->next;
                    temp2=temp2->next;
                }

                if(start3==NULL)
                    start3=temp;
                else
                    end3->next=temp;
                end3=temp;
            }
        printf("Addition of two equation successfully done");
    }
}
void display_add()
{
    if(start3==NULL)
    {
        printf("Addition is not being happend yet");
    }
    else
    {
        struct node *temp=start3;
        while(temp)
        {
            if(count==0)
            {
                printf("%dx%d",temp->coefficient,temp->power);
                count++;
            }
            else if(temp->coefficient>0)
                printf(" + %dx%d",temp->coefficient,temp->power);
            else
                printf(" - %dx%d",-(temp->coefficient),temp->power);
            temp=temp->next;
        }
    }
}

void main()
{
    int n;
    printf("**********************ADD TWO POLYNOMIAL EQUATIONS**********************\n");
    while(1)
    {
        printf("\nEnter 1 for enter first equation");
        printf("\nEnter 2 for enter second equation");
        printf("\nEnter 3 for Display first equation");
        printf("\nEnter 4 for Display second equation");
        printf("\nEnter 5 for Adding two equation");
        printf("\nEnter 6 for Display added equation");
        printf("\nEnter 7 for Exit");

        printf("\nEnter a number :- ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("-----------------------------------------------\n");
            count=0;
            insert_1();
            printf("\n-----------------------------------------------\n");
            break;
        case 2:
            printf("-----------------------------------------------\n");
            count=0;
            insert_2();
            printf("\n-----------------------------------------------\n");
            break;
        case 3:
            printf("-----------------------------------------------\n");
            count=0;
            display_1();
            printf("\n-----------------------------------------------\n");
            break;
        case 4:
            printf("-----------------------------------------------\n");
            count=0;
            display_2();
            printf("\n-----------------------------------------------\n");
            break;
        case 5:
            printf("-----------------------------------------------\n");
            count=0;
            add();
            printf("\n-----------------------------------------------\n");
            break;
        case 6:
            printf("-----------------------------------------------\n");
            count=0;
            display_add();
            printf("\n-----------------------------------------------\n");
            break;
        case 7:
            break;
        default:
            printf("-----------------------------------------------\n");
            printf("Enter valid input\n");
            printf("\n-----------------------------------------------\n");
        }
        if(n==7)
            break;
    }
}






