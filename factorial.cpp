#include <iostream>
#include <vector>

using namespace std;


unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int T;
    cin >> T; 

    vector<int> test_cases(T);
    
    for (int i = 0; i < T; ++i) {
        cin >> test_cases[i];
    }

    
    for (int i = 0; i < T; ++i) {
        cout << factorial(test_cases[i]) << endl;
    }

    return 0;
}
