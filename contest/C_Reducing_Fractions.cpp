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
#define ll long long
#define vi vector<long long>
#define st set<long long>
#define asort(ar,n) sort(ar,ar+n)
#define vsort(vc) sort(vc.begin(),vc.end())
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define nl "\n"
#define shesh return 0;
#define p(ans) cout<<(ans)<<"\n"
#define TT ll t; cin >> t; for (ll tt = 1; tt <= t; tt++)
#define case(test) cout<<"Case "<<test<<": ";
using namespace std;
const ll mxx =1e6+3;

const int N=1e7+3; 


vector<ll>cnt1(N),cnt2(N);

vector<int> computeSPF(int n) {
    vector<int> spf(n + 1);
    for (int i = 1; i <= n; i++) {
        spf[i] = i;
    }
    for (int i = 2; i * i <= n; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= n; j += i) {
                if (spf[j] == j) {
                    spf[j] = i; 
                }
            }
        }
    }
    return spf;
}

int main() {
    ariful
    vector<int> spf = computeSPF(N);
    int n, m;
    
    cin>>n>>m;
    
    vector<ll> a(n), b(m);
    
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        ll tmp = a[i];
        while (tmp > 1) {
            cnt1[spf[tmp]]++;
            tmp /= spf[tmp];
        }
    }
    
    for (int i = 0; i < m; i++) {
        cin>>b[i];
        ll tmp = b[i];
        while (tmp > 1) {
            cnt2[spf[tmp]]++;
            tmp /= spf[tmp];
        }
    }

    cout<<n<<" "<<m<<'\n';
    
    for (int i = 0; i < n; i++) {
        ll num = 1;
        while (a[i] > 1) {
            if (cnt2[spf[a[i]]] > 0) {
                cnt2[spf[a[i]]]--; 
            } else {
                num *= spf[a[i]];
            }
            a[i] /= spf[a[i]];
        }
        cout<<num<<" ";
    }
    cout<<'\n';
    
    for (int i = 0; i < m; i++) {
        ll num = 1;
        while (b[i] > 1) {
            if (cnt1[spf[b[i]]] > 0) {
                cnt1[spf[b[i]]]--;
            } else {
                num *= spf[b[i]];
            }
            b[i] /= spf[b[i]];
        }
        cout<<num<<" "; 
    }
}