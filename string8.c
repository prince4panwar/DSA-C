#include<stdio.h>
void reverse_string(char *temp,int n,int last)
{
    if(n==last)
        return;
    char a=temp[n];
    reverse_string(temp,n+1,last);
    printf("%c",a);
}
int main()
{
    int i;
    char a[20];
    printf("Enter a sting :- ");
    gets(a);
    puts(a);
    for(i=0;a[i];i++){}
    reverse_string(a,0,i);
}


