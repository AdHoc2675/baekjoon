#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    int numOfRequiredCoin = 0;

    scanf("%d %d", &n, &k);

    int* valueOfCoin = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        int input;

        scanf("%d", &input);

        valueOfCoin[i] = input;
    }

    int index = n - 1;

    while (1) {
        if (k <= 0) {
            break;
        }

        if (k >= valueOfCoin[index]) {
            k = k - valueOfCoin[index];
            numOfRequiredCoin++;
        }
        else {
            index--;
        }
    }

    printf("%d", numOfRequiredCoin);

    free(valueOfCoin);

    return 0;
}