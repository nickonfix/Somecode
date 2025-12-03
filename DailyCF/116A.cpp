#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    int current = 0, maxcap = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        current -= a;    // people exit first
        current += b;    // then people enter
        maxcap = max(maxcap, current);
    }
    cout << maxcap << '\n';
    return 0;
}
