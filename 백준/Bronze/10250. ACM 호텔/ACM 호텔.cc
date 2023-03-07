#include <iostream>

using namespace std;

int main()
{
    int t; // test count
    int h; // height
    int w; // width
    int n; // customer count

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> h >> w >> n;

        int floor = n % h;
        int room = n / h;

        if (floor == 0) {
            cout << h * 100 + room << "\n";
        }
        else {
            cout << floor * 100 + (room + 1) << "\n";
        }
    }

    return 0;
}