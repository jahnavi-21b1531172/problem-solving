#include<stdio.h>
int main()

{
    int s=0,x=2,i,n,fact;
    for(i=1;i<=n;i++)
    {
        s=s+pow(x,2*i-1)*pow(-1,x)/fact(2*i-1);
        x++;

    }
int pow(int x,int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
    {
        p=p*x;
    }
    return (p);
}
