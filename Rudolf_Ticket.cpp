// Rudolf and ticket codeforces


#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t--)
  {
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> left_coins(n);
    vector<int> right_coins(m);


    for(int i=0;i<n;i++)
    {
      cin>>left_coins[i];
    }

    for(int i=0;i<m;i++)
    {
      cin>>right_coins[i];
    }


    sort(left_coins.begin(),left_coins.end());
    sort(right_coins.begin(),right_coins.end());

    int count=0;
    int j=m-1;


    for(int i=0;i<n;i++)
    {
      while(j>=0 &&left_coins[i]+right_coins[j]>k)
      {
        j--;
      }
      count+=j+1;
    }

    cout<<count<<endl;

  }


  return 0;
}