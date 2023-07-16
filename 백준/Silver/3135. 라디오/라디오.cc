#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int Afrequency, Bfrequency;
    int numOfStoredFrequency;

    cin >> Afrequency >> Bfrequency;
    cin >> numOfStoredFrequency;

    vector<int> buttonCount;

    buttonCount.push_back(abs(Afrequency - Bfrequency));

    for (int i = 0; i < numOfStoredFrequency; i++) {
        int input;
        cin >> input;

        buttonCount.push_back(abs(input - Bfrequency) + 1);
    }

    sort(buttonCount.begin(), buttonCount.end());

    cout << buttonCount.front();

    return 0;
}