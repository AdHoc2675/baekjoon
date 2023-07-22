#include <iostream>

using namespace std;

int main()
{
    int testCase;

    cin >> testCase;

    float num;
    char operatorChar;

    for (int i = 0; i < testCase; i++) {
        cin >> num;

        while (true) {
            cin.get(operatorChar);

            if (operatorChar == '\n') {
                break;
            }

            if (operatorChar == '@') {
                num = num * 3;
            }
            else if (operatorChar == '%') {
                num = num + 5;
            }
            else if (operatorChar == '#') {
                num = num - 7;
            }
        }

        // "cout << fixed"라는 표현은 소숫점 아래 값을 고정하는 표현
        // cout << fixed 이후에 precision(2)을 입력하면 소숫점 아래를 2로 고정한다.
        cout << fixed;
        cout.precision(2);

        cout << num << "\n";
    }

    return 0;
}