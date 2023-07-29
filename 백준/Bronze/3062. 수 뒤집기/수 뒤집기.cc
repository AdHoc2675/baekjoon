#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int testCase, intNum;
    string strNum;
    bool check;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> strNum;

        intNum = stoi(strNum);

        reverse(strNum.begin(), strNum.end());

        intNum = intNum + stoi(strNum);
        strNum = to_string(intNum);
        check = true;

        for (int i = 0; i < strNum.length() / 2; i++) {
            if (strNum[i] != strNum[strNum.length() - 1 - i]) {
                check = false;
            }
        }

        if (check == true) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}