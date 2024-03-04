#include<bits/stdc++.h>
using namespace std;

int main()
{

  array <int,10> myIntArray;

  for(int i=0; i< myIntArray.size();i++)
  {
    myIntArray[i]=i*2;

  }

  for(int element : myIntArray)
  {
    cout << element<<endl;
  }
  return 0;
}