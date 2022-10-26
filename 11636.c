#include<stdio.h>
int main()
{
    int n,i=0,s=1,c=0;
    while(1){
            s=1;
    c=0;
    i++;
            scanf("%d",&n);
    if(n<0)
        break;
    while(s<n){
        s=s+s;
        c++;
    }
    printf("Case %d: %d\n",i,c);}

return 0;
}
