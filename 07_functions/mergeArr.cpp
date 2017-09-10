//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

void input(int a[], int sze) {
	for (int i = 0; i < sze; ++i) cin >> a[i];
}

void printArr(int a[], int sze) {
	for (int i = 0; i < sze; ++i) cout << a[i] << " ";
	cout << endl;
}

void copyArr(int arr[], int m, int tmp[]) {
	for (int i = 0; i < m; ++i) tmp[i] = arr[i];
}

void mergeArr(int a[], int b[], int m, int n) {
	int i = 0;
	int j = 0;
	int k = 0;
	int tmp[20];
	copyArr(a, m, tmp);	//copyArr copies a of size m into tmp
	//Assumption : tmp is large enough

	//till I have any elements in BOTH the arrays
	while (i < m && j < n) {
		//use the logic of merging tmp, b into a
		if (tmp[i] < b[j]) {
			a[k] = tmp[i];
			++i;
			++k;
		}
		else {
			a[k] = b[j];
			++j;
			++k;
		}
	}
	//either of any array is exhausted
	while (i < m) {
		a[k] = tmp[i];
		++i;
		++k;
	}
	while (j < n) {
		a[k] = b[j];
		++j;
		++k;
	}
}

int main() {
	int a[20];
	int b[10];
	int m, n;
	cin >> m >> n;
	input(a, m);
	input(b, n);
	mergeArr(a, b, m, n);
	printArr(a, m + n);
}