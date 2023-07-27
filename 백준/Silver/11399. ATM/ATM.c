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
    int n;
    int totalTime = 0;

    scanf("%d", &n);

    int* time = malloc(sizeof(int) * n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &time[i]);
    }

    qsort(time, n, sizeof(int), ascending);

    for (int i = 0; i < n; i++) {
        totalTime = totalTime + ((n - i) * time[i]);
    }

    printf("%d", totalTime);

    return 0;
}