
  #include<bits/stdc++.h>
using namespace std;
const int NN=1005;
const long long ll=1e18;
bool ans;
class edge
{
  public:
  int   u,v;
  long long c;
  edge(int  x,int  y,long long z)
  {
    u=x;
    v=y;
    c=z;
  }
};

long long  dis[NN];
int main()
{
   int n,e;
   cin>>n>>e;
   vector<edge>edj;
   while(e--)
   {
      int u,v;
      long long c;
      cin>>u>>v>>c;
      edj.push_back(edge(u,v,c));
   }
   for(int i=1;i<=n;i++)
   {
    dis[i]=ll;
   }
   
int s;
cin>>s;
dis[s]=0;
   for(long long i=1;i<=n-1;i++)
   {
    for(edge ed:edj)
    {
        int  u,v;
        long long c;
        u=ed.u;
        v=ed.v;
        c=ed.c;
        if(dis[u]<ll && dis[u]+c<dis[v])
        {
            dis[v]=c+dis[u];
        }
    }
   }
   bool ans=false;
   // negative cycle detect
    for(edge ed:edj)
    {
        int   u,v;
        long long c;
        u=ed.u;
        v=ed.v;
        c=ed.c;
        if(dis[u]<ll && dis[u]+c<dis[v])
        {
            ans=true;
            break;
        }
    }
if(ans) 
{
    cout<<"Negative Cycle Detected\n";
    return 0;
}
int t;
cin>>t;
while(t--)
{
    int d;
    cin>>d;
    if(dis[d]==ll) cout<<"Not Possible\n";
    else  cout<<dis[d]<<"\n";
   
}

}