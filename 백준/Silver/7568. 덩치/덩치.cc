#include <iostream>

using namespace std;

int main() {
	int n;
	int k;

	int weight[50] = { 0, };
	int height[50] = { 0, };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> weight[i] >> height[i];
	}

	for (int i = 0; i < n; i++) {
		k = 0;

		for (int j = 0; j < n; j++) {
			if (weight[i] < weight[j] && height[i] < height[j]) {
				k++;
			}
		}

		cout << k + 1 << " ";
	}

	return 0;
}