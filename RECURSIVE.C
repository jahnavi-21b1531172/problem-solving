#include<stdio.h>
int xyz(int,int,int);
int main()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    b=xyz(a,0,a);
    if(b==1)
    {
        printf("%d",a);
    }
    else
    {
        printf("number is not palindrome");
    }
return 0;
}
int xyz(int n,int rev,int m)
{
    if(m==0)
    {
        if(n==rev)
            return(1);
        else
            return(0);
    }
    else
        xyz(n,rev*10+m%10,m/10);
}
