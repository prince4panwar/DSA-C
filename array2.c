  #include<stdio.h>
int main()
{
    int a[4][4],b[4][4],c[4][4],i,j,k,sum=0;
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
        }
        printf("\n");
    }
    printf("\nEnter numbers of second matrix \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter a number :- ");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d   ",b[i][j]);
        }
        printf("\n");
    }
    for(j=0;j<4;j++)
    {
        for(i=0;i<4;i++)
        {
            sum=0;
            for(k=0;k<4;k++)
            {
                sum=sum+a[j][k]*b[k][i];
            }
            c[j][i]=sum;
        }
    }
    printf("\nAfter multiplying the two matrices \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d   ",c[i][j]);
        }
        printf("\n");
    }

}


