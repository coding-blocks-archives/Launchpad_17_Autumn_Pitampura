//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;

	for(int curRow = N; curRow >= 1; --curRow){
		//print curRow in increasing order
		char c = 'A';
		for(int i = 0; i < curRow; ++i){
			// c = c + i;
			cout << c;
			c++;
		}

		//print in decreasing order
		for(int i = 0; i < curRow; ++i){
			// c = c - i;	//WRONG	
			c--;
			cout << c;
		}
		cout << endl;
	}
	return 0;
}