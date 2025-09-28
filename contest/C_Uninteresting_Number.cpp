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
    cin >> t;
    while (t--)
    {
       
        string s;
        cin >> s;
        ll tw = 0, th = 0,sum=0;
        n = s.size();
        for (ll i = 0; i < n; i++)
        {
           if(s[i]=='2') tw++;
               else if(s[i]=='3') th++;

               sum += (s[i] - '0');
               sum %= 9;
        }
        bool fla = false;
        for (ll i = 0; i <= th;i++)
        {
            for (ll j = 0; j <= tw;j++)
            {
                ll tww = sum;
                tww +=j* 2 + i * 6;
                if(tww%9==0)
                {
                    fla = true;
                    break;
                }
            }
        }
        (fla) ? YES : NO;
    }

}