#include <iostream>

using namespace std;

int main()
{
    int in, out;
    int max = 0;
    int current = 0;

    for (int i = 0; i < 4; i++) {
        cin >> out >> in;

        current = current - out + in;
        
        if (max < current) {
            max = current;
        }
    }

    cout << max;

    return 0;
}