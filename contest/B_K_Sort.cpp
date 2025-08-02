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
const ll mxx =1e6+3;
//bool isprime[mxx];//10^6
bitset<mxx>isprime;//10^8 hole//bit niye kaj hoi
 bool is_prime(ll num) {
    for(ll i = 2; i * i <= num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}
void sieve()
{
    //sieve of eratostheres
    for(ll i=2;i<mxx;i++)
        isprime[i]=true;

    for(ll i=2;i*i<mxx;i++)
       if (isprime[i])
           for(ll j=i*i;j<mxx;j+=i)
               isprime[j]=false;

}
int main()
{
    ariful
    ll t,n;
    cin >> t;
    while (t--)
    {
       cin>>n;
       vi arr(n);
       for(ll i=0;i<n;i++)
       {
        cin>>arr[i];
       }
       ll ans=0;
       vi v;
       ll temp=arr[0];
       for(ll i=1;i<n;i++)
       {
        if(arr[i]<temp)
        {
           v.push_back(temp-arr[i]);
        }
        else if(arr[i]>temp)
        {
            temp=arr[i];
        }
       }
       sort(v.begin(),v.end());
       ll mn;
       if(v.size()) mn=v[0];
       ll pv=0;
       ll len=v.size();
       for(ll i=0;i<len;i++)
       {
        if(v[i]-mn)
        {
            pv=mn;
            mn=v[i];
            ans+=((len-i+1)*(mn-pv));
        }
        else if(i==0)
        {
           
            ans+=((len-i+1)*(mn-pv));
        }
       }
    cout<<ans<<line;

    }

    shesh
}
