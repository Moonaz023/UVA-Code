#include<stdio.h>
int main()
{
    int sum=0,num,i,n,b;
    char c[1000];
    while(1){
            sum=0;
    gets(c);
    n=strlen(c);
    for(i=0;i<n;i++){
    num=c[i]-'0';
    b=num*(pow(2,n-i)-1);
    sum=sum+b;
    }
    if(sum==0)
        break;
printf("%d\n",sum);
}
return 0;
}
