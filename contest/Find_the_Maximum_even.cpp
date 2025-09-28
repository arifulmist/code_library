#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n), evens, odds;
    
    // Read input and categorize numbers into evens and odds
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            evens.push_back(arr[i]);
        } else {
            odds.push_back(arr[i]);
        }
    }
    
    int maxEven = INT_MIN;
    
    // If there are at least two even numbers, find the largest even sum
    if (evens.size() >= 2) {
        sort(evens.begin(), evens.end());
        maxEven = max(maxEven, evens[evens.size() - 1] + evens[evens.size() - 2]);
    }
    
    // If there are at least two odd numbers, find the largest odd sum (which will be even)
    if (odds.size() >= 2) {
        sort(odds.begin(), odds.end());
        maxEven = max(maxEven, odds[odds.size() - 1] + odds[odds.size() - 2]);
    }
    
    // If there is any even number, it could be the maximum even value by itself
    if (!evens.empty()) {
        maxEven = max(maxEven, evens[evens.size() - 1]);
    }
    
    cout << maxEven << endl;
    
    return 0;
}
