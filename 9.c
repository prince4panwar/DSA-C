#include<stdio.h>
int main()
{
    int a[5],b[5],c[10],i;
    printf("Enter number of first array\n");
    for(i=0;i<5;i++)
    {
        printf("Enter %d number :- ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter number of second array\n");
    for(i=0;i<5;i++)
    {
        printf("Enter %d number :- ",i+1);
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++)
    {
        if(i<5)
            c[i]=a[i];
        else
            c[i]=b[i-5];
    }
    printf("\nAfter merging the first and second\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",c[i]);
    }
}
