#include<iostream>
#include<string>
using namespace std;

int main(){
  
  char grade;

  cout<<"ENter letter Grade: "<<endl;
  cin>>grade;

  switch(grade)
  {
    case 'A':
    case 'a': // this is for 'a' and 'A
      cout<<"Great Job!"<<endl;
      break;
    case 'B':
    case 'b': // this is for 'b' and 'B
      cout<<"Good Job!"<<endl;
      break;
    case 'C':
    case 'c': // this is for 'c' and 'C
      cout<<"You can do better!"<<endl;
      break;
    case 'D':
    case 'd': // this is for 'd' and 'D
      cout<<"you are close to failing!"<<endl;
      break;
    case 'F':
    case 'f': // this is for 'f' and 'F
      cout<<"You have failed!"<<endl;
      break;
    default:
      cout<<"Invalid Grade!"<<endl;
  }

  return 0;
}