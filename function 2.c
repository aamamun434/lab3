#include<stdio.h>
#define pi 3.1416
double area(double radius)
{
    return pi*radius*radius;
}

int main()
{
    double x;

    printf("enter any positive number: \n");

    scanf("%lf",&x);
    double rad =  area(x);

    printf("area of circle is = %.2lf\n",rad);

    return 0;
}

