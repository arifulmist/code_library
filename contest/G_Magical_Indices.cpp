#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll p,r,g,x,n,k;
    ll t;
    //scanf("%lld",&t);
    cin>>t;
while(t--)
{

    cin>>n;
    //scanf("%lld%lld",&n,&k);
    vector<ll> v(n+1),suf(n+2);
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }

    suf[n]=v[n];
    for(ll i=n-1;i>=1;i--)
    {
        suf[i]=min(suf[i+1],v[i]);
    }
    ll cc=0;
    ll mx=v[1];
    for(ll i=2;i<=n-1;i++)
    {  mx=max(mx,v[i]);
        if(v[i]==mx&& v[i]==suf[i]) cc++;
    }
    cout<<cc<<nl;

}


}


