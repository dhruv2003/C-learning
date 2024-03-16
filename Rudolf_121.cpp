#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool possible = true;

        for (int i = 1; i < n - 1; ++i) {
            if (a[i] >= a[i - 1]) {
                int decrease = min(a[i], a[i + 1] + 1);
                a[i] -= decrease;
                a[i - 1] -= decrease - 1;
                a[i + 1] -= decrease - 1;
            } else {
                possible = false;
                break;
            }
        }

        if (a[n - 1] != 0)
            possible = false;

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
