#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, k, n;
    cin >> n >> k >> a;

    if ((n * k) % a == 0) {
        cout << "int" << endl;
    } if else {
        cout << "double" << endl;
    }

    return 0;
}
