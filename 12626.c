#include<stdio.h>
#include<string.h>
int main()
{
    int j,n,k,p[7],z;
    long long t;
    char s[601];
    scanf("%lld",&t);
    while(t--){
    for(j=0;j<6;j++)
        p[j]=0;
    scanf("%s",s);
    for(j=0;j<strlen(s);j++)
        {
            if(s[j]=='M')
            p[0]=p[0]+1;
            if(s[j]=='A')
            p[1]=p[1]+1;
            if(s[j]=='R')
            p[2]=p[2]+1;
            if(s[j]=='G')
            p[3]=p[3]+1;
            if(s[j]=='I')
            p[4]=p[4]+1;
            if(s[j]=='T')
            p[5]=p[5]+1;
        }
            p[0]=(p[0]/1);
            p[1]=(p[1]/3);
            p[2]=(p[2]/2);
            p[3]=(p[3]/1);
            p[4]=(p[4]/1);
            p[5]=(p[5]/1);
    for(z=0;z<6;z++)
        for(j=0;j<6;j++)
    {
            if(p[z]<p[j]){
                int temp=p[z];
                p[z]=p[j];
                p[j]=temp;}
    }
    printf("%d\n",p[0]);
}

}
