#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> m;
    int N, M, n;
    cin >> N;

    // 입력
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        m[n]++;
    }

    cin >> M;

    // 조회
    for (int i = 0; i < M; i++)
    {
        cin >> n;
        map<int, int>::iterator it = m.find(n);

        if (it != m.end())
        {
            cout << it->second << ' ';
        }
        else
        {
            cout << "0" << ' ';
        }
    }

    return 0;
}