#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    // 입출력 속도 가속
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // 듣도 못한을 저장할 맵
    map<string, int> deuddo;
    // 듣보잡을 저장할 벡터
    vector<string> deudbojab;

    int deuddoN, bodoM;

    cin >> deuddoN >> bodoM;

    for (int i = 0; i < deuddoN; i++) {
        string str;
        cin >> str;
        // 듣도 못한 저장
        deuddo.insert({ str, i });
    }

    for (int i = 0; i < bodoM; i++) {
        string str;
        cin >> str;

        // 보도 못한 사람이 듣도 못한 맵에도 있는 지 확인
        // 데이터를 끝까지 찾지 못했을 경우, iterator는 map.end()를 반환
        // 즉, 데이터가 맵에 있으면 듣보잡 벡터에 추가
        if (deuddo.find(str) != deuddo.end()) {
            deudbojab.push_back(str);
        }
    }

    sort(deudbojab.begin(), deudbojab.end());

    cout << deudbojab.size() << "\n";

    for (int i = 0; i < deudbojab.size(); i++) {
        cout << deudbojab[i] << "\n";
    }

    return 0;
}