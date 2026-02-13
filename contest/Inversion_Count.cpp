#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
//merge sort
ll merge(ll arr[], ll temp[], int l, int mid, int r)
{
    ll inv = 0;
    int i = l;       // left subarray pointer
    int j = mid + 1; // right subarray pointer
    int k = l;       // temp array pointer

    while (i <= mid && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv += (mid - i + 1); // inversion count
        }
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (int x = l; x <= r; x++)
        arr[x] = temp[x];

    return inv;
}

ll divide(ll arr[], ll temp[], int l, int r)
{
    ll inv = 0;
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        inv += divide(arr, temp, l, mid);
        inv += divide(arr, temp, mid + 1, r);
        inv += merge(arr, temp, l, mid, r);
    }
    return inv;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll arr[n], temp[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << divide(arr, temp, 0, n - 1) << nl;
    }

    return 0;
}
