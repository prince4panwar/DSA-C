#include<stdio.h>
#include<conio.h>
void merge(int a[],int first, int mid, int last)
{
    int i,j,k,*b;
    i=first;
    j=mid+1;
    k=first;
    b=int malloc(sizeof([last+1]);

    while(i<=mid&&j<=last)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=last)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for(i=first;i<=last;i++)
    {
        a[i]=b[i];
    }
}
void merge_sort(int a[],int first, int last)
{
    int mid;
    mid=(first+last)/2;
    if(first<last)
    {
        merge_sort(a,first,mid);
        merge_sort(a,mid+1,last);
        merge(a,first,mid,last);
    }
}
int main()
{
    int a[5],i,j,temp;
    for(i=0;i<=4;i++)
    {
        printf("Enter a number :- ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    merge_sort(a,0,4);

    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }

    getch();
}

void bubble_sort()
{
    int a[5],i,j,temp;
    for(i=0;i<=4;i++)
    {
        printf("Enter a number :- ");
        scanf("%d",&a[i]);
    }

    printf("\n");

    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    for(j=1;j<=4;j++)
    {
        for(i=0;i<4;i++)
        {
            if(a[i+1]<a[i])
            {
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
    }

    printf("\n");

    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
}
void selection_sort()
{
    int a[10],i,j,temp;
    for(i=0;i<=9;i++)
    {
        printf("Enter a number :- ");
        scanf("%d",&a[i]);
    }
    printf("\n");

    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }


    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }

}

void insertion_sort()
{
    int a[10],i,j,temp;
    for(i=0;i<=9;i++)
    {
        printf("Enter a number :- ");
        scanf("%d",&a[i]);
    }
    printf("\n");

    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    for(i=1;i<=9;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0&&temp<=a[j];j--)
        {
            a[i]=a[j];
            a[j]=temp;
        }
    }

    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }

}
void insertion1_sort()
{
    int a[5],i,j,temp;
    for(i=0;i<=4;i++)
    {
        printf("Enter a number :- ");
        scanf("%d",&a[i]);
    }
    printf("\n");

    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    for(i=0;i<=4;i++)
    {
        temp=a[i];
        for(j=0;j<i;j++)
        {
            if(temp<a[j])
            {
                for(int k=j;k<i;k++)
                {


                }
            }
        }
    }

    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }

}

void main()
{
    //bubble_sort();
    //selection_sort();
    insertion1_sort();
    getch();
}
