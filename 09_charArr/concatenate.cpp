//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include <cstring>	//for strlen()
using namespace std;

//strcat
void appends(char to[], char from[]) {
	//Assumption : to is large enough
	//changes in to are reflected...arrays are call by reference
	int len = strlen(to);

	int be = len;
	int i = 0;
	while (from[i] != '\0') {
		to[be] = from[i];
		++be;
		++i;
	}
	to[be] = '\0';
}


int main() {
	char a[100];
	char b[50];

	cin.getline(a, 50, '\n');
	cin.getline(b, 50, '\n');

	appends(a, b);
	cout << "X" << a << "X" << endl;
}