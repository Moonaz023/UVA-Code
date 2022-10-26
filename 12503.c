#include<stdio.h>
int main()
{
     int a[200],I;
    int t=0,n,j,i,ans,T,max;
    char s[100];
    scanf("%d",&T);
    while(t<T)
    {
        ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        if(strcmp(s,"LEFT")==0)
            a[i]=-1;
        if(strcmp(s,"RIGHT")==0)
            a[i]=1;
            if(strcmp(s,"SAME")==0){
                    scanf("%s",s);
                scanf("%d",&I);
                a[i]=a[I-1];
            }

    }
    for(i=0;i<n;i++){
        ans=ans+a[i];
    }
printf("%d\n",ans);
t++;
}
return 0;
}

