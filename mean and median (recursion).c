#include<stdio.h>
float xyz(int [],float,int);
int median(int [],int,int);
void main()
{
    int a[5],i,k;
    float j;
    printf("ENTER THE ELEMENTS IN a:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    j=xyz(a,0,0);
    k=median(a,0,4);
    printf("%d",k);
    printf("\n");
    printf("%f",j);



}
float xyz(int a[],float s,int n)
{
    if(n==5)
    {
        return(s/n);
    }
    else{
            xyz(a,s+a[n],n+1);
}



}
int median(int a[],int l,int m)
{
    if(l>m)
    {
        l--;
        return(a[l]);
    }
    else
    {
        median(a,++l,--m);
    }
}
