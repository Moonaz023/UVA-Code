#include <stdio.h>
#include <string.h>
int main()
{
int n,p,r,c,i,j,k;
char temp[81],result[81],brand[81],best[81];
double d,t;
c=1;
while(1){
        k=0;
        t=0;

        scanf("%d%d",&n,&p);
        if(n==0 && p==0){
        break;}
        gets(temp);
         if(c>1) {
            printf("\n");
        }
    for(i=1;i<=n;i++){
        gets(temp);}

    for(i=1;i<=p;i++){
        gets(brand);
        scanf("%lf %d",&d,&r);
         gets(temp);
        for(j=0;j<r;j++){
            gets(temp);
            }
            if((r>k) ||(r==k && d<t)){
                k=r;
                t=d;
                strcpy(best,brand);
            }

        }
     printf("RFP #%d\n",c);
     puts(best);
     c++;
}
return 0;
}
/*
6 4
engine
brakes
tires
ashtray
vinyl roof
trip computer
Chevrolet
20000.00 3
engine
tires
brakes
Cadillac
10000.00 4
ashtray
vinyl roof
trip computer
engine
Hyundai
10000.00 4
engine
aaaaaa
tires
ashtray
Lada
6000.00 1
tires
1 1
coffee
Starbucks
1.50 1
coffee
0 0

*/
