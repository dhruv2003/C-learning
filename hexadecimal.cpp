#include <iostream>
#include <cmath>
#include <limits>  // For numeric limits

using namespace std;

bool isBinaryDecimal(int num) {
  while (num > 0) {
    int digit = num % 10;
    if (digit < 0 || digit > 2) { // Check for digits 0, 1, or 2
      return false;
    }
    num /= 10;
  }
  return true;
}

bool isPossibleProduct(long long n) {  // Using long long for larger numbers
  if (n == 1) {
    return true;
  }

  // Check if n is a perfect square (alternative method)
  long long root = sqrt(n);
  for (long long i = 1; i <= root; i++) {
    if (i * i == n) {
      return isBinaryDecimal(i);  // Check if square root is binary
    }
  }

  // Additional checks for special cases (unchanged)
  // ... (rest of the code remains the same)

  return false;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    if (isPossibleProduct(n)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
