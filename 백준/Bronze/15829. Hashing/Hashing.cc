#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string str;
    int n;
    long long m = 1234567891;
    long long r = 1;

    cin >> n;
    cin >> str;

    long long result = 0;

    for (int i = 0; i < n; i++)
    {
        result = (result + ((str[i] - 'a' + 1) * r) % m) % m;

        r = (r * 31) % m;
    }

    cout << result;

    return 0;
}