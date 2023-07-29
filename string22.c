#include<stdio.h>
void main()
{
    char b[100];
    int i,j,num,temp,a[100];
    printf("Enter a number :- ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        a[i]=num%10;
        num=num/10;
    }
    i--;
    for(j=0;j<i/2;j++)
    {
        temp=a[j];
        a[j]=a[i-j];
        a[i-j]=temp;
    }
    /**for(j=0;j<=i;j++)
    {
        printf("%d ",a[j]);
    }*/
    for(j=0;j<=i;j++)
    {
        b[j]=a[j];
        b[j]=b[j]+48;
    }
    b[j]='\0';
    puts(b);


}
