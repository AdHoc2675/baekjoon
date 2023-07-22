#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // pair 클래스를 이용해 문제 번호와 점수 기록
    // first가 점수, second가 문제 번호
    
    vector<pair<int, int>> scoreAndIndex;
    int sumOfTopFive = 0;

    for (int i = 0; i < 8; i++) {
        int score;
        cin >> score;

        scoreAndIndex.push_back({ score, i + 1 });
    }

    // 내림차순 정렬. greater<>()을 파라미터에 넣으면 내림차순이 됨.
    sort(scoreAndIndex.begin(), scoreAndIndex.end(), greater<>());

    // 가장 높은 점수 5개의 번호를 저장할 배열
    int indexOfTopFive[5];

    for (int i = 0; i < 5; i++) {
        sumOfTopFive = sumOfTopFive + scoreAndIndex[i].first;
        indexOfTopFive[i] = scoreAndIndex[i].second;
    }

    // 오름차순 정렬. vector와 달리 배열은 이런식으로 파라미터를 넣으면 됨.
    sort(indexOfTopFive, indexOfTopFive + 5);

    cout << sumOfTopFive << "\n";

    for (int i = 0; i < 5; i++) {
        cout << indexOfTopFive[i] << " ";
    }

    return 0;
}