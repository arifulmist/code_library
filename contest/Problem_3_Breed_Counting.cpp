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
    freopen("bcount.in", "r", stdin);freopen("bcount.out", "w", stdout);
    cin >> n >> q;
    vi v(n+1);
    ll one = 0, two = 0, three = 0;
    vector<pair<ll, pair<ll, ll>>> pre(n + 1);
    for (ll i = 1; i <=n;i++)
    {
        cin >>v[i];
        if(v[i]==1)
            one++;
        else if(v[i]==2)
            two++;
        else
            three++;
        pre[i] = {one, {two, three}};
    }
    // for(auto i:pre)
    // {
    //     cout << i.first << " " << i.second.first << " " << i.second.second << nl;
    // }
    while(q--)
    {
        cin >> a >> b;
        x = pre[b].first - pre[a-1].first;
        y = pre[b].second.first - pre[a-1].second.first;
        z = pre[b].second.second - pre[a-1].second.second;
        cout << x << " " << y << " " << z << nl;
    }
}