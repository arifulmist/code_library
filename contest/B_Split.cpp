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
        cin >> n;
        vi v(2*n);
        unordered_map<ll, ll> mp;
        for (ll i = 0; i <2*n;i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        ll even = 0LL,odd=0;
        for(auto i:mp)
        {
            if(i.second%2==0)
            {
                ++even;
            }
            else 
            {
                ++odd;
            }
        }
        odd+= (even+even);
        if((mp.size()-even==0)&& (even%2!=n%2))
        {
            odd -= 2LL;
        }
        p(odd);
    }

}