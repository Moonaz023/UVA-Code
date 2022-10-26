#include<stdio.h>
int main ()
{
    int i,j,t,n[10],ca=0,cb;
    scanf("%d",&t);

   j=0;
    while(j<t)

{ ca=0;
cb=0;
        for(i=0;i<10;i++)
    {

            scanf("%d",&n[i]);
            if(i>2 && n[0]>n[1])
            {
            if(n[i]<n[i-1]&&n[i-1]<n[i-2])
                ca++;}
                if(i>2 && n[0]<n[1]){
            if(n[i]>n[i-1]&&n[i-1]>n[i-2])
                cb++;


            }
      }
            if(j<1)
                printf("Lumberjacks:\n");


            if(ca==7||cb==7)
                printf("Ordered\n");
            else
                printf("Unordered\n");
                j++;


}
return 0;
}





