#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> time;
    int totalTime = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int input;

        cin >> input;

        time.push_back(input);
    }

    sort(time.begin(), time.end());

    for (int i = 0; i < n; i++) {
        totalTime = totalTime + ((n - i) * time[i]);
    }

    cout << totalTime;

    return 0;
}