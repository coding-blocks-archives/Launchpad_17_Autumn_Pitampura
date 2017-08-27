//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int nDig = 0;

	while(n != 0){
		int dig = n % 10;	//extracted the unit digit...redundant step
		
		++nDig;				//Oh!! I have one digit
		n = n / 10;			//Now the number has shifted one digit to right
		//So effectively, 123-->12 ;-)
	}
	cout << nDig;	
}