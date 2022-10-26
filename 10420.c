#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,t,k;
    char c[200][80],temp[200],trush[200];

   while(scanf("%d",&n)==1){
        int co[200]={0};
    for(i=0;i<n;i++){
        scanf("%s",c[i]);
        gets(trush);}
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(c[i],c[j])==0){
                    co[i]++;
                c[j][0]='\0';
            }
        }
    }

for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
                if(c[i][0]=='\0')
                continue;
            if(strcmp(c[i],c[j])>0){
                   strcpy(temp,c[j]);
                   strcpy(c[j],c[i]);
                   strcpy(c[i],temp);
                   k=co[i];
                   co[i]=co[j];
                   co[j]=k;
            }
        }
    }


 for(i=0;i<n;i++){
    if(c[i][0]!='\0')
        printf("%s %d\n",c[i],co[i]+1);
 }
   }
return 0;
}
