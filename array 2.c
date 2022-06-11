//Write a program that will take n (n = any positive integer less than 100) from the user and print them in descending order.

#include<stdio.h>
int main()
{
    int a,i,j,f=0;
    printf(" Enter any positive integer less than 100\n");
    scanf("%d", &a);
    int n[a];
    for (i=0; i<a; i++)
    {
        scanf("%d", &n[i]);
    }
    for (i=0; i<a; i++)
    {
        for (j=i+1; j<a; j++)
        {
            if ( n[i]<n[j])
            {
                f=n[i];
                n[i]=n[j];
                n[j]=f;
            }
        }
    }
    printf("Descending order: ");
    for (i=0; i<a; i++)
    {
        printf("%d ", n[i]);
    }
    getch();
    return 0;
}
