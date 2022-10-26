#include<stdio.h>
int main()
{
    int T,n=1;
    double u,v,d,x,t,tmin;
scanf("%d",&T);
while(T--){
    scanf("%lf %lf %lf",&d,&v,&u);
    if(u>0 && v>0 && u>v){
    x=u*(sqrt(1-((v/u)*(v/u))));
    t=d/x;
    tmin=d/u;
   printf("Case %d: %.3lf\n",n,(t-tmin));}
else
    printf("Case %d: can't determine\n",n);

n++;}
return 0;
}
