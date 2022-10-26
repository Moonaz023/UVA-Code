#include<stdio.h>
//#include<string.h>
int main()
{
    int t,n,b,i,s=0,d;
    char a[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%s",a);
        if(strcmp(a,"donate")==0){
            scanf("%d",&d);
            s=s+d;
            }
            else if(strcmp(a,"withdrow")==0){
                scanf("%d",&d);
                s=s-d;
            }
            else
                printf("%d\n",s);

    }
    return 0;
}
/*
5
donate 1000
report
donate 1000
withdrow 500
report
*/
