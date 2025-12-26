/**
 *  author: Mr. TLE-nick
 *  message: Here goes nothing.!
 **/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n;   // size of array
    cin >> k;   // size of subarray

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i = 0, j = 0;
    int sum = 0;
    int mx = INT_MIN;

    while (j < n) {
        sum += arr[j];

        if (j - i + 1 < k) {
            j++;
        } 
        else { // window size == k
            mx = max(mx, sum);
            sum -= arr[i]; // remove left element
            i++;
            j++;
        }
    }

    cout << mx << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}
