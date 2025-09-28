
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t=1;
    cin>>t;
    ll tc=0;

    while(t--)
    {
      ll n;
      cin>>n;
      ll pos[1001]={0};
      for(ll i=1;i<=n;i++)
      {
          ll a;
          cin>>a;
          pos[a]=i;
      }ll ans=-1;
      for(ll i=1;i<=1000;i++)
      {
          for(ll j=i;j<=1000;j++)
          {
              if(pos[i] && pos[j] && __gcd(i,j)==1)
              {
                  ans=max(ans,pos[i]+pos[j]);
              }
          }
      }
      cout<<ans<<"\n";
    }
}
