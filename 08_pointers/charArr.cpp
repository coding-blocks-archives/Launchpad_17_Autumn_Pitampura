//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
	char name[100];
	int sze;
	cin >> sze;

	for (int i = 0; i < sze; ++i) {
		cin.get(name[i]);
	}

	for (int i = 0; i < sze; ++i) {
		cout << name[i];
	}
}