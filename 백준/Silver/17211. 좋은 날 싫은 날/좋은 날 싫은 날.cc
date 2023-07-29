#include <iostream>

using namespace std;

int main() {
	int n, current;
	float a, b, c, d;
	float good, bad;

	cin >> n >> current;

	if (current != 1) {
		good = 1.0;
		bad = 0.0;
	}
	else {
		bad = 1.0;
		good = 0.0;
	}

	scanf("%f %f %f %f", &a, &b, &c, &d);

	for (int i = 0; i < n; i++) {
		double goodTemp = a * good + c * bad;
		double badTemp = b * good + d * bad;
		good = goodTemp;
		bad = badTemp;
	}

	cout << (int)(good * 1000) << "\n" << (int)(bad * 1000);

	return 0;
}