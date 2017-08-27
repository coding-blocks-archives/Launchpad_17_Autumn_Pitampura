//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	//check for 2 3 4 .... N
	int curNo = 2;
	while (curNo <= N) {
		//check if the number is prime
		bool isPrime = true;	//assumption
		int div = 2;			//divisor of curNo
		while (div < curNo) {
			//if div divides curNo, assumption was wrong
			if (curNo % div == 0) {
				//oops! update isPrime and break
				isPrime = false;
				break;
			}
			++div;
		}
		//Hmmm... I know whether the no is prime or not at this line
		if (isPrime == true) {
			cout << curNo << " ";	//space is must
		}
		++curNo;
	}
}