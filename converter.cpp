#include <iostream>
#include <iomanip>
using namespace std;

void convert_to_12_hour_format(int hour, int minute) {
    string period = "AM"; 


    if (hour >= 12) {
        period = "PM";
        if (hour > 12) {
            hour -= 12;
        }
    }
    if (hour == 0) {
        hour = 12;
    }

    
    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << period << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        
        string time;
        cin >> time;

        
        int hour = stoi(time.substr(0, 2));
        int minute = stoi(time.substr(3, 2));

        
        convert_to_12_hour_format(hour, minute);
    }

    return 0;
}
