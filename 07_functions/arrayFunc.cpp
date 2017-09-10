//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

void incArr(int a[10], int sze){
	// int newArr[sze];
	//need of creating a dynamic array

	for(int i = 0; i < sze; ++i){
		a[i] = a[i] + 2;
	}
}


void printArr(int arr[], int sze){
	for(int i = 0; i < sze; ++i) cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int arr[10];
	int n;
	cin >> n;

	for(int i = 0; i < n; ++i) cin >> arr[i];

	incArr(arr, n);
	
	printArr(arr, n);	
}