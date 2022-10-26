#include<stdio.h>
int main()
{
    int i,j,t1,t2,f,a,c[3],swap,sum=0,t,k=0;
    scanf("%d",&t);
    while(t--){
            sum=0;
    k++;
    scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&c[0],&c[1],&c[2]);
    for (i=0;i<3;i++)
  {
    for (j=0;j<3-i-1;j++)
    {
      if (c[j]>c[j+1])
      {
        swap=c[j];
        c[j]=c[j+1];
        c[j+1]=swap;
      }
    }
  }
    sum=t1+t2+f+a+((c[2]+c[1])/2);
    if(sum>=90)
    printf("Case %d: A\n",k);
    if(sum>=80&&sum<90)
    printf("Case %d: B\n",k);
    if(sum>=70&&sum<80)
    printf("Case %d: C\n",k);
    if(sum>=60&&sum<70)
    printf("Case %d: D\n",k);
    if(sum<60)
    printf("Case %d: F\n",k);

}return 0;
}
