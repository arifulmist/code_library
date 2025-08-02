#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, a, b;
        cin >> l >> r >> a >> b;

        vector<bool> d(105, false);
        if (l < a) d[a - 1] = true;
        if (a < l) d[l - 1] = true;
        if (b > r) d[r] = true;
        if (r > b) d[b] = true;

        int ans = 0;
        for (int i = 1; i <= 101; i++) {
            ans += d[i];
        }

        int v = min(r, b) - max(l, a);
        if (v < 0) ans = 0;

        cout << max(1, ans + max(0, v)) << endl;
    }

    return 0;
}
