#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,k=0;
    char string[100],f;
    printf("Enter a string:\n");
    gets(string);
    n=strlen(string);
    scanf("%c", &f);
    for (i=0; i<n; i++)
    {
        if (string[i]==f)
        {
            k=1;
        }
        else
        {
            k=0;
        }
    }
    if (k==1)
    {
        printf("%c Is Found.\n", f);
    }
    else
    {
        printf("%c Is Not Found.\n", f);
    }
    return 0;
}
