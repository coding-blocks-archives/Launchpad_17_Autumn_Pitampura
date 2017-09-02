//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	//read N from user
	int N;
	cin >> N;

	//for all numbers from 2 TO N, check if they are prime
	//if YES, I will print them
	for(int curNum = 2; curNum <= N; ++curNum){
		//lets check if curNum is prime or not
		
		int div = 2;
		bool isPrime = true;	//assumption
		while(div < curNum){
			if (curNum % div == 0){
				//Hmm...the number curNum is divisible by some divisor
				//My assumption is no more true
				isPrime = false;
				break;
			}
			++div;
		}

		//if the assumption still holds after checking on all div < curNum,
		//I can SURELY say that curNum is prime
		if (isPrime == true) cout << curNum << " ";
	}
	return 0;	//forget for now.
}