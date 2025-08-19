#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(vc) sort(vc.begin(), vc.end())

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t; cin >> t;
    while (t--) {
        ll n, r, l;
        cin >> n >> r >> l;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        vsort(v);

        if (r >= n || l >= n) {
            cout << "Invalid indices\n";
            continue;
        }

        ll sum = 0;
        for (ll i = 0; i <= r; i++) {
            if (i != l) sum += v[i];
        }

        cout << sum << "\n";
    }

    return 0;
}
