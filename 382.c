#include<stdio.h>
int main()
{
    int n,i,j=0,k=0;
    while(1){
            k++;
            j=0;
    scanf("%d",&n);
    if(n==0)
       break;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            j=j+i;
        }
    }
    if(k==1)
        printf("PERFECTION OUTPUT\n",n);
    if(j==n)
        printf("%5d  PERFECT\n",n);
    if(j>n)
        printf("%5d  ABUNDANT\n",n);
    if(j<n)
        printf("%5d  DEFICIENT\n",n);
}
 printf("END OF OUTPUT\n");
 return 0;
}
