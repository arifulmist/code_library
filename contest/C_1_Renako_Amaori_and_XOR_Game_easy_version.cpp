#include <bits/stdc++.h>
#define ariful                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define FileIO                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ll long long
#define all(x) x.begin(), x.end()
#define vi vector<long long>
#define asort(ar, n) sort(ar, ar + n)
#define vrsort(vc) sort(vc.rbegin(), vc.rend())
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define p(ans) cout << (ans) << "\n"
#define yes cout << "yes\n"
#define no cout << "no\n"
#define nl "\n"
#define shesh return 0;
using namespace std;
int main()
{
    ariful
        ll t = 1,
           m, n, c = 0, x, y, z, a, b, d, q, k;
    cin >> t;
    while (t--)
    {

        cin >> n;
        vi v1(n + 1), v2(n + 1);
        ll cc = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> v1[i];
            if(v1[i]==1)
                cc++;
        }
        for (ll i = 1; i <= n; i++)
        {
            cin >> v2[i];
            if (v2[i] == 1)
                cc++;
        }
        if(cc%2==0)
        {
            p("Tie");
            continue;
        }
        for (ll i = n; i>=1; i--)
        {
            if(v1[i]!=v2[i])
            {
               if(i%2)
                   {
                       p("Ajisai");
                       
                       
                   }
                   else 
                   {
                       p("Mai");
                       
                   }
                   break;
            }
          
           } 
        
    }
}