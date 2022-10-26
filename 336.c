#include<stdio.h>
#include<string.h>
int v,e,cas=1;
int color[100];
int distance[100];
int predecessor[100];
int graph[100][100],index=1;
char map[100][100];
int mapping(char vname[])
{
    int i,j;
    for(i=1;i<=index;i++)
    {
        if(strcmp(map[i],vname)==0)
        {
            return i;
        }
    }
    strcpy(map[index++],vname);
    return index-1;

}
void bfs(int s, int lvl)
{
    int i,j,u;
    for(i=1;i<=v;i++)
    {
        color[i]=0;
        predecessor[i]=0;
       distance[i]=1000;
    }
     color[s]=1;
     distance[s]=0;
      predecessor[s]=0;
    int Q[100],head=0,tail=0;
    Q[head++]=s;

    while(head!=tail)
    {
      u=Q[tail++];
      if(distance[u]>=lvl)
        break;
      for(i=1;i<=v;i++)
      {
          if(graph[u][i]==1 && color[i]==0)
          {
              color[i]=1;
              distance[i]=distance[u]+1;
              predecessor[i]=u;
              Q[head++]=i;
          }

      }
      color[u]=2;
    }
}
int main()
{
    while(1){
        index=1;
    int i,j,edge,s,d,source[100],dest[100],vartex,ans=0;;
    scanf("%d",&edge);
    if(edge==0)
        break;
    getchar();
    for(i=1;i<=edge;i++)
    {
        scanf("%s %s",&source,&dest);
        s=mapping(source);
        d=mapping(dest);
        graph[s][d]=1;
        graph[d][s]=1;
    }
    vartex=index-1;
    v=vartex;
    char start[100];
    int end;
    while(scanf("%s %d",&start,&end)==2){

    if(strcmp(start,"0")==0 && end==0)
        break;
    s=mapping(start);
    bfs(s,end);
 ans=0;
    for(i=1;i<=vartex;i++){
        if(distance[i]==1000)
            ans++;
        }
        printf("Case %d: %d nodes not reachable from node %s with TTL = %d.\n",cas,ans,start,end);
        ans=0;cas++;
}
        for(i=0;i<=vartex;i++){
            map[i][100]='\0';
            predecessor[i]=0;
            color[i]=0;
            distance[i]=1000;
        }
        for(i=1;i<=vartex;i++){
            for(j=1;j<=vartex;j++){
                graph[i][j]=0;
            }
        }

    }
    return 0;
}
/*
16
10 15   15 20   20 25   10 30   30 47   47 50   25 45   45 65
15 35   35 55   20 40   50 55   35 40   55 60   40 60   60 65
35  2   35  3    0  0
14
1 2   2 7   1 3   3 4   3 5   5 10   5 11
4 6   7 6   7 8   7 9   8 9   8  6   6 11
1 1   1 2   3 2   3 3   0 0
0
*/
