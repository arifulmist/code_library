#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        // Calculate the sum of digits
        long long sum = 0;
        long long temp = x;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        // Check if the sum of digits is less than or equal to 9
        if (sum <= 9) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
