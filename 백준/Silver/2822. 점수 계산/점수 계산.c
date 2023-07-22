#include <stdio.h>
#include <stdlib.h>

int descending(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2) return 1;  // 내림차순 정렬
    if (num1 > num2) return -1; // 내림차순 정렬
    return 0;
}

int ascending(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2) return -1;  // 오름차순 정렬
    if (num1 > num2) return 1; // 오름차순 정렬
    return 0;
}

struct scoreAndIndex {
    int score;
    int index;
} scoreAndIndex;

int main()
{
    struct scoreAndIndex scoreAndIndex[8];
    int sumOfTopFive = 0;

    for (int i = 0; i < 8; i++) {
        scanf("%d", &scoreAndIndex[i].score);
        scoreAndIndex[i].index = i + 1;
    }

    // 내림차순 정렬
    qsort(scoreAndIndex, 8, sizeof(struct scoreAndIndex), descending);

    // 가장 높은 점수 5개의 번호를 저장할 배열
    int indexOfTopFive[5];

    for (int i = 0; i < 5; i++) {
        sumOfTopFive = sumOfTopFive + scoreAndIndex[i].score;
        indexOfTopFive[i] = scoreAndIndex[i].index;
    }

    // 오름차순 정렬
    qsort(indexOfTopFive, 5, sizeof(int), ascending);

    printf("%d\n", sumOfTopFive);

    for (int i = 0; i < 5; i++) {
        printf("%d ", indexOfTopFive[i]);
    }

    return 0;
}