#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,k,p,t;
    double a[101],v[101];
    char c[101],s[21],x;
    while(gets(s)){
            for(j=0;j<strlen(s);j++)
        {
        if(s[j]=='B'||s[j]=='F'||s[j]=='P'||s[j]=='V')
        s[j]='B';
        if(s[j]=='C'||s[j]=='G'||s[j]=='J'||s[j]=='K'||s[j]=='Q'||s[j]=='S'||s[j]=='X'||s[j]=='Z')
        s[j]='C';
        if(s[j]=='D'||s[j]=='T')
        s[j]='D';
        if(s[j]=='L')
        s[j]='L';
        if(s[j]=='M'||s[j]=='N')
        s[j]='M';
        if(s[j]=='R')
        s[j]='R';
        }
        i=1;
        j=0;
        while(i<strlen(s))
        {
           if(s[j]==s[i])
            s[i]='A';
            else
                j=i;

                i++;
        }
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]=='B')
            printf("1");
            if(s[j]=='C')
            printf("2");
            if(s[j]=='D')
            printf("3");
            if(s[j]=='L')
            printf("4");
            if(s[j]=='M')
            printf("5");
            if(s[j]=='R')
            printf("6");
        }
        printf("\n");
}
}
