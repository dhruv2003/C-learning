#include<bits/stdc++.h>
using namespace std;

int minDeletionsToBeautiful(string s) {
    int count = 0;
    int n = s.length();

    for (int i = 0; i < n - 2; ++i) {
        if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
            count++;
            i += 2; // skip the next two characters as they form the substring "pie" 
        } else if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
            count++;
            i += 2; // skip the next two characters as they form the substring "map"
        }
    }
    return count;
}



int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    string s;
    cin>>s;

    cout<<minDeletionsToBeautiful(s)<<endl;
  }


  return 0;
}