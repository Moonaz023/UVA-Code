#include<stdio.h>
int main()
{
    int i,j,x,y,c=0;
    char a[101][101];
    int b[101][101];
    while(1){
            scanf("%d%d",&x,&y);
        if(x==0 && y==0)
            break;

    for(i=0;i<x;i++)
        scanf("%s",a[i]);
       for(i=0;i<x;i++)
    for(j=0;j<y;j++)
            b[i][j]=0;
c++;
if(c>1)
 printf("\n");
            printf("Field #%d:\n",c);
    for(i=0;i<x;i++){
    for(j=0;j<y;j++){
            if((j+1)<y && a[i][j+1]=='*')
                b[i][j]=b[i][j]+1;
            if((j-1)>=0 && a[i][j-1]=='*')
                b[i][j]=b[i][j]+1;
            if((i-1)>=0 && a[i-1][j]=='*')
                b[i][j]=b[i][j]+1;
            if((i+1)<x && a[i+1][j]=='*')
                b[i][j]=b[i][j]+1;
            if((i-1)>=0 && (j-1)>=0 && a[i-1][j-1]=='*')
                b[i][j]=b[i][j]+1;
            if((i+1)<x && (j-1)>=0 && a[i+1][j-1]=='*')
                b[i][j]=b[i][j]+1;
            if((i+1)<x && (j+1)<y && a[i+1][j+1]=='*')
                b[i][j]=b[i][j]+1;
            if((i-1)>=0 && (j+1)<y && a[i-1][j+1]=='*')
                b[i][j]=b[i][j]+1;
            if(a[i][j]=='*')
                printf("*");
            else
           printf("%d",b[i][j]);}
           printf("\n");
          }

    }
    return 0;
}
