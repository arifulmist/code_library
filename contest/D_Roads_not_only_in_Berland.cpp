/*
  __  __ ____       _    ____  ___ _____ _   _ _       ___ ____  _        _    __  __
 |  \/  |  _ \     / \  |  _ \|_ _|  ___| | | | |     |_ _/ ___|| |      / \  |  \/  |
 | |\/| | | | |   / _ \ | |_) || || |_  | | | | |      | |\___ \| |     / _ \ | |\/| |
 | |  | | |_| |  / ___ \|  _ < | ||  _| | |_| | |___   | | ___) | |___ / ___ \| |  | |
 |_|  |_|____/  /_/   \_\_| \_\___|_|    \___/|_____| |___|____/|_____/_/   \_\_|  |_|

*/
#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define vi vector<long long>
#define asort(ar,n) sort(ar,ar+n)
#define vsort(vc) sort(vc.begin(),vc.end())
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define nl "\n"
#define shesh return 0;
#define srev(st) reverse(st.rbegin(),st.rend())
#define  in_range(i,x,y)  for(int i=x;i<=y;i++)
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define  in_range_back(i,x,y)  for(int i=y;i>=x;i--)
#define p(ans) cout<<(ans)<<"\n"
#define TT ll t; cin >> t; for (ll tt = 1; tt <= t; tt++)
#define case(test) cout<<"Case "<<test<<": ";
using namespace std;
const ll mxx =1e6+3;
//bool isprime[mxx];//10^6
bitset<mxx>isprime;//10^8 hole//bit niye kaj hoi
 bool is_prime(ll num) {
    for(ll i=2; i*i<=num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}

void sieve()
{
    //sieve of eratostheres
    for(ll i=2;i<mxx;i++)
        isprime[i]=true;

    for(ll i=2;i*i<mxx;i++)
       if (isprime[i])
           for(ll j=i*i;j<mxx;j+=i)
               isprime[j]=false;

}
int par[1001];
int n,e;
vector<ll>level(10000);

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
vector<pair<ll,ll>>dd,dp;
int main()
{
    ariful
    ll t=1,m,n,c=0,x,y,z,a,b,d,q,k;
    cin >> t;
    for(ll i=1;i<=t;i++)
    {
        make(i);
    }
  for(ll i=0;i<n-1;i++)
    {
       cin>>x>>y;
       --x;--y;
       ll la=find(x);
       ll lb=find(y);
       if(la==lb)
       {
         dd.pb({x,y});
       }
       else 
       {
        rank_a(la,lb);
       }
        
    }
    p(dd.size());
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            ll lla=find(i);
            ll llb=find(j);
            if(lla!=llb)
            {
                dp.pb({i,j});
                rank_a(lla,llb);
            }
        }
    }
    for(ll i=0;i<dp.size();i++)
    {
        cout<<dd[i].first+1<<" "<<dd[i].second+1<<" "<<dp[i].first+1<<" "<<dp[i].second+1;
    }

    shesh
}
