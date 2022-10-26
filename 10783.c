#include<stdio.h>
int main()
{
    int a,b,i,s,j,t;

    scanf("%d",&t);
    for(j=1;j<=t;j++){
            s=0;
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++){
        if(i%2==1)
            s=s+i;
    }


    printf("Case %d: %d\n",j,s);


}
return 0;
}
