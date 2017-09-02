//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	int reversedNo = 0;
	for(; N > 0; N = N / 10){
		reversedNo *= 10;
		reversedNo += N % 10;
	}	
	cout << reversedNo << endl;
}