#include<stdio.h>
void pow(char,int);
void main()
{
    int n;
    char A;
    pow(A,n);
}
void pow(char a,int m)
{
    if(m==1)
    {
        return(a);
    }
    else
    {
        return(pow(a^m,m-1));
    }
}
