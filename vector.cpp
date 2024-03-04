#include<bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> someVec;
  vector<string> anotherVec(3);

  someVec.push_back(1);
  someVec.push_back(2);
  someVec.push_back(3);


  cout<<"someVec size "<<someVec.size()<<endl;

  anotherVec[0]="Dhruv";
  anotherVec[1]="hahah";
  anotherVec[2]="lol";


  anotherVec.push_back("shananana");


  for(int var:someVec)
  {
    cout<< var<<endl;
  }

  for( string name:anotherVec)
  {
    cout<< name<<endl;
  }

  cout<<"another vec size "<<anotherVec.size()<<endl;


  cout<<"Front and back: "<<endl;
  cout<<"the front is: "<<anotherVec.front()<<endl;
  cout<<"the back is: "<<anotherVec.back()<<endl;

  anotherVec.pop_back();
  anotherVec.insert(anotherVec.begin(),"DON");

  cout<<"now the front is: "<<anotherVec.front()<<endl;
  cout<<"now the back is: "<<anotherVec.back()<<endl;

  return 0;
}