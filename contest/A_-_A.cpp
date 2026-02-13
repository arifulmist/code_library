#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileIO freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
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
    //cin >> t;
    
    while (t--)
    {
        vector<string> v = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        string s;
        cin >> s;
        ll cc = 0;
        if (s == "January")
        {
            cc = 1;
        }
        else if (s == "February")
        {
            cc = 2;
        }
        else if (s == "March")
        {
            cc = 3;
        }
        else if (s == "April")
        {
            cc = 4;
        }
        else if (s == "May")
        {
            cc = 5;
        }
        else if (s == "June")
        {
            cc = 6;
        }
        else if (s == "July")
        {
            cc = 7;
        }
        else if (s == "August")
        {
            cc = 8;
        }
        else if (s == "September")
        {
            cc = 9;
        }
        else if (s == "October")
        {
            cc = 10;
        }
        else if (s == "November")
        {
            cc = 11;
        }
        else if (s == "December")
        {
            cc = 12;
        }
        cin >> n;
        cc += n;
        cc--;
       // p(cc);
        p(v[cc % 12]);
       // ll rem = cc % 12;
        
    }

}