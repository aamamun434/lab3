#include<stdio.h>
int sqr(int n)
{
    return n*n;
}

int main()
{
    int x;

    printf("enter a number: ");
     scanf("%d",&x);

    int sqrt =  sqr(x);

    printf("square of %d = %d",x,sqrt);
    return 0;
}

