#include<stdio.h>
int main()
{
    int i,j,k=0,a[100][100],t=0,b,kk=0,tt=0,bb,x;
    while(scanf("%d",&x)==1){
            if(x==0)
            break;
    k=0;
    t=0;
    kk=0;
    tt=0;
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            k=k+a[i][j];

        }
        if(k%2==1){
                b=i+1;
          t++;}
        k=0;
    }
    for(j=0;j<x;j++){
        for(i=0;i<x;i++){
            kk=kk+a[i][j];

        }
        if(kk%2==1){
                bb=j+1;
          tt++;}
        kk=0;
    }
    if(t==0 && tt==0)
        printf("OK\n");
    else if(t==1 && tt==1)
        printf("Change bit (%d,%d)\n",b,bb);
    else
        printf("Corrupt\n");
}
return 0;
}

