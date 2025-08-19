#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   ll q,n;
   cin>>n>>q;
   //vector<ll>v(n);
   ll v[n];
   for(ll i=0;i<n;i++)
   {
       cin>>v[i];
   }
   sort(v,v+n);
   while(q--)
   {
       ll x;
       cin>>x;
       ll low=0;
    ll high=n-1;
    bool flag=false;
    while(low<=high)
    {
        ll mid=(high+low)/2LL;
        if(v[mid]==x) {
            flag=true;
            break;
        }
        if(v[mid]>x) high=mid-1;
        else  low=mid+1;
    }
    if(flag) cout<<"found\n";
    else cout<<"not found\n";




   }
//    ll x;
//    cin>>x;
//    ll low=0;
//    ll high=n-1;
//    bool flag=false;
//    while(low<=high)
//    {
//        ll mid=(high+low)/2LL;
//        if(v[mid]==x) {
//            flag=true;
//            break;
//        }
//        if(v[mid]>x) high=mid-1;
//        else  low=mid+1;
//    }
//    if(flag) cout<<"found\n";
//    else cout<<"not found\n";
//
//

}
