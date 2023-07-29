#include<stdio.h>
#include<math.h>
float F(float x, float y)

{   float z;
    // z= pow(x,2)+y;
    z=x+y;
    return z;
}

void main()
{
    float x1,y1,x2,y2,h,a1;
    int i=0;
    printf("\nEnter the value of x1 : ");
    scanf("%f",&x1);
    printf("\nEnter the value of y1 : ");
    scanf("%f",&y1);
    printf("Enter value of x2 : ");
    scanf("%f",&x2);
    printf("\nEnter the value of h : ");
    scanf("%f",&h);
    a1=(x2-x1)/h;

    float s1,s2,s3,s4,s;
    printf("\nx\t\t\ty");
    do
    {   i++;
        s1=F(x1,y1);
        s2=F((x1+(h/2)),(y1+((h/2)*s1)));
        s3=F((x1+(h/2)),(y1+((h/2)*s2)));
        s4=F((x1+h),(y1+(h*s3)));
        s=(s1+2*s2+2*s3+s4)/6;
        y2=y1+(h*s);
        printf("\n%f\t%f",x1,y1);
        x1=x1+h;
        y1=y2;
    } while(i!=a1);

    printf("\n%f\t%f",x1,y2);
}


