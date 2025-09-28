#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n),p(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    p[0]=v[0];
    for(ll i=1; i<n; i++)
    {
        p[i]=v[i]+p[i-1];
    }
    for()
    for(auto x:p)
    {
        cout<<x<<" ";
    }
}
