#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;
    if (x < y)
        return -1;
    else if (x > y)
        return 1;
    else
        return 0;
}

int lower_bound(int arr[], int size, int target)
{
    int left = 0, right = size;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int upper_bound(int arr[], int size, int target)
{
    int left = 0, right = size;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] <= target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main()
{
    int N, M;
    scanf("%d", &N);

    int *cards = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &cards[i]);
    }

    qsort(cards, N, sizeof(int), compare);

    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        int x;
        scanf("%d", &x);

        int lo = lower_bound(cards, N, x);
        int hi = upper_bound(cards, N, x);

        printf("%d ", hi - lo);
    }

    free(cards);
    return 0;
}
