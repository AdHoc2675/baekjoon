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
    scanf("%d", &n);

    int Aarray[50];
    int Barray[50];
    int check[50] = { 0, };

    for (int i = 0; i < n; i++) {
        scanf("%d", &Aarray[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &Barray[i]);
    }

    qsort(Aarray, n, sizeof(int), ascending);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (temp < Barray[i] && check[i] == 0) {
                temp = Barray[i];
                idx = i;
            }
        }
        check[idx] = 1;
        sum = sum + (Aarray[i] * temp);
    }

    printf("%d", sum);

    return 0;
}