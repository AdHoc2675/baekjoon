#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	vector<int> num;
	int primeCount = 0;
	int primeCheck;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int input;

		cin >> input;

		num.push_back(input);
	}

	for (int i = 0; i < n; i++) {
		primeCheck = 0;

		if (num[i] == 2) {
			primeCount++;
		}
		else if (num[i] > 2) {
			for (int j = 2; j <= num[i]; j++) {
				if (num[i] % j == 0) {
					primeCheck++;
				}
			}
			if (primeCheck == 1) {
				primeCount++;
			}
		}
	}

	cout << primeCount;

}