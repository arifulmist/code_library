#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

string join(const vector<string>& v, const string& delimiter) {
    string result;
    for (size_t i = 0; i < v.size(); ++i) {
        result += v[i];
        if (i < v.size() - 1) {
            result += delimiter;
        }
    }
    return result;
}

string process_test_case(int n, int q, vector<int>& x, vector<int>& queries) {
    unordered_map<int, int> freq;

    // Calculate the frequency of intervals
    for (int c = 1; c <= n; ++c) {
        // Calculate coverage at p = x_c
        int k_p = (c - 1) * (n - c + 1) + (n - c);
        freq[k_p]++;

        if (c < n) {
            int delta = x[c] - x[c - 1] - 1;
            if (delta > 0) {
                int k_between = c * (n - c);
                freq[k_between] += delta;
            }
        }
    }

    // Prepare answers for queries
    vector<string> answers;
    for (int k : queries) {
        answers.push_back(to_string(freq[k]));
    }

    return join(answers, " ");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> x(n), queries(q);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        for (int i = 0; i < q; ++i) {
            cin >> queries[i];
        }

        cout << process_test_case(n, q, x, queries) << endl;
    }

    return 0;
}
//B- All Pairs Segments