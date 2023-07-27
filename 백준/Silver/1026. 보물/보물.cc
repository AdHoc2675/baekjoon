#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int Aarray[50];
    int Barray[50];
    int check[50] = { 0, };

    for (int i = 0; i < n; i++) {
        cin >> Aarray[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> Barray[i];
    }

    check[n] = { 0, };

    sort(Aarray, Aarray + n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (temp < Barray[i] && check[i] == 0) {
                temp = Barray[i];
                idx = i;
            }
        }
        check[idx] = 1;
        sum = sum + (Aarray[i] * temp);
    }

    cout << sum;

    return 0;
}
