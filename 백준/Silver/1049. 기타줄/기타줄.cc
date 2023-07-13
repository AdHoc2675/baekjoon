#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int brokenString;
    int numOfBrand;

    cin >> brokenString;
    cin >> numOfBrand;

    // 각 브랜드의 패키지 가격
    vector<int> packagePrice;
    // 낱개의 가격
    vector<int> singlePrice;
    // 가장 저렴한 가격을 저장할 변수
    int minPrice = 1000;
    // 필요한 종합 돈
    int totalPrice = 0;

    for (int i = 0; i < numOfBrand; i++) {
        int input;

        cin >> input;

        packagePrice.push_back(input);

        cin >> input;


        singlePrice.push_back(input);

        if (minPrice > packagePrice[i]) {
            minPrice = packagePrice[i];
        }

        if (minPrice > singlePrice[i] * 6) {
            minPrice = singlePrice[i] * 6;
        }
    }

    while (true) {
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

    cout << totalPrice;

    return 0;
}