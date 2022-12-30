#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,k,n,m,count=1;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    m=pow(a,b);
    printf("%d",m);
    printf("enter the value of k");
    scanf("%d",&k);
    while(count!=k)//while(k>0)//{r=m%10;m=m/10;k--;}

    {
        m=m/10;
        count++;

    }
    n=m%10;
    printf("%d",n);

}
