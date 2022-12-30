#include<stdio.h>
void reverse(char*);
void main()
{
    char name[10]="xyz";
    reverse(name);
    printf("reverse string=%s",name);

}
 void reverse(char*p)
{
    int l=0,i,temp;
    char *x,*q;
    x=p;
    while(*p!='\0')
    {
        l++;
        p++;
    }
    p=x;
    q=(p+l-1);
    for(i=0;i<l/2;l++)
    {
        temp=*(p+i);
        *(p+i)=*(q-i);
        *(q-i)=temp;
    }
}
