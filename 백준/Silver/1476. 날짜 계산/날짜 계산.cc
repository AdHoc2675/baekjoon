#include <iostream>

using namespace std;

int main() {


    int e, s, m;
    cin >> e >> s >> m;

    if (e >= 15) {
        e = e % 15;
    }

    if (m >= 19) {
        m = m % 19;
    }

    int num;
    int q = 0;

    while (true) {
        num = 28 * q + s;

        if (num % 15 != e || num % 19 != m) {
            q++;
        }
        else {
            break;
        }
    }

    cout << num;

    return 0;
}