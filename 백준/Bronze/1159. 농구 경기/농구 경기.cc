#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int firstChar[26] = {0, };

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        firstChar[name[0] - 'a']++;
    }

    bool overFive = false;

    for (int i = 0; i < 26; i++) {
        if (firstChar[i] >= 5){
            overFive = true;
            cout << (char)(i + 'a');
        }
    }

    if (overFive == false) {
        cout << "PREDAJA";
    }

    return 0;
}