#include<stdio.h>
void prime(int num)
{
    int i,c=0;

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==0)
        printf("1\n");
    else
        printf("0\n");

}

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);

    prime(n);

    return 0;
}

