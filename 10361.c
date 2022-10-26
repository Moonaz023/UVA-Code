#include<string.h>
int main()
{
    char x[100],y[1000];
    int k,i,j,e,f,g,h,l,m,n,t,tt;
while(scanf("%d",&t)==1)
{
scanf("\r");
for(j=0;j<t;j++)
{
    gets(x);
    gets(y);
    k=strlen(x);
    int kk=strlen(y);
    for(i=0;i<k;i++){
        if(x[i]=='<')
            e=i;
        if(x[i]=='>'){
                m=i;
                break;
        }
    }
for(i=m+1;i<k;i++){
        if(x[i]=='<'){
            g=i;
        }
        if(x[i]=='>'){
                n=i;
                break;
        }
    }

    for(i=0;i<k;i++){
       if(x[i]!='<'&&x[i]!='>')
        printf("%c",x[i]);
        }
        printf("\n");
for(i=0;i<kk-3;i++){
    printf("%c",y[i]);
        }
        for(i=g+1;i<n;i++){
        printf("%c",x[i]);
        }
        for(i=m+1;i<g;i++){
        printf("%c",x[i]);
        }
        for(i=e+1;i<m;i++){
        printf("%c",x[i]);
        }
        for(i=n+1;i<k;i++){
        printf("%c",x[i]);
        }
        printf("\n");
    }
}
}

