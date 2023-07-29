#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j,k,count=-1;
    printf("Enter first string  :- ");
    gets(a);
    printf("Enter second string :- ");
    gets(b);
    for(i=0;b[i];i++)
    {
        for(j=0,k=0;a[j]&&b[k];j++)
        {
            if(a[j]==b[k])
            {
                if(count<0)
                    count=j;
                k++;
            }
            else
            {
                k=0;
            }
        }
    }
    if(k==i)
        printf("Substring is present at index %d",count);
    else
        printf("Substring is not found");
}
