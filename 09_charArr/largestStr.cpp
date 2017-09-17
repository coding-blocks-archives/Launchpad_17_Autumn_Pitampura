//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include <cstring>
using namespace std;

//strcpy
void myCopy(char to[], char from[]) {
	int i = 0;
	while (from[i] != '\0') {
		to[i] = from[i];
		++i;
	}
	to[i] = '\0';
}

int main() {
	int largestLen = 0;
	char largest[100];
	char curStr[100];

	int n;
	cin >> n;
	cin.get();	//consumes enter

	for (int i = 0; i < n; ++i) {
		cin.getline(curStr, 100, '\n');
		int curLen = strlen(curStr);
		// if (strlen(curStr) > largestLen) {	//curLen eliminates recomputation
		if (curLen > largestLen){

			//curStr is better, update
			// largestLen = strlen(curStr);
			largestLen = curLen;

			// largest = curStr;	//can't do...largest and curStr are arrays
			myCopy(largest, curStr);
		}
	}

	cout << largestLen << endl;
	cout << "X" << largest << "X" << endl;
}