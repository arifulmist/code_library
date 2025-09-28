#include<bits/stdc++.h>
using namespace std;
const int N=1001;
vector<pair<int,int>>adj[N];
long long dis[N];

class cmp{
public:
bool operator()(pair<int,int>a,pair<int,int>b)
{
  return a.second>b.second;
}
};
//effective way
// t.c O(v+logE)
void ddijkstra(int src)
{
  priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>q;//sort
  q.push({src,0});
  dis[src]=0;
  while(!q.empty())
  {
    pair<int,int>par=q.top();
    q.pop();
    int node=par.first;
    long long cost=par.second;
    for(auto child:adj[node])
    {
        int childnode=child.first;
        long long childcost=child.second;
        if(cost+childcost<dis[childnode])
        {
             dis[childnode]=cost+childcost;
             q.push({childnode,dis[childnode]});
        }
    }
  }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
{
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
            
}
for(int i=1;i<=n;i++)
{
    dis[i]=INT_MAX;
}

int t;
cin>>t;
ddijkstra(t);
    int nn;
    cin>>nn;
    while(nn--)
    {
        int x;long long y;
        cin>>x>>y;
        if(dis[x]<=y) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

/*
5 7
1 2 10
1 3 2
3 2 1
2 4 7
3 4 2
4 5 5
2 5 2
1
5
1 0
2 5
3 1
4 4
5 6
    
YES
YES
NO
YES
YES



*/