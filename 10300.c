#include<stdio.h>
int main()
{
    int t,n,a,b,c,sum=0,x;
    //double d,i,k;
    scanf("%d",&t);
    while(t--){
            sum=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&a,&b,&c);
    x=a*c;
        //d=((double)a/b);
        //i=d*c;
        //k=i*b;
        sum=sum+x;
    }
    printf("%d\n",sum);
}
return 0;
}
