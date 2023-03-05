#include <iostream>
using namespace std;

int main() {
	int h, m, time;
	
	cin >> h >> m >> time;
	
	h = h + (time / 60);
	m = m + (time % 60);

	if (m >= 60) {
		h++;
		m = m - 60;
	}

	if (h >= 24) {
		h = h - 24;
	}
	
	cout << h << " " << m;
	
}