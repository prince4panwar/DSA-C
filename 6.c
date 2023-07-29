
#include<stdio.h>
int main()
{
    int a[5]={14,20,1,9,8},num,i;
    for(i=0;i<5;i++)
        printf("%d ",a[i]);

    printf("\nEnter a number which you want to search in the array :- ");
    scanf("%d",&num);

    for(i=0;i<5;i++)
    {
        if(num==a[i])
            break;
    }
    if(i==5)
        printf("%d is not present in the array",num);
    else
        printf("%d is present in the array at index %d",num,i);

}

