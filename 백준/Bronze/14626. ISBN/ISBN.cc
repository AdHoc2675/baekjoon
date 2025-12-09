#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string isbn;
	cin >> isbn;

	int sum = 0;
	int missing_index = -1;

	for (int i = 0; i < 13; i++) {
		if (isbn[i] == '*') {
			missing_index = i;
		} 
		else {
			int digit = isbn[i] - '0';

			if (i % 2 == 0) {
				sum = sum + digit;
			} 
			else {
				sum = sum + 3 * digit;
			}
		}
	}

	for (int digit = 0; digit <= 9; digit++) {
		int test_sum = sum;
		if (missing_index % 2 == 0) {
			test_sum = test_sum + digit;
		} 
		else {
			test_sum = test_sum + 3 * digit;
		}

		if (test_sum % 10 == 0) {
			cout << digit << "\n";
			break;
		}
	}

	return 0;
}