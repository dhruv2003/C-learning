#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    if(x*2>y*5)
    {
        cout<<"Chocolate"<<endl;;
    }
    else if(x*2<y*5)
    {
        cout<<"Candy"<<endl;
    }
    else{
        cout<<"Either"<<endl;
    }
}


int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
