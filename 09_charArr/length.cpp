//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

int strLength(char str[]){
	int i = 0;
	while(str[i] != '\0') ++i;
	return i;
}


int main(){
	char str[100];
	cin.getline(str, 100, '\n');
	int len = strLength(str);
	cout << len;	
}