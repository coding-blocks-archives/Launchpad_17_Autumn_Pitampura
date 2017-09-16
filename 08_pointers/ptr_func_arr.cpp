//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

// int sum(int arr[], int n){
int sum(int * arr, int n){ //equivalent to above statement
	int ans = 0;
	for(int i = 0; i < n; ++i){
		ans += arr[i];
		//arr[i] = *(arr + i)
	}
	return ans;
}

int sum2(int * be, int * en){
	//hw
	while(*be != *en){
		//do something
	}
}

int main(){
	int arr[10];

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i) cin >> arr[i];

	int ans = sum(&arr[2], n);
	// int ans = sum(&arr[2], &arr[n]);

	cout << ans;	
}