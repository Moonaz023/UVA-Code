
#include<stdio.h>
int main(){

    int i,j,d,h,c,s,f;
    double ih,dc,hac,has,F;
    while(scanf("%d%d%d%d",&h,&c,&s,&f)==4){
    if(h==0)
        break;
    F=((c*f)/100.0);
    d=1;
    ih=0;
    dc=c;
    hac=(ih+dc);
    has=(hac-s);
    while(1){
            if(hac>h){
         printf("success on day %d\n",d);
         break;
        }
    if(has<0){
        printf("failure on day %d\n",d);
        break;}

        ih=has;
        dc=(dc-F);
        if(dc<0)
            dc=0;
        hac=(ih+dc);

        has=(hac-s);
    d++;
    }
    }
return 0;
}
