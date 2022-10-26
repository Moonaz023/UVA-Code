#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b,n,j,d;
    float e;
    for(i=1;i<=201;i++){
            n=0;
        scanf("%d%d",&a,&b);
        if(a==0&&b==0)
            break;

            for(j=a;j<=b;j++){
                e=sqrt(j);
                d=sqrt(j);
                if(e==d)
                    n++;
                }

    printf("%d\n",n);
    }
    return 0;
}
