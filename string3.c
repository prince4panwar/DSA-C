
#include<stdio.h>
int main()
{
    char a[10],i,alpha=0,num=0,chara;
    printf("Enter a sting :- ");
    scanf("%s",a);
    for(i=0;a[i];i++)
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
            alpha++;
        else if(a[i]>='1'&&a[i]<='9')
            num++;
        else
            chara++;
    }
    if(alpha>0&&num>0)
        printf("\nAlphanumeric in the string");
    else if(alpha>0)
        printf("\nAlphabet in the string");
    else if(num>0)
        printf("\nNumber in the string");
    else
        printf("\nSymbol in the string");
}
