#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (true) {
        if (n <= 1) {
            break;
        }

        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                n = n / i;
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}