 #include<stdio.h>
int  main()
{
    int a[10]={22,40,43,56,76,45,21,23,65,87},i,min=a[0];
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("\nMinimum value is %d",min);
}
