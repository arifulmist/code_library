#include <bits/stdc++.h>
#define ariful                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
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
void solve()
{
    ll n;
    string s;
    char ch;
    ll c = 0;
    cin >> n >> ch;
    cin >> s;
    bool fl = true;
    ll ind;
    for (ll i = 0; i < n; i++)
    {
        if(s[i]==ch)
            {ind = i;}
        if (s[i] != ch)
        {
            fl = false;
            
        }
    }
    if (fl)
    {
        cout << 0<<nl;
    }
    else if(ind==n-1||ind>=n/2)
    {
        cout << 1 << nl << ind + 1 << nl;
    }
    else 
    {
        cout << 2 << nl << n - 1 << " " << n << nl;
        
    }
    // for (ll i = n / 2; i < n; i++)
    // {
    //     if (s[i] == ch)
    //     {
    //         cout << 1 << nl << i + 1 << nl;

    //         return;
    //     }
    // }
}

int main()
{
    ariful
        ll t = 1,
           m, x, y, z, a, b, d, q, k;
    cin >> t;
    while (t--)
    {
        solve();
    }
}