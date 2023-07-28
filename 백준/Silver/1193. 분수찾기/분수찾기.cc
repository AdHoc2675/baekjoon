#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;
	
	while (true) {
		if (n <= i) {
			break;
		}

		n = n - i;
		i++;
	}

	if (i % 2 == 1) {
		cout << i + 1 - n << '/' << n;
	}
	else {
		cout << n << '/' << i + 1 - n;
	}

	return 0;
}