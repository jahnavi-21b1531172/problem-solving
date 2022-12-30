#include<stdio.h>
#include<string.h>

int main()
{
    char str[10]="asdfg";
    int n,i,j;
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",*(str+j));

        }
        printf("\n");
    }
}

