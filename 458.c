#include<stdio.h>
int main()
{
    int i,j;
    char a[1000];
    while(gets(a)){
//          gets(a);
//            if(a==EOF)
//            break;
    i=strlen(a);

    for(j=0;j<i;j++){


    printf("%c",a[j]-7);}

printf("\n");}
return 0;
}
