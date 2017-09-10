//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
void input(int a[], int sze) {
	for (int i = 0; i < sze; ++i) cin >> a[i];
}

int binarySearching(int arr[], int be, int en, int toSearch) {
	while (be <= en) {
		//until i have atleast one element
		int mid = (be + en) / 2;
		if (arr[mid] == toSearch) {
			return mid;
		}
		else if (arr[mid] > toSearch) {
			en = mid - 1;
		}
		else {
			be = mid + 1;
		}
	}
	return -1;	//indices cannot be negative
}


int main() {
	int arr[20];
	int N;
	cin >> N;
	input(arr, N);

	int x;
	cout << "Enter element to be searched ";
	cin >> x;

	int pos = binarySearching(arr, 0, N - 1, x);
	cout << pos;
}