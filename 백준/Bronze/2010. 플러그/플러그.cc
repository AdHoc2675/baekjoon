#include <iostream>

using namespace std;

int main()
{
    int multitapCount;
    int plugCount;
    int accessablePC = 0;

    cin >> multitapCount;

    for (int i = 0; i < multitapCount; i++) {
        cin >> plugCount;

        accessablePC = accessablePC + plugCount;
    }

    accessablePC = accessablePC - (multitapCount - 1);

    cout << accessablePC;

    return 0;
}