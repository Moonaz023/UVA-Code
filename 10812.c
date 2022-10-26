#include<stdio.h>
int main()
{
    int t,T;
    long long int x,y,s,d;
    scanf("%d",&T);
    while(T--){
        scanf("%lld%lld",&s,&d);
        if(d>s)
           d=(d*(-1));
            {
        double x=((s+d)/2.0);
        long long a=x;
        double y=(s-a);
        if(x<y){
            double t=x;
            x=y;
            y=t;
        }
        if(x>=0 && y>=0){

        long long b=y;
        if((x-y)==d)
            printf("%lld %lld\n", a, b);
            else
             printf("impossible\n");
            }

        else
            printf("impossible\n");
    }
}
return 0;
}
