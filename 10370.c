#include<stdio.h>
int main()
{
int a[1020],b=0,c=0,i,n,t;
double ab,bb;
scanf("%d",&t);
while(t--){
        b=0;
c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    ab=c/(double)n;
    for(i=0;i<n;i++){
        if (ab<a[i])
            b++;

    }
    bb=(b*100.00)/(double)n;
    printf("%.3lf%%\n",bb);


}
return 0;
}
/*
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91
*/

