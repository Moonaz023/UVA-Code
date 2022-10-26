#include<stdio.h>
#include<string.h>
int main(){
    int i,j=-1,k=0,t,x,q,P,M,y,m;
    char a[200],b[200];
    while(1){
          gets(a);
j=-1;
k=0;
    m=(strlen(a));
    if((m==4)&&a[0]=='D'&&a[1]=='O'&&a[2]=='N'&&a[3]=='E')
            break;
    i=0;
    while(i<=m){
        if(((a[i]>=65)&&(a[i]<=90))||((a[i]>=97)&&(a[i]<=122))||a[i]=='\0'){
            j++;
            b[j]=a[i];
        }

    i++;
    }

    y=(strlen(b)-1);
    for(i=0;i<=y;i++){
        if(((b[i]>=65)&&(b[i]<=90))){
            b[i]=b[i]+32;
        }
    }
    if((y%2)==0)
        x=(y/2)-1;

    else
        x=(y/2);
    for(i=0;i<=x;i++){
       if(b[i]!=b[y-i]){
          k=1;
          break;}
          }
          if(k==0)
          printf("You won't be eaten!\n");
          else
           printf("Uh oh..\n");}
return 0;
}

