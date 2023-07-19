#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int numOfFruits;
    int snakebirdLength;

    cin >> numOfFruits >> snakebirdLength;

    vector<int> heightOfFruits;

    for (int i = 0; i < numOfFruits; i++) {
        int height;

        cin >> height;

        heightOfFruits.push_back(height);
    }

    int check = 0;

    while (true) {
        check = 0;
        for (int i = 0; i < heightOfFruits.size(); i++) {
            if (snakebirdLength >= heightOfFruits[i]) {
                snakebirdLength++;
                heightOfFruits.erase(heightOfFruits.begin() + i);
                check = 1;
            }
        }

        if (check == 0) {
            break;
        }
    }


    cout << snakebirdLength;
    
    return 0;
}