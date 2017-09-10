//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

void input(int a[], int sze){
	for(int i = 0; i < sze; ++i) cin >> a[i];
}

void printArr(int a[], int sze){
	for(int i = 0; i < sze; ++i) cout << a[i] << " ";
	cout << endl;
}

void divide(int arr[], int n, int div){
	if (div == 0) return;

	//At this pt its confirmed that div is NOT zero
	for(int i = 0; i < n; ++i){
		arr[i] = arr[i] / div;
	}
}




int main(){
	//read arr
	int arr[10];
	int n;
	cin >> n;
	input(arr, n);
	divide(arr, n, 3);
	printArr(arr, n);
}