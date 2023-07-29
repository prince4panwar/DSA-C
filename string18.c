
#include<stdio.h>
void main()
{
    char a[100];
    int i,alpha=0,num=0,symb=0;
    printf("Enter a string :- ");
    gets(a);
    for(i=0;a[i];i++)
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
            alpha++;
        else if (a[i]>='0'&&a[i]<='9')
            num++;
        else
            symb++;
    }
    printf("\nThere are %d alphabet in the given string",alpha);
     printf("\nThere are %d digits in the given string",num);
      printf("\nThere are %d symbol in the given string",symb);
}
