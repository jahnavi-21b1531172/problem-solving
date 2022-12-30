# include<stdio.h>
void palindrome(char*);
void main()
{
    char name[10];
    printf("enter a string");
    scanf("%s",&name);
    palindrome(name);
}
void palindrome(char*name)
{
    char *p,*q;
    p=name;
    q=name;
    while(*q !='\0')
    {
        q++;
    }
    q--;
    while(*p == *q && p<q)
    {
        p++;
        q--;

    }
    if(p>=q)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }

}
