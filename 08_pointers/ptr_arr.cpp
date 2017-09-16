//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int ia[10];
	char ca[2];

	cout << ia << endl;
	cout << (void*)ca << endl;	//raw address

	int * p_ia = ia;	//ia represents starting addr of int arr ia
	//it contains address of the first element(i.e. an int) of arr ia
	char * p_ca = ca;
	cout << p_ia <<endl;
	cout << p_ca << endl;	//garbage
}