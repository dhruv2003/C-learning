#include<bits/stdc++.h>
using namespace std;


long long kth_card(long long n, long long k) {
    long long x = sqrt(2 * k); // Finding the largest odd number x such that x * (x + 1) / 2 <= k
    if (x * (x + 1) / 2 < k) {
        x++; // Increment x if x * (x + 1) / 2 is less than k
    }
    return (2 * k - x * (x - 1)) / 2; // Calculating the k-th card
}



int main()
{
  int t;
  cin>>t;

  for(int i=0;i<t;i++)
  {
    long long n,k;
    cin>>n>>k;
    cout<<kth_card(n,k)<<endl;
  }

  return 0;
}