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
#define ll int
#define vi vector<long long>
#define st set<long long>
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
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
    for(ll i=2; i*i<=num; i++) {
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
    ll t,m,n,c=0,x,y,z,a,b,d;
    cin >> t;
    while (t--)
    {
       cin>>n>>a>>b;
       string s;
       cin>>s;
       ll ans=n*a;
       /// substring delete bolte kiso nai atai syestem matic vabe 
       // approach sikte hbe koi ta zero koi ta 1 amn 
       // then math matical term use korte hbe 
       if(b<=0)
       {
        int cnt1=0;
        int z=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                while(s[i]=='0'&&i<n)
                {
                    i++;
                    z++;// consecutive zero count
                }
                cnt1++;//consecution zeros 00011100011100
            }
           
        }
         if(z!=n) cnt1++;// zero count er por bad baki one thakle akta cnt barabo
         //same ase above
          int cnt2=0;
        int o=0;
         for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                while(s[i]=='1'&&i<n)
                {
                    i++;
                    o++;//one count 
                }
                cnt2++;
            }
           
        }
         if(o!=n) cnt2++;
         ans+=b*min(cnt1,cnt2);
        
       }
        else
         {
            ans+=b*n;
         }
         p(ans);

    }

    shesh
}
