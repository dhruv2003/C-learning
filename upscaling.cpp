#include<bits/stdc++.h>
using namespace std;



void converter(int hour,int minute)
{
  string period="AM";


  if(hour>=12){
    period="PM";
    if(hour>12)
    {
      hour-=12;
    }
  }
  if(hour==0)
  {
    hour=12;
  }

  cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<minute;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    string time;
        cin >> time;

      
        int hour = stoi(time.substr(0, 2));
        int minute = stoi(time.substr(3, 2));

        converter(hour,minute);

  }


  return 0;
}