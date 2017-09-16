//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int * ptr;
	//ptr is pointing to something suspicious
	cout << ptr << endl;
	cout << *ptr << endl;	//perfectly working

	// ptr = 10;	//can't hardcode addresses
	// *ptr = 10;	//Seg fault

	//initialise a ptr
	int * ptr2 = NULL;
	// *ptr2 = 10;
	cout << *ptr2;	//deferencing a NULL ptr gives a seg fault
	//We are ALWAYS going to initialise

}