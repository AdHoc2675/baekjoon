#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // 입출력 속도를 놓여주기 위헤
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;

    cin >> n >> k;

    int* numArray = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> numArray[i];
    }

    sort(numArray, numArray + n);

    cout << numArray[k - 1];

    return 0;
}