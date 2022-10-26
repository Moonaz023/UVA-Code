#include <stdio.h>
#include<string.h>
int main()
{
   int i,j,N,n,k,l,c;
   char a[133];
   while(gets(a)){
        i=0;
   k=0;
   l=strlen(a);
   while(i<l){
        c=0;
        lvl:
    if(a[i]>47 && a[i]<58){
        n=c+a[i]-48;
        i++;
        if(a[i]>47 && a[i]<58){
            c=c+a[i-1]-48;

   goto lvl;
        }
       else if(a[i]!='b' && a[i]!='!'){
        for(j=1;j<=n;j++)
            printf("%c",a[i]);}
           else if(a[i]=='b'){
                for(j=1;j<=n;j++)
            printf(" ");}
    }
           else if(a[i]==33)
            printf("\n");

    i++;
   }
   printf("\n");
   }
   return 0;
}

