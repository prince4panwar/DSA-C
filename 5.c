#include<stdio.h>
int main()
{
    int a[5],b[5],i,j,temp;
    for(i=0;i<=4;i++)
    {
        printf("Enter a number :- ");
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("\n");
    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(j=1;j<=4;j++)
    {
        for(i=0;i<4;i++)
        {
            if(a[i+1]<a[i])
            {
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
        a[i]=b[i];
    }
    printf("\n\n");
    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
}
