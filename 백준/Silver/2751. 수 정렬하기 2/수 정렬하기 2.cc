#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num, tmp;
    vector<int> arr;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < num; i++) {
        cout << arr[i] << '\n';
    }
}