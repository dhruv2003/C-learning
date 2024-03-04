#include <bits/stdc++.h>

using namespace std;


int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


long long sum_of_numbers(int n) {
    long long sum = 0;
    while (n > 0) {
        sum += sum_of_digits(n);
        n--;
    }
    return sum;
}

int main() {
    int t;
    cin >> t; 
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n; 
        cout << sum_of_numbers(n) << endl; 
    }
    
    return 0;
}
