#include<stdio.h>
int main()
{
    char t[100],th[100];
    int a[100],i,c,n,j;
    int total;
    scanf("%d",&n);
    gets(th);
    j=0;
    while(j<n){
    total=0;
    c=0;
    gets(t);
    int l=strlen(t);
    for(i=0;i<l;i++){
        if(t[i]=='O')
        {
        c++;
        a[i]=c;
        }
        else
        {
            c=0;
            a[i]=c;
        }


    }
    for(i=0;i<l;i++)
        {
            total=total+a[i];
        }
        printf("%d\n",total);
        j++;
    }
    return 0;
}
