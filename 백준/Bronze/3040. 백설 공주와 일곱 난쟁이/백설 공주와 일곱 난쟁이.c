#include <stdio.h>

int main()
{
    int hatNum[9];
    int sumOfHatNum = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &hatNum[i]);
        sumOfHatNum = sumOfHatNum + hatNum[i];
    }

    int save = sumOfHatNum;

    for (int i = 0; i < 8; i++) {
        sumOfHatNum = save;

        sumOfHatNum = sumOfHatNum - hatNum[i];

        int secondSave = sumOfHatNum;

        for (int j = i + 1; j < 9; j++) {
            sumOfHatNum = sumOfHatNum - hatNum[j];

            if (sumOfHatNum == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        printf("%d\n", hatNum[k]);
                    }
                }

                return 0;
            }
            else {
                sumOfHatNum = secondSave;
            }
        }
    }

    return 0;
}