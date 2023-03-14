#include <iostream>

using namespace std;

int main()
{
    int n; // input

    int roomNum = 1; // room Number
    int passCount = 1; // pass count and answer

    cin >> n;

    while (n > roomNum) {
        roomNum = roomNum + 6 * passCount;
        passCount++;
    }

    cout << passCount;

    return 0;
}