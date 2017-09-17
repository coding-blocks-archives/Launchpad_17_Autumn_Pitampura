//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	cin.get();

	char arr[10];
	cin.getline(arr, 10, '\n');

	cout << n << endl;
	cout << "X" << arr << "X" << endl;
}