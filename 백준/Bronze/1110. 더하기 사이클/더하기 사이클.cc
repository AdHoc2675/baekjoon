#include <iostream>

using namespace std;

int main() {

	int n, m;
	int temp = 0;

	cin >> n;

	m = n;

	do {
		m = (m % 10) * 10 + ((m / 10) + (m % 10)) % 10;

		temp++;
	} while (n != m);

	cout << temp;

}