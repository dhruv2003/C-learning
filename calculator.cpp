#include<iostream>
using namespace std;

int main()
{
  long long a,c;
  char b;
  cin>>a>>b>>c;
  if(b=='+'){
    cout<<a+c<<endl; 

  }
  else if (b=='-')
  {
    cout<<a-c<<endl;
  }
  else if (b=='*')
  {
    cout<<a*c<<endl;
  }
  else{
    cout<<a/c<<endl;
  }
  return 0;
}