#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    char a[max],a1[max], *b, *b1;

    printf("Enter string: ");
    gets(a);

    b = &a;
    b1 = &a1;

    while(*b!='\0')
    {
        *b1 = *b;

        *b++;
        *b1++;
    }

    *b1='\0';

    printf("\nCoppied Sting: %s",a1);
    getch();
    return 0;
}

