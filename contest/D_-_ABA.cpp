#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vi vector<long long>
#define p(ans) cout<<(ans)<<"\n"
#define shesh return 0;

using namespace std;

int main() {
    ariful
    string S;
    cin>>S;
    ll n=S.size();
    vi pos[26];
    for(int i = 0; i < n; i++) 
    {
        pos[S[i]-'A'].push_back(i + 1);
    }

    ll ans = 0;
    
    for(int c = 0; c <26; c++) 
    {
        int m = pos[c].size();
        if (m < 2) continue;

        vi prefix(m + 1, 0);
        for(int i = 0; i < m; i++) 
        {
            prefix[i + 1] = prefix[i] + pos[c][i];
        }

        for(int j = 1; j < m; j++) 
        {
            ll pj = pos[c][j];
            ll cnt = j;
            ll sum = prefix[j];
            ans += (cnt * pj) - sum - cnt;
        }
    }

    p(ans);
    shesh
}
