
#include<stdio.h>
void charec(char si)
{
    if(si>=65 && si<=90)
        printf("CAPITAL LETTER\n");
    else if(si>=97 && si<=122)
        printf("SMALL LETTER\n");
    else if(si>=48 && si<=57)
        printf("DIGIT\n");
    else
        printf("SPECIAL SYMBOL\n");
}

int main()
{
    char s;
    scanf("%c",&s);
    charec(s);


    return 0;
}
