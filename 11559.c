#include<stdio.h>
int main(){

    int i,j,B,a,x[1400],n,b,h,w,t,e;
    while(scanf("%d%d%d%d",&n,&b,&h,&w)==4){
    B=(b+1);
    for(i=0;i<h;i++){
        scanf("%d",&t);
        e=0;
        for(j=0;j<w;j++){
            scanf("%d",&x[j]);}
            e=0;
        for(j=0;j<w;j++){
            if(x[j]>=n)
                e++;}
            if(e>0){
                if(B>(t*n))
                    B=(t*n);
                    else
                        B=B;
            }
    }
    if(B<=b)
    printf("%d\n",B);
    else
        printf("stay home\n");
}
return 0;
}

