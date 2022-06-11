#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char str[100];
    printf("Enter a string:\n");
    gets(str);
    n=strlen(str);
    printf("The number of words and number of characters in a given string :%d ", n);
    return 0;
}
