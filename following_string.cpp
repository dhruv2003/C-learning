#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;


  while(t--){
    int n;
    cin>>n;
    vector<int>trace(n);


    for(int i=0;i<n;i++)
    {
      cin>>trace[i];
    }

    string a =" ";

    int count[26]={0}; //to keep track since a-z 26

    for(int i=0;i<n;i++)
    {
      char character='a'+i;

      a.append(trace[i]-count[character - 'a'],character);
      count[character-'a']=trace[i];
    }

    cout<<a<<endl;
  }

  return 0;
}