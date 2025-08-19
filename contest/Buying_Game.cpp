#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long sum = 0, ans = 0;
    vector<pair<long long, long long>> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i].second;
        a[i].first = a[i].first - a[i].second;
        sum += a[i].second;
    }
    
    sort(a.begin(), a.end());
    ans = sum;
    sum += a[0].first;
    
    for (int i = 1; i < n; i++) {
        sum += a[i].first;
        ans = min(ans, sum);
    }
    
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}
