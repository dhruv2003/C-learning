#include<bits/stdc++.h>
using namespace std;

int main(){
  
  const int total_people=5;

  vector<float>weight;
  vector<string>names;
  int tempWeight;
  string tempName;


  for(int i=0;i<total_people;i++)
  {
    cout<<"Enter persons full name: "<<endl;
    getline(cin,tempName);

    cout<<"Please enter "<<tempName<<"'s weight "<<endl;
    cin>>tempWeight;
    cin.get(); //consume newline character

    names.push_back(tempName);
    weight.push_back(tempWeight);

  }

  cout<<endl<<endl;

  for(int i=0; i<total_people;i++)
  {
    cout<<names[i]<<" weighs "<<weight[i]<<" kgs "<<endl;
  }
  
  
  
  return 0;
}