#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    string numDic[10] = { "zero" ,"one" ,"two" ,"three" ,"four" ,"five" ,"six" ,"seven" ,"eight" ,"nine" };
    
    // 사용자가 지정한 2개의 타입의 데이터를 저장하는 Pair 클래스 사용
    vector<pair<string, int>> numToStr;

    for (int i = m; i <= n; i++) {
        if (i >= 10) {
            string str = numDic[i / 10] + " " + numDic[i % 10];
            numToStr.push_back({ str, i });
        }
        else {
            string str = numDic[i % 10];
            numToStr.push_back({ str, i });
        }
    }
    
    sort(numToStr.begin(), numToStr.end());

    for (int i = 0; i < numToStr.size(); i++)
    {
        cout << numToStr[i].second << " ";

        if (i % 10 == 9)
        {
            cout << '\n';
        }
    }

    return 0;
}