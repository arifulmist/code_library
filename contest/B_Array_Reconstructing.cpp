#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ind = -1;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] != -1)
            {
                ind = i;
                break;
            }
        }
        if (ind != -1)
        {
            for (ll i = ind + 1; i < n; i++)
            {
                v[i] = (v[i - 1] + 1) % m;
            }
            for (ll i = ind - 1; i>=0; i--)
            {
                v[i] = (v[i + 1] - 1 + m) % m;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }
}
