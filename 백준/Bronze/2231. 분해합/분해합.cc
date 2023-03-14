#include <iostream>

using namespace std;

int main()
{
    int n;
    int digit = 0; // n의 자릿수
    int testStartNumber = 0; // 생성자 검증을 시작하는 값
    int savedN; // n의 값을 저장해놓음
    int decomposition; // 분해합 저장용
    bool isDecompositonExist = false;

    cin >> n;

    savedN = n;
    testStartNumber = n;

    while (savedN > 0) {
        savedN = savedN / 10;
        digit++;
    }

    savedN = n;

    testStartNumber = testStartNumber - (digit * 9); // 생성자는 n - (자릿수 * 9) 보다 작을 수 없다. 그러므로 생성자가 맞는지에 대한 여부를
    // testStartNumber에서부터 시작한다.

    for (int i = testStartNumber; i < n; i++) {
        decomposition = i;
        int j = i;

        while (j > 0) {
            decomposition = decomposition + (j % 10);
            j = j / 10;
        }

        if (decomposition == n) { // 생성자의 분해합이 n과 같으면 생성자를 출력하고 isDecompositonExist을 true로 설정하여 0이 출력되지 않도록 한다.
            cout << i;
            isDecompositonExist = true;
            break;
        }
    }

    if (isDecompositonExist == false) { // 생성자가 없으면 0을 출력한다
        cout << "0";
    }

    return 0;
}