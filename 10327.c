#include <stdio.h>
int main()
{
    int N,a[1000],i,j,an;
    while(scanf("%d",&N)==1){
        for(i=0;i<N;i++)
            scanf("%d",&a[i]);
        an=0;
        for(i=1;i<N;i++)
            for(j=0;j<i;j++)
                if(a[j]>a[i])
                    an++;
        printf("Minimum exchange operations : %d\n",an);
    }
    return 0;
}
