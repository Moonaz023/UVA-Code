#include<stdio.h>
int main()
{
   int b1,b2,b3,g1,g2,g3,c1,c2,c3,a[7],c,d,swap,b[7],x,i;
    while(scanf("%d%d%d%d%d%d%d%d%d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9){
    a[0]=b2+b3+g1+g2+c3+c1;
    a[1]=b2+b3+g1+g3+c2+c1;
    a[2]=b1+b3+g1+g2+c2+c3;
    a[3]=b2+b1+g1+g3+c2+c3;
    a[4]=b1+b3+g2+g3+c2+c1;
    a[5]=b2+b1+g2+g3+c3+c1;
    for(i=0;i<=5;i++){
        b[i]=a[i];
        }
    for (c = 0 ; c < 6 - 1; c++)
  {
    for (d = 0 ; d < 6 - c - 1; d++)
    {
      if (b[d] > b[d+1])
      {
        swap= b[d];
        b[d]   = b[d+1];
        b[d+1] = swap;
      }
    }
  }
  x=b[0];
   if(x==a[0])
    printf("BCG %d\n",x);
    else if(x==a[1])
    printf("BGC %d\n",x);
      else if(x==a[2])
    printf("CBG %d\n",x);
      else if(x==a[3])
    printf("CGB %d\n",x);
      else if(x==a[4])
    printf("GBC %d\n",x);
      else if(x==a[5])
    printf("GCB %d\n",x);
}
return 0;
}
