#include <iostream>

using namespace std;

int main() {
	int n;
	int count = 0;

	cin >> n;

	while (true) {
		if (n <= 0) {
			break;
		}

		if (n % 5 == 0) {
			count = count + (n / 5);
			n = 0;
		}
		else {
			n = n - 3;
			count++;
		}
	}

	if (n != 0) {
		cout << -1;
	}
	else {
		cout << count;
	}

	return 0;
}