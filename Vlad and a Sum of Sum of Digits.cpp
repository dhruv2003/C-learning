#include<bits/stdc++.h>
using namespace std;


int sum_digit(int num){
  int sum=0;
  while(num>0){
    sum+=num%10;
    num/=10;
  }
  return sum;
}

long long sum_numbers(int a) {
    long long sum = 0;
    int power = 1;
    while (a > 0) {
        int l_digit = a % 10;
        sum += ((a / 10) * 45 * power) + (l_digit * (l_digit - 1) / 2 * power) + (l_digit * (1 + a % power));
        a /= 10;
        power *= 10;
    }
    return sum;
}



int main()
{
  int t;
  cin>>t;

  for(int i=0;i<t;i++)
  {
    int n;
    cin>>n;
    cout<<sum_numbers(n)<<endl;
  }



  return 0;
}