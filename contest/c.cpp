/*
  __  __ ____       _    ____  ___ _____ _   _ _       ___ ____  _        _    __  __
 |  \/  |  _ \     / \  |  _ \|_ _|  ___| | | | |     |_ _/ ___|| |      / \  |  \/  |
 | |\/| | | | |   / _ \ | |_) || || |_  | | | | |      | |\___ \| |     / _ \ | |\/| |
 | |  | | |_| |  / ___ \|  _ < | ||  _| | |_| | |___   | | ___) | |___ / ___ \| |  | |
 |_|  |_|____/  /_/   \_\_| \_\___|_|    \___/|_____| |___|____/|_____/_/   \_\_|  |_|

*/
#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define int long long
#define vi vector<int>
#define st set<long long>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define line "\n"
#define shesh return 0;
#define p(ans) cout<<(ans)<<"\n"
#define all(arr) (arr).begin(),(arr).end()
#define rall(arr) (arr).rbegin(),(arr).rend()
#define case(test) cout<<"Case "<<test<<": ";
using namespace std;

   bool isuper( vi& sarr) {
    int s= 0;

    for (auto it : sarr) {
        s += it;
    }

    for (auto it : sarr) {
        if (s% it != 0) {
            return false;
        }
    }
    return true;
}

int counts( vi & arr) {
    int n = arr.size();
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            vi sarr(arr.begin() + i, arr.begin() + j + 1);
            if (isuper(sarr)) {
                ++cnt;
            }
        }
    }

    return cnt;
}

int32_t main() {
    int ts;
    cin >> ts;

    while (ts--) {
        int n;
        cin >> n;
        vi arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int res = counts(arr);
        cout << res << line;
    }

  shesh
}
