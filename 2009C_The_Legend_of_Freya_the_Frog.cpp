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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define line "\n"
#define shesh return 0;
#define p(ans) cout<<(ans)<<"\n"
#define TT ll t; cin >> t; for (ll tt = 1; tt <= t; tt++)
#define all(arr) (arr).begin(),(arr).end()
#define rall(arr) (arr).rbegin(),(arr).rend()
#define case(test) cout<<"Case "<<test<<": ";
using namespace std;
const ll mxxx =1e6+3;
//bool isprime[mxx];//10^6
bitset<mxxx>isprime;//10^8 hole//bit niye kaj hoi
 bool is_prime(ll num) {
    for(ll i=2; i*i<=num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}
void sieve()
{
    //sieve of eratostheres
    for(ll i=2;i<mxxx;i++)
        isprime[i]=true;

    for(ll i=2;i*i<mxxx;i++)
       if (isprime[i])
           for(ll j=i*i;j<mxxx;j+=i)
               isprime[j]=false;

}
int main()
{
    ariful
    ll t,m,n,c=0,x,y,z,a,b,d,k;
    cin >> t;
    while (t--)
    {
     cin>>x>>y>>k;   
       ll s,f;
       //ceil value
       if(x%k==0)
       {
           s=x/k;
       }
       else
       {
           s=(x/k)+1;
       }
       
       if(y%k==0)
       {
           f=y/k;
       }
       else
       {
           f=(y/k)+1;
       }
       
     //  cout<<s<<" "<<f<<endl;
       
       ll mn=min(s,f);
        ll mx=max(s,f);
       ll ans=mn+mx+(mx-mn);
       if(s>f)
       {
           ans--;
       }
    p(ans);
       
    
    
    }

    shesh
}
