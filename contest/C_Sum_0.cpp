#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> ranges(N);
    long long minSum = 0, maxSum = 0;

    for (int i = 0; i < N; ++i) {
        cin >> ranges[i].first >> ranges[i].second;
        minSum += ranges[i].first;
        maxSum += ranges[i].second;
    }

    // Check if zero is within the possible sum range
    if (minSum > 0 || maxSum < 0) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    // Initialize the result array with the lower bounds
    vector<int> X(N);
    for (int i = 0; i < N; ++i) {
        X[i] = ranges[i].first;
    }

    long long currentSum = minSum;

    // Adjust values to reach sum of zero
    for (int i = 0; i < N && currentSum < 0; ++i) {
        int diff = ranges[i].second - ranges[i].first;
        int increase = min(diff, -1*currentSum); // We want to bring currentSum closer to 0
        X[i] += increase;
        currentSum += increase;
    }

    for (int i = 0; i < N; ++i) {
        cout << X[i] << " ";
    }
    cout << endl;

    return 0;
}
