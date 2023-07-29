#include<stdio.h>
#include<conio.h>
void display(int *y)
{
    (*y)++;
    printf("\ny = %d",*y);
}
struct student
{
    int roll;
    int age;
};
void main()
{
    int *ptr;
    float *qtr=NULL;
    printf("ptr = %d",ptr);
    printf("ptr = %d",qtr);

    /*struct student s,*ptr;
    ptr=&s;
    ptr->roll=10;//(*ptr).roll=10;
    ptr->age=20;//(*ptr).age=20;
    //s.roll=10;
    //s.age=20;
    printf("\nroll=%d",s.roll);
    printf("\nage=%d",s.age);
    printf("\nroll=%d",(*ptr).roll);
    printf("\nage=%d",(*ptr).age);
    printf("\nroll=%d",ptr->roll);
    printf("\nage=%d",ptr->age);*/

    /*int x=56;
    printf("\nx = %d",x);
    display(&x);
    printf("\nx = %d",x);*/

    /*int *ptr;
    ptr=(int*)malloc(4);
    (*ptr)=20;
    printf("%d",*ptr);*/
}
