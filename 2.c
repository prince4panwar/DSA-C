#include<stdio.h>
int  main()
{
    int a[10]={22,40,43,56,76,405,21,23,65,87},i,max=a[0];
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("\nMaximum value is %d",max);
}

