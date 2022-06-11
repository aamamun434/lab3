//Write a program that will take n (n = any positive integer less than 100) from the user and find the biggest number among them.
#include<stdio.h>
int main()
{
    int a,i,f;
    printf(" Enter any positive integer less than 100\n");
    scanf("%d", &a);
    int n[a];
    for (i=0; i<a; i++)
    {
        scanf("%d", &n[i]);
    }
    f=n[0];
    for (i=1; i<a; i++)
    {
        if ( f<n[i])
        {
            f=n[i];
        }
    }
    printf("%d is biggest number.", f);
    getch();
    return 0;
}
