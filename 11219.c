#include<stdio.h>
int main()
{
int i,t,y,y1,y2,m1,m2,d1,d2;

scanf("%d",&t);

i=1;

while(i<=t){

scanf("%d/%d/%d",&d1,&m1,&y1);
scanf("%d/%d/%d",&d2,&m2,&y2);
     y=(y1-y2);
            if(m1<m2)
                y--;
            else if(m1==m2)
            {
                if(d1<d2)
                y--;
            }
            if(y<0)
                printf("Case #%d: Invalid birth date\n", i );
            else if(y>130)
                printf("Case #%d: Check birth date\n", i);
            else
                printf("Case #%d: %d\n",i,y);
    i++;
  }
return 0;

}
