#include <iostream>
using namespace std;

int main() {
	int a, b, T;

	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << "\n";
	}
}