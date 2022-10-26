#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,k,p,t;
    double a[101],v[101];
    char c[101],s[10001],x;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        getchar();
        scanf("%c",&c[i]);

        scanf("%lf",&v[i]);
        a[i]=0;
        }

    scanf("%d",&k);
scanf("%c",&x);
    for(i=0;i<k;i++){
        gets(s);
            for(j=0;j<strlen(s);j++)
                for(p=0;p<n;p++)
                {
                    if(c[p]==s[j])
                    {
                        a[p]=a[p]+1.0;
                    }
                }
    }
    double sum=0;
    for(i=0;i<n;i++)
        {
        sum=sum+(v[i]*a[i]);

        }
     printf("%.2lf$\n",sum/100.00);
}
}
