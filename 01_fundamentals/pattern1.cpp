// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
#include <iostream>
using namespace std;
int main(){
	//Read nLines
	int nLines;
	cout << "Enter N ";	
	cin >> nLines;

	//print nLines
	int curLine = 1;
	int val = 1;
	while(curLine <= nLines){
		//print a line 
		int nVal = curLine;
		int cVal = 0;	//count of values that have been printed
		//printing values
		while(cVal < nVal){
			cout << val << " ";
			val = val + 1;
			cVal = cVal + 1;	//++cVal;
		}
		//print enter
		cout << endl;
		// ++curLine;
		curLine++;
	}
	return 0;
}