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
string decttobinary(ll nm)
{
    string ans = "";
    while(nm>0)
    {
        int nn = nm % 2;
        ans.push_back('0' + nn);
        nm /= 2;
    }
    reverse(all(ans));
    return ans;
}

bool chk(int n)
{
 string s = decttobinary(n);
    string rs = s;
    reverse(rs.begin(),rs.end());
    return s == rs;
}
int main()
{
    ariful
    ll t=1,m,n,c=0,x,y,z,a,b,d,q,k;
    cin >> n;
   
    
    if(n%2==1 && chk(n))

    {
        YES;
    }
    else
        NO;
}