#include <stdio.h>
#include <stdlib.h>

int ascending(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    int* numArray = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &numArray[i]);
    }

    qsort(numArray, n, sizeof(int), ascending);

    printf("%d", numArray[k - 1]);

    return 0;
}