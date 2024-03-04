#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;

  if(n %3 ==0 && n%5 ==0)
    {
        cout<<"FizzBuzz"<<endl;
    }
    else if (n %3 ==0 && n%5 !=0) {
        cout<<"Fizz"<<endl;
    }
    else if (n %5 ==0 && n%3 !=0) {
        cout<<"Buzz"<<endl;
    }
    else if (n%3 !=0 && n%5 != 0) {
        cout<<n<<endl;
    }


  return 0;
}