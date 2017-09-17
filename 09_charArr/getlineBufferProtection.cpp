//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	
	char arr[10];
	cin.getline(arr, 10, '\n');	//max n chars will be WRITTEN including NULL char
	//effectively n-1 chars will be read

	char c;
	cin >> c;
	cin.get();

	char b[10];
	cin.getline(b, 10, '\n');

	cout << "X" << arr << "X" << endl;
	cout << c << endl;
	cout << "X" << b << "X" << endl;	
}