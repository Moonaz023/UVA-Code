#include<stdio.h>
#include<string.h>
int main(){

    int i,j=0,k=0,t,x,q,P=1,M=1,y,m=0;
    char a[200];
    while(gets(a)){
            j=0;
    k=0;
    P=1;
    M=1;
    m=0;
    y=(strlen(a)-1);
    if((y%2)==0)
        x=(y/2)-1;

    else
        x=(y/2);
    for(i=0;i<=x;i++){
       if(a[i]!=a[y-i]){
          k=1;
          break;}
          }
          if(k==1)
            P=0;
           for(i=0;i<=y;i++){
            if((a[i]=='B')||(a[i]=='C')||(a[i]=='D')||(a[i]=='F')||(a[i]=='G')||(a[i]=='K')||(a[i]=='N')||(a[i]=='P')||(a[i]=='Q')||(a[i]=='R')||(a[i]=='4')||(a[i]=='6')||(a[i]=='7')||(a[i]=='9')){
            m=2;
            M=0;
            break;}
           }
           if(m<2){
           for(i=0;i<=x;i++){
                if(((a[i]=='A')&&(a[y-i]!='A')) || ((a[i]=='E')&&(a[y-i]!='3')) || ((a[i]=='H')&&(a[y-i]!='H')) || ((a[i]=='I')&&(a[y-i]!='I')) || ((a[i]=='J')&&(a[y-i]!='L')) || ((a[i]=='L')&&(a[y-i]!='J')) || ((a[i]=='M')&&(a[y-i]!='M')) || ((a[i]=='O')&&(a[y-i]!='O')) || ((a[i]=='S')&&(a[y-i]!='2')) || ((a[i]=='T')&&(a[y-i]!='T')) || ((a[i]=='U')&&(a[y-i]!='U')) || ((a[i]=='V')&&(a[y-i]!='V')) || ((a[i]=='W')&&(a[y-i]!='W')) || ((a[i]=='X')&&(a[y-i]!='X')) || ((a[i]=='Y')&&(a[y-i]!='Y')) || ((a[i]=='Z')&&(a[y-i]!='5')) || ((a[i]=='1')&&(a[y-i]!='1')) || ((a[i]=='2')&&(a[y-i]!='S')) || ((a[i]=='3')&&(a[y-i]!='E')) || ((a[i]=='5')&&(a[y-i]!='Z')) || ((a[i]=='8')&&(a[y-i]!='8')))
           M=0;
           break;
           }
           }
           if((m<2)&&(y%2)==0){
            if(((a[y/2])=='E')||((a[y/2])=='J')||((a[y/2])=='L')||((a[y/2])=='S')||((a[y/2])=='Z')||((a[y/2])=='2')||((a[y/2])=='3')||((a[y/2])=='5'))
           M=0;
           }
           if((P==0)&&(M==0))
          printf("%s -- is not a palindrome.\n\n",a);
          else if((P==1)&&(M==0))
          printf("%s -- is a regular palindrome.\n\n",a);
          else if((P==0)&&(M==1))
          printf("%s -- is a mirrored string.\n\n",a);
          else if((P==1)&&(M==1))
          printf("%s -- is a mirrored palindrome.\n\n",a);
          }

return 0;
}

