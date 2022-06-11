#include<stdio.h>
void sum(int num)
{
    int i,s=0,c=0;

    for(i=1; i<=num; i++)
    {
        if(i%2!=0)
        {
            s+=i;
            c++;
        }
    }
    printf("Sum is:- %d\n",s);
    printf("Avg is:- %.2lf\n",(double)s/c);
}

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);

    sum(n);

    return 0;
}


