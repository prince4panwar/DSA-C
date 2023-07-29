#include<stdio.h>
int main()
{
    int a[10]={1,12,23,34,45,56,67,78,89,90},num,i,left=0,right=9,mid,iteration=0;
    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    printf("\nEnter a number which you want to search in the array :- ");
    scanf("%d",&num);

    while(left<=right)
    {
        iteration++;
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
        printf("Number of iteration :- %d",iteration);
}
