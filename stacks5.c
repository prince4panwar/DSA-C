//reverse a string dynamically
#include<stdio.h>
void main()
{
    char *ptr,temp;
    int i,size;
    printf("Enter the size of the string :- ");
    scanf("%d",&size);
    ptr=(char*)malloc(size*sizeof(char));
    printf("Enter a string :- ");
    fflush(stdin);
    gets(ptr);
    for(i=0;i<size/2;i++)
    {
        temp=ptr[i];
        ptr[i]=ptr[size-i-1];
        ptr[size-i-1]=temp;
    }
    puts(ptr);
}
