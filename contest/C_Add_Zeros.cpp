#include<bits/stdc++.h>
using namespace std;
map<ll,vector<ll>> adj;
map<ll,bool> vis;
ll ans=0;
 
void dfs(ll n){
    vis[n]=true;
    ans=max(ans,n);
    for(auto &neighbor:adj[n]){
        if(!vis[neighbor]){
            dfs(neighbor);
        }
    }
 
}
 
void solve(){
    ans=0;
    adj.clear();
    vis.clear();
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        adj[x+i-1].push_back(x+i-1+i-1);
    }
    dfs(n);
    p(ans);
}
 
signed main()
{
    
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}