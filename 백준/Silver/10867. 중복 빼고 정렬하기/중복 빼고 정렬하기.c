#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    int inputNumber;

    // -1000 ~ 1000의 정수 유무를 판별할 배열
    bool existNum[2001] = { false };

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &inputNumber);

        existNum[inputNumber + 1000] = true;
    }

    for (int i = 0; i < sizeof(existNum) / sizeof(bool); i++) {
        if (existNum[i] == true) {
            printf("%d ", i - 1000);
        }
    }

    return 0;
}