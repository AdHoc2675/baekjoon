#include <iostream>

using namespace std;

int main()
{
    int time;

    int aCount = 0, bCount = 0, cCount = 0;

    cin >> time;

    if (time % 10 != 0) {
        cout << -1;

        return 0;
    }

    while (true) {
        if (time <= 0) {
            break;
        }

        if (time >= 300) {
            time = time - 300;
            aCount++;
        }
        else if (time >= 60) {
            time = time - 60;
            bCount++;
        }
        else {
            time = time - 10;
            cCount++;
        }
    }

    cout << aCount << " " << bCount << " " << cCount;

    return 0;
}