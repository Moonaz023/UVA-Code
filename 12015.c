#include<stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}
int main()
{
    char w[100][99];
    int a[99],b[99],i,n,j=1;
    scanf("%d",&n);
    while(j<=n){
    for(i=0;i<10;i++)
        {
            scanf("%s",w[i]);
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        sort(b,10);
        printf("Case #%d:\n",j);
        for(i=0;i<10;i++)
        {
            if(a[i]==b[9])
            {
                printf("%s\n",w[i]);
            }
        }
        j++;
    }
    return 0;
}
/*
2
www.youtube.com 1
www.google.com 2
www.google.com.hk 3
www.alibaba.com 10
www.taobao.com 5
www.bad.com 10
www.good.com 7
www.fudan.edu.cn 8
www.university.edu.cn 9
acm.university.edu.cn 10
www.youtube.com 1
www.google.com 2
www.google.com.hk 3
www.alibaba.com 11
www.taobao.com 5
www.bad.com 10
www.good.com 7
www.fudan.edu.cn 8
acm.university.edu.cn 9
acm.university.edu.cn 10





Case #1:
www.alibaba.com
www.bad.com
acm.university.edu.cn
Case #2:
www.alibaba.com

*/
