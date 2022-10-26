#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,x,a,b,y;
    while(scanf("%d",&n)==1){
    x=pow(10,n);
    y=pow(10,(n/2));
    for(i=0;i<x;i++){
    a=i/y;
    b=i%y;
    j=(a+b)*(a+b);
    if(j==i){
            if(n==2)
    printf("%02d\n",j);
    else if(n==4)
    printf("%04d\n",j);
    else if(n==6)
    printf("%06d\n",j);
    else if(n==8)
    printf("%08d\n",j);
    else
        break;
    }
}}
return 0;
}
