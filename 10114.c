#include<stdio.h>
int main()
{
    int M,m,D,i,X,j,s;
    float d,a[110],p,l,w,P,pp,L,R,f,loan,payment,car;
    for(;;) {
    X=0;
    s=0;
    w=0;
    scanf("%d%f%f%d",&M,&p,&l,&D);
    if(M < 0)
        break;
    for(i=1;i<=D;i++){
    s=X;
        scanf("%d%f",&m,&d);
P=a[X-1];
        if(X==m){
          a[m]=d;
          X=X+1;
          P=a[m];
          s=X;}

else{
    for(j=s;j<m;j++){
        a[j]=P;
        X++;
    }
    a[m]=d;
    X=X+1;
}
    }
    for(i=m;i<=M;i++)
        a[i]=d;
         loan=l;
         payment=(l/M);
    car = (l + p) * (1.0 - a[0]);
if(l < car) printf("0 months\n");
else{
for(i=1;i<=M;i++){
    loan -= payment;
    car -= a[i] * car;

    if(loan < car) {
        printf(i == 1? "1 month\n" : "%d months\n", i);
        break;
    }
}}
}
return 0;
}


