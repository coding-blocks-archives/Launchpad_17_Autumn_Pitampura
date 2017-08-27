//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;

	int root = 2;		//assumption

	while (root * root <= num) {
		++root;
	}
	cout << (root - 1);

}