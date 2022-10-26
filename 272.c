//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int i,j,k,n,c=0,d;
//    char s[1000000];
//    char b[1000000];
//     while(gets(s)){
//    n=strlen(s);
//    for(i=0;i<strlen(s);i++){
//         if(s[i]=='"' && (c%2)==0){
//                n=n+1;
//                for(k=(i+2);k<=n;k++){
//                    b[k]=s[k-1];
//                    b[i]='`';
//                b[i+1]='`';
//                 }
//           for(d=0;d<strlen(b);d++){
//               s[d]=b[d];
//             }
//             c++;
//               }
//               if(s[i]=='"' && (c%2)==1){
//                n=n+1;
//                for(k=(i+2);k<=n;k++){
//                    b[k]=s[k-1];
//                    b[i]='\'';
//                b[i+1]='\'';
//                 }
//           for(d=0;d<strlen(b);d++){
//               s[d]=b[d];
//             }
//             c++;
//               }
//    }
//    printf("%s\n",s);
//}
//return 0;
//}

#include<stdio.h>
int main()
{
char ch;
long int count=0;
while(scanf("%c",&ch)!=EOF)
{
    if(ch=='"')
    {
        count++;
        if(count%2==1)
        printf("``");
        else if(count%2==0)
        printf("''");
    }
    else printf("%c",ch);
}
}

