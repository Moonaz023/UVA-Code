#include<stdio.h>
int main()
{
    int i,j,a,b,t;
    char one[99],two[99];
    float result,p,q;
    printf("\n \n \n \n------------------------------IT'S A LOVE CALCULETOR------------------------------\n \n \n \n PLEASE ENTER TWO NAME: \n \n \n");

    while(gets(one),gets(two)){
     i=0;
     j=0;
     a=0;
     b=0;
     t=0;
     while(one[i]!='\0'){
         if((one[i]>=97 && one[i]<=122)||(one[i]>=65 && one[i]<=90)){
               if(one[i]>=97 && one[i]<=122)
                {
                   a=a+(one[i]-96);
                }
                if(one[i]>=65 && one[i]<=90)
                {
                    a=a+(one[i]-64);

                }


         }

    i++;
     }

        j=0;
        while(two[j]!='\0'){
         if((two[j]>=97 && two[j]<=122)||(two[j]>=65 && two[j]<=90)){
               if(two[j]>=97 && two[j]<=122)
                {
                   b=b+(two[j]-96);
                }
                if(two[j]>=65 && two[j]<=90)
                {
                    b=b+(two[j]-64);

                }


         }

    j++;
     }

    while(a>9)
        {
         int x=a;
             t=0;
        while(x!=0)
            {
            int y=x%10;
            x=x/10;
            t=t+y;
            }
        a=t;
       }
    while(b>9)
        {
         int x=b;
             t=0;
        while(x!=0)
            {
            int y=x%10;
            x=x/10;
            t=t+y;
            }
        b=t;
       }

        p=a;
        q=b;

        if(p>q){
                result=(q/p)*100;

        }
        else{
            result=(p/q)*100;
        }
        printf("\n \n \n       %s loves %s %.2f %%\n",one,two,result);

        }

    return 0;
}

