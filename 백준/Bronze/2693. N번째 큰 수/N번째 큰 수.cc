#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int testCase;
    int inputNumber;
    int inputArray[10];

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> inputNumber;

            inputArray[j] = inputNumber;
        }

        sort(inputArray, inputArray + 10);

        cout << inputArray[7] << " ";
    }

    return 0;
}