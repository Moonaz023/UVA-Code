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
    int i,j,k,a[1001],c,t=0,w[256],x[256],l,m,Z,B=0,V;
    char r[1001];
    while(gets(r)){
        B++;
    if(B>1)
         printf("\n");
            Z=strlen(r);
            V=Z;
            t=0;
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
    for(i=128;i>=32;i--){
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
        for(k=1;k<=p;k++){
            for(l=128;l>=32;l--){
                if(w[l]==k)
                printf("%d %d\n",l,k);}
        }
t=0;
}
return 0;
}
