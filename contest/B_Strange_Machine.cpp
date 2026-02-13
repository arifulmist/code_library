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
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        string s;
        cin >> s;
        vi v(m);
        for (ll i = 0; i < m;i++)
        {
            cin >> v[i];
        }
        bool BB = false;
        for (ll i = 0; i < n;i++)
        {
            if(s[i]=='B')
            {
                BB = true;
                break;
            }
        }
    
        for (ll i = 0; i < m;i++)
        {
            if(!BB)// mane b nai 
            {
                p(v[i]);
                continue;
            }
            ll sec = 0;
            ll pos = 0;
            while(v[i]!=0)
            {
               if(s[pos]=='B') 
               {
                   v[i] = floor(v[i] / 2 * 1.0);
               }
               else 
               {
                   v[i]--;
               }
               sec++;
               pos++;
               if(pos==n)
               {
                   pos = 0;
               }
            }
            p(sec);
        }
    }

}