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
        vi pp(n), arr(n);
        for (ll i = 0; i < n;i++)
        {
            cin >> pp[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
          
        }
        vi v;
        v.pb(arr[0]);
        for (ll i = 1; i < n;i++)
        {
            if(arr[i]!=arr[i-1])
            {
                v.push_back(arr[i]);
            }
        }
        ll p_indx = 0, c_indx = 0;
        while(p_indx<n and c_indx<v.size())
        {
           if(pp[p_indx]==v[c_indx])
           {
               c_indx++;
           }
           p_indx++;
        }
        (c_indx == v.size()) ? YES : NO;
 }
}