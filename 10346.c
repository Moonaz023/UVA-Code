#include<stdio.h>
int main()
{
    int i,n,j,k,l,a;
   while(scanf("%d%d",&n,&k)==2){
    i=0;
    a=0;
    j=n/k;
    l=n%k;
    a=i+j;
    i=i+j+l;

    while(i>=k)
    {
        j=i/k;
        l=i%k;
        a=a+j;
        i=j+l;

    }
    printf("%d\n",a+n);}
    return 0;
}
