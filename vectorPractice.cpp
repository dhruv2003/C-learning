#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<string> names;

  names.push_back("Dhruv");
  names.push_back("hema");
  names.push_back("Dev");
  names.push_back("janhavi");
  names.push_back("shruti");

  names.insert(names.begin()+2,"John Baugh");
  names.pop_back();
  for(string var:names)
  {
    cout<<var<<endl;
  }


  return 0;
}