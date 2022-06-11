#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,v=0,c=0,d=0,s=0;
    char string[100],f;
    printf("Enter a string:\n");
    gets(string);
    n=strlen(string);
    for (i=0; i<n; i++)
    {
        f=string[i];
        if (f>= 'A' && f<='Z')
        {
            string[i]=tolower(f);
        }
        else if (f>= 'a' && f<='z')
        {
            string[i]=toupper(f);
        }
        else if (f>= '0' && f<='9')
        {
            string[i]='#';
        }
        else
        {
            string[i]='%';
        }
    }
    for (i=0; i<n; i++)
    {
        printf("%c", string[i]);
    }
    return 0;
}

