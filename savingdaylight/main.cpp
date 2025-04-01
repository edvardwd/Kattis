#include <bits/stdc++.h>
using namespace std;

struct Time{
    int hours;
    int minutes;
};

Time getTimeDiff(Time a, Time b){
    int minuteDiff = abs((a.hours*60 + a.minutes) - (b.hours*60 + b.minutes));
    return Time{minuteDiff / 60, minuteDiff % 60};
}

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    string line, month, day, year, date;
    string hourStart, minuteStart, hourStop, minuteStop;

    while (getline(cin, line)){
        stringstream ss{line};
        ss >> month >> day >> year;
        date = month + " " + day + " " + year;
        getline(ss, hourStart, ':');
        getline(ss, minuteStart, ' ');
        getline(ss, hourStop, ':');
        getline(ss, minuteStop);
        Time diff = getTimeDiff({stoi(hourStart), stoi(minuteStart)}, {stoi(hourStop), stoi(minuteStop)});
        cout << date << " " << diff.hours << " hours " << diff.minutes << " minutes\n";
    }
   
    return 0;
}