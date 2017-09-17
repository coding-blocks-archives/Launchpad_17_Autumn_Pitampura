//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

int strLength(char str[]) {
	int i = 0;
	while (str[i] != '\0') ++i;
	return i;
}


bool isPalindrome(char str[]){
	int len = strLength(str);
	int be = 0;
	int en = len - 1;	//[be, en]
	//Note: en is INDEX

	while(be < en){
		if (str[be++] != str[en--]) return false;
		// ++be;
		// --en;
	}

	return true;
}

int main() {
	char str[100];
	cin.getline(str, 100, '\n');

	bool check = isPalindrome(str);
	if (check == true)	{
		cout << str << " is Palindrome";
	}
	else {
		cout << str << " is not Palindrome";
	}
}