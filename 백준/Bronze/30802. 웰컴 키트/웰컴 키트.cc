#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    int n;
    int t, p;

    cin >> n;

    vector<long long> shirt_sizes(6);

    for (int i = 0; i < 6; i++) {
        cin >> shirt_sizes[i];
    }

    cin >> t >> p;

    int tshirt = 0;
    int penPair, penCount = 0;

    for (int i = 0; i < 6; i++) {
        if (shirt_sizes[i] % t != 0) {
            tshirt = tshirt + (shirt_sizes[i] / t) + 1;
        }
        else {
            tshirt = tshirt + (shirt_sizes[i] / t);
        }
    }

    penPair = n / p;
    penCount = n % p;

    cout << tshirt << "\n" << penPair << " " << penCount;

    return 0;
}