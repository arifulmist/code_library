#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n, sm = 0, ind = -1, cnt1 = 0, cnt_1 = 0;
        cin >> n;
        vector<ll> v(n);
        set<ll> ss;

        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 1) cnt1++;
            else if (v[i] == -1) cnt_1++;
            else {
                sm = v[i];
                ind = i;
            }
        }

        for (ll sum = -cnt_1; sum <= cnt1; sum++) {
            ss.insert(sum);
        }

        if (ind != -1) {
            set<ll> temp(ss);
            for (auto s : temp) {
                ss.insert(s + sm);
            }
            ss.insert(sm);
        }

        ss.insert(0);

        cout << ss.size() << "\n";
        for (auto s : ss) {
            cout << s << " ";
        }
        cout << "\n";
    }
    return 0;
}
