#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int numOfSeedlings;

    cin >> numOfSeedlings;

    vector<int> daysForGrowth;

    for (int i = 0; i < numOfSeedlings; i++) {
        int input;
        cin >> input;

        daysForGrowth.push_back(input);
    }

    // 내림차순 정렬
    sort(daysForGrowth.begin(), daysForGrowth.end(), greater<int>());

    for (int i = 0; i < numOfSeedlings; i++) {
        daysForGrowth[i] = daysForGrowth[i] + i + 1;
    }

    int max = 0;

    for (int i = 0; i < numOfSeedlings; i++) {
        if (max < daysForGrowth[i]) {
            max = daysForGrowth[i];
        }
    }

    cout << max + 1;

    return 0;
}