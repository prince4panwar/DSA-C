 #include<stdio.h>
int main()
{
    int a[10]={22,40,43,56,76,405,21,23,65,87},num,i;
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the value :- ");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(num==a[i])
            break;
    }
    printf("\nIndex of %d is %d",num,i);
}
