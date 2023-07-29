#include<stdio.h>
int main()
{
    char a[10],i=0;
    printf("Enter a string :- ");
    scanf("%s",a);
    while(a[i])
    {
        i++;
    }
    printf("\nlenght of the string is %d",i);

}
