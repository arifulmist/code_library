#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define vi vector<long long>
#define asort(ar,n) sort(ar,ar+n)
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define p(ans) cout<<(ans)<<"\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define nl "\n"
#define shesh return 0;
using namespace std;
int main()
{
    ariful
    ll t=1,m,n,c=0,x,y,z,a,b,d,q,k;
    string s,ss;
    cin >> s;
    bool fl = false;

    for (ll i = 0; i < s.size();i++)
    {
       
        if(!fl&&s[i]=='0')
        {
            fl = true;

            
        }
        else ss += s[i];
    }
   if(!fl)
       ss.pop_back();///11111  so last digit delete

   p(ss);
   //    x = ss.find('1');
   //    if(x==-1)///00000000
   //    {
   //        p(0);
   //    }
   //    else{//000111
   //        p(ss.substr(x));
   //    }
}