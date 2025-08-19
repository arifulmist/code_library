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
    cin>>n>>e;
    for(ll i=1;i<=n;i++)
    {
        make(i);
    }
    while(e--)
    {
        ll a,b;
        cin>>a>>b;
        ll la=find(a);
        ll lb=find(b);
        if(la==lb) continue;
       else  rank_a(a,b);

    }
    vector<int> led;
    for (int i = 1; i <= n; i++) {
        if (find(i) == i) { // Only store unique leaders
            led.push_back(i);
        }
    }
     
  cout<<led.size()-1<<"\n";
  for(ll i=0;i<led.size()-1;i++)
  {
    cout<<led[i]<<" "<<led[i+1]<<"\n";
  
  }
    
     
}





