#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  int t;
  cin>>t;
  

  vector<int>nums(t);

  for(int i=0;i<t;i++)
  {
    cin>>nums[i];
  }

  auto maximum=max_element(nums.begin(),nums.end());

  cout<<*maximum<<endl;


  return 0;
}