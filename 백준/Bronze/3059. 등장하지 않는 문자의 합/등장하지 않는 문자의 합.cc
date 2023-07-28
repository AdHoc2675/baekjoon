#include <iostream>

using namespace std;

int main() {
	int n;
	string str;
	int alphabetChecker[26];
	int asciiSum;

	cin >> n;

	for (int i = 0; i < n; i++) {
		asciiSum = 0;

		for (int i = 0; i < 26; i++) {
			alphabetChecker[i] = 0;
		}

		cin >> str;

		for (int i = 0; i < str.length(); i++) {
			alphabetChecker[str[i] - 'A'] = 1;
		}

		for (int i = 0; i < 26; i++) {
			if (alphabetChecker[i] == 0) {
				asciiSum = asciiSum + (i + 'A');
			}
		}

		cout << asciiSum << "\n";
	}

	return 0;
}