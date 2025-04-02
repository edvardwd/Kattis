#include <bits/stdc++.h>
using namespace std;

struct Time{
    int hours;
    int minutes;
};

Time alarmTime(Time wakeTime){
    int totalMinutes = wakeTime.hours*60 + wakeTime.minutes - 45;
    if (totalMinutes < 0){
        totalMinutes = 24 * 60 + totalMinutes;
    }
    return {totalMinutes / 60, totalMinutes % 60}; 
}

int main(){
    int h, m;
    cin >> h >> m;
    Time newAlarm = alarmTime({h, m});
    cout << newAlarm.hours << " " << newAlarm.minutes << endl;
    return 0;
}