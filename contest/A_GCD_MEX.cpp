#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll lcm(ll x ,ll y)
{
    return (x * y) / __gcd(x, y);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll hi = 1;
    for (ll i = 1; i <= 30; i++)
    {
        hi =lcm(hi, i);
    }
    ll t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << x << "\n";
        for (ll i = 1; i < x; i++)
        {
            cout << i << " ";
        }
        cout << hi << "\n";
    }
}
