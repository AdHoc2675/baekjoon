#include <iostream>
using namespace std;

int main() {
	int n1;

	cin >> n1;

	for (int i = 1; i <= n1; i++) {
		for (int j = n1; j > i; j--) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}