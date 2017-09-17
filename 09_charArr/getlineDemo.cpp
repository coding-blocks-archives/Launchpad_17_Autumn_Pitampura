//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	char name[100];
	// cin >> name;	
	cin.getline(name, 99, ',');
	cout << "X" << name << "X" << endl;

}