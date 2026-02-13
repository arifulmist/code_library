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
        ll l, v, T;
        vi vv;
        cin >> l >> v >> T >> n;
        while(n--)
        {
            ll ti, vii;
            cin >> ti >> vii;
            if(ti>T)
            {
                vv.pb(0);
            }
            else if(v==vii and ti<=T){
                vv.pb(1);
            }
            else{
                ll delv = abs(v - vii);
                ll delt = abs(T - ti);
                ll mul = delv * delt;
                ll dv = floor(mul / l * 1.0);
                dv++;
                vv.pb(dv);
            }
        }
        for (ll i = 0; i < vv.size();i++)
        {
            cout << vv[i];
            if(i+1<vv.size())
                cout << " ";
        }
        cout << nl;
    }

}