//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
	int nLines;
	cin >> nLines;

	int curLine = 1;
	while (curLine <= nLines) {
		//I ll print one line and then update curLine
		//Lets print curLine

		//print spaces HW

		int nVal = 2 * curLine - 1;	//number of values to be printed
		int val = curLine;			//value to be printed
		int cnt = 0;				//values printed so far
		bool isInc = true;			//initially increasing order
		while (cnt < nVal) {
			//means there are still values remaining to get printed
			//lets print a value
			cout << val;
			// if (val < 2 * curLine - 1 && isInc == true) {
			// 	++val;
			// 	if (val == 2 * curLine - 1) isInc = false;
			// }
			// else {
			// 	--val;
			// }

			if (val == 2 * curLine - 1) isInc = false;
			if (isInc) ++val;
			else --val;
			++cnt;	// I have printed on val above
		}
		cout << endl;
		++curLine;
	}
}