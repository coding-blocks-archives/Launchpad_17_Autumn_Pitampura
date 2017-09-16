//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
	int a;
	int * ptr = &a;
	cout << a << endl;	//value of a
	cout << ptr << endl; 	//value of ptr...at this pt its addr of a
	cout << sizeof(a) << endl;
	cout << sizeof(ptr) << endl;

	cout << *ptr << endl;	//value at ptr...currently its value of a...a
	cout << &a << endl;
	cout << ptr << endl;
	cout << (ptr == &a) << endl;

	//pointers to different data
	int i;
	char c;
	int * pi = &i;
	char * pc = &c;
	cout << sizeof(pi) << endl;
	cout << sizeof(pc) << endl;


	pi == (int*)pc;
}