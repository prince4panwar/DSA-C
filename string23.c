//change string into number
#include<stdio.h>
void main()
{
    char a[100];
    int i,j=1,digit,sum=0;
    printf("Enter a string :- ");
    gets(a);
    for(i=0;a[i+1];i++){}
    while(i>=0)
    {
        digit=a[i];
        digit=digit-48;
        sum=sum+digit*j;
        j=j*10;
        i--;
    }
    printf("Number is      :- %d",sum);

}

