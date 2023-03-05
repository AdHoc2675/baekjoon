#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int array[n+1];
	int min = 1000000;
	int max = -1000000;
	
	for(int i=0; i<n; i++){
		cin >> array[i];
		if(min > array[i]){
			min = array[i];
		}
		if(max < array[i]){
			max = array[i];
		}
	}
	
	cout << min << " " << max << "\n";
	
	return 0;
}