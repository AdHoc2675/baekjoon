#include <iostream>

using namespace std;

int main()
{
	string num;

	while (true)
	{
		bool palindrom = 1;
		cin >> num;

		if (num == "0")
		{
			break;
		}

		for (int i = 0; i < num.length() / 2; i++)
		{
			if (num[i] != num[num.length() - 1 - i])
			{
				palindrom = 0;
				break;
			}
		}

		if (palindrom == true)
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}

	return 0;
}