#include<stdio.h>
int main()
{
    int i,j,y,c=0,p;
    char a[10000][101],d[10000][101],x,b[101];
    while(1)
        {
            scanf("%s",a[c]);
            strcpy(d[c],a[c]);
            for(i=0;i<strlen(a[c]);i++)
            {
                if(a[c][i]>=65 && a[c][i]<=90)
                    a[c][i]+=32;
            }
            if(a[c][0]=='#')
                break;
            c++;

        }
        ///sort
        int z=0;
        while(z<c){
        for(i=0;i<strlen(a[z])-1;i++)
            for(j=i+1;j<strlen(a[z]);j++)
            {
                if(a[z][i]>a[z][j]){
                    x=a[z][j];
                    a[z][j]=a[z][i];
                    a[z][i]=x;}
            }
            z++;
            }
        ///compare
            for(i=0;i<c;i++){
                    p=0;
                    for(j=i+1;j<c;j++)
                    {
                        if(a[j][0]=='\0')
                    continue;
                        if(strcmp(a[i],a[j])==0){
                                p=1;
                           a[j][0]='\0';

                        }

                    }
                    if(p==1)
                     a[i][0]='\0';

                    }


        ///result
    for(i=0;i<c;i++){
                    if(a[i][0]=='\0'){
                        d[i][0]='\0';
                    continue;}}

                    ///sort strings
            for(i=0;i<c;i++){
                    if(d[i][0]=='\0')
                    continue;
                    for(j=0;j<c;j++)
                    {
                        if(d[j][0]=='\0')
                    continue;
                        if(strcmp(d[i],d[j])<0){
                           strcpy(b,d[i]);
                            strcpy(d[i],d[j]);
                            strcpy(d[j],b);}
                    }
                            }

             ///print
    for(i=0;i<c;i++){
                    if(a[i][0]=='\0'){
                    continue;}
                    else
                        printf("%s\n",d[i]);}
        return 0;
}
