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
    ll t,m,n,c=0,x,y,z,a,b,d;
   // cin >> t;
   vi va,vb,vc;
   char a1,a2,a3;
for(ll i=0;i<3;i++)
    {
       
       string s;
       cin>>s;
       
       if(s[0]=='A' && s[1]=='>' && s[2]=='B') 
       {
        va.push_back(1);
        vb.push_back(0);
       }
        else if(s[0]=='A' && s[1]=='>' && s[2]=='C') 
       {
        va.push_back(1);
        vc.push_back(0);
       }
       else if(s[0]=='A' && s[1]=='<' && s[2]=='C') 
       {
        va.push_back(0);
        vc.push_back(1);
       }
       else if(s[0]=='A' && s[1]=='<' && s[2]=='B') 
       {
        va.push_back(0);
        vb.push_back(1);
       }
       else if(s[0]=='B' && s[1]=='>' && s[2]=='C') 
       {
        vb.push_back(1);
        vc.push_back(0);
       }
        else if(s[0]=='B' && s[1]=='>' && s[2]=='A') 
       {
        vb.push_back(1);
        va.push_back(0);
       }
        else if(s[0]=='B' && s[1]=='<' && s[2]=='C') 
       {
        vb.push_back(0);
        vc.push_back(1);
       }
        else if(s[0]=='B' && s[1]=='<' && s[2]=='A') 
       {
        va.push_back(1);
        vb.push_back(0);
       }
        else if(s[0]=='C' && s[1]=='>' && s[2]=='A') 
       {
        va.push_back(0);
        vc.push_back(1);
       }
       else if(s[0]=='C' && s[1]=='>' && s[2]=='B') 
       {
        vb.push_back(0);
        vc.push_back(1);
       }
       else if(s[0]=='C' && s[1]=='<' && s[2]=='A') 
       {
        va.push_back(1);
        vc.push_back(0);
       }
       else if(s[0]=='C' && s[1]=='<' && s[2]=='B') 
       {
        vc.push_back(0);
        vb.push_back(1);
       }
    }

    int suma=0,sumb=0,sumc=0;
    for(ll i=0;i<va.size();i++)
    {
      suma+=va[i];
     
    }
    for(ll i=0;i<vb.size();i++)
    {
      
      sumb+=vb[i];
    }
    for(ll i=0;i<vc.size();i++)
    {
     
      sumc+=vc[i];
    }
    //cout<<suma<<line<<sumb<<sumc;
    if(suma==2 && sumb==1 && sumc==0) cout<<"CBA";
    else if(sumb==2 && sumc==1 && suma==0)  cout<<"ACB";
    else if(sumc==2 && suma==1 && sumb==0)  cout<<"BAC";
    else if(sumc==2 && sumb==1 && suma==0)  cout<<"ABC";
    else if(suma==2 && sumc==1 && sumb==0)  cout<<"BCA";
    else if(sumb==2 && suma==1 && sumc==0)  cout<<"CAB";
    else cout<<"Impossible";
}
