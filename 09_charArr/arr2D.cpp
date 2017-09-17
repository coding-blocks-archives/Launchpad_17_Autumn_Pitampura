//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	char arrC[][4] = {
		{'A', 'B'},
		{},
		{'C', 'D', 'E'}
	};

	int arr[][4] = {
		{1, 2}
	};


	for(int r = 0; r < 3 ; ++r){
		for(int c = 0; c < 3; ++c){
			cout << arr[r][c];
		}
		cout << endl;
	}
}	