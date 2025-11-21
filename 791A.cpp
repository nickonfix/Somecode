#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= 10; i++) {
        a = a * 3;
        b = b * 2;
        cnt++;
        if (a > b) {
            cout << cnt;
            break;
        }
    }

    return 0;
}
