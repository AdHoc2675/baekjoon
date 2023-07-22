#include <stdio.h>

int ascending(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2) return -1;  // 오름차순 정렬
    if (num1 > num2) return 1; // 오름차순 정렬
    return 0;
}

// 이진 탐색 구현. 비재귀적인 방식으로
int binary_search(int arr[], int value, int arrSize) {
    int first = 0;
    int last = arrSize - 1;

    while (1) {
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
    int n;
    int nVector[100000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &nVector[i]);
    }

    int m;
    int mVector[100000];

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &mVector[i]);
    }

    // 이진 탐색을 위해 오름차순 정렬
    qsort(nVector, n, sizeof(int), ascending);

    for (int i = 0; i < m; i++) {
        printf("%d\n", binary_search(nVector, mVector[i], n));
    }

    return 0;
}