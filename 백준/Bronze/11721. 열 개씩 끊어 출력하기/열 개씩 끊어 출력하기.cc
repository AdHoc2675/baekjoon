#include <iostream>

using namespace std;

int main() {
    string str;

    cin >> str;

    int currentStrIndex = 0;
    int tenUnitCounter = 0;
    while (true)
    {
        for (int i = 0; i < 10; i++) {
            cout << str[tenUnitCounter + i];
            currentStrIndex++;
            if (currentStrIndex == str.size()) {
                break;
            }
        }

        if (currentStrIndex == str.size()) {
            break;
        }

        tenUnitCounter = tenUnitCounter + 10;
        cout << "\n";
    }

    return 0;
}