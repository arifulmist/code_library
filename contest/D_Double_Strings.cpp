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
#define p(ans) cout<<(ans)
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
        string s1,s2;
        cin >> n;
        vector<string> v(n);
        map<string,bool> mp;
        for (ll i = 0; i < n;i++)
        {
            cin >> v[i];
            mp[v[i]] = true;
        }
    
        for (ll i = 0; i < n;i++)
        {
           bool fla =false;
            for (ll j =1; j <v[i].size();j++)
            {
                s1 = v[i].substr(0, j);
                s2 = v[i].substr(j, v[i].size() - 1);
                if(mp[s1]&& mp[s2])
                {
                    fla = true;
                    break;
                }
            }
            (fla) ? p(1) : p(0);
        }
        cout << nl;
    }

}