#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
    cin >> n;
    vector<string> S(n);
    int max_len = 0;
    for(int i = 0; i < n; ++i) {
        cin >> S[i];
        if (S[i].length() > max_len) {
            max_len = S[i].length();
        }
    }
    vector<string> T(max_len, string(n, '*'));
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < S[i].length(); ++j) {
            T[j][n - 1 - i] = S[i][j];
        }
    }
    for(int i = 0; i < max_len; ++i) {
        int j = n - 1;
        while (T[i][j] == '*' && j >= 0) {
            --j;
        }
        cout << T[i].substr(0, j + 1) << endl;
    }
}