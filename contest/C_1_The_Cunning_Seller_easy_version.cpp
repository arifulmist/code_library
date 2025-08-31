#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute all possible deals up to the maximum possible n (10^9)
    vector<ll> watermelons, costs;

    ll x = 0;
    while (true)
    {
        ll wm = pow(3, x);
        if (wm > 1000000000)
            break; // Stop when we exceed the max possible n (10^9)

        ll cost = pow(3, x + 1) + x * pow(3, x - 1);
        watermelons.push_back(wm);
        costs.push_back(cost);

        x++;
    }

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll total_cost = 0;

        // Iterate through deals from the largest to smallest
        for (int i = watermelons.size() - 1; i >= 0; --i)
        {
            if (watermelons[i] <= n)
            {
                ll num_deals = n / watermelons[i];
                total_cost += num_deals * costs[i];
                n -= num_deals * watermelons[i];
            }
        }

        cout << total_cost << endl;
    }

    return 0;
}
