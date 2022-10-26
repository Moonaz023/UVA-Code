#include<stdio.h>
#include<string.h>
int main()
    {
    int i,j,k,c,v;
    char a[100000],b[100000];
    while(scanf("%s %s",&a,&b)==2){
     v=0;
    for(i=0;i<strlen(a);i++)
    {
    for(j=v;j<strlen(b);j++)
        {
            if(a[i]==b[j])
            {
                b[j]='*';
                c=1;
                v=j;
                break;
            }
            else
            {
                c=0;
            }
        }
    if(c==0)
        break;
     }
    if(c==0)
        printf("No\n");
    else
        printf("Yes\n");
    }
return 0;
}

