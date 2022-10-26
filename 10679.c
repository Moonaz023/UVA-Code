///KMP
#include<stdio.h>
#include<string.h>
void pai_arr(int *a,char pat[])
{
  int i=1,j=0;
    a[0]=0;
    int I=strlen(pat);
    while(i<I)
    {
        if(pat[j]==pat[i])
        {
            a[i]=j+1;
            j=j+1;
        }
        else
        {
           if(j!=0){
            j=a[j-1];
            i=i-1;}
           else{
            a[i]=0;
            }
        }
        i++;
    }
}
int main()
{
    int T,t=1,plen,tlen;
    scanf("%d\n",&T);
    while(t<=T)
    {
    char txt[100001];
    scanf("%s",&txt);
    int q=1,Q,c;
    scanf("%d\n",&Q);
    while(q<=Q)
    {
    char pat[1001];
    scanf("%s",&pat);
    plen=strlen(pat);
    int a[plen+1],i,j=0;
    pai_arr(a,pat);
    i=0;
    c=0;
    tlen=strlen(txt);
    while(i<tlen)
    {
        if(txt[i]==pat[j])
        {
            j++;
        }
        else
        {
          if(j!=0){
            j=a[j-1];
            i=i-1;}
        }
        i++;
        if(j==plen)
            {
               c=1;
                break;
            }
    }
    if(c==1)
      printf("y\n");
    else
      printf("n\n");
      q++;
    }
    t++;
    }
return 0;
}

///RABIN KARP
/*
#include<stdio.h>
#include<string.h>
int d=256;
int search(char pat[], char txt[], int q)
{
  int M = strlen(pat);
  int N = strlen(txt);
  int i, j;
  int p = 0;
  int t = 0;
  int h = 1;

  for (i = 0; i < M-1; i++)
    h = (h*d)%q;

  for (i = 0; i < M; i++)
  {
    p = (d*p + pat[i])%q;
    t = (d*t + txt[i])%q;
  }

  for (i = 0; i <= N - M; i++)
  {
    if ( p == t )
    {
      for (j = 0; j < M; j++)
      {
        if (txt[i+j] != pat[j])
          break;
      }
      if (j == M)
        return 1;
    }
    if ( i < N-M )
    {
      t = (d*(t - txt[i]*h) + txt[i+M])%q;
      if (t < 0)
      t = (t + q);
    }
  }
  return 0;
}
int main()
{
    int T,t=1;
    scanf("%d\n",&T);
    while(t<=T)
    {
    char txt[100001];
    gets(txt);
    int qq=1,Q,c;
    scanf("%d\n",&Q);
    while(qq<=Q)
    {
    char pat[1001];
    gets(pat);
    c=0;
    int q = 3;
   c=search(pat, txt, q);
   if(c==1)
      printf("y\n");
    else
      printf("n\n");
      qq++;
    }
    t++;
    }

return 0;
}*/
///NAIVEC
/*
#include<stdio.h>
#include<string.h>

int main()
{
    int T,t=1;
    int i, j,M,N;
    scanf("%d\n",&T);
    while(t<=T)
    {
    char txt[100010];
    gets(txt);
    N = strlen (txt);
    int qq=1,Q,c;
    scanf("%d\n",&Q);
    while(qq<=Q)
    {   c=0;
        char pat[1001];
    gets(pat);
         M = strlen (pat);
         for ( i = 0; i <= N - M; i++){
      for (j = 0; j < M; j++){
         if (txt[i + j] != pat[j])
      break;}
      if (j == M)
      {
        c=1;
        break;
      }

   }
      if(c==1)
      printf("y\n");
    else
      printf("n\n");
      qq++;
    }
    t++;
    }

return 0;
}
*/
///Finate Automata
/*
#include<stdio.h>
#include<string.h>
#define NO_OF_CHARS 256

int getNextState(char *pat, int M, int state, int x)
{
	if (state < M && x == pat[state])
		return state+1;
	int ns, i;
	for (ns = state; ns > 0; ns--)
	{
		if (pat[ns-1] == x)
		{
			for (i = 0; i < ns-1; i++)
				if (pat[i] != pat[state-ns+1+i])
					break;
			if (i == ns-1)
				return ns;}}

	return 0;
}
void computeTF(char *pat, int M, int TF[][NO_OF_CHARS])
{
	int state, x;
	for (state = 0; state <= M; ++state){
		for (x = 0; x < NO_OF_CHARS; ++x){
			TF[state][x] = getNextState(pat, M, state, x);
			}
			}
}
int search(char *pat, char *txt)
{
	int M = strlen(pat);
	int N = strlen(txt);
    int c=0;
	int TF[M+1][NO_OF_CHARS];

	computeTF(pat, M, TF);
	int i, state=0;
	for (i = 0; i < N; i++)
	{
		state = TF[state][txt[i]];
		if (state == M)
        {
            c=1;
            break;
        }
	}
	return c;
}

int main()
{
    int T,t=1;
    scanf("%d\n",&T);
    while(t<=T)
    {
    char txt[100001];
    gets(txt);
    int qq=1,Q,c;
    scanf("%d\n",&Q);
    while(qq<=Q)
    {
    char pat[1001];
    gets(pat);
    c=0;
   c=search(pat, txt);
   if(c==1)
      printf("y\n");
    else
      printf("n\n");
      qq++;
    }
    t++;
    }

return 0;
}
*/
