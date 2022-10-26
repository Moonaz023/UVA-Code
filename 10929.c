///problem


#include<stdio.h>
int main()
{
    int a,i;
    for(i=1;i<10000;i++){
    scanf("%d",&a);
    if(a==0)
        break;
    if(a%11==0)
        printf("%d is a multiple of 11.\n",a);
    else
        printf("%d is not a multiple of 11.\n",a);
    }
    return 0;

}
