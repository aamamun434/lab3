// Write a function to compare two strings using pointers. Function has two string  arguments and returns 0 if strings are equal else returns 1.

#include<stdio.h>
#include<string.h>
#define max 100
    int main()
    {
        char a[max],a1[max], *b, *b1;
        int flag=0;
        printf("Enter 1st string: \n");
        gets(a);
        printf("Enter 2nd string: \n");
        gets(a1);

        b = &a;
        b1 = &a1;

        while(*b!='\0' || *b1!='\0')
        {
            if(*b != *b1)
            {
                flag = 1;
                break;
            }
            *b++;
            *b1++;
        }
        if(flag == 0)
            printf("0");
        else
            printf("1");
        getch();
        return 0;
    }

