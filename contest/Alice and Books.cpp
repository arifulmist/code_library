
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
#define ll long long
#define vi vector<long long>
#define st set<long long>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define line "\n"
#define shesh return 0;
#define p(ans) cout<<(ans)<<"\n"
#define all(arr) (arr).begin(),(arr).end()
#define rall(arr) (arr).rbegin(),(arr).rend()
#define case(test) cout<<"Case "<<test<<": ";
using namespace std;
int main()
{
    ariful
    ll t,m,n,c=0,x,y,z,a,b,d;
    cin >> t;
    while (t--)
    {
        cin>>n;
        ll v[n];
        for(ll i=0; i<n; i++) cin>>v[i];
    ll mx=0;
    for(ll i=0;i<n-1;i++)
    {
        mx=max(mx,v[i]);
    }
        cout<<mx+v[n-1]<<line;
    }

    shesh
}
