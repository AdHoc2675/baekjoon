#include <iostream>

using namespace std;

int main() {
	int score[5] = { 0 , };
	int a, b, c, d;

	for (int i = 0; i < 5; i++) {
		cin >> a >> b >> c >> d;

		score[i] = a + b + c + d;
	}

	int max = -1;
	int first = 0;

	for (int i = 0; i < 5; i++) {
		if (max <= score[i]) {
			max = score[i];
			first = i + 1;
		}
	}

	cout << first << " " << max;

	return 0;
}