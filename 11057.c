#include<stdio.h>
int main()
{
    int i,j,n,m,a[10001],p,q,temp;
    long int k;
    while(scanf("%d",&n)==1)
    {
       k=1000001;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     for(i=0;i<n;i++)
        for(j=0;j<n;j++)
     {
         if(a[i]<a[j])
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
     }
     scanf("%d",&m);
     for(i=0;i<n-1;i++)
       for(j=i+1;j<n;j++)
       {
           if(a[i]+a[j]==m)
           {
              if(a[j]-a[i]<k)
              {
                  k=a[j]-a[i];
                  p=a[i];
                  q=a[j];
              }

           }

       }

printf("Peter should buy books whose prices are %d and %d.\n",p,q);
printf("\n");
}
return 0;
}
