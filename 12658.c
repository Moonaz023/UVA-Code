#include<stdio.h>
int main()
{
    int i,j,t,n;
    char a[401],c[401];
    scanf("%d",&t);
    n=t*4;
    scanf("%*s%s",a);
    scanf("%*s%s%*s",c);
    for(i=2;i<n;i=i+4){
        if(a[i-1]=='*' ){
            printf("1");
            continue;}
        else if(c[i]=='*')
             printf("3");
        else
            printf("2");
    }

printf("\n");

    return 0;

}
