#include<stdio.h>

int main()
{
     long long int j,t,p[100000],a,b,n,k,z,i;
    j=0;
    while(scanf("%lld",&n)==1){
    p[j]=n;
    for(a=0;a<=j;a++){
        if(p[j]<p[a]){
            t=p[a];
            p[a]=p[j];
            p[j]=t;
        }
    }


    if(j%2==0)
        printf("%lld\n",p[j/2]);
    else
        printf("%lld\n",(p[j/2]+p[(j/2)+1])/2);
    j++;
}
    return 0;
}

