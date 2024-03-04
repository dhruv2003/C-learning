#include<iostream>
using namespace std;

int main()
{
  float c1,c2;
  cin >> c1 >> c2;

  if(c1>0 && c2>0)
  {
    cout<<"Q1"<<endl;
  }
  else if(c1<0 && c2>0)
  {
    cout<<"Q2"<<endl;
  }
  else if (c1<0 && c2<0)
  {
    cout<<"Q3"<<endl;
  }
  else if(c1==0 && c2==0)
  {
    cout<<"Origem"<<endl;
  }
  else if(c2==0 && c1)
  {
    cout<<"Eixo X"<<endl;
  }
  else if(c1==0 && c2)
  {
    cout<<"Eixo Y"<<endl;
  }
  else if (c1>0 && c2<0){
    cout<<"Q4"<<endl;
  }

  return 0;
}