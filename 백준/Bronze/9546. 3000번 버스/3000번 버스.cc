#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int testCase;
	int k;

	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		cin >> k;

		cout << (int)(pow(2, k) - 1) << "\n";
	}

	return 0;
}