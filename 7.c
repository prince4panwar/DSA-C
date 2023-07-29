#include<stdio.h>
int main()
{
    int a[10],num,i,left=0,right=9,mid;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    printf("\nEnter a number which you want to search in the array :- ");
    scanf("%d",&num);

    while(left<=right)
    {
        mid=(left+right)/2;
        if(num==a[mid])
           break;
        else if(num>a[mid])
            left=mid+1;
        else if(num<a[mid])
            right=mid-1;
    }
    if(left>right)
        printf("%d is not present in the array",num);
    else
        printf("%d is present in the given array at index %d",num,mid);
}
