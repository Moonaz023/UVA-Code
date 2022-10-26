#include<stdio.h>
int main()
{
    int i,n,t,k,a[11],c;
    scanf("%d",&t);
    while(t--){
     scanf("%d",&n);
    for(i=0;i<=9;i++)
        a[i]=0;

    for(i=1;i<=n;i++)
    {
        k=i;
        while(k>0)
        {
            a[k%10]=a[k%10]+1;
           k=k/10;
        }
    }
      for (c = 0; c < 10 ; c++)
            {
            printf("%d", a[c]);

            if(c<(9))

            printf(" ");
            }

 printf("\n");
}
}
