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
        string s;
        cin >> n >> s;
        int contD = 0, contK = 0;
        map<pair<ll, ll>, ll> mp;
        int ans[n + 5];
        for (ll i = 1; i <= n;i++)
        {
            if(s[i-1]=='D')
            {
                contD++;
            }
            else 
            {
                contK++;
            }
            int gcdval = __gcd(contD, contK);
            mp[{contD / gcdval, contK / gcdval}]++;
            ans[i] = mp[{contD / gcdval, contK / gcdval}];
        }
        for (ll i = 1; i <= n;i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

}