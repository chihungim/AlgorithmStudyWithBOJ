#include <iostream>

using namespace std;

int main() {
    int hour, minute, second;
    cin >> hour >> minute >> second;

    int time;
    cin >> time;

    while (time--) {
        second++;
        if (second == 60) {
            minute++;
            if (minute == 60) {
                hour++;
                if (hour == 24) {
                    hour = 0;
                }
                minute = 0;
            }
            second = 0;
        }
    }
    cout << hour <<" "<< minute<<" "<< second;
}