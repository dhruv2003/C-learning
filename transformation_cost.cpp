#include<bits/stdc++.h>
using namespace std;

int transform_cost(int n){
  int cost=0;
  while(true){
    string binary=bitset<32>(n).to_string();
    if(binary.find("101")==string::npos){
      return cost;
    }

    //pos of 101 
    int pos=binary.rfind("101");

    //cost to convert right 1 to 0
    int moves=binary.size()-pos-1;
    cost +=pow(2,moves);

    n+=pow(2,moves);
  }
}



int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<transform_cost(n)<<endl;
  }



  return 0;
}