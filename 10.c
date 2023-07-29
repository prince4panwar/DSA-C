
#include<stdio.h>
int main()
{
    int a[5],b[5],i;
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
    for(i=0;i<5;i++)
    {
       if(a[i]!=b[i])
            break;
    }
    if(i==5)
        printf("\nBoth the array is same");
    else
        printf("\nBoth the array is not same");

}

