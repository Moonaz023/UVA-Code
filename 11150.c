//#include<stdio.h>
//int main()
//{
//    int i,a,b,c=0,d,n;
//    while(scanf("%d",&n)!=EOF){
//            d=n;
//    while(n>=3){
//    n=n-3;
//    n++;
//    c++;
//}
//  if(n==2)
//   printf("%d\n",c+d+1);
//   else
//    printf("%d\n",c+d);
//   c=0;
//}
//return 0;
//}
#include<stdio.h>
int main()
{
    int i,a,b,c=0,d,n;
    while(scanf("%d",&n)!=EOF){
            d=n;
    while(n>=3){
    a=n/3;
    b=n%3;
    c=c+a;
    n=a+b;
}
  if(n==2)
   printf("%d\n",c+d+1);
   else
    printf("%d\n",c+d);
   c=0;
}
return 0;
}
