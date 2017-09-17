//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include <cstring>
using namespace std;

void strReverse(char arr[]){
	int len = strlen(arr);
	int be = 0;
	int en = len - 1;
	while(be < en){
		char tmp = arr[be];
		arr[be] = arr[en];
		arr[en] = tmp;
		++be;
		--en;
	}
}

int main(){
	char arr[100];
	cin >> arr;

	strReverse(arr);	
	cout << arr;
}