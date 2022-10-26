#include<stdio.h>
int main()
{
    int i,j,k=0,a[100],t=0,b,kk=0,tt=0,bb,x;
    while(scanf("%d",&x)==1){
            if(x==0)
            break;
            k++;
            t=0;
            tt=0;
            for(i=0;i<x;i++){
            scanf("%d",&a[i]);
            t=t+a[i];
        }
        b=t/x;
        for(i=0;i<x;i++){
            if(b<a[i]){
                tt=tt+(a[i]-b);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n",k,tt);
        printf("\n");

}
return 0;
}

