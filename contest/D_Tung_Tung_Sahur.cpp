#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;

        int i = 0, j = 0;
        bool ok = true;

        while (i < p.size() && j < s.size()) {
            if (p[i] != s[j]) {
                ok = false;
                break;
            }

            // Count same characters in p and s
            int cnt_p = 1, cnt_s = 1;
            while (i + 1 < p.size() && p[i] == p[i + 1]) {
                cnt_p++;
                i++;
            }
            while (j + 1 < s.size() && s[j] == s[j + 1]) {
                cnt_s++;
                j++;
            }

            if (cnt_s < cnt_p || cnt_s > 2 * cnt_p) {
                ok = false;
                break;
            }

            i++;
            j++;
        }

        if (i != p.size() || j != s.size()) ok = false;

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
