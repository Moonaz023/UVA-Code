#include<stdio.h>
#include<string.h>
int main()
{
   int i,n=0,l,c=0,k=0,x,j;
char a[10000],b[10000];
while(gets(a)){
        n=0;
c=0;
i=0;
j=0;
k=0;

    if((a[i]>=32 &&a[i]<35) ||( a[i]>=39 && a[i]<42)||( a[i]>=44 && a[i]<48)||( a[i]>=58 && a[i]<=59)||(a[i]==63)||(a[i]==91)||(a[i]==93)||(a[i]==95)){
      c=c+1;
    }
    i=(strlen(a)-1);

    if((a[i]>=32 &&a[i]<48) ||( a[i]>=58 && a[i]<65)||( a[i]>=91 && a[i]<97)||(a[i]>=123)){
      k=k+1;
      }
for(i=0;i<strlen(a);i++){
if(((a[i]>=32 &&a[i]<58) ||( a[i]>=58 && a[i]<65)||( a[i]>=91 && a[i]<97)||(a[i]>=123))&&(((a[i-1]>=65)&&(a[i-1]<=90))||((a[i-1]>=97)&&(a[i-1]<=122)))){
    n++;}

}
if(k==0)
printf("%d\n",n+1);
else
    printf("%d\n",n+k-1);

}
return 0;
}


