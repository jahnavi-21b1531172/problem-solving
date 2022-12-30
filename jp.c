#include<stdio.h>
void main()
{
    int a[100],i,j,n,sum,new_sum,mis_num;
    printf("enter the number of elements in a:");
    scanf("%d",&n);
    printf("enter the elements in a");
    for(i=0;i<=n-2;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=n*(n+1)/2;
    printf("%d",sum);
    new_sum=(n-1)*n/2;
    printf("%d",new_sum);
    mis_num=sum-new_sum;
    printf("%d",mis_num);

}
