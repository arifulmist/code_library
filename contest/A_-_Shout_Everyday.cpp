#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Case when sleep spans over midnight
    if(B > C) {
        if (A >= B || A < C) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    // Case when sleep does not span over midnight
    else {
        if (A >= B && A < C) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
