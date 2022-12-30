#include<stdio.h>
int main()
{
    int i,j,k,n1,n2,A[10],B[10],C[20];
    printf("enter the number of elements in A:");
    scanf("%d",&n1);
    printf("enter the elements in A");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("enter the number of elements in B:");
    scanf("%d",&n2);
    printf("enter the elements in B");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&B[j]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(A[i]==B[j])
            {
                for(j=0;j<k;j++)
                {
                    if(C[j]==A[i])
                        break;
                }
                if(j==k)
                {
                    C[k]=A[i];
                    k++;
                }

            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d",C[i]);
    }
    return 0;

}
