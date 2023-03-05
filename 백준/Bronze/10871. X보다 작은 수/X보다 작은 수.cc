#include <iostream>
using namespace std;

int main() {
	int x, n;
	
	cin >> n >> x;

	int a;

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a < x) {
			cout << a << " ";
		}
	}
}