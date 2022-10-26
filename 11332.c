#include<stdio.h>
int main()
{
   int a,b,n,s=0,i,j,k,p;
   for(p=0;p<10000;p++){
        s=0;
    scanf("%d",&n);
    if(n==0)
        return 0;
    for(k=0;k<=100;k++){
            if(k>0){
            n=s;
            s=0;}
   for(i=n;i>0;i=i/10)
   {j=i%10;
    s=s+(j) ;
   }
   if(s<10)
    break;}
    printf("%d\n",s);}

    return 0;
}
