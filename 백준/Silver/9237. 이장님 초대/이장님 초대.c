#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2) return 1;  // 내림차순 정렬을 위해 반환값을 반대로 변경
    if (num1 > num2) return -1; // 내림차순 정렬을 위해 반환값을 반대로 변경
    return 0;
}

int main()
{
    int numOfSeedlings;

    scanf("%d", &numOfSeedlings);

    int* daysForGrowth = malloc(sizeof(int) * numOfSeedlings);

    for (int i = 0; i < numOfSeedlings; i++) {
        int input;
        scanf("%d", &input);

        daysForGrowth[i] = input;
    }

    qsort(daysForGrowth, numOfSeedlings, sizeof(int), compare);

    for (int i = 0; i < numOfSeedlings; i++) {
        daysForGrowth[i] = daysForGrowth[i] + i + 1;
    }

    int max = 0;

    for (int i = 0; i < numOfSeedlings; i++) {
        if (max < daysForGrowth[i]) {
            max = daysForGrowth[i];
        }
    }

    printf("%d", max + 1);

    free(daysForGrowth);

    return 0;
}