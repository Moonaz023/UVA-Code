#include<stdio.h>
int main()
{
int n,i,k,p,b,T,t=0;
scanf("%d",&T);
while(T--){
        t++;
        scanf("%d%d%d",&n,&k,&p);
        i=0;
b=k;
while(i!=p){
    b++;
    if(b>n){
        b=1;
    }
    i++;
}
printf("Case %d: %d\n",t,b);}
return 0;

}
