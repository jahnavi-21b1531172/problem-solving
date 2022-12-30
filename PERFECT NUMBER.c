#include<stdio.h>
void xyz(int,int,int);
void main()
{
    int a,b=0,c,pn;
    printf("enter a number");
    scanf("%d",&a);
   xyz(a,0,a/2);


}
void xyz(int n,int s,int m)
{
    if(m==0)
    {
        if(s==n)
        {
            printf("%d",n);
        }}
        else if(n%m==0)
        {
            s=s+m;
            xyz(n,s,m-1);
        }
        else
        {
            xyz(n,s,m-1);
        }

}
