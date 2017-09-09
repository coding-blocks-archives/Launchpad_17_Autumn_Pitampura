//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
bool chkPrime(int);	//function declaration

int main() {
	int N;
	cin >> N;
	for (int curNo = 2; curNo <= N; ++curNo) {
		bool isPrime = chkPrime(curNo);
		if (isPrime == true) {
			cout << curNo << " ";
		}
	}
	// return 0;
}

//function definition
bool chkPrime(int N) {
	int div = 2;
	bool res = true;
	while (div * div <= N) {
		if (N % div == 0) {
			res = false;
			break;
		}
		++div;
	}
	return res;
}