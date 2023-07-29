#include <iostream>

using namespace std;

int main() {
	int arr[1001];
	int a, b, ans = 0;
	int k = 1;

	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= i; j++) {
			arr[k] = i;
			if (k > 1000) {
				break;
			}
			k++;
		}
	}

	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		ans = ans + arr[i];
	}

	cout << ans;

	return 0;
}