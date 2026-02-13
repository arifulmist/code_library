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
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        ll cc = 0;
        for (auto i : mp)
        {
            if (i.first < i.second)
            {
                cc +=   i.second-i.first;
            }
            else if (i.first > i.second)
            {
                cc += i.second;
            }
        }
        p(cc);
    }
}
/**
 In a balanced array, value x
 must appear either 0
 times or exactly x
 times.
 */