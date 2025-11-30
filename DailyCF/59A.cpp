#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;

    int upper = 0;
    for (char c : s) if (isupper(static_cast<unsigned char>(c))) ++upper;

    if (upper > (int)s.size() - upper) {
        for (char &c : s) c = static_cast<char>(toupper(static_cast<unsigned char>(c)));
    } else {
        for (char &c : s) c = static_cast<char>(tolower(static_cast<unsigned char>(c)));
    }

    cout << s << '\n';
    return 0;
}
