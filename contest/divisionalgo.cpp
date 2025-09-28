#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define ll long long
#define vi vector<long long>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define line "\n"
#define shesh return 0;
using namespace std;
int main()
{
   ariful
   ll t,m,n,c=0,x,y,z,a,b,d,p,l;
   cin >> t;
    while (t--) {
            c++;
    cout<<"Case "<<c<<": ";
    cin>>p>>l;
    p-=l;
    vi v;
    for(ll i=1;i*i<=p;i++)
    {
        if(p%i==0)
        {
          if(i>l) v.push_back(i);
          if(i*i!=p && p>l*i ) v.push_back(p/i);
        }
    }
    sort(v.begin(),v.end());
    if(v.empty()) cout<<"impossible";
    else
        for(auto it :v)
    {
        cout<<it<<" ";
    }
     cout<<line;
    }

  shesh
}
