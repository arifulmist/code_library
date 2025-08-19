#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> cards(n);
        for (int i = 0; i < n; i++) {
            cin >> cards[i];
        }
        sort(cards.begin(), cards.end());
        map<int, int> freq;
        int maxCards = 0, distinct = 0, left = 0;
        for (int right = 0; right < n; right++) {
            if (freq[cards[right]] == 0) {
                distinct++;  
            }
            freq[cards[right]]++;  

            while (distinct > k) {
                freq[cards[left]]--;  
                if (freq[cards[left]] == 0) {
                    distinct--;  
                }
                left++;  
            }
            if (right > 0 && (cards[right] == cards[right - 1] || cards[right] == cards[right - 1] + 1)) {
                maxCards = max(maxCards, right - left + 1);
            }
        }

        cout << maxCards << endl; 
    }
}