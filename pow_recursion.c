#include<stdio.h>
int power(int,int,int);
void main()
{
    int a=1,b,c,p;
    printf("enter the two numbers");
    scanf("%d%d",&b,&c);
    p=power(a,b,c);
    printf("%d",p);

}
int power(int m,int x,int n)
{
    if(n==0)
    {
        return(m);
    }
    else
    {
        return(power(m*x,x,n-1));
    }
}
