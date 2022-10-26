/*

#include<stdio.h>
int main()
{
    int t,c=1;
    long int n,i;
    scanf("%d",&t);
    while(t--){
    scanf("%ld",&n);
    i=1;
    c=1;
    while(1){
        i++;
        n=n-i;
        if(n<1)
            break;
        c++;
    }
    printf("%d\n",c);}
    return 0;
    }
*/

#include<stdio.h>
#include<math.h>
int main()
{
    double s,s1;
    long long int n,test;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lf",&s);
        s1=(-1 + sqrt(1+(8*s)))/2;
        n=(long long)(s1);
        printf("%lld\n",n);
    }

}
