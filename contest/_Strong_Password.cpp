#include <iostream>
#include <vector>
#include <string>
using namespace std;

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
ll time( string & s) {
    ll ti=2;
    for(ll i=1;i<s.size(); ++i)
     {
        if(s[i]==s[i-1]) 
        {
            ti+=1;
        }
         else 
        {
            ti+=2;
        }
    }
    return ti;
}

int main() {
    ariful
    ll t,m,n,c=0,x,y,z,a,b,d;
    cin >> t;
    vector<string> r;
    while(t--) {
        string s;
        cin>>s;
        string str;
        ll mx= 0;
        
        for(ll i =0;i<=s.size();++i) 
        {
            for(char c ='a'; c<='z'; ++c) 
            {
                string mod=s.substr(0, i) + c + s.substr(i);
                ll tt=time(mod);
                if(tt>mx) {
                    mx=tt;
                    str=mod;
                }
            }
        }
        
        r.push_back(str);
    }
    
    for(auto res : r) {
        cout<<res<<line;;
    }
    
    shesh
}
 