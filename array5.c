#include<stdio.h>
int main()
{
    int a[4][4],b[4][4],i,j;
    printf("Enter numbers of first matrix \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter a number :- ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d   ",a[i][j]);
            b[i][j]=a[i][j];
        }
        printf("\n");
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d   ",b[i][j]);
        }
        printf("\n");
    }

}

