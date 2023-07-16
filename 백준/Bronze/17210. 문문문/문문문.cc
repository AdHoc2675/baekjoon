#include <iostream>

using namespace std;

int main()
{
    int numOfDoor;
    int firstDoorOpen;

    cin >> numOfDoor;
    cin >> firstDoorOpen;

    if (numOfDoor >= 6) {
        cout << "Love is open door";
    }
    else {
        for (int i = 1; i < numOfDoor; i++) {
            if (firstDoorOpen == 1) {
                firstDoorOpen = 0;
            }
            else {
                firstDoorOpen = 1;
            }

            cout << firstDoorOpen << "\n";
        }
    }

    return 0;
}