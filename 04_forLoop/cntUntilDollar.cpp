//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
	char ch;
	int cnt = 0;

	while (true) {
		// cin >> ch;
		cin.get(ch);
		if (ch == '$') {
			break;
		}

		++cnt;
	}
	cout << cnt;
}