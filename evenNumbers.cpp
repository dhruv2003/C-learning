#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a;
  cin>>a;

  for(int i=1;i<=a;i++)
  {
    if(i%2==0)
    {
      cout<<i<<endl;
    }
  }
  if(a==1)
  {
    cout<<"-1"<<endl;
  }

  return 0;
}