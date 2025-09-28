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
#define ll int
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
#define in_range(i,x,y) for(int i=x;i<=y;i++)
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define in_range_back(i,x,y) for(int i=y;i>=x;i--)
#define p(ans) cout<<(ans)<<"\n"
#define TT ll t; cin >> t; for (ll tt = 1; tt <= t; tt++)
#define case(test) cout<<"Case "<<test<<": ";
using namespace std;
void ari() 
{
    ll n;
    cin >>n;
    vi arr(n);
    vector<bool> vis(200001, false);  
    vector<ll> cont(200001, 0);     
    forn(i,n)
    {
        cin>>arr[i];
    }
    ll cur = 1;         

    for (auto nu : arr)
    {
        vis[nu] = true;
    }

    for (auto nu : arr) 
    {
        if(cont[nu] == 0)
        {
            cout << nu << " ";
            cont[nu]++;
        } 
        else 
        {
            while(vis[cur])
            {
                cur++;
            }
            cout <<cur<< " ";
            vis[cur] = true;
        }
        //p(cur);
    }
}

int main() {
    ariful
    ll t = 1, m, c = 0, x, y, z, a, b, d, q, k;
    cin >> t;
    while (t--) 
    {
        string s,str;
        // tll

        ari();
        cout << nl;
    }
}
