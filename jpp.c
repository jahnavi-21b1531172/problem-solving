#include<stdio.h>
void tower(int,char,char,char);
void main(){

    int n;
    char a,b,c;
    a='A';
    b='B';
    c='C';
    printf("enter number of dics");
    scanf("%d",&n);
    tower(n,a,b,c);
}
void tower(int m,char x,char y,char z)
{
    if(m==1)
    {
        printf("%C-%C",x,z);
    }
    else
    {
        tower(m-1,x,z,y);
        tower(1,x,y,z);
        tower(m-1,y,x,z);
    }
}
