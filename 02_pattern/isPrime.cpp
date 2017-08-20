//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;

	bool isPrime = true;	//assumption
	
	if (num == 1) isPrime = false;	//corner case
	
	int div = 2;

	//checking
	while(div < num){
		if (num % div == 0){
			//confirmed that num is not prime
			isPrime = false;
			break;
		}
		++div;
	}	

	//printing
	if (isPrime == true){
		cout << num << " is Prime";
	}
	else {
		cout << num << " is not prime";
	}

}