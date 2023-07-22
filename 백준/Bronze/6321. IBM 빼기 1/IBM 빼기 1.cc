#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string computerName;

		cin >> computerName;

		cout << "String #" << i + 1  << "\n";

		for (int j = 0; j < computerName.length(); j++) {
			if (computerName[j] == 'Z') {
				cout << 'A';
			}
			else {
				cout << char(computerName[j] + 1);
			}
		}

		cout <<"\n\n";
	}
}