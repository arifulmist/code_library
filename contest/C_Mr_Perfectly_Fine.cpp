#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ll int
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
        cin >> n;
        map<string, int> mp;
        mp["00"] = 1e9;
        mp["10"] =  1e9;
        mp["01"] =   1e9;
        mp["11"] =  1e9;

        for (ll i = 0; i < n;i++)
        {
            string s;
            cin >> m>>s;
            mp[s] =min(mp[s], m);
        }
         x = min(mp["11"], (mp["10"] + mp["01"]));
        if(x >1e6)
        {
            p(-1);
        }
        else{
           
            p(x);
        }


    }

}