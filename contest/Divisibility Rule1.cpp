#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t,n;
  cin>>t;
  while(t--)
  {
      cin>>n;
      ll arr[n];
      ll sum=0;
      for(ll i=0;i<n;i++)
      {
          cin>>arr[i];
          while(arr[i])
          {
              ll rem=arr[i]%10;
              sum+=rem;
              arr[i]/=10;
          }
      }
      if(sum%3) cout<<"No\n";
      else cout<<"Yes\n";

  }
}
