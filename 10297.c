#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int D,v;
    double a,d;
    while(1){
    scanf("%d %d",&D,&v);
    if(D==0 && v==0)
        break;
     d=pow(D*D*D-6*v/PI,1.0/3);
    printf("%.3lf\n",d);

    }
    return 0;
}

