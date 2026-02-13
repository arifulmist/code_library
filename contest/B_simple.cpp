#include <iostream>
using namespace std;

int main()
{
    long long T, N, K, S;
    cin >> T;
    while (T--)
    {
        cin >> N >> K >> S;
        S -= N * N; // Sum of first N odd numbers = N²
        cout << S / (K - 1) << "\n";
    }
    return 0;
}