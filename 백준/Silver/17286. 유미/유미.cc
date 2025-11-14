#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int catX, catY;

	cin >> catX >> catY;

	int x[3], y[3];

	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}

	int ord[3] = { 0, 1, 2 };
	double best = 1e100;

	do {
		double total = 0.0;

		total = total + hypot(double(catX - x[ord[0]]), double(catY - y[ord[0]]));
		total = total + hypot(double(x[ord[0]] - x[ord[1]]), double(y[ord[0]] - y[ord[1]]));
		total = total + hypot(double(x[ord[1]] - x[ord[2]]), double(y[ord[1]] - y[ord[2]]));
		
		if (total < best) {
			best = total;
		}
	} while (next_permutation(ord, ord + 3));

	int ans = (int)best;

	cout << ans << "\n";

}
