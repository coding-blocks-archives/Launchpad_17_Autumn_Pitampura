//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int N;	//no of rows
	cin >> N;

	for(int curRow = 1; curRow <= N; ++curRow){
		//lets print the current Row
		int val = 1;
		if (curRow % 2 == 0) val = 0;	//if even, start with 0

		//ternary operator
		//int val = (curRow % 2 == 0) ? 0 : 1;

		//printing all values in a currRow
		//hey??? how many values do I have to print...Its curRow, man!
		for(int i = 0; i < curRow; ++i){
			cout << val;
			//update val or toggle val
			val = 1 - val;
		}
		//don't forget the newline or enter
		cout << endl;
	}	
	return 0;
}