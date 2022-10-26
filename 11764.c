#include<stdio.h>
int main()
{
    int t,i=0,n,h=0,j;
    scanf("%d",&t);
    while(t--){

        i++;
        scanf("%d",&n);
        int a[n];
        h=0;
        int l=0;
        a[0]=-1;
        for(j=1;j<=n;j++){
          scanf("%d",&a[j]);
        if(a[j]>a[j-1])
            h++;
           if(a[j]<a[j-1])
            l++;
            }
            printf("Case %d: %d %d\n",i,h-1,l);

    }
}
