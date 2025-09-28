#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
  int parent[N];
  int gsize[N];
  int level[N];
  void dsu_initialization(int n)
  {
    for(int i=1;i<=n;i++)
    {
        parent[i]=-1;
        gsize[i]=1;
        level[i]=0;
    }
  }
  int dsu_find(int node)
  {
    if(parent[node]==-1)
    {
        return node;
    }
    int leader=dsu_find(parent[node]);
    parent[node]=leader;
    return leader;
  }
  void dsuunion_by_size(int node1,int node2)
  {
    int leadera=dsu_find(node1);
    int leaderb=dsu_find(node2);
    if(gsize[leadera]>gsize[leaderb])
    {
        parent[leaderb]=leadera;
        gsize[leadera]+=gsize[leaderb];
    }
    else 
    {
          parent[leadera]=leaderb;
        gsize[leaderb]+=gsize[leadera];
    }
  } 
  void dsu_union_by_level(int node1, int node2)
{
    //ata use kora easy
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(level[leaderA]>level[leaderB])
    {
       parent[leaderB]=leaderA;
       
    }
    else if(level[leaderA]<level[leaderB])
    {
       parent[leaderA]=leaderB;
       
    }
    else 
    {
        parent[leaderA]=leaderB;
        level[leaderB]++;
        
    }
}
class edge
{
public:
int u,v;
long long w;
edge(int u,int v,long long int w)
{
    this->u=u;
    this->v=v;
    this->w=w;
}

};
bool cmp(edge a ,edge b)
{
    return a.w<b.w;
}
int main()
{
    int n,e;
    cin>>n>>e;
    dsu_initialization(n);
    vector<edge>adj;
    while(e--)
    {
        int u,v;
        long long w;
        cin>>u>>v>>w;
      adj.push_back(edge(u,v,w));
    }
   sort(adj.begin(),adj.end(),cmp);
   long long int totalcost=0;
   int c=n;
   int r=0;
   for(edge ed:adj)
   {
    int lu=dsu_find(ed.u);
    int lv=dsu_find(ed.v);
    if(lu==lv)
    {   r++;
        continue;
    }
    else 
    {
        dsu_union_by_level(ed.u,ed.v);
        totalcost+=ed.w;
        c--;
    }
   }
   if(c<=1) cout<<r<<" "<<totalcost<<"\n";
   else cout<<"Not Possible\n";
}