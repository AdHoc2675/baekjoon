#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    int numOfRequiredCoin = 0;

    cin >> n >> k;

    vector<int> valueOfCoin;

    for (int i = 0; i < n; i++) {
        int input;

        cin >> input;

        valueOfCoin.push_back(input);
    }

    int index = n - 1;

    while (true) {
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

    cout << numOfRequiredCoin;

    return 0;
}