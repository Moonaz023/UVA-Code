#include<stdio.h>
int bubble_sort(int a[],int n) {
    int i=0,j=0,tmp;
    for (i=0;i<n;i++) {
        for (j=0;j<n-i-1;j++){
            if (a[j]>a[j+1]){
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}
int main()
{
    int n,i,j,k,c=1;
    int a[3001],b[3001];
    while(scanf("%d",&n)==1){
            c=1;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
            b[i]=(abs(a[i]-a[i+1]));
            }
            bubble_sort(b,n-1);

for(i=0;i<n-1;i++){
if(b[i]!=i+1) {
            c=0;
        }}

        if(c==0){
    printf("Not jolly\n");
        }

        else{
    printf("Jolly\n");
        }

    }
    return 0;
}
