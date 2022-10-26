#include<stdio.h>
int main()
{
    int i,j,n,t,c=0;

    while(1){
    j=0;
    scanf("%d",&n);
    if(n==0)
        break;
    for(i=0;i<n;i++){
        scanf("%d",&t);
        if(t==0){
           j--;
        }

        else if(t>0){
           j++;
        }

    }
    c++;
    printf("Case %d: %d\n",c,j);
    }
    return 0;
}
