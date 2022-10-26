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
        for(j=0;j<n;j++){
          scanf("%d",&a[j]);
        if(a[j]>h)
            h=a[j];}
            printf("Case %d: %d\n",i,h);

    }
}
