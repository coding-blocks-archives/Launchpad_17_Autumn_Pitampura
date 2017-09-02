//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;

	//reverse
	int reversedNum = 0;
	while(N > 0){
		int unitDigit = N % 10; 	//extract a digit
		reversedNum = reversedNum * 10;	//shift to left
		reversedNum = reversedNum + unitDigit;	//add the extracted digit
		N = N / 10;	//remove the unit digit from the original number
	}	
	cout << reversedNum;

	//HW: handle negatives

	return 0; 
}