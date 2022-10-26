#include<stdio.h>
int main()
{
    long long int P,i,j=0,k;
    int c,N;
    scanf("%d",&N);
    while(N--){
            j=0;
            c=0;
    scanf("%lld",&P);
    lvl:
        j=0;
    k=P;
    while(P!=0){
        i=P%10;
        P=P/10;
        j=j*10+i;

    }
    if(j==k)
    printf("%d %lld\n",c,j);
    else{
        P=j+k;
        c++;
        goto lvl;
        }

}
return 0;
}
