#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
  
  srand(time(nullptr));

  int vall = rand() %10 ;

  int val2=rand() %10 +1;

  cout<<vall<<endl;
  cout<<val2<<endl;
  
  return 0;
}