#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string str1, str2, str3;

    cin >> str1 >> str2 >> str3;

    int ansnum;

    if (isdigit(str1[0]))
    {
        ansnum = stoi(str1) + 3;
    }
    else if (isdigit(str2[0]))
    {
        ansnum = stoi(str2) + 2;
    }
    else if (isdigit(str3[0]))
    {
        ansnum = stoi(str3) + 1;
    }

    if (ansnum % 3 == 0 && ansnum % 5 == 0)
    {
        cout << "FizzBuzz";
    }
    else if (ansnum % 3 == 0)
    {
        cout << "Fizz";
    }
    else if (ansnum % 5 == 0)
    {
        cout << "Buzz";
    }
    else
    {
        cout << ansnum;
    }
    return 0;
}