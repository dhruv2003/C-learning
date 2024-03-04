#include<iostream>
using namespace std;

int main()
{
  
  char package;
  int jams=0;
  int fee=0;
  int includedjam=0;
  int jamprice=0;
  int totalcost;

  cout<<"Enter the package u own "<<endl;
  cin>>package;

  cout<<"Enter the number of jams you have used "<<endl;
  cin>>jams;


  if(package=='A'||package=='a')
  {
    fee=8;
    includedjam=2;
    jamprice=5;
  }
  else if(package=='B'||package=='b')
  {
    fee=12;
    includedjam=4;
    jamprice=4;
  }
  else if(package=='C'||package=='c')
  {
    fee=15;
    includedjam=6;
    jamprice=3;
  }
  else
  {
    cout<<"Invalid package"<<endl;
  }

  if(jams>includedjam){
    totalcost=fee+(jams-includedjam)*jamprice;
  }
  else
  {
    totalcost=fee;
  }
  cout<<"Your total cost is "<<totalcost<<endl;
  
  return 0;
}