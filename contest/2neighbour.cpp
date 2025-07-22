#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> ar(2*n);
        for(ll i=0;i<2*n;i++)
        {
            cin>>ar[i];
        }
        sort(ar.begin(),ar.end());
        for(ll i=0;i<n;i++)
        {
            cout<<ar[i]<<" "<<ar[i+n]<<" ";
        }
        cout<<"\n";
    }

}
