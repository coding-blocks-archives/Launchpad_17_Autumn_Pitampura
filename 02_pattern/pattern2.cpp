//deepak@codingblocks.com
// 1
// 01
// 101
// 0101
// 10101
#include <iostream>
using namespace std;
int main() {				//syntax where program execution begins
	int nLines;			//declaration; int is a datatype
	cin >> nLines;
	int curLine = 1;	//initialisation

	//printing pattern
	while (curLine <= nLines) {
		//think about curline
		int nVal = curLine;
		int val;
		if (val % 2 == 1) {	//modulous operator; for remainder
			val = 1;	//assignment
		}
		else {
			val = 0;
		}

		//printing values
		int cntVal = 0;	//count of values printed so far
		while (cntVal < nVal) {
			cout << val;
			val = 1 - val;
			++cntVal;	//increament by 1
		}
		cout << endl;	//print an enter
		++curLine;		//the next line
	}
}