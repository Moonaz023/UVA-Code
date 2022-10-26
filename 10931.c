#include<stdio.h>
int main()
{   long long int n;
    int a,s=0,i=0,j,b[10];
    while(1){
            s=0;
    i=0;
    b[10];
    scanf("%lld",&n);
    if(n==0)
        break;
    while(n>0){
        a=n%2;
        if(a==1)
            s++;
        b[i]=a;
        n=n/2;
        i++;

    }
    printf("The parity of ");
    for(j=i-1;j>=0;j--)
    printf("%d",b[j]);
    printf(" is %d (mod 2).\n",s);
    }
    return 0;
}
