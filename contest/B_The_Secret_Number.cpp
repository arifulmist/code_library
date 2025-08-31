#include <bits/stdc++.h>
#define arifulj                       \
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
int main()
{
    arifulj
        ll t = 1,
           m, n, c = 0, x, y, z, d, q, k;
    cin >> t;
    while (t--)
    {
        ll s;
        cin >> n;
        vi v;
        // ki bal
        ll pw = 10;
        for (ll i = 1; i <= 18; i++)
        {
            ll div = 1 + pw;

            if (div != 0 and n % div == 0)
            {
                x = n / div;

                v.push_back(x);
            }
                pw *= 10;
        }
        if (v.size() == 0)
        {
            p(0);
        }
        else
        {
            sort(all(v));
            cout << v.size() << nl;
            for (auto i : v)
            {
                cout << i << " ";
            }
            cout << nl;
        }
    }
}