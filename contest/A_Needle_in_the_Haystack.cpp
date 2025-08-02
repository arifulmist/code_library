#include<bits/stdc++.h>
using namespace std;
#define base 256
#define int long long
#define mod 10000000

class haash {
    public:
    string str;
    int n;
    vector<int> power;  // Stores powers of 'base'
    vector<int> ph;     // Stores prefix hashes

    // Function to compute prefix sums for hash values
    void prefixsum() {
        power[0] = 1;
        int x = 0;
        for (int i = 0; i < n; i++) {
            power[i + 1] = (power[i] * base) % mod;
            x = ((x * base)%mod + str[i]-'a') % mod;
            ph[i] = x;
        }
    }

public:
    // Constructor to initialize string and precompute hash values
    haash(string st) {
        str = st;
        n = st.size();
        ph.resize(n);
        power.resize(n + 1);
        prefixsum();
    }

    // Function to calculate hash of substring [l, r]
    int calhush(int l, int r) {
        if (l == 0) return ph[r];
        else {
            int x = ((ph[r] - (ph[l - 1] * power[r - l + 1]) % mod) + mod) % mod;
            return x;
        }
    }
};

signed main() {
    int m;
    while (cin >> m) {
        string pat;
        string txt;
        cin >> pat >> txt;
        int n = txt.size();
        if (m >n) {
            cout << endl;
        } else {
            haash txtHash(txt);
            haash patHash(pat);
            vector<int> ans;

            // Calculate hash for the pattern and compare with all possible substrings
            for (int i = 0; i <= n - m; i++) {
                if (txtHash.calhush(i, i + m - 1) == patHash.calhush(0, m - 1)) {
                    ans.push_back(i);
                }
            }
            if(ans.empty())
            {
                cout<<"\n";
            }
           
           else { // Output the positions where the pattern matches
            for (auto i : ans) {
                cout << i << "\n";
            }
        }
        }
    }
}
