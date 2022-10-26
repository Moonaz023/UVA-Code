#include <stdio.h>
int main()
{
    int i,j,k,a,b,t,x,y,tt;
    scanf("%d\n",&tt);
    for(t=1;t<=tt;t++){
    scanf("%d %d",&a,&b);
        for(x=1;x<=b;x++){
    for(i=1;i<=a;i++){
    for(j=1;j<=i;j++){
      printf("%d",i);
    }
    printf("\n");
}
for(i=(i-2);i>=1;i--){
    for(j=1;j<=i;j++){
            printf("%d",i);
    }
    if(t==tt&&x==b&&i==1)
                break;
    printf("\n");
}

printf("\n");

    }
    }
return 0;
}

