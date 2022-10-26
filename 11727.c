#include<stdio.h>
int main()
{
    int t,i=0,n,h=0,j,a,b,c;
    scanf("%d",&t);
    while(t--){

        i++;
        h=0;

       scanf("%d%d%d",&a,&b,&c);
        if((a<b && b<c)||(c<b && b<a)){
                h=b;}
        else if((c<a && a<b)||(b<a && a<c)){
                h=a;}
              else if((a<c && c<b)||(b<c && c<a)){
                h=c;}



            printf("Case %d: %d\n",i,h);

    }
}

