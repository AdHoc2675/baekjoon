#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    vector<pair<int, int>> fib_counts(41); // fib_counts[i] = {0의 개수, 1의 개수} for fibonacci(i)
    fib_counts[0] = {1, 0}; // fibonacci(0)은 0을 1번 출력
    fib_counts[1] = {0, 1}; // fibonacci(1)은 1을 1번 출력
    
    for (int i = 2; i <= 40; ++i) {
        fib_counts[i].first = fib_counts[i - 1].first + fib_counts[i - 2].first; // 0의 개수
        fib_counts[i].second = fib_counts[i - 1].second + fib_counts[i - 2].second; // 1의 개수
    }

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        cout << fib_counts[N].first << " " << fib_counts[N].second << "\n";
    }
    return 0;
}