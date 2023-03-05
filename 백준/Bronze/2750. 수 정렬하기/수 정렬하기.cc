#include <iostream>
using namespace std;

void Bubble_Sort(int a[], int len) {
    for (int i = len - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        cout << a[i] << "\n";
    }
}

int main(){
    int n;
    int arr[1000];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Bubble_Sort(arr, n);
}