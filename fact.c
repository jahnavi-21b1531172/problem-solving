#include<stdio.h>
int fact(int,int);
void main()
{
    int a=1,b,f;
    printf("enter the number for factorial");
    scanf("%d",&b);
    f=fact(a,b);
    printf("%d",f);
}
int fact(int m,int n)
{
    if(n==1)
    {
        return(m);
    }
    else

        {
            return(fact(m*n,n-1));
        }

}
