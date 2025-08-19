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
ll cont(ll n)
{
    ll c = 0;
    while(n!=0)
    {
        c += n % 10;
        n /= 10;

    }
    return c;
}

int main()
{
    ariful
    ll t=1,m,cc=1,x,y,z,a,b,d,q,k;
    string s;
    cin >> s;
    x = 0;
    if(s.size()==1)
    {
        p(0);
        shesh;
    }
    for(auto i:s)
    {
        x += i - '0';
    }
    while (x >= 10)
    {
        x = cont(x);
        cc++;
    }
     p(cc);
}