#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileIO freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
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
        cin >> n >> x >> y;
        ll cc = 0;
        ll bd = INT_MAX;
        ll bind = -1;
        ll mxc = -1;
        for (ll i = 1; i <= n; i++)
        {
            ll di, mi;
            cin >> di >> mi;
           
            if (di <= x and mi >= y)
            {
                if (bind == -1 || di < bd || (di == bd && mi > mxc))
                {
                    bd = di;
                    mxc = mi;
                    bind = i;
                }
            }
        }
        cout << bind << nl;
    }

}