#include<stdio.h>
void main(){
    int i,j,l=0,n,a[10][10];
    int h=2*n-2;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0){
        for(i=l;i<=h;i++){
            for(j=l;j<=h;j++){
                if(i==l||i==h||j==l||j==h){
                        a[i][j]=n;

                }

            }
        }
        n--;
        l++;
        h--;
    }
}
