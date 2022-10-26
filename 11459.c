#include<stdio.h>
#include<string.h>
int main()
{

    int i,j,m,n,t=0,vi,I,c,cc,a,b,e,N;
    int s[101],p[10001];
    scanf("%d",&N);
    while(t<N){
    for(i=0;i<100;i++)
        s[i]=0;
        for(i=0;i<100;i++)
        p[i]=1;

   scanf("%d%d%d",&a,&b,&c);
   for(i=0;i<b;i++){
   scanf("%d%d",&m,&n);
    s[m]=n;
    }
    I=0;
   j=0;
   for(i=1;i<=c;i++)
    {
        j++;
        scanf("%d",&e);
        if(I==0){
     p[j]=e+p[j];
     if(s[p[j]]>0){
        p[j]=s[p[j]];
        }}
        if(p[j]>99)
            I=1;
        if(j==a)
            j=0;

    }

    for(i=1;i<=a;i++){
        printf("Position of player %d is %d.\n",i,p[i]);}
        t++;
    }
    return 0;
}

