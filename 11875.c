#include<stdio.h>
int main()
{
    int t,n,a[12],i,c=0;
    scanf("%d",&t);
    while(t--){
            c++;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Case %d: %d\n",c,a[i/2]);
}
return 0;
}
