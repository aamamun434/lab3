#include<stdio.h>
int main()
{
    int i,j,max,A[5][5];
    printf("Enter the element of matrix:\n");
    for(i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            printf(" A[%d] [%d] ",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    max=A[0][0];
    for(i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if(i==j)
            {
                if (max<A[i][j])
                {
                    max=A[i][j];
                }
            }
        }
    }
    printf(" Biggest number is %d", max);
    getch();
    return 0;
}
