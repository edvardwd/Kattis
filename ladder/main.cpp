#include <bits/stdc++.h>

using namespace std;;

int main(){
    int h, v; //height and angle
    cin >> h >> v;
    //the hypothenus is the length of the ladder
    //sin(v) = h / len --> len = h / sin(v)
    //radians = degs *2*PI / 360
    int len = ceil(h / sin(v * 2 * M_PI / 360.0));
    cout << len << endl;
    return 0;
}