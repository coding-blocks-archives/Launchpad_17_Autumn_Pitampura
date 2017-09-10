//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

// void swp(int x, int y){
void swp(int& x, int& y){
	//call by reference
	int tmp = x;
	x = y;
	y = tmp;
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << "Before swap " ;
	cout << a << b << endl;
	swp(a, b);
	cout << "After swap ";
	cout << a << b << endl;	
}