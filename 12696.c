#include<stdio.h>
int main()
{
     int z[200],I;
    int t=0,n,j,i,ans,T,max=0;
    float a,b,c,d;
    scanf("%d",&T);
    while(t<T)
    {
        scanf("%f%f%f%f",&a,&b,&c,&d);
        if(d<=7 && ((a<=56 && b<=45 && c<=25)||(a+b+c<=125)))
        z[t]=1;
        else
            z[t]=0;
            max=max+z[t];
        printf("%d\n",z[t]);
 t++;
}
printf("%d\n",max);
return 0;
}

