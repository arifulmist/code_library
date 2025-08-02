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
    ll l, r;
    cin >> n >> l >> r >> x;
    vi v(n);
    for (ll i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    
    ll cc = 0;
    for (ll i = 0; i < (1 << n);i++)//It’s how we generate and iterate over all possible subsets efficiently.
    {
        ll sum = 0;
        ll mx = -1;
        ll mn = 1e9;
        for (ll j = 0; j < n;j++)
        {
            if(i&(1<<j))//We check if the j-th bit is set to decide if the j-th problem is included in the current subset.
            {
                sum += v[j];
                mx = max(mx, v[j]);
                mn = min(mn, v[j]);
            }
        }
        if(l<=sum && sum<=r && (mx-mn)>=x)
            cc++;
    }
    p(cc);
}