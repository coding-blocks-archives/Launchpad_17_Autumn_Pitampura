//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a > b && a > c ) {
		cout << a << " is largest" << endl;
	}
	else if (b > a && b > c){
		cout << "b is largest";
		cout << endl;
	}
	else {
		cout << c << " is largest" << endl;
	}

}