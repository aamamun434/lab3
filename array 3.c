#include<stdio.h>
int main()
{
    int a,i,j,f=0;
    printf(" Enter number of data: ");
    scanf("%d", &a);
    int A [a][a];
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            printf(" A[%d] [%d] ",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
