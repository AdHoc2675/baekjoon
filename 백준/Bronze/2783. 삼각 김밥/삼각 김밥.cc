#include <iostream>

using namespace std;
\
int main() {
	int x, y;
	int n;
	int xi, yi;

	cin >> x >> y;

	cin >> n;

	float min = (float)x / y;

	for (int i = 0; i < n; i++) {
		cin >> xi >> yi;

		if (min > (float) xi / yi) {
			min = (float)xi / yi;
		}
	}

	cout << fixed;
	cout.precision(2);

	cout << min * 1000;

	return 0;
}