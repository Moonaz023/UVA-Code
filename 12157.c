#include<stdio.h>
#include<string.h>
int main()
{
   int i,j,k,m[21],M,a,n,TM,TJ,J,T,c=1;
    scanf("%d",&T);
    while(T--){
            TM=0;
    TJ=0;
    scanf("%d",&n);

    for(a=0;a<n;a++){
        scanf("%d",&m[a]);
    }
    for(a=0;a<n;a++){
   M=0;
   i=1;
   while(1){
        if((i*30)-1>m[a])
    break;
    i++;
   }
   M=(i-1)*10;
   if(((i-1)*30)-1<m[a])
        M=M+10;
        TM=TM+M;
        }


for(a=0;a<n;a++){
   J=0;
   i=1;
   while(1){
        if((i*60)-1>m[a])
    break;
    i++;
   }
   J=(i-1)*15;
   if(((i-1)*60)-1<m[a])
        J=J+15;
        TJ=TJ+J;
        }

if(TM<TJ){

    printf("Case  %d:  Mile  %d",c,TM);
}
if(TM>TJ){
    printf("Case  %d:  Juice  %d",c,TJ);
}
if(TM==TJ){
    printf("Case  %d:  Mile  Juice  %d",c,TJ);
}
printf("\n");
c++;
    }

    return 0;
}

