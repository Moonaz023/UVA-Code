#include<stdio.h>
#include<string.h>
char pat[1000001],txt[1000001];
int max=0,maxi=0,M=-1;
void pai_arr(int *a,char pat[])
{
  int i=1,j=0;
    a[0]=0;
    int I=strlen(pat);
    while(i<I)
    {
        if(pat[j]==pat[i])
        {
            a[i]=j+1;
            j=j+1;
        }
        else
        {
           if(j!=0){
            j=a[j-1];
            i=i-1;}
           else{
            a[i]=0;
            }
        }
        i++;
    }
}
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&pat);
        int len=strlen(pat);
        for(i=0;i<len;i++)
            txt[i]=pat[len-i-1];
            txt[len] = '\0';
        int a[strlen(pat)+2],j=0;
        pai_arr(a,pat);

    i=0;
    int c=0;
    j=0;
    int tlen=strlen(txt);
    int plen=strlen(pat);

    while(i<tlen)
    {
        if(txt[i]==pat[j])
        {
            max=j;
            if(M<max)
                M=max;
            j++;
        }
        else
        {
            max=0;
          if(j!=0){
            j=a[j-1];
            i=i-1;}
        }
        i++;
        if(j==plen)
            {
               c=1;
                break;
            }
    }
      for(i=M;i>=0;i--)
        printf("%c",pat[i]);
        printf("\n");
      max=0;
      M=-1;
   }

 return 0;
}
