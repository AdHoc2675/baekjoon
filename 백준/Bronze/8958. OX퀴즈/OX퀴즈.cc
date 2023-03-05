#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	int totalscore = 0;
	int score = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string array;
		cin >> array;
		score = 0;
		totalscore = 0;

		for (int j = 0; j < array.size(); j++) {
			if (array[j] == 'O') {
				score++;
				totalscore = totalscore + score;
			}
			else if (array[j] == 'X') {
				score = 0;
			}
		}
		cout << totalscore << "\n";
    score = 0;
		totalscore = 0;
	}
}