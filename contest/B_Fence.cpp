#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define vi vector<long long>
#define asort(ar,n) sort(ar,ar+n)
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define p(ans) cout<<(ans)<<"\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define nl "\n"
#define shesh return 0;
using namespace std;
int main()
{
    ariful
    ll t=1,m,n,c=0,x,y,z,a,b,d,q,k;
    cin >> n >> k;
    vi v(n+1),pre(n+1),vv;
    for (ll i = 1; i <=n;i++)
    {
        cin >> v[i];

    }
    pre[1] = v[1];
    for (ll i = 2; i <=n;i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    ll mn = INT_MAX;
    ll mx = 0;
    for (ll i = k; i<=n;i++)
    {
        x = pre[i] - pre[i-k];
        if(x<mn)
        {
            mn = x;
            mx = i;
           
        }
    }
    //cout << mx;
    p((mx-k+1));
}