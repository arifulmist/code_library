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

        cin >>n;
        if(n&1)
        {
            if(n<=25)
            {
                p(-1);
            }
            else 
            {
                cout << "1 2 2 3 3 4 4 5 5 1 13 6 6 7 7 8 8 9 9 10 10 11 11 12 12 1 13 ";
                n -= 27;
                for (ll i = 1; i <= n / 2;i++)
                {
                    cout << 13 + i << " " << 13 + i << " ";
                }
                cout << nl;
            }
        }
        else 
        {
            for (ll i = 1; i <= n / 2;i++)
            {
                cout <<  i << " " <<  i << " ";
            }
            cout << nl;
        }

    }

}