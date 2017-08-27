//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int dec;
	cin >> dec;

	//converts no into reversed binary
	// int binNum = 0;
	// while(dec != 0){
	// 	int bit = dec % 2;
	// 	binNum = binNum * 10;	//shift one pos
	// 	binNum += bit;
	// 	dec = dec / 2;
	// }
	// cout << binNum;


	//converts decimal to binary
	int binNum = 0;
	int mul = 1;
	while(dec != 0){
		int bit = dec % 2;
		bit = bit * mul;
		binNum = bit + binNum;
		mul = mul * 10;
		dec = dec / 2;
		// dec /= 2;	
	}
	cout << binNum;

}