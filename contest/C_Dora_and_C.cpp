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
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        vi v(n);
        ll g = __gcd(a, b);
        for (ll i = 0; i < n;i++)
        {
            cin >> v[i];
            v[i] = v[i] % g;
        }
        sort(all(v));
        ll mn = v[n - 1] - v[0];
        for (ll i = 0; i < n-1;i++)
        {
            ll ok = v[i] + g - v[i + 1];
            mn = min(ok, mn);
        }
        cout << mn << nl;
    }

}