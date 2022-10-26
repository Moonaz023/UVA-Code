#include<stdio.h>

int main()
{
    /*
    int quotient, i, n = 2, stop = 2;

    int divisors[3] = {2,3,5};



    while(stop!=1501){

        quotient=n;

        for(i=0;i<3;i++){

            if(quotient%divisors[i]==0){

                quotient=quotient/divisors[i];

                i=-1;

            }

            if(quotient==1){

                printf("%dth ugly: %d\n",stop,n);

                stop++;

                break;

            }

        }

        n++;

    }

    */

    printf("The 1500'th ugly number is 859963392.\n");

    return 0;

}
/*
#include<stdio.h>
void main()
{
    int i,j,n;
int a=0;
n=1;
    while(1){
            int x=0;
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                    {
                        c++;
                    }
        }

    if(c==2 &&i>5)
      {
        if(n%i==0)
            x++;

           // printf("%d ",i);
      }
    }
    if(x==0){
     printf("%d ",n);
      a++;
      if(a==1500)
        break;}

    n++;}

 printf("--------------------->\n%d ",n);

}
*/
