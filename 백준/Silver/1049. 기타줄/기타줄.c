#include <stdio.h>
#include <stdlib.h>

int main()
{
    int brokenString;
    int numOfBrand;

    scanf("%d", &brokenString);
    scanf("%d", &numOfBrand);

    // 각 브랜드의 패키지 가격
    int* packagePrice = malloc(sizeof(int) * numOfBrand);
    // 낱개의 가격
    int* singlePrice = malloc(sizeof(int) * numOfBrand);
    // 가장 저렴한 가격을 저장할 변수
    int minPrice = 1000;
    // 필요한 종합 돈
    int totalPrice = 0;

    for (int i = 0; i < numOfBrand; i++) {
        scanf("%d", &packagePrice[i]);
        scanf("%d", &singlePrice[i]);

        if (minPrice > packagePrice[i]) {
            minPrice = packagePrice[i];
        }

        if (minPrice > singlePrice[i] * 6) {
            minPrice = singlePrice[i] * 6;
        }
    }

    while (1) {
        if (brokenString < 6) {
            break;
        }

        totalPrice = totalPrice + minPrice;

        brokenString = brokenString - 6;
    }

    minPrice = 1000;

    for (int i = 0; i < numOfBrand; i++) {
        if (minPrice > packagePrice[i]) {
            minPrice = packagePrice[i];
        }

        if (minPrice > singlePrice[i] * brokenString) {
            minPrice = singlePrice[i] * brokenString;
        }
    }

    totalPrice = totalPrice + minPrice;

    printf("%d", totalPrice);

    return 0;
}