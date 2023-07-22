#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


// 이진 탐색 구현. 비재귀적인 방식으로
int binary_search(int arr[], int value, int arrSize) {
    int first = 0;
    int last = arrSize - 1;

    while (true) {
        if (first > last) {
            break;
        }

        int mid = (first + last) / 2;

        if (arr[mid] == value) {
            return 1;
        }

        if (arr[mid] > value) {
            last = mid - 1;
        }
        else {
            first = mid + 1;
        }
    }

    return 0;
}

int main()
{
    // cin cout 입출력 속도를 높이기 위해
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int nVector[100000];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nVector[i];
    }

    int m;
    int mVector[100000];

    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> mVector[i];
    }

    // 이진 탐색을 위해 오름차순 정렬
    sort(nVector, nVector + n);

    for (int i = 0; i < m; i++) {
        cout << binary_search(nVector, mVector[i], n) << "\n";
    }

    return 0;
}