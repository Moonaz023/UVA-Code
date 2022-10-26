#include<stdio.h>
int main()
{
    int c,d,array[10],swap,x=0,n,i,t;
    scanf("%d",&t);
    while(t--){
            x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
        x++;
      }
    }
  }
  printf("Optimal train swapping takes %d swaps.\n",x);
}
return 0;
}
