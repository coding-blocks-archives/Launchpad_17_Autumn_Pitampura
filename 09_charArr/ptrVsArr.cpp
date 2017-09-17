//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	const char * ptr = "Welcome";	//read-only memory
	char arr[] = "Welcome";	

	arr[4] = 'a';
	// ptr[4] = 'a';

	cout << "X" << arr << "X" << endl;
	cout << "X" << ptr << "X" << endl;
	
}