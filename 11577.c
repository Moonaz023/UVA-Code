#include<stdio.h>
#include<string.h>
void bubble_sort(int a[],int n) {
    int i, j, temp;
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(a[i]<a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int i,j,k,a[1001],c,t=0,w[256],x[256],l,m,Z,B=0,V,p,P,Q;
    char r[1001],A[1001];
    scanf("%d",&P);
    getchar();
    for(Q=0;Q<P;++Q){
            gets(r);
            Z=strlen(r);
            V=Z;
            t=0;
            p=0;
           while(r[p]!='\0'){
            if(r[p]>64 && r[p]<91){
                r[p]=r[p]+32;}
           p++;}
    for(i=0;i<=256;i++){
        w[i]=0;
        x[i]=0;
        }
    m=0;
    c=0;

    while(r[m]!='\0'){
        a[m]=r[m];
    m++;
    c++;
    }
    bubble_sort(a,Z);
    for(i=122;i>=97;i--){
    for(j=0;j<V;j++){
        if(a[j]==i)
            t++;
        }
            w[i]=t;
            x[i]=t;
            t=0;

        }
    bubble_sort(x,256);
int p=x[0];
       k=p;
            {
            for(l=95;l<=122;l++){
                if(w[l]==k)
                printf("%c",l);}
        }
        printf("\n");
t=0;}
return 0;
}

