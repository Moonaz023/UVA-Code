#include<stdio.h>
#include<string.h>
int main()
{
char w[20];
int t;
scanf("%d",&t);
while(t--){
scanf("%s",w);
if(strlen(w)==4)
    printf("3\n");
    else if(w[0]=='o' && w[2]=='e')
        printf("1\n");
    else if(w[0]=='o' && w[1]=='n')
        printf("1\n");
        else if(w[1]=='n' && w[2]=='e')
        printf("1\n");
        else if(w[0]=='t' && w[2]=='o')
        printf("2\n");
    else if(w[0]=='t' && w[1]=='w')
        printf("2\n");
        else if(w[1]=='w' && w[2]=='o')
        printf("2\n");


}
return 0;
}
//while(scanf("%d", &n) == 1 && n) {
