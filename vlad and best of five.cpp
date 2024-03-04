#include<bits/stdc++.h>
using namespace std;

char most_frequent_letter(const string& s) {
    int count_a = 0, count_b = 0;
    for(char c : s) {
        if(c == 'A')
            count_a++;
        else
            count_b++;
    }
    if(count_a > count_b)
        return 'A';
    else if(count_b > count_a)
        return 'B';
    else
        return 'A'; 
}

int main()
{
  int t;
  cin>>t;

  for(int i=0;i<t;i++)
  {
    string s;
    cin>>s;
    cout<<most_frequent_letter(s)<<endl;
  }



  return 0;
}