#include<stdio.h>
void main()
{
    char name[100],*p;
    printf("enter a string");
    scanf("%s",&name);
    p=name;
    while(*p !='\0')
    {
        if((*p>=97)&&(*p<=123))
        {
            *p=(*p)-32;
        }
        else if((*p>=65)&&(*p<=90))
        {
            *p=(*p)+32;
        }
        p++;
    }
    printf("%s",&name);
}
