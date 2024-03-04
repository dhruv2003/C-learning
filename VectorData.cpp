#include<bits/stdc++.h>
using namespace std;

int main()
{
  
  vector<int>myVec;
  int input;
  
  
  cout<<"Enter a positive no to add or negative to exit"<<endl;
  cin>>input;


  while(input>0){
    myVec.push_back(input);
    cout<<"Enter a positive no to add or negative to exit"<<endl;
    cin>>input;
  }

  cout<<"Double amounts: "<<endl;

  for(int num:myVec)
  {
    cout<<num*2<<endl;
  }
  return 0;
}