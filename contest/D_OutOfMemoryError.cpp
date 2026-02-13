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
        ll h;
        cin >> n >> m >> h;
        vi v(n),vv(n),last(n,-1);
        for (ll i = 0; i < n;i++)
        {
            cin >> v[i];
            vv[i] = v[i];
        }
        ll bi, ci;
        ll res = -1;
        for (ll i = 0; i < m;i++)
        {
            cin >> bi >> ci;
            int in= bi - 1;
            if(last[in]<res)
                vv[in] = v[in];
            vv[in] += ci;
            if (vv[in] > h)
            {
                res = i;
                vv[in] = v[in];
            }
            last[in] = i;
        }

        for (ll i = 0; i < n;i++)
        {
            if (last[i] < res)
                vv[i] = v[i];
            cout << vv[i] << " ";
        }
        cout << nl;
    }
}
