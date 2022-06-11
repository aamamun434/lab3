#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char str[100],f;
    printf("Enter a string:\n");
    gets(str);
    n=strlen(str);
    str[0]=toupper(str[0]);
    for (i=0; i<n; i++)
    {
        if ( str[i]==' ')
        {
            str[i+1]=toupper(str[i+1]);
        }
    }
    for (i=0; i<n; i++)
    {
        printf("%c", str[i]);
    }
    getch();
    return 0;
}
