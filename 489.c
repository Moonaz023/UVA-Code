#include<stdio.h>
#include<string.h>
int main()
{
    char t[100],tt[100],v[100],vv[100],x,y;
    int i,j,m,n,ti,vi,I,c,cc,z;
    while(1){
            scanf("%d",&I);
            if(I==-1)
                break;
    scanf("%s",t);
    scanf("%s",v);
    m=strlen(t);
    n=strlen(v);
    for(i=0;i<(m-1);i++){
            for(j=i+1;j<m;j++)
            {

                if(t[i]==t[j])
                    t[j]='*';
            }

    }
    for(i=0;i<(m-1);i++){
            for(j=i+1;j<m;j++)
            {
                if(t[i]>t[j]){
                    x=t[j];
                    t[j]=t[i];
                    t[i]=x;}
            }
    }
     ti=0;
    for(i=0;i<=m;i++){
        if(t[i]=='*')
            continue;
           else{
        tt[ti]=t[i];
        ti++;}
    }
    for(i=0;i<(n-1);i++){
            for(j=i+1;j<n;j++)
            {
                if(v[i]==v[j])
                    v[j]='*';
            }
    }
     vi=0;
    for(i=0;i<=n;i++){
        if(v[i]=='*')
            continue;
            else
        {vv[vi]=v[i];
        vi++;}
    }
             c=0;
             cc=0;
        for(i=0;i<strlen(tt);i++){
            for(j=0;j<strlen(vv);j++){
            if(tt[i]==vv[j]){
                    c=0;
                    break;}
            else
                c=1;}
        cc=cc+c;}
        for(i=0;i<strlen(vv);i++){
            for(j=0;j<strlen(tt);j++){
            if(vv[i]==tt[j]){
                    z=i;}}}
            if(cc==0)
            {
             c=0;
             cc=0;
            for(i=0;i<=z;i++){
            for(j=0;j<strlen(tt);j++)
            {
            if(vv[i]==tt[j]){
                    c=0;
                break;}
            else
                c=1;}
        cc=cc+c;
       if(cc==7){
        printf("Round %d\nYou lose.\n",I);
        break;
       }

        }
        if(cc<7)
            printf("Round %d\nYou win.\n",I);
            }
            else
            {
             c=0;
             cc=0;
            for(i=0;i<strlen(vv);i++){
            for(j=0;j<strlen(tt);j++)
            {
            if(vv[i]==tt[j]){
                    c=0;
                break;}
            else
                c=1;}
        cc=cc+c;
       if(cc==7){
        printf("Round %d\nYou lose.\n",I);
        break;
       }

        }
        if(cc<7)
             printf("Round %d\nYou chickened out.\n",I);
            }

    }
    return 0;
}
