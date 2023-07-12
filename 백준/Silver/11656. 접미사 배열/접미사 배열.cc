#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str;

    cin >> str;

    vector<string> strArray;

    for (int i = 0; i < str.length(); i++) {
        strArray.push_back(str.substr(i));
    }

    sort(strArray.begin(), strArray.end());

    for (int i = 0; i < str.length(); i++) {
        cout << strArray[i] << "\n";
    }

    return 0;
}