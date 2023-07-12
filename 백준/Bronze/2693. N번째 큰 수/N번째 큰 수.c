#include <stdio.h>

int main()
{
    int testCase;
    int inputNumber;
    int inputArray[10];

    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &inputNumber);

            inputArray[j] = inputNumber;
        }

        for (int k = 0; k < 9; k++) {
            for (int l = 0; l < 9 - k; l++) {
                if (inputArray[l] > inputArray[l + 1]) {
                    int temp = inputArray[l];
                    inputArray[l] = inputArray[l + 1];
                    inputArray[l + 1] = temp;
                }
            }
        }

        printf("%d ", inputArray[7]);
    }

    return 0;
}