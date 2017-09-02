//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com
#include <iomanip>
#include <iostream>
using namespace std;
int main(){
	double num;
	int precision;
	cin >> num >> precision;

	double root = 0.0;
	double inc = 1;

	//compute all precisions
	for(int p = 0; p <= precision; ++p){
		while(root * root <= num){
			root = root + inc;
		}

		root = root - inc;
		inc = inc / 10;
	}

	cout << fixed;	//display as it is
	cout << setprecision(precision); //no of precision
	cout << root;
	return 0;		//just defer for now
}