#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t=1;
    //cin>>t;
    ll tc=0;

    while(t--)
    {
      ll n;
      cin>>n;
      if(n%2==1) cout<<n/2<<" "<<n/2+1<<"\n";
      else if((n/2)%2==1) cout<<n/2-2<<" "<<n/2+2<<"\n";
      else cout<<n/2-1<<" "<<n/2+1<<"\n";
    }
}
