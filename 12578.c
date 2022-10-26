/*

#include<stdio.h>
#include<Math.h>
#define PI acos(-1)
int main()
{
    int t,i;
    double a,b,y,r,area,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    scanf("%lf",&x);
    y=(x*6)/10;
    r=(x*2)/10;
    area=(x*y);
    b=(PI*r*r);
    a=(area-b);
    printf("%.2lf %.2lf\n",b,a);
    }
    return 0;
}
*/



#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int n,i;
    double cercular_area,ch,r,rectengular_area,length,wide;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lf",&length);
        wide=((6*length)/10);
        r=((2*length)/10);
        cercular_area=(PI*r*r);
        ch=(length*wide);
        rectengular_area=(ch-cercular_area);
        printf("%.2lf %.2lf\n",cercular_area,rectengular_area);
    }

    return 0;


}

