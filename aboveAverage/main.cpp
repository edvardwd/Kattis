#include <bits/stdc++.h>
using namespace std;

using VD = vector<double>;
using VI = vector<int>;

int main(){
    int C, N, score, sum;
    VD avg;
    cin >> C;

    for (int i = 0; i < C; i++){
        VI caseResults;
        cin >> N;
        sum = 0;

        for (int j = 0; j < N; j++){
            cin >> score;
            caseResults.emplace_back(score); //store the scores 
            sum += score;
        }
        double avgScore = sum / double(N); //find avg score from case
        int aboveAvg = 0;
        for (const auto& score : caseResults){
            if (score > avgScore) aboveAvg++; //check num of scores over avg
        }
        avg.emplace_back(100 * aboveAvg / double(N)); //save percentage of over avg results
    }
    //output
    for (size_t i = 0; i < avg.size(); i++){
        printf("%.3f%%\n", avg.at(i));
    }
    return 0;
}