///****correct******

#include<stdio.h>
int main()
{
     int a[200000];
    int t=0,n,j,i,ans,T,max;
    scanf("%d",&T);
    while(t<T)
    {max=-200000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ans=a[0]-a[1];
    for(i=0;i<n-1;i++){
            if(a[i]>max)
            max=a[i];
                if(max-a[i+1]>ans){
                ans=max-a[i+1];
                }

                }
printf("%d\n",ans);
t++;
}
return 0;
}

///****time limit**********
/*
#include<stdio.h>
int main()
{
     int a[200000];
    int t=0,n,j,i,ans,T,max;
    scanf("%d",&T);
    while(t<T)
    {max=-200000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ans=a[0]-a[1];
    for(i=0;i<n-1;i++){
            if(a[i]>max)
            max=a[i];
                if(max-a[i+1]>ans){
                ans=max-a[i+1];
                }

                }
printf("%d\n",ans);
t++;
}
return 0;
}
*/
