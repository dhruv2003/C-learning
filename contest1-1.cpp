#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        string s;
        cin >> s; // String representing the cells

        // Find the first and last occurrence of 'B'
        int first_black = s.find('B');
        int last_black = s.rfind('B');

        // Calculating the length of the segment
        int length = last_black - first_black + 1;

        // Output the minimum length
        cout << length << endl;
    }

    return 0;
}
