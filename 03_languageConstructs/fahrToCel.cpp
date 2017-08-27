//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int initial, final, step;
	cin >> initial >> final >> step;

	while(initial <= final){
		double degCel = (5.0 / 9) * (initial - 32);
		cout << initial << "\t" << degCel << endl;
		initial = initial + step;
		// initial += step;
	}	

}