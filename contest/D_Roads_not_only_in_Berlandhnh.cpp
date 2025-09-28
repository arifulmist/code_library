#include<bits/stdc++.h>
using namespace std;
#define ll long long
int par[100001];
vector<ll>level(1000001);
vector<ll>graph[100001];
void make(int x)
{
    par[x]=x;
}
int find(int x)
{
    if(x==par[x])
    {
        return x;
    }
   return par[x] =find(par[x]);
}

void rank_a(int a,int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    if (level[leaderA] > level[leaderB])
    {
        par[leaderB] = leaderA;
    }
    else if (level[leaderB] > level[leaderA])
    {
        par[leaderA] = leaderB;
    }
    else
    {
        par[leaderA] = leaderB;
        level[leaderB]++;
    }
}
int main()
{
    ll n,e;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        make(i);
    }
    vector<pair<ll,ll>>bad,cre;
    for(ll i=1;i<=n-1;i++)
    {
        ll a,b;
        cin>>a>>b;
        ll la=find(a);
        ll lb=find(b);
        if(la==lb)
        {
            bad.push_back({a,b});
        }
       else  rank_a(a,b);

    }
    
  cout<<bad.size()<<"\n";
  for(ll i=2;i<=n;i++)
  {
    ll la=find(1);
        ll lb=find(i);
        if(la!=lb)
        {
            cre.push_back({1,i});
            rank_a(1,i);
        }
  
  }
   for (int i = 0; i < bad.size(); i++)
    {
        cout << bad[i].first << " " << bad[i].second << " " << cre[i].first << " " << cre[i].second << endl;
    }
    
     
}





