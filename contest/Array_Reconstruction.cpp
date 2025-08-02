#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define spc " "
#define pf push_front
#define endl "\n"
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define rihin                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

int main()
{
    rihin;
    ll n;
    cin >> n;
    
    vector<ll> ele(n);
    vector<ll> pre(n);
    vector<ll> post(n);

    for (ll i = 0; i < n; i++) {
        cin >> ele[i];
    }
    pre[0] = ele[0];
    for (ll i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + ele[i];
    }

    post[n - 1] = ele[n - 1];
    for (ll i = n - 2; i >= 0; i--) {
        post[i] = post[i + 1] + ele[i];
    }

    ll l = -1, r = -1;

    for (ll i = 0; i < n; i++) {
        if (pre[i] == post[i]) {
            l = pre[i]; 
            r = i + 1; 
            break;
        }
    }

    if (l == -1)
        cout << "UNSTABLE" << endl;
    else
        cout << l << " " << r << endl;

    return 0;
}