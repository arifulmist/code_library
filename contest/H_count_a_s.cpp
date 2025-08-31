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
int main()
{
    ariful
        ll t = 1,
           m, n, c = 0, x, y, z, a, b, d, q, k;

    string s;
    cin >> s;
    vi frq(s.size(), 0);
    if (s[0] == 'a')
    {
        frq[0] = 1;
    }
    else
    {
        frq[0] = 0;
    }
    ll cc;
    for (ll i = 1; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            cc = 1;
        }
        else
            cc = 0;

        frq[i] = frq[i - 1] + cc;
    }
    // for (auto i : frq)
    // {
    //     cout << i <<" ";
    // }
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        n--;
        m--;
       if(n>0)
       {
           p((frq[m] - frq[n-1]));
       }
        else p((frq[m]));
    }
}