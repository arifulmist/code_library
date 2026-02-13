#include <bits/stdc++.h>
#define ariful                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define vi vector<long long>
#define p(ans) cout << (ans) << "\n"
using namespace std;

int main()
{
    ariful
        ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vi v(n);

        bool fla= false;
        ll sum1= 0,mx=0,cc= 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] &1)
            { 
                fla = true;
                cc++;
                mx = max(mx, v[i]);
            }
            else
            { 
            sum1 += v[i];
            }
        }

        if (!fla)
        {
            p(0);
        }
        else{
                p((sum1 + (cc * mx + 1) / 2));
        }
    }
}
