#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int numOfTown;

    cin >> numOfTown;

    vector<int> moveCost;
    int totalCost = 0;

    for (int i = 0; i < numOfTown; i++) {
        int inputCost;

        cin >> inputCost;

        moveCost.push_back(inputCost);

        totalCost = totalCost + inputCost;
    }

    sort(moveCost.begin(), moveCost.end());

    totalCost = totalCost - moveCost.back();

    cout << totalCost;

    return 0;
}