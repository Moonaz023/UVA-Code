#include<stdio.h>
int main()
{
    int i,j,n,k,l;
    int x,y,s,A,z;
    char b[20];
    int a[11][99][99];
    while(1){
        scanf("%d %s",&s,b);
        if (s==0 && b[0]=='0')
         break;
    x=s+2;
    y=2*s+3;
     l=strlen(b);

    for(z=0;z<l;z++){

             if(b[z]=='0')
             {
                for(i=0;i<y;i++){
                for(j=0;j<x;j++){
                a[z][i][j]=0;
                a[z][i][0]=1;
                a[z][i][x-1]=1;
                a[z][0][j]=2;
                a[z][y-1][j]=2;
                    }}
             }
             if(b[z]=='1')
             {
                for(i=0;i<y;i++){
                for(j=0;j<x;j++){
                    a[z][i][j]=0;
                    a[z][i][x-1]=1;
                    }}
             }
             if(b[z]=='2')
             {
                for(i=0;i<y;i++){
                for(j=0;j<x;j++){
                    a[z][i][j]=0;
                    if(i>y/2)
                    a[z][i][0]=1;
                    if(i<y/2)
                    a[z][i][x-1]=1;
                    a[z][y/2][j]=2;
                    a[z][0][j]=2;
                    a[z][y-1][j]=2;
                    }}
             }
             if(b[z]=='3')
             {
                for(i=0;i<y;i++){
                for(j=0;j<x;j++){
                    a[z][i][j]=0;
                    a[z][i][x-1]=1;
                    a[z][y/2][j]=2;
                    a[z][0][j]=2;
                    a[z][y-1][j]=2;
                    }}
             }
             if(b[z]=='4')
             {
                for(i=0;i<y;i++){
                for(j=0;j<x;j++){
                    a[z][i][j]=0;
                    a[z][i][x-1]=1;
                    if(i<y/2)
                    a[z][i][0]=1;
                    a[z][y/2][j]=2;
                    a[z][0][j]=0;
                    a[z][y-1][j]=0;
                    }}
             }
             if(b[z]=='5')
             {
                for(i=0;i<y;i++){
                for(j=0;j<x;j++){
                    a[z][i][j]=0;
                    if(i<y/2)
                    a[z][i][0]=1;
                    if(i>y/2)
                    a[z][i][x-1]=1;
                    a[z][y/2][j]=2;
                    a[z][0][j]=2;
                    a[z][y-1][j]=2;
                    }}
             }
             if(b[z]=='6')
             {
                for(i=0;i<y;i++){
                for(j=0;j<x;j++){
                    a[z][i][j]=0;
                    a[z][i][0]=1;
                    if(i>y/2)
                    a[z][i][x-1]=1;
                    a[z][y/2][j]=2;
                    a[z][0][j]=2;
                    a[z][y-1][j]=2;
                    }}
             }
             if(b[z]=='7')
             {
                for(i=0;i<y;i++){
                for(j=0;j<x;j++){
                    a[z][i][j]=0;
                    a[z][0][j]=2;
                    a[z][i][x-1]=1;
                    }}
             }
             if(b[z]=='8')
             {
                for(i=0;i<y;i++){
                for(j=0;j<x;j++){
                a[z][i][j]=0;
                a[z][i][0]=1;
                a[z][i][x-1]=1;
                a[z][0][j]=2;
                a[z][y-1][j]=2;
                a[z][y/2][j]=2;
                    }}
             }
             if(b[z]=='9')
             {
                for(i=0;i<y;i++){
                for(j=0;j<x;j++){
                a[z][i][j]=0;
                if(i<y/2)
                a[z][i][0]=1;
                a[z][i][x-1]=1;
                a[z][0][j]=2;
                a[z][y-1][j]=2;
                a[z][y/2][j]=2;
                    }}
             }


             a[z][0][0]=5;
             a[z][0][x-1]=5;
             a[z][y-1][0]=5;
             a[z][y-1][x-1]=5;
             a[z][y/2][0]=5;
             a[z][y/2][x-1]=5;
}
        for(i=0;i<y;i++){
        for(z=0;z<l;z++){
        for(j=0;j<x;j++){
            if(a[z][i][j]==0||a[z][i][j]==5)
            printf(" ");
            if(a[z][i][j]==1)
            printf("|");
            if(a[z][i][j]==2)
            printf("-");

        }
        if(z<l-1)
            printf(" ");

           }

           printf("\n");
        }
        printf("\n");
    }
    return 0;
}

